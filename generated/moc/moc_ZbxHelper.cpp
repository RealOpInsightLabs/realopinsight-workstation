/****************************************************************************
** Meta object code from reading C++ file 'ZbxHelper.hpp'
**
** Created: Sun Dec 28 13:21:45 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../core/src/ZbxHelper.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZbxHelper.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZbxHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   55,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ZbxHelper[] = {
    "ZbxHelper\0\0propagateError(QNetworkReply::NetworkError)\0"
    "code\0processError(QNetworkReply::NetworkError)\0"
};

void ZbxHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZbxHelper *_t = static_cast<ZbxHelper *>(_o);
        switch (_id) {
        case 0: _t->propagateError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->processError((*reinterpret_cast< const QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZbxHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZbxHelper::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_ZbxHelper,
      qt_meta_data_ZbxHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZbxHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZbxHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZbxHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZbxHelper))
        return static_cast<void*>(const_cast< ZbxHelper*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int ZbxHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ZbxHelper::propagateError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
