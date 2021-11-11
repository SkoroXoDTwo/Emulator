/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <keyboardwidget.h>
#include <screenwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_a_snapshot;
    QAction *action_Exit;
    QAction *action_Reset;
    QAction *action_NMI;
    QAction *action_About;
    QAction *actionSpectrum_128k;
    QAction *actionSpectrum_48k;
    QAction *actionPalette_1;
    QAction *actionPalette_2;
    QAction *actionPalette_3;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionNMI;
    QAction *actionLoad_a_Z80;
    QAction *actionSave_a_Z80_snapshots;
    QAction *actionOpenRom;
    QAction *actionArcade_Game_Designer_48k;
    QAction *actionOpenSE_Basic_48k;
    QAction *actionSinclair_Test_ROM_48k;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QComboBox *cbJoystickInterface;
    QTabWidget *twControls;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    KeyboardWidget *keyboard;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPushButton *pbFire;
    QPushButton *pbUp;
    QPushButton *pbRight;
    QPushButton *pbDown;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbLeft;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbCaptureKeyboard;
    QCheckBox *cbShowControls;
    QPushButton *btnReset;
    ScreenWidget *screen;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuScreenshot;
    QMenu *menu_Machine;
    QMenu *menuPalette;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(945, 760);
        action_Load_a_snapshot = new QAction(MainWindow);
        action_Load_a_snapshot->setObjectName(QString::fromUtf8("action_Load_a_snapshot"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Reset = new QAction(MainWindow);
        action_Reset->setObjectName(QString::fromUtf8("action_Reset"));
        action_NMI = new QAction(MainWindow);
        action_NMI->setObjectName(QString::fromUtf8("action_NMI"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        actionSpectrum_128k = new QAction(MainWindow);
        actionSpectrum_128k->setObjectName(QString::fromUtf8("actionSpectrum_128k"));
        actionSpectrum_128k->setCheckable(true);
        actionSpectrum_128k->setChecked(false);
        actionSpectrum_48k = new QAction(MainWindow);
        actionSpectrum_48k->setObjectName(QString::fromUtf8("actionSpectrum_48k"));
        actionSpectrum_48k->setCheckable(true);
        actionSpectrum_48k->setChecked(true);
        actionPalette_1 = new QAction(MainWindow);
        actionPalette_1->setObjectName(QString::fromUtf8("actionPalette_1"));
        actionPalette_1->setCheckable(true);
        actionPalette_1->setChecked(true);
        actionPalette_2 = new QAction(MainWindow);
        actionPalette_2->setObjectName(QString::fromUtf8("actionPalette_2"));
        actionPalette_2->setCheckable(true);
        actionPalette_3 = new QAction(MainWindow);
        actionPalette_3->setObjectName(QString::fromUtf8("actionPalette_3"));
        actionPalette_3->setCheckable(true);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionNMI = new QAction(MainWindow);
        actionNMI->setObjectName(QString::fromUtf8("actionNMI"));
        actionLoad_a_Z80 = new QAction(MainWindow);
        actionLoad_a_Z80->setObjectName(QString::fromUtf8("actionLoad_a_Z80"));
        actionSave_a_Z80_snapshots = new QAction(MainWindow);
        actionSave_a_Z80_snapshots->setObjectName(QString::fromUtf8("actionSave_a_Z80_snapshots"));
        actionOpenRom = new QAction(MainWindow);
        actionOpenRom->setObjectName(QString::fromUtf8("actionOpenRom"));
        actionArcade_Game_Designer_48k = new QAction(MainWindow);
        actionArcade_Game_Designer_48k->setObjectName(QString::fromUtf8("actionArcade_Game_Designer_48k"));
        actionArcade_Game_Designer_48k->setCheckable(true);
        actionOpenSE_Basic_48k = new QAction(MainWindow);
        actionOpenSE_Basic_48k->setObjectName(QString::fromUtf8("actionOpenSE_Basic_48k"));
        actionOpenSE_Basic_48k->setCheckable(true);
        actionSinclair_Test_ROM_48k = new QAction(MainWindow);
        actionSinclair_Test_ROM_48k->setObjectName(QString::fromUtf8("actionSinclair_Test_ROM_48k"));
        actionSinclair_Test_ROM_48k->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        cbJoystickInterface = new QComboBox(centralwidget);
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->addItem(QString());
        cbJoystickInterface->setObjectName(QString::fromUtf8("cbJoystickInterface"));

        gridLayout->addWidget(cbJoystickInterface, 2, 3, 1, 1);

        twControls = new QTabWidget(centralwidget);
        twControls->setObjectName(QString::fromUtf8("twControls"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(twControls->sizePolicy().hasHeightForWidth());
        twControls->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        keyboard = new KeyboardWidget(tab);
        keyboard->setObjectName(QString::fromUtf8("keyboard"));

        gridLayout_2->addWidget(keyboard, 0, 0, 1, 1);

        twControls->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pbFire = new QPushButton(tab_2);
        pbFire->setObjectName(QString::fromUtf8("pbFire"));

        gridLayout_3->addWidget(pbFire, 1, 4, 1, 1);

        pbUp = new QPushButton(tab_2);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setMinimumSize(QSize(96, 32));
        pbUp->setMaximumSize(QSize(96, 32));

        gridLayout_3->addWidget(pbUp, 0, 1, 1, 1);

        pbRight = new QPushButton(tab_2);
        pbRight->setObjectName(QString::fromUtf8("pbRight"));
        pbRight->setMinimumSize(QSize(96, 32));
        pbRight->setMaximumSize(QSize(96, 32));

        gridLayout_3->addWidget(pbRight, 1, 2, 1, 1);

        pbDown = new QPushButton(tab_2);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        pbDown->setMinimumSize(QSize(96, 32));
        pbDown->setMaximumSize(QSize(96, 32));

        gridLayout_3->addWidget(pbDown, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        pbLeft = new QPushButton(tab_2);
        pbLeft->setObjectName(QString::fromUtf8("pbLeft"));
        pbLeft->setMinimumSize(QSize(96, 32));
        pbLeft->setMaximumSize(QSize(96, 32));

        gridLayout_3->addWidget(pbLeft, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 5, 1, 1);

        twControls->addTab(tab_2, QString());

        gridLayout->addWidget(twControls, 4, 0, 1, 5);

        cbCaptureKeyboard = new QCheckBox(centralwidget);
        cbCaptureKeyboard->setObjectName(QString::fromUtf8("cbCaptureKeyboard"));

        gridLayout->addWidget(cbCaptureKeyboard, 2, 1, 1, 1);

        cbShowControls = new QCheckBox(centralwidget);
        cbShowControls->setObjectName(QString::fromUtf8("cbShowControls"));
        cbShowControls->setChecked(false);

        gridLayout->addWidget(cbShowControls, 2, 0, 1, 1);

        btnReset = new QPushButton(centralwidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setMaximumSize(QSize(64, 16777215));

        gridLayout->addWidget(btnReset, 2, 4, 1, 1);

        screen = new ScreenWidget(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screen->sizePolicy().hasHeightForWidth());
        screen->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(screen, 0, 0, 1, 5);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuScreenshot = new QMenu(menuFile);
        menuScreenshot->setObjectName(QString::fromUtf8("menuScreenshot"));
        menu_Machine = new QMenu(menuBar);
        menu_Machine->setObjectName(QString::fromUtf8("menu_Machine"));
        menuPalette = new QMenu(menu_Machine);
        menuPalette->setObjectName(QString::fromUtf8("menuPalette"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Machine->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(action_Load_a_snapshot);
        menuFile->addAction(actionLoad_a_Z80);
        menuFile->addAction(actionSave_a_Z80_snapshots);
        menuFile->addSeparator();
        menuFile->addAction(menuScreenshot->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(action_Exit);
        menuScreenshot->addAction(actionLoad);
        menuScreenshot->addAction(actionSave);
        menu_Machine->addAction(action_Reset);
        menu_Machine->addAction(actionNMI);
        menu_Machine->addSeparator();
        menu_Machine->addAction(menuPalette->menuAction());
        menu_Machine->addSeparator();
        menu_Machine->addAction(actionSpectrum_128k);
        menu_Machine->addAction(actionSpectrum_48k);
        menu_Machine->addAction(actionOpenSE_Basic_48k);
        menu_Machine->addAction(actionArcade_Game_Designer_48k);
        menu_Machine->addAction(actionSinclair_Test_ROM_48k);
        menu_Machine->addSeparator();
        menu_Machine->addAction(actionOpenRom);
        menuPalette->addAction(actionPalette_1);
        menuPalette->addAction(actionPalette_2);
        menuPalette->addAction(actionPalette_3);
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        cbJoystickInterface->setCurrentIndex(0);
        twControls->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Load_a_snapshot->setText(QCoreApplication::translate("MainWindow", "&Load a SNA snapshot", nullptr));
        action_Exit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
        action_Reset->setText(QCoreApplication::translate("MainWindow", "&Reset", nullptr));
        action_NMI->setText(QCoreApplication::translate("MainWindow", "&NMI", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionSpectrum_128k->setText(QCoreApplication::translate("MainWindow", "Spectrum 128k", nullptr));
        actionSpectrum_48k->setText(QCoreApplication::translate("MainWindow", "Spectrum 48k", nullptr));
        actionPalette_1->setText(QCoreApplication::translate("MainWindow", "Palette 1", nullptr));
        actionPalette_2->setText(QCoreApplication::translate("MainWindow", "Palette 2", nullptr));
        actionPalette_3->setText(QCoreApplication::translate("MainWindow", "Palette 3", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionNMI->setText(QCoreApplication::translate("MainWindow", "NMI", nullptr));
        actionLoad_a_Z80->setText(QCoreApplication::translate("MainWindow", "Load a Z80 snapshot", nullptr));
        actionSave_a_Z80_snapshots->setText(QCoreApplication::translate("MainWindow", "Save a Z80 snapshots", nullptr));
        actionOpenRom->setText(QCoreApplication::translate("MainWindow", "Open .ROM file", nullptr));
        actionArcade_Game_Designer_48k->setText(QCoreApplication::translate("MainWindow", "Arcade Game Designer", nullptr));
        actionOpenSE_Basic_48k->setText(QCoreApplication::translate("MainWindow", "OpenSE Basic", nullptr));
        actionSinclair_Test_ROM_48k->setText(QCoreApplication::translate("MainWindow", "Sinclair Test ROM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        cbJoystickInterface->setItemText(0, QCoreApplication::translate("MainWindow", "Cursor Interface", nullptr));
        cbJoystickInterface->setItemText(1, QCoreApplication::translate("MainWindow", "Kempston Interface", nullptr));
        cbJoystickInterface->setItemText(2, QCoreApplication::translate("MainWindow", "Sinclair Interface 2", nullptr));
        cbJoystickInterface->setItemText(3, QCoreApplication::translate("MainWindow", "Sinclair Interface 2 (port 2)", nullptr));

        twControls->setTabText(twControls->indexOf(tab), QCoreApplication::translate("MainWindow", "Keyboard", nullptr));
        pbFire->setText(QCoreApplication::translate("MainWindow", "\320\236\320\263\320\276\320\275\321\214", nullptr));
        pbUp->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\321\200\321\205", nullptr));
        pbRight->setText(QCoreApplication::translate("MainWindow", "\320\222\320\277\320\260\320\262\321\200\320\276", nullptr));
        pbDown->setText(QCoreApplication::translate("MainWindow", "\320\222\320\275\320\270\320\267", nullptr));
        pbLeft->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\265\320\262\320\276", nullptr));
        twControls->setTabText(twControls->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Joystick", nullptr));
        cbCaptureKeyboard->setText(QCoreApplication::translate("MainWindow", "Capture keyboard", nullptr));
        cbShowControls->setText(QCoreApplication::translate("MainWindow", "Show controls", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuScreenshot->setTitle(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        menu_Machine->setTitle(QCoreApplication::translate("MainWindow", "&Machine", nullptr));
        menuPalette->setTitle(QCoreApplication::translate("MainWindow", "Palette", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
