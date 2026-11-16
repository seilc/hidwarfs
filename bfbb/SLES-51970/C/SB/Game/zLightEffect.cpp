/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0xC
class xVec3 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};

/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00180F00 -> 0x00181180
*/
// Range: 0x180F00 -> 0x181180
void zLightEffectCauldron(class _zLight * zlight /* r2 */, float seconds /* r20 */) {
    /* anonymous block */ {
        // Range: 0x180F00 -> 0x181180
        class iLight * l; // r17
        float * reg; // r16
        float amount; // r3
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181180 -> 0x00181190
*/
// Range: 0x181180 -> 0x181190
void zLightEffectInitCauldron(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x181180 -> 0x181190
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181190 -> 0x00181198
*/
// Range: 0x181190 -> 0x181198
void zLightEffectRandomColFast() {
    /* anonymous block */ {
        // Range: 0x181190 -> 0x181198
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811A0 -> 0x001811A8
*/
// Range: 0x1811A0 -> 0x1811A8
void zLightEffectRandomCol() {
    /* anonymous block */ {
        // Range: 0x1811A0 -> 0x1811A8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811B0 -> 0x001811B8
*/
// Range: 0x1811B0 -> 0x1811B8
void zLightEffectRandomColSlow() {
    /* anonymous block */ {
        // Range: 0x1811B0 -> 0x1811B8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811C0 -> 0x001811C8
*/
// Range: 0x1811C0 -> 0x1811C8
void zLightEffectHalfDimFast() {
    /* anonymous block */ {
        // Range: 0x1811C0 -> 0x1811C8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811D0 -> 0x001811D8
*/
// Range: 0x1811D0 -> 0x1811D8
void zLightEffectHalfDim() {
    /* anonymous block */ {
        // Range: 0x1811D0 -> 0x1811D8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811E0 -> 0x001811E8
*/
// Range: 0x1811E0 -> 0x1811E8
void zLightEffectHalfDimSlow() {
    /* anonymous block */ {
        // Range: 0x1811E0 -> 0x1811E8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001811F0 -> 0x001811F8
*/
// Range: 0x1811F0 -> 0x1811F8
void zLightEffectDimFast() {
    /* anonymous block */ {
        // Range: 0x1811F0 -> 0x1811F8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181200 -> 0x00181208
*/
// Range: 0x181200 -> 0x181208
void zLightEffectDim() {
    /* anonymous block */ {
        // Range: 0x181200 -> 0x181208
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181210 -> 0x00181218
*/
// Range: 0x181210 -> 0x181218
void zLightEffectDimSlow() {
    /* anonymous block */ {
        // Range: 0x181210 -> 0x181218
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181220 -> 0x00181228
*/
// Range: 0x181220 -> 0x181228
void zLightEffectStrobeFast() {
    /* anonymous block */ {
        // Range: 0x181220 -> 0x181228
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181230 -> 0x00181238
*/
// Range: 0x181230 -> 0x181238
void zLightEffectStrobe() {
    /* anonymous block */ {
        // Range: 0x181230 -> 0x181238
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181240 -> 0x00181248
*/
// Range: 0x181240 -> 0x181248
void zLightEffectStrobeSlow() {
    /* anonymous block */ {
        // Range: 0x181240 -> 0x181248
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181250 -> 0x0018126C
*/
// Range: 0x181250 -> 0x18126C
void zLightEffectFlickerErratic(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x181250 -> 0x18126C
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181270 -> 0x00181294
*/
// Range: 0x181270 -> 0x181294
void zLightEffectFlickerSlow(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x181270 -> 0x181294
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001812A0 -> 0x001812C4
*/
// Range: 0x1812A0 -> 0x1812C4
void zLightEffectFlicker(class _zLight * zlight /* r2 */, float seconds /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1812A0 -> 0x1812C4
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001812D0 -> 0x001815C8
*/
// Range: 0x1812D0 -> 0x1815C8
static void EffectFlicker(class _zLight * zlight /* r18 */, float seconds /* r29+0x50 */, float min /* r21 */, float rnd /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1812D0 -> 0x1815C8
        class iLight * l; // r17
        float * reg; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001815D0 -> 0x001815E0
*/
// Range: 0x1815D0 -> 0x1815E0
void zLightEffectInitFlicker(class _zLight * zlight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1815D0 -> 0x1815E0
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001815E0 -> 0x001815E8
*/
// Range: 0x1815E0 -> 0x1815E8
void zLightEffectInitRandomCol() {
    /* anonymous block */ {
        // Range: 0x1815E0 -> 0x1815E8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001815F0 -> 0x001815F8
*/
// Range: 0x1815F0 -> 0x1815F8
void zLightEffectInitHalfDim() {
    /* anonymous block */ {
        // Range: 0x1815F0 -> 0x1815F8
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181600 -> 0x00181608
*/
// Range: 0x181600 -> 0x181608
void zLightEffectInitDim() {
    /* anonymous block */ {
        // Range: 0x181600 -> 0x181608
    }
}


/*
    Compile unit: C:\SB\Game\zLightEffect.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00181610 -> 0x00181618
*/
// Range: 0x181610 -> 0x181618
void zLightEffectInitStrobe() {
    /* anonymous block */ {
        // Range: 0x181610 -> 0x181618
    }
}


