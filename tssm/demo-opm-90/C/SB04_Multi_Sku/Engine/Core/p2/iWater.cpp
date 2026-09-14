/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char processing; // size: 0x1, address: 0x63747C
static signed int xsize; // size: 0x4, address: 0x637480
static signed int zsize; // size: 0x4, address: 0x637484
static signed int iwaves_size; // size: 0x4, address: 0x637488
static unsigned short code_addr; // size: 0x2, address: 0x63748C
__int128 iWaterVU0_ComputeHeightmap; // size: 0x10, address: 0x522EA0
__int128 iWaterVU0_ComputeHeightmapEnd; // size: 0x10, address: 0x523CE0
// total size: 0x80
class iWaterInstancedWaves {
    // Members
public:
    float startcos[4]; // offset 0x0, size 0x10
    float startsin[4]; // offset 0x10, size 0x10
    float dxcos[4]; // offset 0x20, size 0x10
    float dxsin[4]; // offset 0x30, size 0x10
    float dzcos[4]; // offset 0x40, size 0x10
    float dzsin[4]; // offset 0x50, size 0x10
    float xfreq[4]; // offset 0x60, size 0x10
    float zfreq[4]; // offset 0x70, size 0x10
};
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x10
class iWaterWave {
    // Members
public:
    float phase; // offset 0x0, size 0x4
    float amplitude; // offset 0x4, size 0x4
    float frequency_x; // offset 0x8, size 0x4
    float frequency_z; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B24E0 -> 0x002B279C
*/
// Range: 0x2B24E0 -> 0x2B279C
void iWaterAnimateEnd(float * Ay /* r2 */, float * Nx /* r2 */, float * Ny /* r2 */, float * Nz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B24E0 -> 0x2B279C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B27A0 -> 0x002B2810
*/
// Range: 0x2B27A0 -> 0x2B2810
void iWaterAnimateBegin(signed int xsize /* r2 */, signed int zsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B27A0 -> 0x2B2810
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B2810 -> 0x002B2A20
*/
// Range: 0x2B2810 -> 0x2B2A20
void iWaterAnimateUploadWaves(class iWaterInstancedWaves * iwaves /* r17 */, signed int iwaves_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B2810 -> 0x2B2A20
        class iWaterInstancedWaves test_iwaves[3]; // @ 0x00668C50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B2A20 -> 0x002B2A3C
*/
// Range: 0x2B2A20 -> 0x2B2A3C
void iWaterAnimateUploadCode() {
    /* anonymous block */ {
        // Range: 0x2B2A20 -> 0x2B2A3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B2A40 -> 0x002B2B24
*/
// Range: 0x2B2A40 -> 0x2B2B24
void iWaterMoveWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float x /* r22 */, float z /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2B2A40 -> 0x2B2B24
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float t; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B2B30 -> 0x002B2C18
*/
// Range: 0x2B2B30 -> 0x2B2C18
void iWaterSetupWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float dxz /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2B2B30 -> 0x2B2C18
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float tx; // r20
        float tz; // r20
    }
}


