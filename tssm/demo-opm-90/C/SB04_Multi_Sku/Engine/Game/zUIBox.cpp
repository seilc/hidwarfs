/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9850 -> 0x002B9CF0
*/
// Range: 0x2B9850 -> 0x2B9CF0
void zUIBox_Init(class xBase & data /* r18 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2B9850 -> 0x2B9CF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9CF0 -> 0x002BA96C
*/
// Range: 0x2B9CF0 -> 0x2BA96C
// this: r16
void zUIBox::RenderPart(signed int p /* r17 */, float x1 /* r28 */, float y1 /* r20 */, float x2 /* r27 */, float y2 /* r26 */, float uScale /* r25 */, float vScale /* r24 */, float rotation /* r21 */, float xPivot /* r22 */, float yPivot /* r29+0x80 */) {
    /* anonymous block */ {
        // Range: 0x2B9CF0 -> 0x2BA96C
        class Part & part; // r18
        float ulx; // r3
        float uly; // r29+0x80
        float urx; // r2
        float ury; // r1
        float llx; // r29+0x80
        float lly; // r29+0x80
        float lrx; // r29+0x80
        float lry; // r29+0x80
        float tempScale; // r29+0x80
        class RwTexture * pTexture; // r2
        float z; // r2
        float cz; // r1
        float cooz; // r29+0x80
        unsigned short indexes[4]; // r29+0x78
        class RwSky2DVertex vertex[4]; // @ 0x00668DD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BA970 -> 0x002BADCC
*/
// Range: 0x2BA970 -> 0x2BADCC
// this: r17
void zUIBox::DoRender() {
    /* anonymous block */ {
        // Range: 0x2BA970 -> 0x2BADCC
        float x1; // r29
        float y1; // r28
        float x2; // r27
        float y2; // r26
        float curBorderWidth; // r29+0x80
        float curBorderHeight; // r29+0x80
        float x1i; // r25
        float y1i; // r24
        float x2i; // r23
        float y2i; // r22
        float xCenter; // r21
        float yCenter; // r20
        float yScale; // r30
        float xScale; // r27
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BADD0 -> 0x002BAEAC
*/
// Range: 0x2BADD0 -> 0x2BAEAC
// this: r2
void zUIBox::DoApplyMotionFrame(class zUIMotionFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BADD0 -> 0x2BAEAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BAEB0 -> 0x002BAFEC
*/
// Range: 0x2BAEB0 -> 0x2BAFEC
// this: r2
void zUIBox::DoHandleEvent(class xBase * from /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r18 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BAEB0 -> 0x2BAFEC
        class RwTexture * pTexture; // r16
        signed int which; // r2
        signed int i; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BAFF0 -> 0x002BB064
*/
// Range: 0x2BAFF0 -> 0x2BB064
// this: r2
void zUIBox::DoResetMotion() {
    /* anonymous block */ {
        // Range: 0x2BAFF0 -> 0x2BB064
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB070 -> 0x002BB164
*/
// Range: 0x2BB070 -> 0x2BB164
// this: r19
void zUIBox::DoReset() {
    /* anonymous block */ {
        // Range: 0x2BB070 -> 0x2BB164
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUIBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB170 -> 0x002BB204
*/
// Range: 0x2BB170 -> 0x2BB204
// this: r16
void zUIBox::DoInit() {
    /* anonymous block */ {
        // Range: 0x2BB170 -> 0x2BB204
    }
}


