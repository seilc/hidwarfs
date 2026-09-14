/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHealthMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002804D0 -> 0x0028069C
*/
// Range: 0x2804D0 -> 0x28069C
void RenderBar(class RwRaster * rast /* r2 */, float xoffset /* r29+0xD0 */, float * xywh /* r2 */, float * uv_beg /* r2 */, float * uv_end /* r2 */, class xColor_tag c1 /* r29+0x28 */, class xColor_tag c2 /* r29+0x2C */) {
    /* anonymous block */ {
        // Range: 0x2804D0 -> 0x28069C
        class RxObjSpace3DVertex vtxbuf[4]; // r29+0x30
        class RxObjSpace3DVertex * vtx_horz; // r10
        signed int i; // r9
        class xColor_tag currColor; // r29+0xCC
        float rat; // r9
        float u; // r8
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        unsigned int drawflag; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHealthMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002806A0 -> 0x00280934
*/
// Range: 0x2806A0 -> 0x280934
// this: r19
void MeterData::RenderBars(float offset /* r20 */, signed int healthMax /* r18 */, signed int stage /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2806A0 -> 0x280934
        float xywh[4]; // r29+0x60
        float uv_beg[2]; // r29+0x88
        float uv_end[2]; // r29+0x80
        float uv_beg_rhs[2]; // r29+0x78
        float uv_end_rhs[2]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHealthMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00280940 -> 0x00280F24
*/
// Range: 0x280940 -> 0x280F24
// this: r30
void MeterData::RenderInner(float offset /* r20 */, signed int healthCurr /* r29+0xCC */, signed int healthMax /* r16 */, signed int stage /* r2 */) {
    /* anonymous block */ {
        // Range: 0x280940 -> 0x280F24
        float percentFull; // r29+0x100
        float xywh[4]; // r29+0xD0
        float uv_beg[2]; // r29+0xF0
        float uv_end[2]; // r29+0xE8
        float xStart; // r3
        signed int i; // r21
        class xColor_tag cLeft; // r29+0xFC
        class xColor_tag cRight; // r29+0xF8
        float leftRatio; // r2
        float rightRatio; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHealthMeter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00280F30 -> 0x00281150
*/
// Range: 0x280F30 -> 0x281150
// this: r20
void MeterData::Render() {
    /* anonymous block */ {
        // Range: 0x280F30 -> 0x281150
        enum _SDRenderState old_rendstat; // r19
        float xoff; // r20
        signed int i; // r18
    }
}


