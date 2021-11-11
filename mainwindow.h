#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "businterface.h"
#include "emulation/CPU/Z80.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void load_sna(const QString& filename);
    void load_z80(const QString& filename);

    void save_z80(const QString& filename);

    void keyPressed(int sc);
    void keyReleased(int sc);

public slots:
    void upPressed();  
    void downPressed();
    void leftPressed();
    void rightPressed();
    void firePressed();
    void upReleased();
    void downReleased();
    void leftReleased();
    void rightReleased();
    void fireReleased();

    void upPressed_2p();
    void downPressed_2p();
    void leftPressed_2p();
    void rightPressed_2p();
    void firePressed_2p();
    void upReleased_2p();
    void downReleased_2p();
    void leftReleased_2p();
    void rightReleased_2p();
    void fireReleased_2p();

protected:
    virtual bool eventFilter(QObject *object, QEvent *event) override;

private slots:
    void frameRefresh();

    void on_cbShowControls_stateChanged(int state);

    void reset();

    void on_key_pressed(int row, int col);
    void on_key_released(int row, int col);

    void on_cbCaptureKeyboard_stateChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_actionSpectrum_48k_triggered();

    void on_actionSpectrum_128k_triggered();

    void on_action_Reset_triggered();

    void on_action_Exit_triggered();

    void on_action_About_triggered();

    void on_action_Load_a_snapshot_triggered();

    void on_actionPalette_1_triggered();

    void on_actionPalette_2_triggered();

    void on_actionPalette_3_triggered();

    void on_actionLoad_triggered();

    void on_actionNMI_triggered();

    void on_actionSave_triggered();

    void on_actionLoad_a_Z80_triggered();

    void on_actionSave_a_Z80_snapshots_triggered();

    void on_btnReset_clicked();

    void on_actionOpenRom_triggered();

    void loadROM(int base_configuration, QString filename);
    void on_actionArcade_Game_Designer_48k_triggered();

    void on_actionOpenSE_Basic_48k_triggered();

    void on_actionSinclair_Test_ROM_48k_triggered();

private:
    Ui::MainWindow *ui;

    QByteArray screenshot_buffer;

    BusInterface * bus{nullptr};

    Z80 cpustate {};
    QTimer *frame_timer;
    QTimer *flash_timer;
};
#endif // MAINWINDOW_H
