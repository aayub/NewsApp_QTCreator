/****************************************************************************
** Meta object code from reading C++ file 'content.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Ws8/content.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'content.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Content_t {
    QByteArrayData data[14];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Content_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Content_t qt_meta_stringdata_Content = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Content"
QT_MOC_LITERAL(1, 8, 11), // "newBookmark"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "QFrame*"
QT_MOC_LITERAL(4, 29, 4), // "item"
QT_MOC_LITERAL(5, 34, 14), // "deleteBookmark"
QT_MOC_LITERAL(6, 49, 11), // "cellClicked"
QT_MOC_LITERAL(7, 61, 15), // "likeBtnClicked2"
QT_MOC_LITERAL(8, 77, 19), // "bookmarkBtnClicked2"
QT_MOC_LITERAL(9, 97, 19), // "replaceFirstArticle"
QT_MOC_LITERAL(10, 117, 17), // "likeButtonClicked"
QT_MOC_LITERAL(11, 135, 21), // "bookmarkButtonClicked"
QT_MOC_LITERAL(12, 157, 18), // "onUpdateBookmarked"
QT_MOC_LITERAL(13, 176, 18) // "onDeleteBookmarked"

    },
    "Content\0newBookmark\0\0QFrame*\0item\0"
    "deleteBookmark\0cellClicked\0likeBtnClicked2\0"
    "bookmarkBtnClicked2\0replaceFirstArticle\0"
    "likeButtonClicked\0bookmarkButtonClicked\0"
    "onUpdateBookmarked\0onDeleteBookmarked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Content[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Content::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Content *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newBookmark((*reinterpret_cast< QFrame*(*)>(_a[1]))); break;
        case 1: _t->deleteBookmark((*reinterpret_cast< QFrame*(*)>(_a[1]))); break;
        case 2: { int _r = _t->cellClicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->likeBtnClicked2();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->bookmarkBtnClicked2();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->replaceFirstArticle(); break;
        case 6: _t->likeButtonClicked(); break;
        case 7: _t->bookmarkButtonClicked(); break;
        case 8: _t->onUpdateBookmarked(); break;
        case 9: _t->onDeleteBookmarked((*reinterpret_cast< QFrame*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFrame* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFrame* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFrame* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Content::*)(QFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Content::newBookmark)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Content::*)(QFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Content::deleteBookmark)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Content::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Content.data,
    qt_meta_data_Content,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Content::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Content::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Content.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Content::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Content::newBookmark(QFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Content::deleteBookmark(QFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
