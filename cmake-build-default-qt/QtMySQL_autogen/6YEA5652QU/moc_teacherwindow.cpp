/****************************************************************************
** Meta object code from reading C++ file 'teacherwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/teacherwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSTeacherWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTeacherWindowENDCLASS = QtMocHelpers::stringData(
    "TeacherWindow",
    "return_to_LoginWindow",
    "",
    "on_tableViewTC_clicked",
    "QModelIndex",
    "index",
    "on_ButtonReturn_clicked",
    "on_ButtonInfo_clicked",
    "on_ButtonCourseApply_clicked",
    "on_return_to_TeacherWindow"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTeacherWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x08,    2 /* Private */,
       6,    0,   54,    2, 0x08,    4 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,
       8,    0,   56,    2, 0x08,    6 /* Private */,
       9,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TeacherWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTeacherWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTeacherWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTeacherWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TeacherWindow, std::true_type>,
        // method 'return_to_LoginWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewTC_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_ButtonReturn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonInfo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonCourseApply_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_return_to_TeacherWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TeacherWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TeacherWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->return_to_LoginWindow(); break;
        case 1: _t->on_tableViewTC_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->on_ButtonReturn_clicked(); break;
        case 3: _t->on_ButtonInfo_clicked(); break;
        case 4: _t->on_ButtonCourseApply_clicked(); break;
        case 5: _t->on_return_to_TeacherWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TeacherWindow::*)();
            if (_t _q_method = &TeacherWindow::return_to_LoginWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TeacherWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeacherWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTeacherWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TeacherWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TeacherWindow::return_to_LoginWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
