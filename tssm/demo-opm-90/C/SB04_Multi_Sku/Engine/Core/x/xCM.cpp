/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CA50 -> 0x0042CA64
*/
// Range: 0x42CA50 -> 0x42CA64
void xCMsetDest(float x /* r29 */, float y /* r29 */, float width /* r29 */, float height /* r29 */) {
    /* anonymous block */ {
        // Range: 0x42CA50 -> 0x42CA64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CA70 -> 0x0042CAB0
*/
// Range: 0x42CA70 -> 0x42CAB0
void xCMstop() {
    /* anonymous block */ {
        // Range: 0x42CA70 -> 0x42CAB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CAB0 -> 0x0042CB48
*/
// Range: 0x42CAB0 -> 0x42CB48
void xCMstart(class xCreditsData * data /* r2 */, class xBase * parent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42CAB0 -> 0x42CB48
        class xCMheader * hdr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CB50 -> 0x0042CB5C
*/
// Range: 0x42CB50 -> 0x42CB5C
void xCMrender() {
    /* anonymous block */ {
        // Range: 0x42CB50 -> 0x42CB5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CB60 -> 0x0042CC54
*/
// Range: 0x42CB60 -> 0x42CC54
void xCMupdate(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x42CB60 -> 0x42CC54
        float scale; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042CC60 -> 0x0042EF74
*/
// Range: 0x42CC60 -> 0x42EF74
static unsigned int xCMrender(float time /* r30 */, class xCreditsData * data /* r29+0xFC */) {
    /* anonymous block */ {
        // Range: 0x42CC60 -> 0x42EF74
        class xCMheader * hdr; // r2
        char * dp; // r18
        class xCMcredits * cp; // r2
        class xCMpreset * pp; // r2
        class xCMhunk * hp; // r17
        float a; // r4
        class xCMpreset * preset; // r16
        float nx; // r20
        float ny; // r29
        float x0; // r28
        float x1; // r29+0x860
        float y0; // r27
        float y1; // r29+0x860
        float ca; // r26
        class xCMtexture * tex; // r2
        signed int oldSrcBlend; // r29+0x85C
        signed int oldDestBlend; // r29+0x858
        signed int oldZWrite; // r29+0x854
        signed int oldZTest; // r29+0x850
        class xColor_tag color; // r29+0x84C
        class basic_rect bounds; // r29+0x7F0
        class xtextbox tb; // r29+0x770
        class xColor_tag color; // r29+0x848
        class basic_rect bounds; // r29+0x760
        class xtextbox tb; // r29+0x6E0
        unsigned int alignL; // r2
        unsigned int alignR; // r19
        class xColor_tag colorL; // r29+0x844
        class basic_rect bounds; // r29+0x6D0
        class xtextbox tb; // r29+0x650
        class xColor_tag colorR; // r29+0x840
        class basic_rect bounds; // r29+0x640
        class xtextbox tb; // r29+0x5C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042EF80 -> 0x0042F16C
*/
// Range: 0x42EF80 -> 0x42F16C
static signed int Im2DRenderQuadAlpha(float x1 /* r29+0x110 */, float y1 /* r29+0x110 */, float x2 /* r29+0x110 */, float y2 /* r29+0x110 */, float alpha /* r29+0x110 */, float z /* r29+0x110 */, float recipCamZ /* r29+0x110 */, float uvOffset /* r29+0x110 */) {
    /* anonymous block */ {
        // Range: 0x42EF80 -> 0x42F16C
        class RwSky2DVertex vx[4]; // r29+0x10
        unsigned char alphaI; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCM.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042F170 -> 0x0042F380
*/
// Range: 0x42F170 -> 0x42F380
static void xCMprep(class xCreditsData * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42F170 -> 0x42F380
        class xCMheader * hdr; // r2
        char * dp; // r10
        class xCMcredits * cp; // r2
        class xCMpreset * pp; // r2
        class xCMhunk * hp; // r9
        class xCMpreset * preset; // r2
    }
}


