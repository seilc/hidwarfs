/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B5050 -> 0x004B54AC
*/
// Range: 0x4B5050 -> 0x4B54AC
void _iAnimSKBAdjustYaw(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float yawStart /* r27 */, float yawEnd /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x4B5050 -> 0x4B54AC
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B54B0 -> 0x004B5CF4
*/
// Range: 0x4B54B0 -> 0x4B5CF4
signed int _iAnimSKBExtractYaw(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float * yawArray /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4B54B0 -> 0x4B5CF4
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B5D00 -> 0x004B5D58
*/
// Range: 0x4B5D00 -> 0x4B5D58
float QuatToYaw(class xQuat * q /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B5D00 -> 0x4B5D58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B5D60 -> 0x004B63C4
*/
// Range: 0x4B5D60 -> 0x4B63C4
signed int _iAnimSKBExtractTranslateAxis(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, class xVec3 * tranArray /* r2 */, unsigned char * axis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B5D60 -> 0x4B63C4
        unsigned int i; // r24
        unsigned int j; // r15
        unsigned int keylast; // r2
        unsigned int tcount; // r2
        class iAnimSKBKey * keys; // r2
        float * times; // r2
        unsigned short * offsets; // r2
        class xVec3 * lastTran; // r2
        signed int tranFound; // r2
        signed int lastTime; // r14
        signed int currTime; // r13
        float lerp; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B63D0 -> 0x004B63FC
*/
// Range: 0x4B63D0 -> 0x4B63FC
signed int _iAnimSKBExtractTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, class xVec3 * tranArray /* r2 */, signed int tranCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B63D0 -> 0x4B63FC
        unsigned char axis[3]; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B6400 -> 0x004B64E8
*/
// Range: 0x4B6400 -> 0x4B64E8
signed int _iAnimSKBNumExtract(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B6400 -> 0x4B64E8
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B64F0 -> 0x004B69C0
*/
// Range: 0x4B64F0 -> 0x4B69C0
void _iAnimSKBAdjustTranslate(class iAnimSKBHeader * data /* r2 */, unsigned int bone /* r2 */, float * starttran /* r2 */, float * endtran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4B64F0 -> 0x4B69C0
        signed int ipos; // r22
        unsigned int i; // r22
        unsigned int idx; // r21
        unsigned int keyfirst; // r2
        unsigned int keylast; // r2
        unsigned int kcount; // r2
        unsigned int bcount; // r2
        unsigned int tcount; // r2
        float outScale[3]; // r29+0xB0
        float pos; // r8
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iAnimSKB.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004B69C0 -> 0x004B6F54
*/
// Range: 0x4B69C0 -> 0x4B6F54
void iAnimEvalSKB(class iAnimSKBHeader * data /* r2 */, float time /* r29 */, unsigned int flags /* r2 */, class xVec3 * tran /* r12 */, class xQuat * quat /* r11 */) {
    /* anonymous block */ {
        // Range: 0x4B69C0 -> 0x4B6F54
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


