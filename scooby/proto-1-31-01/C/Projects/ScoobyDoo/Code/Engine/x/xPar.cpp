/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xPar gParPool[1500]; // size: 0x21B10, address: 0x4BDA30
class xPar * gParDead; // size: 0x4, address: 0x4A4D2C
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class tagxParSys gParSys[37]; // size: 0x40C, address: 0x4B94B0
signed int gParSysPriority[37]; // size: 0x94, address: 0x449620
// total size: 0x5C
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    class Vector3D m_vel; // offset 0x14, size 0xC
    class Vector3D m_acc; // offset 0x20, size 0xC
    float m_size; // offset 0x2C, size 0x4
    float m_sizeVel; // offset 0x30, size 0x4
    signed short m_lifetime; // offset 0x34, size 0x2
    unsigned char m_flag; // offset 0x36, size 0x1
    unsigned char m_mode; // offset 0x37, size 0x1
    unsigned char m_c[4]; // offset 0x38, size 0x4
    signed char m_cvel[4]; // offset 0x3C, size 0x4
    unsigned char m_c1[4]; // offset 0x40, size 0x4
    unsigned char m_c2[4]; // offset 0x44, size 0x4
    unsigned char m_rotdeg[3]; // offset 0x48, size 0x3
    unsigned char m_texIdx; // offset 0x4B, size 0x1
    float m_uva[2]; // offset 0x4C, size 0x8
    float m_uvb[2]; // offset 0x54, size 0x8
};
// total size: 0x14
class tagParCmdList {
    // Members
public:
    signed int m_numCmd; // offset 0x0, size 0x4
    class xParCmd * m_cmd; // offset 0x4, size 0x4
    class xParCmd * m_lastCmd; // offset 0x8, size 0x4
    class tagParCmdList * m_prev; // offset 0xC, size 0x4
    class tagParCmdList * m_next; // offset 0x10, size 0x4
};
// total size: 0x1C
class tagxParSys {
    // Members
public:
    unsigned int m_idx; // offset 0x0, size 0x4
    class xPar * m_root; // offset 0x4, size 0x4
    class xPar * m_dead; // offset 0x8, size 0x4
    signed int m_num_of_particles; // offset 0xC, size 0x4
    class tagParCmdList * m_cmd; // offset 0x10, size 0x4
    unsigned char m_alive; // offset 0x14, size 0x1
    unsigned char m_killWhenDead; // offset 0x15, size 0x1
    unsigned char m_active; // offset 0x16, size 0x1
    unsigned char m_visible; // offset 0x17, size 0x1
    unsigned char m_culled; // offset 0x18, size 0x1
    unsigned char m_deadGlobalPool; // offset 0x19, size 0x1
    unsigned char m_pad[2]; // offset 0x1A, size 0x2
};
// total size: 0x14
class xParCmd {
    // Members
public:
    unsigned char m_tag; // offset 0x0, size 0x1
    unsigned char m_flag; // offset 0x1, size 0x1
    signed short m_count; // offset 0x2, size 0x2
    void * m_method; // offset 0x4, size 0x4
    void * m_data; // offset 0x8, size 0x4
    class xParCmd * m_next; // offset 0xC, size 0x4
    class xParCmd * m_prev; // offset 0x10, size 0x4
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AFD0 -> 0x0034B02C
*/
// Range: 0x34AFD0 -> 0x34B02C
class tagParCmdList * xParSysInitParCmdList(class tagxParSys * ps /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34AFD0 -> 0x34B02C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B030 -> 0x0034B458
*/
// Range: 0x34B030 -> 0x34B458
void xParSysAllocPars(class tagxParSys * ps /* r19 */, signed int numPars /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34B030 -> 0x34B458
        class xPar * p; // r2
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B460 -> 0x0034B77C
*/
// Range: 0x34B460 -> 0x34B77C
void xParSysKillPar(class tagxParSys * ps /* r17 */, class xPar * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34B460 -> 0x34B77C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B780 -> 0x0034BA44
*/
// Range: 0x34B780 -> 0x34BA44
class xPar * xParSysAddPar(class tagxParSys * ps /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34B780 -> 0x34BA44
        signed int myPriority; // r3
        unsigned int i; // r2
        class xPar * p; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BA50 -> 0x0034BC08
*/
// Range: 0x34BA50 -> 0x34BC08
void xParSysAddParP(class tagxParSys * ps /* r17 */, class xPar * p /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34BA50 -> 0x34BC08
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BC10 -> 0x0034BEE8
*/
// Range: 0x34BC10 -> 0x34BEE8
void xParSysAnimate(class tagxParSys * ps /* r19 */, unsigned int dt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x34BC10 -> 0x34BEE8
        signed short col; // r4
        unsigned char t; // r17
        class xPar * tmp; // r2
        class xPar * i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BEF0 -> 0x0034BFEC
*/
// Range: 0x34BEF0 -> 0x34BFEC
void xParSysKillAllParticles(class tagxParSys * ps /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34BEF0 -> 0x34BFEC
        class xPar * tmp; // r2
        class xPar * i; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BFF0 -> 0x0034C0DC
*/
// Range: 0x34BFF0 -> 0x34C0DC
void xParSysExecute(class tagxParSys * ps /* r17 */, unsigned int dt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34BFF0 -> 0x34C0DC
        class tagParCmdList * list; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C0E0 -> 0x0034C0EC
*/
// Range: 0x34C0E0 -> 0x34C0EC
void xParSysSetCulled(class tagxParSys * ps /* r2 */, signed int isCulled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C0E0 -> 0x34C0EC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C0F0 -> 0x0034C0FC
*/
// Range: 0x34C0F0 -> 0x34C0FC
void xParSysSetVisible(class tagxParSys * ps /* r2 */, signed int isVisible /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C0F0 -> 0x34C0FC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C100 -> 0x0034C13C
*/
// Range: 0x34C100 -> 0x34C13C
void xParSysInit(class tagxParSys * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C100 -> 0x34C13C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C140 -> 0x0034C220
*/
// Range: 0x34C140 -> 0x34C220
void xParInit(class xPar * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C140 -> 0x34C220
        signed int i; // r6
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C220 -> 0x0034C28C
*/
// Range: 0x34C220 -> 0x34C28C
void xParMemInit() {
    /* anonymous block */ {
        // Range: 0x34C220 -> 0x34C28C
        class xPar * p; // r4
        signed int i; // r5
    }
}


