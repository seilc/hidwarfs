/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00301C50 -> 0x00302010
*/
// Range: 0x301C50 -> 0x302010
// this: r17
unsigned char zRing::CheckIfPlayerCrossed(class xMat4x3 & mat /* r2 */, class xVec3 & lastCheckedPos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x301C50 -> 0x302010
        class xVec3 end; // r29+0xC0
        class xRay3 ray; // r29+0x40
        class xPlane plane; // r29+0x30
        float t; // r29+0xD0
        class xVec3 ringCenter; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00302010 -> 0x00302298
*/
// Range: 0x302010 -> 0x302298
// this: r17
void zRing::Show(class xModelInstance * modelInstance /* r16 */) {
    /* anonymous block */ {
        // Range: 0x302010 -> 0x302298
        class xModelInstance * minst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003022A0 -> 0x00302718
*/
// Range: 0x3022A0 -> 0x302718
// this: r20
void zRing::Render(class xModelInstance * modelInstance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3022A0 -> 0x302718
        signed int cull; // r2
        class xSphere * worldSphere; // r2
        class xModelInstance * minst; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00302720 -> 0x00302A10
*/
// Range: 0x302720 -> 0x302A10
// this: r18
void zRing::Update(float dt /* r20 */, class xModelInstance * modelInstance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x302720 -> 0x302A10
        unsigned int count; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00302A10 -> 0x00302D24
*/
// Range: 0x302A10 -> 0x302D24
// this: r2
void zRing::DrawShadow(class xMat4x3 * Mat /* r2 */, class RwRaster * rwras /* r19 */, float factor /* r20 */, float distance /* r29+0x3140 */) {
    /* anonymous block */ {
        // Range: 0x302A10 -> 0x302D24
        class xVec3 center; // r29+0x3130
        class xMat4x3 matrix; // r29+0x30F0
        class xShadowCache cache; // r29+0x70
        signed int i; // r18
        class xEnt * ep; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00302D30 -> 0x00302F90
*/
// Range: 0x302D30 -> 0x302F90
// this: r2
void zRing::ChangeRingColor(float dt /* r29 */, class xModelInstance * modelInstance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x302D30 -> 0x302F90
        float timeRemaining; // r29
        class xModelInstance * minst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00302F90 -> 0x003033B4
*/
// Range: 0x302F90 -> 0x3033B4
// this: r16
void zRing::CalculateBubbleOffsets() {
    /* anonymous block */ {
        // Range: 0x302F90 -> 0x3033B4
        class RpGeometry * geom; // r2
        signed int size; // r2
        class RpMorphTarget * mt; // r2
        class xVec3 * vert; // r2
        class xVec3 * norm; // r2
        class RpTriangle * tri; // r2
        signed int i; // r21
        signed int j; // r20
        signed int bubblesPerFace; // r19
        class RpTriangle * myTri; // r18
        float u; // r24
        float v; // r9
        float w; // r29+0xE0
        class xVec3 pos; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003033C0 -> 0x00303814
*/
// Range: 0x3033C0 -> 0x303814
// this: r16
void zRing::Reset() {
    /* anonymous block */ {
        // Range: 0x3033C0 -> 0x303814
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zRing.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00303820 -> 0x0030387C
*/
// Range: 0x303820 -> 0x30387C
void Load(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x303820 -> 0x30387C
    }
}


