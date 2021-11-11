#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QWidget>
#include "businterface.h"

class ScreenWidget : public QWidget
{
    Q_OBJECT
public:
    static constexpr int SCREEN_WIDTH = 256;
    static constexpr int SCREEN_HEIGHT = 192;
    static constexpr int SCREEN_ATTR_WIDTH = 32;
    static constexpr int SCREEN_ATTR_HEIGHT = 24;
    static constexpr int BORDER_MIN_WIDTH = 32;
    static constexpr int BORDER_MIN_HEIGHT = 24;
    int NUMBER_PALETTE = 0;
    bool show_screenshot = false;

    void setPalette(int number);
    void setShow(bool show){show_screenshot = show;}

    explicit ScreenWidget(QWidget *parent = nullptr);

    void setFrameBuffer(const uint8_t * fb);

    void setBusInterface(const BusInterface *bi);


public slots:
    void toggleFlash(){flash_state = not flash_state;}

signals:

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    const BusInterface * _bi {nullptr};
    bool flash_state {false};
    const uint8_t * screenshot_buffer{nullptr};

};

#endif // SCREENWIDGET_H
