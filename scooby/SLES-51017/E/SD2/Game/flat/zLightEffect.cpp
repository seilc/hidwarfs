/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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
    Code range: 0x001DA1D0 -> 0x001DA3C0
*/
// Range: 0x1DA1D0 -> 0x1DA3C0
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1DA1D0 -> 0x1DA3C0
        float amount; // r29+0x40
        float * reg; // r17
        class iLight * l; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA3C0 -> 0x001DA3D0
*/
// Range: 0x1DA3C0 -> 0x1DA3D0
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DA3C0 -> 0x1DA3D0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA3D0 -> 0x001DA3D8
*/
// Range: 0x1DA3D0 -> 0x1DA3D8
void zLightEffectRandomColFast() {
    /* anonymous block */ {
        // Range: 0x1DA3D0 -> 0x1DA3D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA3E0 -> 0x001DA3E8
*/
// Range: 0x1DA3E0 -> 0x1DA3E8
void zLightEffectRandomCol() {
    /* anonymous block */ {
        // Range: 0x1DA3E0 -> 0x1DA3E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA3F0 -> 0x001DA3F8
*/
// Range: 0x1DA3F0 -> 0x1DA3F8
void zLightEffectRandomColSlow() {
    /* anonymous block */ {
        // Range: 0x1DA3F0 -> 0x1DA3F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA400 -> 0x001DA408
*/
// Range: 0x1DA400 -> 0x1DA408
void zLightEffectHalfDimFast() {
    /* anonymous block */ {
        // Range: 0x1DA400 -> 0x1DA408
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA410 -> 0x001DA418
*/
// Range: 0x1DA410 -> 0x1DA418
void zLightEffectHalfDim() {
    /* anonymous block */ {
        // Range: 0x1DA410 -> 0x1DA418
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA420 -> 0x001DA428
*/
// Range: 0x1DA420 -> 0x1DA428
void zLightEffectHalfDimSlow() {
    /* anonymous block */ {
        // Range: 0x1DA420 -> 0x1DA428
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA430 -> 0x001DA438
*/
// Range: 0x1DA430 -> 0x1DA438
void zLightEffectDimFast() {
    /* anonymous block */ {
        // Range: 0x1DA430 -> 0x1DA438
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA440 -> 0x001DA448
*/
// Range: 0x1DA440 -> 0x1DA448
void zLightEffectDim() {
    /* anonymous block */ {
        // Range: 0x1DA440 -> 0x1DA448
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA450 -> 0x001DA458
*/
// Range: 0x1DA450 -> 0x1DA458
void zLightEffectDimSlow() {
    /* anonymous block */ {
        // Range: 0x1DA450 -> 0x1DA458
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA460 -> 0x001DA468
*/
// Range: 0x1DA460 -> 0x1DA468
void zLightEffectStrobeFast() {
    /* anonymous block */ {
        // Range: 0x1DA460 -> 0x1DA468
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA470 -> 0x001DA478
*/
// Range: 0x1DA470 -> 0x1DA478
void zLightEffectStrobe() {
    /* anonymous block */ {
        // Range: 0x1DA470 -> 0x1DA478
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA480 -> 0x001DA488
*/
// Range: 0x1DA480 -> 0x1DA488
void zLightEffectStrobeSlow() {
    /* anonymous block */ {
        // Range: 0x1DA480 -> 0x1DA488
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA490 -> 0x001DA4AC
*/
// Range: 0x1DA490 -> 0x1DA4AC
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1DA490 -> 0x1DA4AC
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA4B0 -> 0x001DA4D4
*/
// Range: 0x1DA4B0 -> 0x1DA4D4
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1DA4B0 -> 0x1DA4D4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA4E0 -> 0x001DA504
*/
// Range: 0x1DA4E0 -> 0x1DA504
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1DA4E0 -> 0x1DA504
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA510 -> 0x001DA714
*/
// Range: 0x1DA510 -> 0x1DA714
static void EffectFlicker(class _zLight * zlight /* r17 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1DA510 -> 0x1DA714
        float * reg; // r18
        class iLight * l; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA720 -> 0x001DA730
*/
// Range: 0x1DA720 -> 0x1DA730
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DA720 -> 0x1DA730
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA730 -> 0x001DA738
*/
// Range: 0x1DA730 -> 0x1DA738
void zLightEffectInitRandomCol() {
    /* anonymous block */ {
        // Range: 0x1DA730 -> 0x1DA738
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA740 -> 0x001DA748
*/
// Range: 0x1DA740 -> 0x1DA748
void zLightEffectInitHalfDim() {
    /* anonymous block */ {
        // Range: 0x1DA740 -> 0x1DA748
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA750 -> 0x001DA758
*/
// Range: 0x1DA750 -> 0x1DA758
void zLightEffectInitDim() {
    /* anonymous block */ {
        // Range: 0x1DA750 -> 0x1DA758
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA760 -> 0x001DA768
*/
// Range: 0x1DA760 -> 0x1DA768
void zLightEffectInitStrobe() {
    /* anonymous block */ {
        // Range: 0x1DA760 -> 0x1DA768
    }
}


