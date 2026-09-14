/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\water\texcache.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239058 -> 0x802392F4
*/
// total size: 0x10
struct _GXTexRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
static struct _GXTexRegion StandardRegions[8]; // size: 0x80, address: 0x80D18660
static struct _GXTexRegion Mipmap32Regions[2]; // size: 0x20, address: 0x80D186E0
static struct _GXTexRegion CIRegions[2]; // size: 0x20, address: 0x80D18700
// total size: 0x10
struct _GXTlutRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
static struct _GXTlutRegion TlutRegions[8]; // size: 0x80, address: 0x80D18720
static unsigned int count; // size: 0x4, address: 0x80D6B048
static signed char init; // size: 0x1, address: 0x80D6B04C
static unsigned int countCI; // size: 0x4, address: 0x80D6B050
static signed char init; // size: 0x1, address: 0x80D6B054
static unsigned int count32B; // size: 0x4, address: 0x80D6B058
static signed char init; // size: 0x1, address: 0x80D6B05C
// total size: 0x20
struct _GXTexObj {
    // Members
    unsigned long dummy[8]; // offset 0x0, size 0x20
};
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
// Range: 0x80239058 -> 0x80239184
static struct _GXTexRegion * TexRegionCallback(const struct _GXTexObj * t_obj /* r29 */) {
    // Local variables
    struct _GXTexRegion * texRegion; // r31
    enum _GXTexFmt fmt; // r30

    // References
    // -> static unsigned int countCI;
    // -> static struct _GXTexRegion CIRegions[2];
    // -> static unsigned int count;
    // -> static struct _GXTexRegion StandardRegions[8];
    // -> static unsigned int count32B;
    // -> static struct _GXTexRegion Mipmap32Regions[2];
    // -> static signed char init;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x80239184 -> 0x80239198
static struct _GXTlutRegion * TlutRegionCallback(unsigned long tlut_name /* r3 */) {
    // References
    // -> static struct _GXTlutRegion TlutRegions[8];
}

// Range: 0x80239198 -> 0x802392F4
void TexCacheInit() {
    // Local variables
    int i; // r31
    unsigned int lowOffset; // r30
    unsigned int highOffset; // r29

    // References
    // -> static struct _GXTlutRegion TlutRegions[8];
    // -> static struct _GXTexRegion CIRegions[2];
    // -> static struct _GXTexRegion Mipmap32Regions[2];
    // -> static struct _GXTexRegion StandardRegions[8];
}


