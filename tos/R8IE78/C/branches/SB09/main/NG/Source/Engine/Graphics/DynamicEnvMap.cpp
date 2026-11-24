/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\DynamicEnvMap.cpp
*/
static unsigned int s_borderLookupPixels[2048]; // size: 0x2000, address: 0x806CB100
static class _GXTexObj s_borderLookupTexObj; // size: 0x20, address: 0x80774D88
void * displayList; // size: 0x4, address: 0x80774DA8
unsigned long displayListSize; // size: 0x4, address: 0x80774DAC
unsigned char CubeFaceStart; // size: 0x1, address: 0x80774DB0
unsigned char CubeFaceEnd; // size: 0x1, address: 0x806CD100
unsigned char CubeTevMode; // size: 0x1, address: 0x80774DB1
static float angle1[6]; // size: 0x18, address: 0x806CD108
static char axis1[6]; // size: 0x6, address: 0x806CD120
class Texture * texList[2]; // size: 0x8, address: 0x80774DB8
unsigned long SPHERE_MAP_TEXSIZE; // size: 0x4, address: 0x80692C78
enum _GXTexFmt SPHERE_MAP_FMT; // size: 0x4, address: 0x80692C7C
int SPHERE_MAP_SIZE; // size: 0x4, address: 0x80692C80
// Range: 0x801C3080 -> 0x801C3160
static void Graphics::SphereMapPosToNormal(float & nx /* r28 */, float & ny /* r29 */, float & nz /* r30 */, float x /* f29 */, float y /* f30 */) {
    // Local variables
    float nmag; // f31
}
// Range: 0x801C3160 -> 0x801C3468
void Graphics::WiiDynamicEnvMap::Init(unsigned short tess /* r24 */) {
    // Local variables
    long i; // r27
    long j; // r26
    float n1x; // r1+0x1C
    float n1y; // r1+0x18
    float n1z; // r1+0x14
    float n2x; // r1+0x10
    float n2y; // r1+0xC
    float n2z; // r1+0x8
    unsigned long vertSize; // r4
    unsigned long stripSize; // r0
    unsigned long allocSize; // r25

    {
        // Range: 0x801C321C -> 0x801C3388
        // Local variables
        float yb; // f26
        float ya; // f27

        {
            // Range: 0x801C321C -> 0x801C3388
            // Local variables
            float xab; // f25
        }
    }

    // References
    // -> static class _GXTexObj s_borderLookupTexObj;
    // -> static unsigned int s_borderLookupPixels[2048];
    // -> unsigned long displayListSize;
    // -> void * displayList;
}
// Range: 0x801C36E0 -> 0x801C3784
void Graphics::WiiDynamicEnvMap::Register(class Texture * tex /* r29 */) {
    // Local variables
    unsigned char * buffer; // r4

    {
        // Range: 0x801C3704 -> 0x801C3770
        // Local variables
        int i; // r5
    }

    // References
    // -> class Texture * texList[2];
    // -> unsigned char * SharedBuffer;
    // -> unsigned int SharedBufferSize;
}
// signature: Graphics::WiiDynamicEnvMap::Unregister(Graphics::Texture *)
// Range: 0x801C3790 -> 0x801C37C8
void Graphics::WiiDynamicEnvMap::Unregister() {
    {
        // Range: 0x801C379C -> 0x801C37C4
        // Local variables
        int i; // r0
    }

    // References
    // -> class Texture * texList[2];
}
// Range: 0x801C37D0 -> 0x801C4034
void Graphics::WiiDynamicEnvMap::Update(class Viewport * viewp /* r15 */) {
    {
        // Range: 0x801C3810 -> 0x801C3FFC
        // Local variables
        int i; // r16
    }

    // References
    // -> unsigned char CubeFaceEnd;
    // -> unsigned char CubeFaceStart;
    // -> unsigned char CubeTevMode;
    // -> static class _GXTexObj s_borderLookupTexObj;
    // -> void * displayList;
    // -> unsigned long displayListSize;
    // -> class Texture * texList[2];
    // -> static float angle1[6];
    // -> static char axis1[6];
}
