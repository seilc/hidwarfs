/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\gc\water\texcache.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80125FBC -> 0x80126220
*/
// total size: 0x10
struct _GXTexRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
static struct _GXTexRegion StandardRegions[8]; // size: 0x80, address: 0x8037F0E8
static struct _GXTexRegion Mipmap32Regions[2]; // size: 0x20, address: 0x803C17F8
static struct _GXTexRegion CIRegions[2]; // size: 0x20, address: 0x803C1818
// total size: 0x10
struct _GXTlutRegion {
    // Members
    unsigned long dummy[4]; // offset 0x0, size 0x10
};
static struct _GXTlutRegion TlutRegions[8]; // size: 0x80, address: 0x8037F168
static unsigned int count; // size: 0x4, address: 0x803C1838
static signed char init; // size: 0x1, address: 0x803C183C
static unsigned int countCI; // size: 0x4, address: 0x803C1840
static signed char init; // size: 0x1, address: 0x803C1844
static unsigned int count32B; // size: 0x4, address: 0x803C1848
static signed char init; // size: 0x1, address: 0x803C184C
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
// Range: 0x80125FBC -> 0x801260C8
static struct _GXTexRegion * TexRegionCallback(const struct _GXTexObj * t_obj /* r30 */) {
    // Local variables
    struct _GXTexRegion * texRegion; // r3
    enum _GXTexFmt fmt; // r0

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

// Range: 0x801260C8 -> 0x801260DC
static struct _GXTlutRegion * TlutRegionCallback(unsigned long tlut_name /* r0 */) {
    // References
    // -> static struct _GXTlutRegion TlutRegions[8];
}

// Range: 0x801260DC -> 0x80126220
void TexCacheInit() {
    // Local variables
    int i; // r29
    unsigned int lowOffset; // r28
    unsigned int highOffset; // r27

    // References
    // -> static struct _GXTlutRegion TlutRegions[8];
    // -> static struct _GXTexRegion CIRegions[2];
    // -> static struct _GXTexRegion Mipmap32Regions[2];
    // -> static struct _GXTexRegion StandardRegions[8];
}


