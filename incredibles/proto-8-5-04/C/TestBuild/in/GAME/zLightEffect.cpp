/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x64
class _zLight : public xBase {
    // Members
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zLightAsset * tasset; // offset 0x14, size 0x4
    class iLight light; // offset 0x18, size 0x3C
    class xBase * attached_to; // offset 0x54, size 0x4
    signed int true_idx; // offset 0x58, size 0x4
    float * reg; // offset 0x5C, size 0x4
    signed int effect_idx; // offset 0x60, size 0x4
};
// total size: 0x10
class _xFColor {
    // Members
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
// total size: 0x3C
class iLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RpLight * hw; // offset 0x4, size 0x4
    class xSphere sph; // offset 0x8, size 0x10
    float radius_sq; // offset 0x18, size 0x4
    class _xFColor color; // offset 0x1C, size 0x10
    class xVec3 dir; // offset 0x2C, size 0xC
    float coneangle; // offset 0x38, size 0x4
};
// total size: 0x40
class RpLight {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x44
class zLightAsset : public xBaseAsset {
    // Members
public:
    unsigned char lightType; // offset 0x8, size 0x1
    unsigned char lightEffect; // offset 0x9, size 0x1
    unsigned char lightPad[2]; // offset 0xA, size 0x2
    unsigned int lightFlags; // offset 0xC, size 0x4
    float lightColor[4]; // offset 0x10, size 0x10
    class xVec3 lightDir; // offset 0x20, size 0xC
    float lightConeAngle; // offset 0x2C, size 0x4
    class xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00136E00 -> 0x0013708C
*/
// Range: 0x136E00 -> 0x13708C
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x136E00 -> 0x13708C
        class iLight * l; // r17
        float * reg; // r16
        float amount; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137090 -> 0x001370A0
*/
// Range: 0x137090 -> 0x1370A0
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x137090 -> 0x1370A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370A0 -> 0x001370A8
*/
// Range: 0x1370A0 -> 0x1370A8
void zLightEffectRandomColFast() {
    /* anonymous block */ {
        // Range: 0x1370A0 -> 0x1370A8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370B0 -> 0x001370B8
*/
// Range: 0x1370B0 -> 0x1370B8
void zLightEffectRandomCol() {
    /* anonymous block */ {
        // Range: 0x1370B0 -> 0x1370B8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370C0 -> 0x001370C8
*/
// Range: 0x1370C0 -> 0x1370C8
void zLightEffectRandomColSlow() {
    /* anonymous block */ {
        // Range: 0x1370C0 -> 0x1370C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370D0 -> 0x001370D8
*/
// Range: 0x1370D0 -> 0x1370D8
void zLightEffectHalfDimFast() {
    /* anonymous block */ {
        // Range: 0x1370D0 -> 0x1370D8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370E0 -> 0x001370E8
*/
// Range: 0x1370E0 -> 0x1370E8
void zLightEffectHalfDim() {
    /* anonymous block */ {
        // Range: 0x1370E0 -> 0x1370E8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001370F0 -> 0x001370F8
*/
// Range: 0x1370F0 -> 0x1370F8
void zLightEffectHalfDimSlow() {
    /* anonymous block */ {
        // Range: 0x1370F0 -> 0x1370F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137100 -> 0x00137108
*/
// Range: 0x137100 -> 0x137108
void zLightEffectDimFast() {
    /* anonymous block */ {
        // Range: 0x137100 -> 0x137108
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137110 -> 0x00137118
*/
// Range: 0x137110 -> 0x137118
void zLightEffectDim() {
    /* anonymous block */ {
        // Range: 0x137110 -> 0x137118
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137120 -> 0x00137128
*/
// Range: 0x137120 -> 0x137128
void zLightEffectDimSlow() {
    /* anonymous block */ {
        // Range: 0x137120 -> 0x137128
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137130 -> 0x00137138
*/
// Range: 0x137130 -> 0x137138
void zLightEffectStrobeFast() {
    /* anonymous block */ {
        // Range: 0x137130 -> 0x137138
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137140 -> 0x00137148
*/
// Range: 0x137140 -> 0x137148
void zLightEffectStrobe() {
    /* anonymous block */ {
        // Range: 0x137140 -> 0x137148
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137150 -> 0x00137158
*/
// Range: 0x137150 -> 0x137158
void zLightEffectStrobeSlow() {
    /* anonymous block */ {
        // Range: 0x137150 -> 0x137158
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137160 -> 0x0013717C
*/
// Range: 0x137160 -> 0x13717C
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x137160 -> 0x13717C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137180 -> 0x001371A4
*/
// Range: 0x137180 -> 0x1371A4
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x137180 -> 0x1371A4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001371B0 -> 0x001371D4
*/
// Range: 0x1371B0 -> 0x1371D4
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1371B0 -> 0x1371D4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001371E0 -> 0x001374D4
*/
// Range: 0x1371E0 -> 0x1374D4
static void EffectFlicker(class _zLight * zlight /* r18 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1371E0 -> 0x1374D4
        class iLight * l; // r17
        float * reg; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001374E0 -> 0x001374F0
*/
// Range: 0x1374E0 -> 0x1374F0
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1374E0 -> 0x1374F0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001374F0 -> 0x001374F8
*/
// Range: 0x1374F0 -> 0x1374F8
void zLightEffectInitRandomCol() {
    /* anonymous block */ {
        // Range: 0x1374F0 -> 0x1374F8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137500 -> 0x00137508
*/
// Range: 0x137500 -> 0x137508
void zLightEffectInitHalfDim() {
    /* anonymous block */ {
        // Range: 0x137500 -> 0x137508
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137510 -> 0x00137518
*/
// Range: 0x137510 -> 0x137518
void zLightEffectInitDim() {
    /* anonymous block */ {
        // Range: 0x137510 -> 0x137518
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00137520 -> 0x00137528
*/
// Range: 0x137520 -> 0x137528
void zLightEffectInitStrobe() {
    /* anonymous block */ {
        // Range: 0x137520 -> 0x137528
    }
}


