/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned char processing; // size: 0x1, address: 0x612A50
static signed int xsize; // size: 0x4, address: 0x612A54
static signed int zsize; // size: 0x4, address: 0x612A58
static signed int iwaves_size; // size: 0x4, address: 0x612A5C
static unsigned short code_addr; // size: 0x2, address: 0x612A60
__int128 iWaterVU0_ComputeHeightmap; // size: 0x10, address: 0x504580
__int128 iWaterVU0_ComputeHeightmapEnd; // size: 0x10, address: 0x5053C0
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

/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00479690 -> 0x0047994C
*/
// Range: 0x479690 -> 0x47994C
void iWaterAnimateEnd(float * Ay /* r2 */, float * Nx /* r2 */, float * Ny /* r2 */, float * Nz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x479690 -> 0x47994C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00479950 -> 0x004799C0
*/
// Range: 0x479950 -> 0x4799C0
void iWaterAnimateBegin(signed int xsize /* r2 */, signed int zsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x479950 -> 0x4799C0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004799C0 -> 0x00479BD0
*/
// Range: 0x4799C0 -> 0x479BD0
void iWaterAnimateUploadWaves(class iWaterInstancedWaves * iwaves /* r17 */, signed int iwaves_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4799C0 -> 0x479BD0
        class iWaterInstancedWaves test_iwaves[3]; // @ 0x006B5EE0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00479BD0 -> 0x00479BEC
*/
// Range: 0x479BD0 -> 0x479BEC
void iWaterAnimateUploadCode() {
    /* anonymous block */ {
        // Range: 0x479BD0 -> 0x479BEC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00479BF0 -> 0x00479CD4
*/
// Range: 0x479BF0 -> 0x479CD4
void iWaterMoveWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float x /* r22 */, float z /* r21 */) {
    /* anonymous block */ {
        // Range: 0x479BF0 -> 0x479CD4
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float t; // r29+0x70
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iWater.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00479CE0 -> 0x00479DC8
*/
// Range: 0x479CE0 -> 0x479DC8
void iWaterSetupWaves(class iWaterInstancedWaves * out /* r17 */, signed int out_size /* r2 */, class iWaterWave * waves /* r16 */, float dxz /* r21 */) {
    /* anonymous block */ {
        // Range: 0x479CE0 -> 0x479DC8
        class iWaterInstancedWaves * end_out; // r2
        signed int i; // r20
        float tx; // r20
        float tz; // r20
    }
}


