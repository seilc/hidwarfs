/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xAnimMgr * gAnimMgr; // size: 0x4, address: 0x4A5060
// total size: 0x28
struct /* @anon0 */ {} xAnimMgr::__vtable; // size: 0x28, address: 0x4A2840
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class _reent * _impure_ptr; // size: 0x4, address: 0x445DAC
// total size: 0x10
class iAnimData {
    // Members
public:
    class _RpSkinAnim * skin_anim; // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x18
class _Bigint {
    // Members
public:
    class _Bigint * _next; // offset 0x0, size 0x4
    signed int _k; // offset 0x4, size 0x4
    signed int _maxwds; // offset 0x8, size 0x4
    signed int _sign; // offset 0xC, size 0x4
    signed int _wds; // offset 0x10, size 0x4
    unsigned int _x[1]; // offset 0x14, size 0x4
};
// total size: 0x4C
class xAnimMgr : public xModule {
    // Members
public:
    class vector anims; // offset 0x30, size 0xC
    class vector ress; // offset 0x3C, size 0xC
    unsigned int ID_counter; // offset 0x48, size 0x4
};
// total size: 0x4
class compressed_pair : private compressed_pair_imp {};
// total size: 0xC
class vector : private __vector_imp {};
// total size: 0x1
class compile_assert {};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x2EC
class _reent {
    // Members
public:
    signed int _errno; // offset 0x0, size 0x4
    class __sFILE * _stdin; // offset 0x4, size 0x4
    class __sFILE * _stdout; // offset 0x8, size 0x4
    class __sFILE * _stderr; // offset 0xC, size 0x4
    signed int _inc; // offset 0x10, size 0x4
    char _emergency[25]; // offset 0x14, size 0x19
    signed int _current_category; // offset 0x30, size 0x4
    char * _current_locale; // offset 0x34, size 0x4
    signed int __sdidinit; // offset 0x38, size 0x4
    void (* __cleanup)(class _reent *); // offset 0x3C, size 0x4
    class _Bigint * _result; // offset 0x40, size 0x4
    signed int _result_k; // offset 0x44, size 0x4
    class _Bigint * _p5s; // offset 0x48, size 0x4
    class _Bigint * * _freelist; // offset 0x4C, size 0x4
    signed int _cvtlen; // offset 0x50, size 0x4
    char * _cvtbuf; // offset 0x54, size 0x4
    // total size: 0xF0
    class /* @class */ {
        // Members
    public:
        union { // inferred
            // total size: 0x4C
            class /* @class */ {
                // Members
            public:
                unsigned int _rand_next; // offset 0x0, size 0x4
                char * _strtok_last; // offset 0x4, size 0x4
                char _asctime_buf[26]; // offset 0x8, size 0x1A
                class tm _localtime_buf; // offset 0x24, size 0x24
                signed int _gamma_signgam; // offset 0x48, size 0x4
            } _reent; // offset 0x0, size 0x4C
            // total size: 0xF0
            class /* @class */ {
                // Members
            public:
                unsigned char * _nextf[30]; // offset 0x0, size 0x78
                unsigned int _nmalloc[30]; // offset 0x78, size 0x78
            } _unused; // offset 0x0, size 0xF0
        };
    } _new; // offset 0x58, size 0xF0
    class _atexit * _atexit; // offset 0x148, size 0x4
    class _atexit _atexit0; // offset 0x14C, size 0x88
    void (* * _sig_func)(signed int); // offset 0x1D4, size 0x4
    class _glue __sglue; // offset 0x1D8, size 0xC
    class __sFILE __sf[3]; // offset 0x1E4, size 0x108
};
// total size: 0x88
class _atexit {
    // Members
public:
    class _atexit * _next; // offset 0x0, size 0x4
    signed int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class iAnimInstance {
    // Members
public:
    float time; // offset 0x0, size 0x4
};
// total size: 0x30
class xModule {
    // Members
public:
    signed int m_type; // offset 0x0, size 0x4
    char m_name[32]; // offset 0x4, size 0x20
    signed int m_init; // offset 0x24, size 0x4
    signed int m_state; // offset 0x28, size 0x4
};
// total size: 0x1
class allocator {};
// total size: 0x58
class __sFILE {
    // Members
public:
    unsigned char * _p; // offset 0x0, size 0x4
    signed int _r; // offset 0x4, size 0x4
    signed int _w; // offset 0x8, size 0x4
    signed short _flags; // offset 0xC, size 0x2
    signed short _file; // offset 0xE, size 0x2
    class __sbuf _bf; // offset 0x10, size 0x8
    signed int _lbfsize; // offset 0x18, size 0x4
    void * _cookie; // offset 0x1C, size 0x4
    signed int (* _read)(void *, char *, signed int); // offset 0x20, size 0x4
    signed int (* _write)(void *, char *, signed int); // offset 0x24, size 0x4
    signed long (* _seek)(void *, signed long, signed int); // offset 0x28, size 0x4
    signed int (* _close)(void *); // offset 0x2C, size 0x4
    class __sbuf _ub; // offset 0x30, size 0x8
    unsigned char * _up; // offset 0x38, size 0x4
    signed int _ur; // offset 0x3C, size 0x4
    unsigned char _ubuf[3]; // offset 0x40, size 0x3
    unsigned char _nbuf[1]; // offset 0x43, size 0x1
    class __sbuf _lb; // offset 0x44, size 0x8
    signed int _blksize; // offset 0x4C, size 0x4
    signed int _offset; // offset 0x50, size 0x4
    class _reent * _data; // offset 0x54, size 0x4
};
// total size: 0xC
class __vector_pod {
    // Members
public:
    class compressed_pair capacity_; // offset 0x0, size 0x4
    unsigned int size_; // offset 0x4, size 0x4
    unsigned int * data_; // offset 0x8, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x14
class xAnimData : private iAnimInstance {
    // Members
public:
    unsigned int m_assetID; // offset 0x8, size 0x4
    unsigned int m_ID; // offset 0xC, size 0x4
    class iAnimData * m_resource; // offset 0x10, size 0x4
};
// total size: 0x24
class _RpSkinFrame {
    // Members
public:
    class _RtQuat q; // offset 0x0, size 0x10
    class _RwV3d t; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    class _RpSkinFrame * prevFrame; // offset 0x20, size 0x4
};
// total size: 0x8
class __sbuf {
    // Members
public:
    unsigned char * _base; // offset 0x0, size 0x4
    signed int _size; // offset 0x4, size 0x4
};
// total size: 0x10
class _RpSkinAnim {
    // Members
public:
    signed int numFrames; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
    class _RpSkinFrame * pFrames; // offset 0xC, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x24
class tm {
    // Members
public:
    signed int tm_sec; // offset 0x0, size 0x4
    signed int tm_min; // offset 0x4, size 0x4
    signed int tm_hour; // offset 0x8, size 0x4
    signed int tm_mday; // offset 0xC, size 0x4
    signed int tm_mon; // offset 0x10, size 0x4
    signed int tm_year; // offset 0x14, size 0x4
    signed int tm_wday; // offset 0x18, size 0x4
    signed int tm_yday; // offset 0x1C, size 0x4
    signed int tm_isdst; // offset 0x20, size 0x4
};
// total size: 0x10
class _RtQuat {
    // Members
public:
    class _RwV3d imag; // offset 0x0, size 0xC
    float real; // offset 0xC, size 0x4
};
// total size: 0xF0
class /* @class */ {
    // Members
public:
    union { // inferred
        // total size: 0x4C
        class /* @class */ {
            // Members
        public:
            unsigned int _rand_next; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            class tm _localtime_buf; // offset 0x24, size 0x24
            signed int _gamma_signgam; // offset 0x48, size 0x4
        } _reent; // offset 0x0, size 0x4C
        // total size: 0xF0
        class /* @class */ {
            // Members
        public:
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    };
};
// total size: 0x4C
class /* @class */ {
    // Members
public:
    unsigned int _rand_next; // offset 0x0, size 0x4
    char * _strtok_last; // offset 0x4, size 0x4
    char _asctime_buf[26]; // offset 0x8, size 0x1A
    class tm _localtime_buf; // offset 0x24, size 0x24
    signed int _gamma_signgam; // offset 0x48, size 0x4
};
// total size: 0xC
class __vector_imp : private __vector_pod, private compile_assert {};
// total size: 0xC
class _glue {
    // Members
public:
    class _glue * _next; // offset 0x0, size 0x4
    signed int _niobs; // offset 0x4, size 0x4
    class __sFILE * _iobs; // offset 0x8, size 0x4
};
// total size: 0xF0
class /* @class */ {
    // Members
public:
    unsigned char * _nextf[30]; // offset 0x0, size 0x78
    unsigned int _nmalloc[30]; // offset 0x78, size 0x78
};
// total size: 0x28
struct /* @anon0 */ {};
// total size: 0xC
class __vector_imp : private __vector_pod, private compile_assert {};
// total size: 0xC
class vector : private __vector_imp {};
// total size: 0x4
class compressed_pair_imp : private allocator {
    // Members
public:
    unsigned int second_; // offset 0x0, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FFBD0 -> 0x003FFC24
*/
// Range: 0x3FFBD0 -> 0x3FFC24
// this: r2
class xAnimData * xAnimMgr::getAnimData(unsigned int anim_ID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FFBD0 -> 0x3FFC24
        class xAnimData * * ea; // r2
        class xAnimData * * ai; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FFC30 -> 0x003FFFC4
*/
// Range: 0x3FFC30 -> 0x3FFFC4
// this: r20
unsigned int xAnimMgr::loadAnim(char * filename /* r19 */, char * name /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3FFC30 -> 0x3FFFC4
        class xAnimData * dat; // r29+0x9C
        class iAnimData * res; // r29+0x98
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FFFD0 -> 0x003FFFD8
*/
// Range: 0x3FFFD0 -> 0x3FFFD8
void nextFrame() {
    /* anonymous block */ {
        // Range: 0x3FFFD0 -> 0x3FFFD8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FFFE0 -> 0x004000B8
*/
// Range: 0x3FFFE0 -> 0x4000B8
// this: r16
void xAnimMgr::kill() {
    /* anonymous block */ {
        // Range: 0x3FFFE0 -> 0x4000B8
        class iAnimData * * del; // r3
        class iAnimData * * re; // r2
        class iAnimData * * ri; // r2
        class xAnimData * * del; // r3
        class xAnimData * * ae; // r2
        class xAnimData * * ai; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnimMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004000C0 -> 0x0040023C
*/
// Range: 0x4000C0 -> 0x40023C
// this: r16
void xAnimMgr::init() {
    /* anonymous block */ {
        // Range: 0x4000C0 -> 0x40023C
    }
}


