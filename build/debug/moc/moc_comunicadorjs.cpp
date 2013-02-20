/****************************************************************************
** Meta object code from reading C++ file 'comunicadorjs.h'
**
** Created: Wed 20. Feb 02:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../comunicadorjs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comunicadorjs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JSComunicador[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   15,   14,   14, 0x05,
      63,   55,   14,   14, 0x05,
      86,   14,   14,   14, 0x05,
      93,   14,   14,   14, 0x05,
     104,   14,   14,   14, 0x05,
     116,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JSComunicador[] = {
    "JSComunicador\0\0mode,type,count\0"
    "sendPoints(int,int,int)\0lat,lng\0"
    "sendPoint(float,float)\0exit()\0Despegar()\0"
    "Aterrizar()\0GoHome()\0requestMissionReceived()\0"
};

void JSComunicador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JSComunicador *_t = static_cast<JSComunicador *>(_o);
        switch (_id) {
        case 0: _t->sendPoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sendPoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->exit(); break;
        case 3: _t->Despegar(); break;
        case 4: _t->Aterrizar(); break;
        case 5: _t->GoHome(); break;
        case 6: _t->requestMissionReceived(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JSComunicador::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JSComunicador::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JSComunicador,
      qt_meta_data_JSComunicador, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JSComunicador::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JSComunicador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JSComunicador::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JSComunicador))
        return static_cast<void*>(const_cast< JSComunicador*>(this));
    return QObject::qt_metacast(_clname);
}

int JSComunicador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void JSComunicador::sendPoints(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JSComunicador::sendPoint(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JSComunicador::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void JSComunicador::Despegar()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void JSComunicador::Aterrizar()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void JSComunicador::GoHome()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
