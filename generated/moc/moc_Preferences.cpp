/****************************************************************************
** Meta object code from reading C++ file 'Preferences.hpp'
**
** Created: Sun Dec 28 13:21:44 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../core/src/Preferences.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Preferences.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Preferences[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      33,   12,   12,   12, 0x05,
      66,   62,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   12,   89,   12, 0x0a,
     127,  118,  113,   12, 0x0a,
     155,  118,  113,   12, 0x0a,
     184,   12,   12,   12, 0x09,
     199,   12,   12,   12, 0x09,
     214,   12,   12,   12, 0x09,
     228,   12,   12,   12, 0x09,
     253,  243,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Preferences[] = {
    "Preferences\0\0urlChanged(QString)\0"
    "sourcesChanged(QList<qint8>)\0msg\0"
    "errorOccurred(QString)\0qint32\0"
    "updateInterval()\0bool\0_id,_src\0"
    "loadSource(qint32,SourceT&)\0"
    "loadSource(QString,SourceT&)\0"
    "applyChanges()\0handleCancel()\0"
    "addAsSource()\0deleteSource()\0_interval\0"
    "emitTimerIntervalChanged(qint32)\0"
};

void Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Preferences *_t = static_cast<Preferences *>(_o);
        switch (_id) {
        case 0: _t->urlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sourcesChanged((*reinterpret_cast< QList<qint8>(*)>(_a[1]))); break;
        case 2: _t->errorOccurred((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { qint32 _r = _t->updateInterval();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->loadSource((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< SourceT(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->loadSource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SourceT(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->applyChanges(); break;
        case 7: _t->handleCancel(); break;
        case 8: _t->addAsSource(); break;
        case 9: _t->deleteSource(); break;
        case 10: _t->emitTimerIntervalChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Preferences::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Preferences::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Preferences,
      qt_meta_data_Preferences, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Preferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Preferences))
        return static_cast<void*>(const_cast< Preferences*>(this));
    return QObject::qt_metacast(_clname);
}

int Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Preferences::urlChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Preferences::sourcesChanged(QList<qint8> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Preferences::errorOccurred(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
