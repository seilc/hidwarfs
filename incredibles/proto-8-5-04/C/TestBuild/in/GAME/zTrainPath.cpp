/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class zTrainPathJunction * all_junctions; // size: 0x4, address: 0x608F7C
static unsigned char init_done; // size: 0x1, address: 0x608F80
void Event(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x2B98A0
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
// total size: 0x28
class zTrainPathJunction : public xBase {
    // Members
public:
    class zTrainPathJunctionAsset * junct_asset; // offset 0x10, size 0x4
    class NURBS * in_spline; // offset 0x14, size 0x4
    class NURBS * out1_spline; // offset 0x18, size 0x4
    class NURBS * out2_spline; // offset 0x1C, size 0x4
    unsigned char use_out1; // offset 0x20, size 0x1
    class zTrainPathJunction * next; // offset 0x24, size 0x4
};
// total size: 0x28
class zTrainPathJunctionAsset : public xDynAsset {
    // Members
public:
    unsigned int in_spline; // offset 0x10, size 0x4
    unsigned char in_is_from_forward; // offset 0x14, size 0x1
    unsigned int out1_spline; // offset 0x18, size 0x4
    unsigned char out1_is_forward; // offset 0x1C, size 0x1
    unsigned int out2_spline; // offset 0x20, size 0x4
    unsigned char out2_is_forward; // offset 0x24, size 0x1
};
// total size: 0x1C
class NURBS : public xBaseAsset {
    // Members
public:
    signed int p; // offset 0x8, size 0x4
    signed int m; // offset 0xC, size 0x4
    signed int n; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    class xVec3 * control; // offset 0x18, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
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

/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9800 -> 0x002B980C
*/
// Range: 0x2B9800 -> 0x2B980C
void Reset() {
    /* anonymous block */ {
        // Range: 0x2B9800 -> 0x2B980C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9810 -> 0x002B9894
*/
// Range: 0x2B9810 -> 0x2B9894
// this: r2
void zTrainPathJunction::Event(unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B9810 -> 0x2B9894
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B98A0 -> 0x002B98B0
*/
// Range: 0x2B98A0 -> 0x2B98B0
void Event(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B98A0 -> 0x2B98B0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B98B0 -> 0x002B98F4
*/
// Range: 0x2B98B0 -> 0x2B98F4
// this: r2
void zTrainPathJunction::GetCurrentOut(class NURBS * & out_curve /* r2 */, unsigned char & travel_increasing_u /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B98B0 -> 0x2B98F4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9900 -> 0x002B99A0
*/
// Range: 0x2B9900 -> 0x2B99A0
void Init(class xBase & data /* r17 */, class xDynAsset & asset /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2B9900 -> 0x2B99A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B99A0 -> 0x002B99F8
*/
// Range: 0x2B99A0 -> 0x2B99F8
class zTrainPathJunction * GetPathEnd(class NURBS * curve /* r2 */, unsigned char along_increasing_u /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B99A0 -> 0x2B99F8
        class zTrainPathJunction * junct; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zTrainPath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B9A00 -> 0x002B9AA8
*/
// Range: 0x2B9A00 -> 0x2B9AA8
void InitDone() {
    /* anonymous block */ {
        // Range: 0x2B9A00 -> 0x2B9AA8
        class zTrainPathJunction * junct; // r16
    }
}


