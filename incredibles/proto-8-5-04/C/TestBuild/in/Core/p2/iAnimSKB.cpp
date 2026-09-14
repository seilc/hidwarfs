/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float slerpPolynomial[24]; // size: 0x60, address: 0x506290
signed int CmpBoneTime(void *, void *); // size: 0x0, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
signed int CmpTime(void *, void *); // size: 0x0, address: 0x0
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x607758
// total size: 0xC
class SKAHeader {
    // Members
public:
    unsigned int numFrames; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    float duration; // offset 0x8, size 0x4
};
// total size: 0x24
class SKAKey {
    // Members
public:
    float quat[4]; // offset 0x0, size 0x10
    float tran[3]; // offset 0x10, size 0xC
    float time; // offset 0x1C, size 0x4
    unsigned int prevFrame; // offset 0x20, size 0x4
};
// total size: 0x10
class iAnimSKBKey {
    // Members
public:
    unsigned short TimeIndex; // offset 0x0, size 0x2
    signed short Quat[4]; // offset 0x2, size 0x8
    signed short Tran[3]; // offset 0xA, size 0x6
};
// total size: 0x1C
class iAnimSKBHeader {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    void * ExtractedData; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned int KeyCount; // offset 0xC, size 0x4
    float Scale[3]; // offset 0x10, size 0xC
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x20
class ANMHeader {
    // Members
public:
    unsigned int chunkType; // offset 0x0, size 0x4
    unsigned int chunkLength; // offset 0x4, size 0x4
    unsigned int chunkVersion; // offset 0x8, size 0x4
    signed int hanimVersion; // offset 0xC, size 0x4
    signed int hanimTypeID; // offset 0x10, size 0x4
    unsigned int numFrames; // offset 0x14, size 0x4
    signed int flags; // offset 0x18, size 0x4
    float duration; // offset 0x1C, size 0x4
};
// total size: 0x24
class ANMKey {
    // Members
public:
    float time; // offset 0x0, size 0x4
    float quat[4]; // offset 0x4, size 0x10
    float tran[3]; // offset 0x14, size 0xC
    unsigned int prevFrame; // offset 0x20, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00159500 -> 0x0015995C
*/
// Range: 0x159500 -> 0x15995C
void _iAnimSKBAdjustYaw(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float yawStart /* r27 */, float yawEnd /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x159500 -> 0x15995C
        unsigned int i; // r21
        unsigned int keyfirst; // r2
        unsigned int keylast; // r2
        unsigned int kcount; // r2
        unsigned int tcount; // r2
        float timefirst; // r26
        class iAnimSKBKey * keys; // r2
        float * times; // r2
        unsigned short * offsets; // r2
        float invTimeDiff; // r25
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00159960 -> 0x0015A1A4
*/
// Range: 0x159960 -> 0x15A1A4
signed int _iAnimSKBExtractYaw(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float * yawArray /* r21 */) {
    /* anonymous block */ {
        // Range: 0x159960 -> 0x15A1A4
        unsigned int i; // r20
        unsigned int j; // r4
        unsigned int keylast; // r2
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r2
        float * times; // r2
        unsigned short * offsets; // r2
        float currYaw; // r25
        float lastYaw; // r3
        float lastCurrYaw; // r24
        signed int yawFound; // r19
        signed int lastTime; // r18
        signed int currTime; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015A1B0 -> 0x0015A208
*/
// Range: 0x15A1B0 -> 0x15A208
float QuatToYaw(class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15A1B0 -> 0x15A208
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015A210 -> 0x0015A874
*/
// Range: 0x15A210 -> 0x15A874
signed int _iAnimSKBExtractTranslateAxis(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, class xVec3 * tranArray /* r2 */, unsigned char * axis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15A210 -> 0x15A874
        unsigned int i; // r24
        unsigned int j; // r15
        unsigned int keylast; // r2
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r2
        float * times; // r2
        unsigned short * offsets; // r2
        class xVec3 * lastTran; // r14
        signed int tranFound; // r2
        signed int lastTime; // r13
        signed int currTime; // r12
        float lerp; // r29+0x10
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015A880 -> 0x0015A968
*/
// Range: 0x15A880 -> 0x15A968
signed int _iAnimSKBNumExtract(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15A880 -> 0x15A968
        unsigned int i; // r8
        unsigned int keylast; // r2
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r2
        float * times; // r2
        unsigned short * offsets; // r2
        signed int tranFound; // r2
        signed int lastTime; // r3
        signed int currTime; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015A970 -> 0x0015AE48
*/
// Range: 0x15A970 -> 0x15AE48
void _iAnimSKBAdjustTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float * starttran /* r2 */, float * endtran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15A970 -> 0x15AE48
        signed int ipos; // r22
        unsigned int i; // r22
        unsigned int idx; // r21
        unsigned int keyfirst; // r2
        unsigned int keylast; // r2
        unsigned int kcount; // r2
        unsigned int bcount; // r2
        unsigned int tcount; // r2
        float outScale[3]; // r29+0xB0
        float pos; // r7
        float factor[3]; // r29+0xA0
        float oldmax[3]; // r29+0x90
        float newmax[3]; // r29+0x80
        float timefirst; // r1
        float timelast; // r29+0xC0
        class iAnimSKBKey * keys; // r18
        float * times; // r2
        unsigned short * offsets; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015AE50 -> 0x0015AE70
*/
// Range: 0x15AE50 -> 0x15AE70
float iAnimDurationSKB(class iAnimSKBHeader * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15AE50 -> 0x15AE70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015AE70 -> 0x0015B404
*/
// Range: 0x15AE70 -> 0x15B404
void iAnimEvalSKB(class iAnimSKBHeader * data /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r12 */, class xQuat * quat /* r11 */) {
    /* anonymous block */ {
        // Range: 0x15AE70 -> 0x15B404
        unsigned int i; // r6
        unsigned int tidx; // r14
        unsigned int bcount; // r10
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r9
        float * times; // r2
        unsigned short * offsets; // r8
        signed int asdf; // r2
        float time1; // r29
        float time2; // r29
        float lerp; // r29
        class iAnimSKBKey * k; // r2
        unsigned int costheta; // r2
        unsigned int theta; // r2
    }
}


