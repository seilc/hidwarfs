/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C81A0 -> 0x003C8480
*/
// Range: 0x3C81A0 -> 0x3C8480
// this: r2
void image_widget::set_buffer_to_layer(enum RENDERTYPE eType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C81A0 -> 0x3C8480
        unsigned short * pIndex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C8480 -> 0x003C8818
*/
// Range: 0x3C8480 -> 0x3C8818
// this: r17
unsigned char image_widget::render_random_v(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C8480 -> 0x3C8818
        float fTopX; // r24
        float fTopY; // r23
        float fWidth; // r27
        float fDeltaV; // r22
        float fTopU; // r29+0x50
        float fBotU; // r29+0x50
        float fBotV; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C8820 -> 0x003C8B84
*/
// Range: 0x3C8820 -> 0x3C8B84
// this: r2
unsigned char image_widget::render_special_strobe(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C8820 -> 0x3C8B84
        float fBottomY; // r2
        float fTopY; // r12
        float v0; // r11
        float v1; // r10
        float u0; // r9
        float u1; // r8
        float fTopX; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C8B90 -> 0x003C8F48
*/
// Range: 0x3C8B90 -> 0x3C8F48
// this: r2
unsigned char image_widget::render_strobe_effect(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C8B90 -> 0x3C8F48
        float fBottomY; // r7
        float fTopY; // r29
        float fRealTopY; // r29
        float vRange; // r29
        float v0; // r12
        float v1; // r11
        float u0; // r10
        float u1; // r9
        float fTopX; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C8F50 -> 0x003C957C
*/
// Range: 0x3C8F50 -> 0x3C957C
// this: r17
unsigned char image_widget::render_offset_rotate_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C8F50 -> 0x3C957C
        float fRadians; // r20
        float fTopU; // r26
        float fTopV; // r25
        float fBotU; // r24
        float fBotV; // r23
        float fTopX; // r7
        float fTopY; // r6
        float fBotX; // r5
        float fBotY; // r2
        float fCenterX; // r22
        float fCenterY; // r21
        class xVec2 toTopLeft; // r29+0xA8
        class xVec2 toBotLeft; // r29+0xA0
        class xVec2 toTopRight; // r29+0x98
        class xVec2 toBotRight; // r29+0x90
        float fTemp10; // r29+0xB0
        float fTemp20; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C9580 -> 0x003C9B48
*/
// Range: 0x3C9580 -> 0x3C9B48
// this: r17
unsigned char image_widget::render_rotate_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C9580 -> 0x3C9B48
        float fRadians; // r20
        float fTopU; // r26
        float fTopV; // r25
        float fBotU; // r24
        float fBotV; // r23
        float fTopX; // r9
        float fTopY; // r7
        float fCenterX; // r22
        float fCenterY; // r21
        float fBotX; // r5
        float fBotY; // r2
        class xVec2 toTopLeft; // r29+0xA8
        class xVec2 toBotLeft; // r29+0xA0
        class xVec2 toTopRight; // r29+0x98
        class xVec2 toBotRight; // r29+0x90
        float fTemp10; // r29+0xB0
        float fTemp20; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C9B50 -> 0x003CA724
*/
// Range: 0x3C9B50 -> 0x3CA724
// this: r2
unsigned char image_widget::render_half_ccw(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3C9B50 -> 0x3CA724
        float fPercent; // r29+0xB0
        float fClampTopY; // r2
        float fClampTopV; // r1
        float fCenterX; // r15
        float fCenterY; // r29+0xB0
        float fCenterYPlusfHalfHeight; // r14
        float fCenterYMinusfHalfHeight; // r3
        float u0; // r13
        float u1; // r12
        float fCenterU; // r9
        float fCenterV; // r5
        float fRangeToFour; // r29+0xB0
        signed int nWholeTris; // r2
        signed int nWholeTrisPlus1; // r2
        signed int nWholeTrisPlus2; // r15
        float fInterpAmount; // r3
        unsigned int vertexIndex0; // r2
        unsigned int vertexIndex1; // r2
        unsigned int vertexIndex2; // r2
        float xCoord[2]; // r29+0xA8
        float yCoord[2]; // r29+0xA0
        float uCoord[2]; // r29+0x98
        float vCoord[2]; // r29+0x90
        unsigned int uHalfOffset; // r14
        unsigned int VertIndex; // r13
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CA730 -> 0x003CB1F8
*/
// Range: 0x3CA730 -> 0x3CB1F8
// this: r2
unsigned char image_widget::render_counter_clockwise(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CA730 -> 0x3CB1F8
        float u0; // r4
        float v0; // r3
        float u1; // r2
        float v1; // r1
        float fCenterX; // r13
        float fCenterY; // r10
        float fCenterYPlusfHalfHeight; // r9
        float fCenterYMinusfHalfHeight; // r8
        float fCenterU; // r7
        float fCenterV; // r6
        float fRangeToEight; // r29
        signed int nWholeTris; // r2
        signed int nWholeTrisPlus1; // r2
        signed int nWholeTrisPlus2; // r2
        float fInterpAmount; // r29
        float xCoord; // r9
        float yCoord; // r5
        float uCoord; // r3
        float vCoord; // r29
        signed int vertexIndex0; // r2
        signed int vertexIndex1; // r2
        signed int vertexIndex2; // r2
        signed int VertIndex; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CB200 -> 0x003CB510
*/
// Range: 0x3CB200 -> 0x3CB510
// this: r2
unsigned char image_widget::render_variable_right(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CB200 -> 0x3CB510
        float fPercent; // r13
        float fTopX; // r12
        float fTopY; // r29
        float fTopV; // r29
        float fBotU; // r29
        float fBotV; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CB510 -> 0x003CB830
*/
// Range: 0x3CB510 -> 0x3CB830
// this: r2
unsigned char image_widget::render_variable_top(unsigned int uLayer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CB510 -> 0x3CB830
        float fPercent; // r5
        float fHeight; // r4
        float fTopY; // r12
        float fTopV; // r11
        float fTopX; // r29
        float fTopU; // r29
        float fBotU; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CB830 -> 0x003CBC40
*/
// Range: 0x3CB830 -> 0x3CBC40
// this: r2
unsigned char image_widget::render_one_to_one(unsigned int uLayer /* r2 */, enum RENDERTYPE eType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3CB830 -> 0x3CBC40
        float fQuadX; // r7
        float fQuadY; // r6
        float fQuadWidth; // r5
        float fQuadHeight; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CBC40 -> 0x003CC18C
*/
// Range: 0x3CBC40 -> 0x3CC18C
// this: r20
void image_widget::render() {
    /* anonymous block */ {
        // Range: 0x3CBC40 -> 0x3CC18C
        unsigned int i; // r5
        enum LAYER_FLAGS eLayerMode; // r22
        unsigned char bFlushTempBuffer; // r21
        unsigned int uLayer; // r19
        unsigned int uNewMode; // r18
        unsigned char bRendered; // r5
        signed char @22849; // @ 0x0063805C
        float fNearZ; // @ 0x00638058
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CC190 -> 0x003CC2CC
*/
// Range: 0x3CC190 -> 0x3CC2CC
// this: r16
void image_widget::update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3CC190 -> 0x3CC2CC
        unsigned int uLayer; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CC2D0 -> 0x003CC364
*/
// Range: 0x3CC2D0 -> 0x3CC364
unsigned char is(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3CC2D0 -> 0x3CC364
        signed char @21764; // @ 0x0063801C
        unsigned int myid; // @ 0x00638018
        signed char @22805; // @ 0x00638054
        unsigned int myid; // @ 0x00638050
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CC370 -> 0x003CC3B0
*/
// Range: 0x3CC370 -> 0x3CC3B0
unsigned int type() {
    /* anonymous block */ {
        // Range: 0x3CC370 -> 0x3CC3B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CC3B0 -> 0x003CC3D0
*/
// Range: 0x3CC3B0 -> 0x3CC3D0
// this: r2
void image_widget::destroy() {
    /* anonymous block */ {
        // Range: 0x3CC3B0 -> 0x3CC3D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xHudImage.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CC3D0 -> 0x003CC564
*/
// Range: 0x3CC3D0 -> 0x3CC564
void load(class xBase & data /* r16 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3CC3D0 -> 0x3CC564
    }
}


