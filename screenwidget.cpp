#include "screenwidget.h"
#include <QPainter>
#include <algorithm>

// Цветовая модель - GRB
static const QColor s_palette[3][16] {
    {
        QColor(  0,   0,   0), // Черный
        QColor(  0,   0, 255), // Синий
        QColor(255,   0,   0), // Красный
        QColor(255,   0, 255), // Розовый
        QColor(  0, 255,   0), // Зеленый
        QColor(  0, 255, 255), // Голубой
        QColor(255, 255,   0), // Желтый
        QColor(255, 255, 255), // Белый

        QColor(  0,   0,   0), // Черный
        QColor( 96,  96, 255), // Синий (Тусклый)
        QColor(255,  96,  96), // Красный (Тусклый)
        QColor(255,  96, 255), // Розовый (Тусклый)
        QColor( 96, 255,  96), // Зеленый (Тусклый)
        QColor( 96, 255, 255), // Голубой (Тусклый)
        QColor(255, 255,  96), // Желтый (Тусклый)
        QColor(255, 255, 255)  // Белый
    },
    {
        QColor(  0,   0,   0),
        QColor(  0,   0, 128),
        QColor(128,   0,   0),
        QColor(128,   0, 128),
        QColor(  0, 128,   0),
        QColor(  0, 128, 128),
        QColor(128, 128,   0),
        QColor(255, 255, 255),

        QColor(  0,   0,   0),
        QColor( 96,  96, 196),
        QColor(196,  96,  96),
        QColor(196,  96, 255),
        QColor( 96, 196,  96),
        QColor( 96, 196, 196),
        QColor(196, 196,  96),
        QColor(255, 255, 255)
    },
    {
        QColor(  0,   0,   0),
        QColor( 50,  50,  50),
        QColor( 90,  90,  90),
        QColor(170, 170, 170),
        QColor( 70,  70,  70),
        QColor(120, 120, 120),
        QColor(200, 200, 200),
        QColor(255, 255, 255),

        QColor(  0,   0,   0),
        QColor( 40,  40,  40),
        QColor( 80,  80,  80),
        QColor(160, 160, 160),
        QColor( 60,  60,  60),
        QColor(110, 110, 110),
        QColor(190, 190, 190),
        QColor(255, 255, 255)
    }
};

void ScreenWidget::setPalette(int number)
{
    NUMBER_PALETTE = number;
}

ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{
    setFocusPolicy(Qt::FocusPolicy::StrongFocus);
}

void ScreenWidget::setFrameBuffer(const uint8_t *fb)
{
    screenshot_buffer = fb;
}

void ScreenWidget::setBusInterface(const BusInterface *bi)
{
    _bi = bi;
}

void ScreenWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter p(this);
    p.fillRect(rect(), s_palette[NUMBER_PALETTE][_bi->border()]);

    //Каждый пиксель квадрат со стороной n
    //n - целое полжительное число, n > 0
    // n - наибольшее, при котором изображение помещается на экране
    //     (И по горизонатали, и по вертикали)
    // nw - "n" по горизонтали
    // nh - "n" по вертикали
    // n = min(nw, nh)
    // SCREEN_WIDTH * nw + 2 * BORDER_MIN_WIDTH < width()
    // nw - max

    int nw, nh, n;

    nw = (width() - 2 * BORDER_MIN_WIDTH) / SCREEN_WIDTH;
    nh = (height() - 2 * BORDER_MIN_HEIGHT) / SCREEN_HEIGHT;
    n = std::min(nw, nh);

    if (n < 1)
        n = 1;

    int ox, oy;
    ox = (width() - SCREEN_WIDTH * n) / 2;
    oy = (height() - SCREEN_HEIGHT * n) / 2;

    const uint8_t * pixel_data = nullptr;
    const uint8_t * attr_data = nullptr;

    if (show_screenshot){
        pixel_data = &screenshot_buffer[0];
        attr_data = &screenshot_buffer[SCREEN_WIDTH * SCREEN_HEIGHT / 8];
    } else {
        auto fb = _bi->framebuffer();
        pixel_data = &fb[0];
        attr_data = &fb[SCREEN_WIDTH * SCREEN_HEIGHT / 8];
    }

    int x, y, ax, ay;
    for (y = 0; y < SCREEN_HEIGHT; y++){
        for (ax = 0; ax < SCREEN_WIDTH/8; ++ax){
            ay = y / 8;

            // FL BR PG PR PB IG IR IB &
            // 0  0  0  0  0  1  1  1
            uint8_t attr = attr_data[ay * SCREEN_WIDTH/8 + ax];
            uint8_t ink    =  attr & 0b00000111;
            uint8_t paper  = (attr & 0b00111000) >> 3;
            uint8_t bright = (attr & 0b01000000) >> 6;
            uint8_t flash  = (attr & 0b10000000) >> 7;

            int block_addr = y * SCREEN_WIDTH/8 + ax;
            int a4a0   =  block_addr & 0b0000000000011111;
            int a10a8  = (block_addr & 0b0000011100000000) >> 8;
            int a7a5   = (block_addr & 0b0000000011100000) >> 5;
            int a12a11 = (block_addr & 0b0001100000000000) >> 11;
            int video_addr = a4a0 + (a10a8 << 5) + (a7a5 << 8) + (a12a11 << 11);
            uint8_t data = pixel_data[video_addr];
            for(int px = 0; px < 8; ++px){
                x = ax * 8 + px;

                QRect pr(ox + x * n,
                         oy + y * n,
                         n, n);

                bool pixel = (data & (0b10000000 >> px));

                if (pixel xor (flash_state & flash)){
                    p.fillRect(pr, s_palette[NUMBER_PALETTE][ink + 8 * bright]);
                } else {
                    p.fillRect(pr, s_palette[NUMBER_PALETTE][paper]);
                }
            }
        }
    }
}
