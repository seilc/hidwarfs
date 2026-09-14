/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char processing; // size: 0x1, address: 0x609640
static signed int xsize; // size: 0x4, address: 0x609644
static signed int zsize; // size: 0x4, address: 0x609648
static signed int iwaves_size; // size: 0x4, address: 0x60964C
static unsigned short code_addr; // size: 0x2, address: 0x609650
__int128 iWaterVU0_ComputeHeightmap; // size: 0x10, address: 0x4FBE80
__int128 iWaterVU0_ComputeHeightmapEnd; // size: 0x10, address: 0x4FCCC0
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
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
class iWaterWave {
    // Members
public:
    float phase; // offset 0x0, size 0x4
    float amplitude; // offset 0x4, size 0x4
    float frequency_x; // offset 0x8, size 0x4
    float frequency_z; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472450 -> 0x0047270C
*/
// Range: 0x472450 -> 0x47270C
void iWaterAnimateEnd(float * Ay /* r2 */, float * Nx /* r2 */, float * Ny /* r2 */, float * Nz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x472450 -> 0x47270C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472710 -> 0x00472780
*/
// Range: 0x472710 -> 0x472780
void iWaterAnimateBegin(signed int xsize /* r2 */, signed int zsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x472710 -> 0x472780
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472780 -> 0x00472990
*/
// Range: 0x472780 -> 0x472990
void iWaterAnimateUploadWaves(class iWaterInstancedWaves * iwaves /* r17 */, signed int iwaves_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x472780 -> 0x472990
        class iWaterInstancedWaves test_iwaves[3]; // @ 0x006BEA60
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472990 -> 0x004729AC
*/
// Range: 0x472990 -> 0x4729AC
void iWaterAnimateUploadCode() {
    /* anonymous block */ {
        // Range: 0x472990 -> 0x4729AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004729B0 -> 0x00472A94
*/
// Range: 0x4729B0 -> 0x472A94
void iWaterMoveWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float x /* r22 */, float z /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4729B0 -> 0x472A94
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float t; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00472AA0 -> 0x00472B88
*/
// Range: 0x472AA0 -> 0x472B88
void iWaterSetupWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float dxz /* r21 */) {
    /* anonymous block */ {
        // Range: 0x472AA0 -> 0x472B88
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float tx; // r20
        float tz; // r20
    }
}


