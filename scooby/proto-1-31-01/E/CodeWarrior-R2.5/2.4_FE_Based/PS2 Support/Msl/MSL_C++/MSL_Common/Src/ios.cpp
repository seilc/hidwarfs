/*
    Compile unit: E:\CodeWarrior-R2.5\2.4_FE_Based\PS2 Support\Msl\MSL_C++\MSL_Common\Src\ios.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
void * __dt(class failure *, signed short); // size: 0x0, address: 0x0
// total size: 0x10
struct /* @anon5 */ {} std::exception::__vtable; // size: 0x10, address: 0x4A2760
// total size: 0x10
struct /* @anon2 */ {} std::ios_base::failure::__vtable; // size: 0x10, address: 0x0
// total size: 0xC
struct /* @anon0 */ {} std::ios_base::__vtable; // size: 0xC, address: 0x0
class basic_ostream cerr; // size: 0x58, address: 0x0
class basic_ostream clog; // size: 0x58, address: 0x0
class basic_ostream cout; // size: 0x58, address: 0x0
class basic_istream cin; // size: 0x68, address: 0x0
void * __dt(class Init *, signed short); // size: 0x0, address: 0x0
class _RefCountedPtr global_s; // size: 0x8, address: 0x0
static // total size: 0x8
struct /* @anon3 */ {} std::ios_base::__RTTI; // size: 0x8, address: 0x0
static // total size: 0x8
struct /* @anon7 */ {} std::exception::__RTTI; // size: 0x8, address: 0x0
static // total size: 0x8
struct /* @anon4 */ {} std::ios_base::failure::__RTTI; // size: 0x8, address: 0x0
// total size: 0xC
struct /* @anon1 */ {} std::locale::facet::__vtable; // size: 0xC, address: 0x0
static // total size: 0x8
struct /* @anon6 */ {} std::locale::facet::__RTTI; // size: 0x8, address: 0x0
// total size: 0x40
class ios_base {
    // Members
public:
    class pair * cb_vec_; // offset 0x4, size 0x4
    unsigned int cb_siz_; // offset 0x8, size 0x4
    unsigned int cb_cap_; // offset 0xC, size 0x4
    signed long * iarray_; // offset 0x10, size 0x4
    unsigned int isize_; // offset 0x14, size 0x4
    void * * parray_; // offset 0x18, size 0x4
    unsigned int psize_; // offset 0x1C, size 0x4
    class locale * loc_; // offset 0x20, size 0x4
    void * rdbuf_; // offset 0x24, size 0x4
    signed long precision_; // offset 0x28, size 0x4
    signed long width_; // offset 0x30, size 0x4
    enum fmtflags fmtflags_; // offset 0x38, size 0x2
    enum iostate iostate_; // offset 0x3A, size 0x1
    enum iostate exceptions_; // offset 0x3B, size 0x1
};
// total size: 0xC
struct /* @anon0 */ {};
// total size: 0x8
class _RefCountedPtr {
    // Members
public:
    class __locale_imp * ptr_; // offset 0x0, size 0x4
    signed int * refCount_; // offset 0x4, size 0x4
};
// total size: 0x4
class compressed_pair_imp : private allocator {
    // Members
public:
    unsigned int second_; // offset 0x0, size 0x4
};
// total size: 0x10
class CharArray {
    // Members
public:
    unsigned int size_; // offset 0x0, size 0x4
    class _EmptyMemberOpt alloc_; // offset 0x4, size 0x4
    unsigned int refcount_; // offset 0x8, size 0x4
    char * data_; // offset 0xC, size 0x4
};
// total size: 0x8
class pair {
    // Members
public:
    void (* first)(enum event, class ios_base &, signed int); // offset 0x0, size 0x4
    signed int second; // offset 0x4, size 0x4
};
// total size: 0x8
class _RefCountedPtr {
    // Members
public:
    char * ptr_; // offset 0x0, size 0x4
    signed int * refCount_; // offset 0x4, size 0x4
};
// total size: 0x8
class locale {
    // Members
public:
    class _RefCountedPtr imp_; // offset 0x0, size 0x8
};
// total size: 0x8
class facet {
    // Members
public:
    unsigned int ref_; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @anon1 */ {};
// total size: 0x4
class compressed_pair : private compressed_pair_imp {};
// total size: 0xC
class __vector_imp : private __vector_pod, private compile_assert {};
// total size: 0x1
class allocator {};
// total size: 0xC
class vector : private __vector_imp {};
// total size: 0xC
class failure : public exception {
    // Members
public:
    class _MSLstring what_; // offset 0x4, size 0x8
};
// total size: 0x10
class __locale_imp {
    // Members
public:
    class vector facets_; // offset 0x0, size 0xC
    class basic_string name_; // offset 0xC, size 0x4
};
// total size: 0x24
class basic_streambuf {
    // Members
public:
    char * gbeg_; // offset 0x4, size 0x4
    char * gnext_; // offset 0x8, size 0x4
    char * gend_; // offset 0xC, size 0x4
    char * pbeg_; // offset 0x10, size 0x4
    char * pnext_; // offset 0x14, size 0x4
    char * pend_; // offset 0x18, size 0x4
    class locale loc_; // offset 0x1C, size 0x8
};
// total size: 0x48
class basic_ios : public ios_base {
    // Members
public:
    class basic_ostream * tiestr_; // offset 0x40, size 0x4
    char fill_; // offset 0x44, size 0x1
};
// total size: 0x4
class exception {};
// total size: 0x1
class allocator {};
// total size: 0xC
class __vector_pod {
    // Members
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
enum fmtflags {
    boolalpha = 1,
    dec = 2,
    fixed = 4,
    hex = 8,
    internal = 16,
    left = 32,
    oct = 64,
    right = 128,
    scientific = 256,
    showbase = 512,
    showpoint = 1024,
    showpos = 2048,
    skipws = 4096,
    unitbuf = 8192,
    uppercase = 16384,
    adjustfield = 176,
    basefield = 74,
    floatfield = 260,
};
// total size: 0x1
class Init {};
// total size: 0x8
class _MSLstring {
    // Members
public:
    class _RefCountedPtr data_; // offset 0x0, size 0x8
};
// total size: 0x10
struct /* @anon2 */ {};
// total size: 0x8
struct /* @anon3 */ {};
// total size: 0x4
class basic_string {
    // Members
public:
    class _EmptyMemberOpt alloc_; // offset 0x0, size 0x4
};
// total size: 0x8
struct /* @anon4 */ {};
// total size: 0x10
struct /* @anon5 */ {};
// total size: 0x68
class basic_istream : public virtual basic_ios {
    // Members
public:
    signed long gcount_; // offset 0x8, size 0x4
};
// total size: 0x4
class _EmptyMemberOpt : public allocator {
    // Members
public:
    class CharArray * m_; // offset 0x0, size 0x4
};
// total size: 0x58
class basic_ostream : public virtual basic_ios {};
enum iostate {
    goodbit = 0,
    badbit = 1,
    eofbit = 2,
    failbit = 4,
};
// total size: 0x1
class compile_assert {};
// total size: 0x8
struct /* @anon6 */ {};
// total size: 0x1
class allocator {};
// total size: 0x4
class _EmptyMemberOpt : public allocator {
    // Members
public:
    unsigned int m_; // offset 0x0, size 0x4
};
enum event {
    erase_event = 0,
    imbue_event = 1,
    copyfmt_event = 2,
};
// total size: 0x8
struct /* @anon7 */ {};

