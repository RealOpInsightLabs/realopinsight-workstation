/****************************************************************************
** Meta object code from reading C++ file 'SvConfigCreator.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/src/SvConfigCreator.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SvConfigCreator.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SvCreator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      21,   10,   10,   10, 0x0a,
      36,   31,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      77,   10,   10,   10, 0x0a,
      97,   10,   10,   10, 0x0a,
     118,  110,   10,   10, 0x0a,
     138,   10,   10,   10, 0x0a,
     145,   10,   10,   10, 0x0a,
     152,   10,   10,   10, 0x0a,
     165,   10,  161,   10, 0x0a,
     188,   10,  161,   10, 0x2a,
     213,  207,   10,   10, 0x0a,
     253,   10,   10,   10, 0x0a,
     275,   10,   10,   10, 0x0a,
     310,  303,   10,   10, 0x0a,
     356,  339,   10,   10, 0x0a,
     388,   10,   10,   10, 0x0a,
     416,   10,   10,   10, 0x0a,
     451,  434,   10,   10, 0x0a,
     520,  495,   10,   10, 0x0a,
     571,   10,   10,   10, 0x0a,
     592,   10,   10,   10, 0x0a,
     615,   10,   10,   10, 0x0a,
     640,   10,   10,   10, 0x0a,
     663,   10,   10,   10, 0x0a,
     692,  688,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SvCreator[] = {
    "SvCreator\0\0newView()\0newNode()\0node\0"
    "insertFromSelected(NodeT)\0copySelected()\0"
    "pasteFromSelected()\0deleteNode()\0"
    "_nodeId\0deleteNode(QString)\0open()\0"
    "save()\0saveAs()\0int\0treatCloseAction(bool)\0"
    "treatCloseAction()\0_item\0"
    "fillEditorFromService(QTreeWidgetItem*)\0"
    "handleReturnPressed()\0handleSelectedNodeChanged()\0"
    "nodeId\0handleTreeNodeMoved(QString)\0"
    "selectedNodeType\0handleNodeTypeActivated(qint32)\0"
    "handleShowOnlineResources()\0"
    "handleShowAbout()\0type,sourceInfos\0"
    "fetchSourceList(int,QMap<QString,SourceT>&)\0"
    "retCode,srcId,checks,msg\0"
    "treatCheckLoadResults(int,QString,ChecksT,QString)\0"
    "importNagiosChecks()\0importZabbixTriggers()\0"
    "importZenossComponents()\0"
    "importPandoraModules()\0importLivestatusChecks()\0"
    "msg\0handleErrorOccurred(QString)\0"
};

void SvCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SvCreator *_t = static_cast<SvCreator *>(_o);
        switch (_id) {
        case 0: _t->newView(); break;
        case 1: _t->newNode(); break;
        case 2: _t->insertFromSelected((*reinterpret_cast< const NodeT(*)>(_a[1]))); break;
        case 3: _t->copySelected(); break;
        case 4: _t->pasteFromSelected(); break;
        case 5: _t->deleteNode(); break;
        case 6: _t->deleteNode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->open(); break;
        case 8: _t->save(); break;
        case 9: _t->saveAs(); break;
        case 10: { int _r = _t->treatCloseAction((*reinterpret_cast< const bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->treatCloseAction();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->fillEditorFromService((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->handleReturnPressed(); break;
        case 14: _t->handleSelectedNodeChanged(); break;
        case 15: _t->handleTreeNodeMoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->handleNodeTypeActivated((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 17: _t->handleShowOnlineResources(); break;
        case 18: _t->handleShowAbout(); break;
        case 19: _t->fetchSourceList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QMap<QString,SourceT>(*)>(_a[2]))); break;
        case 20: _t->treatCheckLoadResults((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const ChecksT(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 21: _t->importNagiosChecks(); break;
        case 22: _t->importZabbixTriggers(); break;
        case 23: _t->importZenossComponents(); break;
        case 24: _t->importPandoraModules(); break;
        case 25: _t->importLivestatusChecks(); break;
        case 26: _t->handleErrorOccurred((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SvCreator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SvCreator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SvCreator,
      qt_meta_data_SvCreator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SvCreator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SvCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SvCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SvCreator))
        return static_cast<void*>(const_cast< SvCreator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SvCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
