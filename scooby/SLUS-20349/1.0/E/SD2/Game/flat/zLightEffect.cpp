/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
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
// total size: 0x44
class zLightAsset : public p2BaseAsset {
    // Members
public:
    unsigned char lightType; // offset 0x8, size 0x1
    unsigned char lightEffect; // offset 0x9, size 0x1
    unsigned char lightPad[2]; // offset 0xA, size 0x2
    unsigned int lightFlags; // offset 0xC, size 0x4
    float lightColor[4]; // offset 0x10, size 0x10
    class _xVec3 lightDir; // offset 0x20, size 0xC
    float lightConeAngle; // offset 0x2C, size 0x4
    class _xSphere lightSphere; // offset 0x30, size 0x10
    unsigned int attachID; // offset 0x40, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
// total size: 0x3C
class iLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RpLight * hw; // offset 0x4, size 0x4
    class _xSphere sph; // offset 0x8, size 0x10
    float radius_sq; // offset 0x18, size 0x4
    class _xFColor color; // offset 0x1C, size 0x10
    class _xVec3 dir; // offset 0x2C, size 0xC
    float coneangle; // offset 0x38, size 0x4
};
// total size: 0x20
class p2LinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0xC
class _xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
// total size: 0x10
class _xSphere {
    // Members
public:
    class _xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9500 -> 0x001D97C0
*/
// Range: 0x1D9500 -> 0x1D97C0
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1D9500 -> 0x1D97C0
        float amount; // r29+0x40
        float * reg; // r17
        class iLight * l; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D97C0 -> 0x001D97D0
*/
// Range: 0x1D97C0 -> 0x1D97D0
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D97C0 -> 0x1D97D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D97D0 -> 0x001D97D8
*/
// Range: 0x1D97D0 -> 0x1D97D8
void zLightEffectRandomColFast() {
    /* anonymous block */ {
        // Range: 0x1D97D0 -> 0x1D97D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D97E0 -> 0x001D97E8
*/
// Range: 0x1D97E0 -> 0x1D97E8
void zLightEffectRandomCol() {
    /* anonymous block */ {
        // Range: 0x1D97E0 -> 0x1D97E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D97F0 -> 0x001D97F8
*/
// Range: 0x1D97F0 -> 0x1D97F8
void zLightEffectRandomColSlow() {
    /* anonymous block */ {
        // Range: 0x1D97F0 -> 0x1D97F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9800 -> 0x001D9808
*/
// Range: 0x1D9800 -> 0x1D9808
void zLightEffectHalfDimFast() {
    /* anonymous block */ {
        // Range: 0x1D9800 -> 0x1D9808
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9810 -> 0x001D9818
*/
// Range: 0x1D9810 -> 0x1D9818
void zLightEffectHalfDim() {
    /* anonymous block */ {
        // Range: 0x1D9810 -> 0x1D9818
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9820 -> 0x001D9828
*/
// Range: 0x1D9820 -> 0x1D9828
void zLightEffectHalfDimSlow() {
    /* anonymous block */ {
        // Range: 0x1D9820 -> 0x1D9828
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9830 -> 0x001D9838
*/
// Range: 0x1D9830 -> 0x1D9838
void zLightEffectDimFast() {
    /* anonymous block */ {
        // Range: 0x1D9830 -> 0x1D9838
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9840 -> 0x001D9848
*/
// Range: 0x1D9840 -> 0x1D9848
void zLightEffectDim() {
    /* anonymous block */ {
        // Range: 0x1D9840 -> 0x1D9848
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9850 -> 0x001D9858
*/
// Range: 0x1D9850 -> 0x1D9858
void zLightEffectDimSlow() {
    /* anonymous block */ {
        // Range: 0x1D9850 -> 0x1D9858
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9860 -> 0x001D9868
*/
// Range: 0x1D9860 -> 0x1D9868
void zLightEffectStrobeFast() {
    /* anonymous block */ {
        // Range: 0x1D9860 -> 0x1D9868
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9870 -> 0x001D9878
*/
// Range: 0x1D9870 -> 0x1D9878
void zLightEffectStrobe() {
    /* anonymous block */ {
        // Range: 0x1D9870 -> 0x1D9878
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9880 -> 0x001D9888
*/
// Range: 0x1D9880 -> 0x1D9888
void zLightEffectStrobeSlow() {
    /* anonymous block */ {
        // Range: 0x1D9880 -> 0x1D9888
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9890 -> 0x001D98AC
*/
// Range: 0x1D9890 -> 0x1D98AC
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1D9890 -> 0x1D98AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D98B0 -> 0x001D98D4
*/
// Range: 0x1D98B0 -> 0x1D98D4
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1D98B0 -> 0x1D98D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D98E0 -> 0x001D9904
*/
// Range: 0x1D98E0 -> 0x1D9904
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1D98E0 -> 0x1D9904
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9910 -> 0x001D9C1C
*/
// Range: 0x1D9910 -> 0x1D9C1C
static void EffectFlicker(class _zLight * zlight /* r17 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1D9910 -> 0x1D9C1C
        float * reg; // r18
        class iLight * l; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9C20 -> 0x001D9C30
*/
// Range: 0x1D9C20 -> 0x1D9C30
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D9C20 -> 0x1D9C30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9C30 -> 0x001D9C38
*/
// Range: 0x1D9C30 -> 0x1D9C38
void zLightEffectInitRandomCol() {
    /* anonymous block */ {
        // Range: 0x1D9C30 -> 0x1D9C38
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9C40 -> 0x001D9C48
*/
// Range: 0x1D9C40 -> 0x1D9C48
void zLightEffectInitHalfDim() {
    /* anonymous block */ {
        // Range: 0x1D9C40 -> 0x1D9C48
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9C50 -> 0x001D9C58
*/
// Range: 0x1D9C50 -> 0x1D9C58
void zLightEffectInitDim() {
    /* anonymous block */ {
        // Range: 0x1D9C50 -> 0x1D9C58
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D9C60 -> 0x001D9C68
*/
// Range: 0x1D9C60 -> 0x1D9C68
void zLightEffectInitStrobe() {
    /* anonymous block */ {
        // Range: 0x1D9C60 -> 0x1D9C68
    }
}


