/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[110];
    char stringdata0[1056];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 9), // "upPressed"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 11), // "downPressed"
QT_MOC_LITERAL(34, 11), // "leftPressed"
QT_MOC_LITERAL(46, 12), // "rightPressed"
QT_MOC_LITERAL(59, 11), // "firePressed"
QT_MOC_LITERAL(71, 10), // "upReleased"
QT_MOC_LITERAL(82, 12), // "downReleased"
QT_MOC_LITERAL(95, 12), // "leftReleased"
QT_MOC_LITERAL(108, 13), // "rightReleased"
QT_MOC_LITERAL(122, 12), // "fireReleased"
QT_MOC_LITERAL(135, 12), // "upPressed_2p"
QT_MOC_LITERAL(148, 14), // "downPressed_2p"
QT_MOC_LITERAL(163, 14), // "leftPressed_2p"
QT_MOC_LITERAL(178, 15), // "rightPressed_2p"
QT_MOC_LITERAL(194, 14), // "firePressed_2p"
QT_MOC_LITERAL(209, 13), // "upReleased_2p"
QT_MOC_LITERAL(223, 15), // "downReleased_2p"
QT_MOC_LITERAL(239, 15), // "leftReleased_2p"
QT_MOC_LITERAL(255, 16), // "rightReleased_2p"
QT_MOC_LITERAL(272, 15), // "fireReleased_2p"
QT_MOC_LITERAL(288, 12), // "frameRefresh"
QT_MOC_LITERAL(301, 30), // "on_cbShowControls_stateChanged"
QT_MOC_LITERAL(332, 5), // "state"
QT_MOC_LITERAL(338, 5), // "reset"
QT_MOC_LITERAL(344, 14), // "on_key_pressed"
QT_MOC_LITERAL(359, 3), // "row"
QT_MOC_LITERAL(363, 3), // "col"
QT_MOC_LITERAL(367, 15), // "on_key_released"
QT_MOC_LITERAL(383, 33), // "on_cbCaptureKeyboard_stateCha..."
QT_MOC_LITERAL(417, 4), // "arg1"
QT_MOC_LITERAL(422, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(446, 31), // "on_actionSpectrum_48k_triggered"
QT_MOC_LITERAL(478, 32), // "on_actionSpectrum_128k_triggered"
QT_MOC_LITERAL(511, 25), // "on_action_Reset_triggered"
QT_MOC_LITERAL(537, 24), // "on_action_Exit_triggered"
QT_MOC_LITERAL(562, 25), // "on_action_About_triggered"
QT_MOC_LITERAL(588, 35), // "on_action_Load_a_snapshot_tri..."
QT_MOC_LITERAL(624, 28), // "on_actionPalette_1_triggered"
QT_MOC_LITERAL(653, 28), // "on_actionPalette_2_triggered"
QT_MOC_LITERAL(682, 28), // "on_actionPalette_3_triggered"
QT_MOC_LITERAL(711, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(735, 22), // "on_actionNMI_triggered"
QT_MOC_LITERAL(758, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(782, 29), // "on_actionLoad_a_Z80_triggered"
QT_MOC_LITERAL(812, 39), // "on_actionSave_a_Z80_snapshots..."
QT_MOC_LITERAL(852, 19), // "on_btnReset_clicked"
QT_MOC_LITERAL(872, 26), // "on_actionOpenRom_triggered"
QT_MOC_LITERAL(899, 7), // "loadROM"
QT_MOC_LITERAL(907, 18), // "base_configuration"
QT_MOC_LITERAL(926, 8), // "filename"
QT_MOC_LITERAL(935, 43), // "on_actionArcade_Game_Designer..."
QT_MOC_LITERAL(979, 35), // "on_actionOpenSE_Basic_48k_tri..."
QT_MOC_LITERAL(1015, 40) // "on_actionSinclair_Test_ROM_48..."

    },
    "MainWindow\0upPressed\0\0downPressed\0"
    "leftPressed\0rightPressed\0firePressed\0"
    "upReleased\0downReleased\0leftReleased\0"
    "rightReleased\0fireReleased\0upPressed_2p\0"
    "downPressed_2p\0leftPressed_2p\0"
    "rightPressed_2p\0firePressed_2p\0"
    "upReleased_2p\0downReleased_2p\0"
    "leftReleased_2p\0rightReleased_2p\0"
    "fireReleased_2p\0frameRefresh\0"
    "on_cbShowControls_stateChanged\0state\0"
    "reset\0on_key_pressed\0row\0col\0"
    "on_key_released\0on_cbCaptureKeyboard_stateChanged\0"
    "arg1\0on_pushButton_2_clicked\0"
    "on_actionSpectrum_48k_triggered\0"
    "on_actionSpectrum_128k_triggered\0"
    "on_action_Reset_triggered\0"
    "on_action_Exit_triggered\0"
    "on_action_About_triggered\0"
    "on_action_Load_a_snapshot_triggered\0"
    "on_actionPalette_1_triggered\0"
    "on_actionPalette_2_triggered\0"
    "on_actionPalette_3_triggered\0"
    "on_actionLoad_triggered\0on_actionNMI_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionLoad_a_Z80_triggered\0"
    "on_actionSave_a_Z80_snapshots_triggered\0"
    "on_btnReset_clicked\0on_actionOpenRom_triggered\0"
    "loadROM\0base_configuration\0filename\0"
    "on_actionArcade_Game_Designer_48k_triggered\0"
    "on_actionOpenSE_Basic_48k_triggered\0"
    "on_actionSinclair_Test_ROM_48k_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  296,    2, 0x0a,    1 /* Public */,
       3,    0,  297,    2, 0x0a,    2 /* Public */,
       4,    0,  298,    2, 0x0a,    3 /* Public */,
       5,    0,  299,    2, 0x0a,    4 /* Public */,
       6,    0,  300,    2, 0x0a,    5 /* Public */,
       7,    0,  301,    2, 0x0a,    6 /* Public */,
       8,    0,  302,    2, 0x0a,    7 /* Public */,
       9,    0,  303,    2, 0x0a,    8 /* Public */,
      10,    0,  304,    2, 0x0a,    9 /* Public */,
      11,    0,  305,    2, 0x0a,   10 /* Public */,
      12,    0,  306,    2, 0x0a,   11 /* Public */,
      13,    0,  307,    2, 0x0a,   12 /* Public */,
      14,    0,  308,    2, 0x0a,   13 /* Public */,
      15,    0,  309,    2, 0x0a,   14 /* Public */,
      16,    0,  310,    2, 0x0a,   15 /* Public */,
      17,    0,  311,    2, 0x0a,   16 /* Public */,
      18,    0,  312,    2, 0x0a,   17 /* Public */,
      19,    0,  313,    2, 0x0a,   18 /* Public */,
      20,    0,  314,    2, 0x0a,   19 /* Public */,
      21,    0,  315,    2, 0x0a,   20 /* Public */,
      22,    0,  316,    2, 0x08,   21 /* Private */,
      23,    1,  317,    2, 0x08,   22 /* Private */,
      25,    0,  320,    2, 0x08,   24 /* Private */,
      26,    2,  321,    2, 0x08,   25 /* Private */,
      29,    2,  326,    2, 0x08,   28 /* Private */,
      30,    1,  331,    2, 0x08,   31 /* Private */,
      32,    0,  334,    2, 0x08,   33 /* Private */,
      33,    0,  335,    2, 0x08,   34 /* Private */,
      34,    0,  336,    2, 0x08,   35 /* Private */,
      35,    0,  337,    2, 0x08,   36 /* Private */,
      36,    0,  338,    2, 0x08,   37 /* Private */,
      37,    0,  339,    2, 0x08,   38 /* Private */,
      38,    0,  340,    2, 0x08,   39 /* Private */,
      39,    0,  341,    2, 0x08,   40 /* Private */,
      40,    0,  342,    2, 0x08,   41 /* Private */,
      41,    0,  343,    2, 0x08,   42 /* Private */,
      42,    0,  344,    2, 0x08,   43 /* Private */,
      43,    0,  345,    2, 0x08,   44 /* Private */,
      44,    0,  346,    2, 0x08,   45 /* Private */,
      45,    0,  347,    2, 0x08,   46 /* Private */,
      46,    0,  348,    2, 0x08,   47 /* Private */,
      47,    0,  349,    2, 0x08,   48 /* Private */,
      48,    0,  350,    2, 0x08,   49 /* Private */,
      49,    2,  351,    2, 0x08,   50 /* Private */,
      52,    0,  356,    2, 0x08,   53 /* Private */,
      53,    0,  357,    2, 0x08,   54 /* Private */,
      54,    0,  358,    2, 0x08,   55 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   27,   28,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->upPressed(); break;
        case 1: _t->downPressed(); break;
        case 2: _t->leftPressed(); break;
        case 3: _t->rightPressed(); break;
        case 4: _t->firePressed(); break;
        case 5: _t->upReleased(); break;
        case 6: _t->downReleased(); break;
        case 7: _t->leftReleased(); break;
        case 8: _t->rightReleased(); break;
        case 9: _t->fireReleased(); break;
        case 10: _t->upPressed_2p(); break;
        case 11: _t->downPressed_2p(); break;
        case 12: _t->leftPressed_2p(); break;
        case 13: _t->rightPressed_2p(); break;
        case 14: _t->firePressed_2p(); break;
        case 15: _t->upReleased_2p(); break;
        case 16: _t->downReleased_2p(); break;
        case 17: _t->leftReleased_2p(); break;
        case 18: _t->rightReleased_2p(); break;
        case 19: _t->fireReleased_2p(); break;
        case 20: _t->frameRefresh(); break;
        case 21: _t->on_cbShowControls_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->reset(); break;
        case 23: _t->on_key_pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->on_key_released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->on_cbCaptureKeyboard_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_pushButton_2_clicked(); break;
        case 27: _t->on_actionSpectrum_48k_triggered(); break;
        case 28: _t->on_actionSpectrum_128k_triggered(); break;
        case 29: _t->on_action_Reset_triggered(); break;
        case 30: _t->on_action_Exit_triggered(); break;
        case 31: _t->on_action_About_triggered(); break;
        case 32: _t->on_action_Load_a_snapshot_triggered(); break;
        case 33: _t->on_actionPalette_1_triggered(); break;
        case 34: _t->on_actionPalette_2_triggered(); break;
        case 35: _t->on_actionPalette_3_triggered(); break;
        case 36: _t->on_actionLoad_triggered(); break;
        case 37: _t->on_actionNMI_triggered(); break;
        case 38: _t->on_actionSave_triggered(); break;
        case 39: _t->on_actionLoad_a_Z80_triggered(); break;
        case 40: _t->on_actionSave_a_Z80_snapshots_triggered(); break;
        case 41: _t->on_btnReset_clicked(); break;
        case 42: _t->on_actionOpenRom_triggered(); break;
        case 43: _t->loadROM((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 44: _t->on_actionArcade_Game_Designer_48k_triggered(); break;
        case 45: _t->on_actionOpenSE_Basic_48k_triggered(); break;
        case 46: _t->on_actionSinclair_Test_ROM_48k_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
