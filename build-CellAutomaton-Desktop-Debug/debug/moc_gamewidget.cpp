/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CellAutomaton/gamewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameWidget_t {
    QByteArrayData data[27];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameWidget_t qt_meta_stringdata_GameWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameWidget"
QT_MOC_LITERAL(1, 11, 18), // "environmentChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "gameEnd"
QT_MOC_LITERAL(4, 39, 9), // "startGame"
QT_MOC_LITERAL(5, 49, 8), // "stopGame"
QT_MOC_LITERAL(6, 58, 5), // "clear"
QT_MOC_LITERAL(7, 64, 4), // "step"
QT_MOC_LITERAL(8, 69, 4), // "undo"
QT_MOC_LITERAL(9, 74, 12), // "fillRandomly"
QT_MOC_LITERAL(10, 87, 11), // "setInterval"
QT_MOC_LITERAL(11, 99, 7), // "seconds"
QT_MOC_LITERAL(12, 107, 11), // "setCellSize"
QT_MOC_LITERAL(13, 119, 4), // "size"
QT_MOC_LITERAL(14, 124, 8), // "setField"
QT_MOC_LITERAL(15, 133, 11), // "setBornRule"
QT_MOC_LITERAL(16, 145, 11), // "newBornRule"
QT_MOC_LITERAL(17, 157, 14), // "setSurviveRule"
QT_MOC_LITERAL(18, 172, 14), // "newSurviveRule"
QT_MOC_LITERAL(19, 187, 17), // "setGridVisibility"
QT_MOC_LITERAL(20, 205, 18), // "changeNeighborhood"
QT_MOC_LITERAL(21, 224, 8), // "setColor"
QT_MOC_LITERAL(22, 233, 8), // "drawGrid"
QT_MOC_LITERAL(23, 242, 9), // "QPainter&"
QT_MOC_LITERAL(24, 252, 1), // "p"
QT_MOC_LITERAL(25, 254, 9), // "drawWorld"
QT_MOC_LITERAL(26, 264, 13) // "newGeneration"

    },
    "GameWidget\0environmentChanged\0\0gameEnd\0"
    "startGame\0stopGame\0clear\0step\0undo\0"
    "fillRandomly\0setInterval\0seconds\0"
    "setCellSize\0size\0setField\0setBornRule\0"
    "newBornRule\0setSurviveRule\0newSurviveRule\0"
    "setGridVisibility\0changeNeighborhood\0"
    "setColor\0drawGrid\0QPainter&\0p\0drawWorld\0"
    "newGeneration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       3,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  115,    2, 0x0a /* Public */,
       5,    0,  116,    2, 0x0a /* Public */,
       6,    0,  117,    2, 0x0a /* Public */,
       7,    0,  118,    2, 0x0a /* Public */,
       8,    0,  119,    2, 0x0a /* Public */,
       9,    0,  120,    2, 0x0a /* Public */,
      10,    1,  121,    2, 0x0a /* Public */,
      12,    1,  124,    2, 0x0a /* Public */,
      14,    0,  127,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x0a /* Public */,
      17,    1,  131,    2, 0x0a /* Public */,
      19,    1,  134,    2, 0x0a /* Public */,
      20,    0,  137,    2, 0x0a /* Public */,
      21,    0,  138,    2, 0x0a /* Public */,
      22,    1,  139,    2, 0x08 /* Private */,
      25,    1,  142,    2, 0x08 /* Private */,
      26,    0,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,

       0        // eod
};

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameWidget *_t = static_cast<GameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->environmentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->gameEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->startGame(); break;
        case 3: _t->stopGame(); break;
        case 4: _t->clear(); break;
        case 5: _t->step(); break;
        case 6: _t->undo(); break;
        case 7: _t->fillRandomly(); break;
        case 8: _t->setInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setCellSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setField(); break;
        case 11: _t->setBornRule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setSurviveRule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setGridVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->changeNeighborhood(); break;
        case 15: _t->setColor(); break;
        case 16: _t->drawGrid((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 17: _t->drawWorld((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 18: _t->newGeneration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::environmentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameWidget::gameEnd)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameWidget.data,
      qt_meta_data_GameWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameWidget.stringdata0))
        return static_cast<void*>(const_cast< GameWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::environmentChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameWidget::gameEnd(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
