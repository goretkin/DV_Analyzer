/****************************************************************************
** Meta object code from reading C++ file 'GUI_About.h'
**
** Created: Fri 30. Apr 02:04:31 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Source/GUI/Qt/GUI_About.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUI_About.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI_About[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      27,   10,   10,   10, 0x08,
      49,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI_About[] = {
    "GUI_About\0\0OnDescription()\0"
    "OnTechnicalSynopsis()\0OnAuthorLicense()\0"
};

const QMetaObject GUI_About::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GUI_About,
      qt_meta_data_GUI_About, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI_About::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI_About::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI_About::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI_About))
        return static_cast<void*>(const_cast< GUI_About*>(this));
    return QDialog::qt_metacast(_clname);
}

int GUI_About::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnDescription(); break;
        case 1: OnTechnicalSynopsis(); break;
        case 2: OnAuthorLicense(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
