/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../VTKproject/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "statusUpdateMessage",
    "",
    "message",
    "timeout",
    "handleButton1",
    "handleButton2",
    "handleTreeClicked",
    "on_actionOpen_File_triggered",
    "on_actionItem_Options_triggered",
    "updateRenderer",
    "updateRenderFromTree",
    "QModelIndex",
    "updateCamera"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[18];
    char stringdata8[29];
    char stringdata9[32];
    char stringdata10[15];
    char stringdata11[21];
    char stringdata12[12];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "statusUpdateMessage"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 7),  // "message"
        QT_MOC_LITERAL(40, 7),  // "timeout"
        QT_MOC_LITERAL(48, 13),  // "handleButton1"
        QT_MOC_LITERAL(62, 13),  // "handleButton2"
        QT_MOC_LITERAL(76, 17),  // "handleTreeClicked"
        QT_MOC_LITERAL(94, 28),  // "on_actionOpen_File_triggered"
        QT_MOC_LITERAL(123, 31),  // "on_actionItem_Options_triggered"
        QT_MOC_LITERAL(155, 14),  // "updateRenderer"
        QT_MOC_LITERAL(170, 20),  // "updateRenderFromTree"
        QT_MOC_LITERAL(191, 11),  // "QModelIndex"
        QT_MOC_LITERAL(203, 12)   // "updateCamera"
    },
    "MainWindow",
    "statusUpdateMessage",
    "",
    "message",
    "timeout",
    "handleButton1",
    "handleButton2",
    "handleTreeClicked",
    "on_actionOpen_File_triggered",
    "on_actionItem_Options_triggered",
    "updateRenderer",
    "updateRenderFromTree",
    "QModelIndex",
    "updateCamera"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   73,    2, 0x0a,    4 /* Public */,
       6,    0,   74,    2, 0x0a,    5 /* Public */,
       7,    0,   75,    2, 0x0a,    6 /* Public */,
       8,    0,   76,    2, 0x08,    7 /* Private */,
       9,    0,   77,    2, 0x08,    8 /* Private */,
      10,    0,   78,    2, 0x08,    9 /* Private */,
      11,    1,   79,    2, 0x08,   10 /* Private */,
      13,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'statusUpdateMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleButton1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleButton2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTreeClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionItem_Options_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRenderer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRenderFromTree'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateCamera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusUpdateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->handleButton1(); break;
        case 2: _t->handleButton2(); break;
        case 3: _t->handleTreeClicked(); break;
        case 4: _t->on_actionOpen_File_triggered(); break;
        case 5: _t->on_actionItem_Options_triggered(); break;
        case 6: _t->updateRenderer(); break;
        case 7: _t->updateRenderFromTree((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->updateCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & , int );
            if (_t _q_method = &MainWindow::statusUpdateMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::statusUpdateMessage(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
