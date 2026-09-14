/*
    Compile unit: C:\TestBuild\in\GAME\zParticleSystems.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0x34
struct /* @anon2 */ {} zParticleSystemWaterfallSplash::__vtable; // size: 0x34, address: 0x6061F0
// total size: 0x34
struct /* @anon4 */ {} zParticleSystem::__vtable; // size: 0x34, address: 0x606190
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x34
struct /* @anon1 */ {} zParticleSystemWaterfallMist::__vtable; // size: 0x34, address: 0x606250
// total size: 0x34
struct /* @anon3 */ {} zParticleSystemWaterfall::__vtable; // size: 0x34, address: 0x6062B0
// total size: 0x34
struct /* @anon0 */ {} zParticleSystemDummy::__vtable; // size: 0x34, address: 0x606150
// total size: 0x18
class zParticleSystem {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    signed int need; // offset 0x4, size 0x4
    class zParticleGenerator * * generators; // offset 0x8, size 0x4
    signed int generators_size; // offset 0xC, size 0x4
    signed int generators_active; // offset 0x10, size 0x4
};
// total size: 0x8
class volume_model_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char exclude; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
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
// total size: 0x34
struct /* @anon0 */ {};
// total size: 0x34
struct /* @anon1 */ {};
// total size: 0x14
class motion_data {
    // Members
public:
    union { // inferred
        class motion_none_data none; // offset 0x0, size 0x1
        class motion_spiral_data spiral; // offset 0x0, size 0x14
    };
};
// total size: 0xC
class volume_data {
    // Members
public:
    union { // inferred
        class volume_point_data point; // offset 0x0, size 0x1
        class volume_sphere_data sphere; // offset 0x0, size 0x4
        class volume_circle_data circle; // offset 0x0, size 0x8
        class volume_line_data line; // offset 0x0, size 0xC
        class volume_model_data model; // offset 0x0, size 0x8
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
// total size: 0x1
class attach_fixed_data {};
// total size: 0x8
class attach_entity_data {
    // Members
public:
    unsigned int entity; // offset 0x0, size 0x4
    unsigned char bone; // offset 0x4, size 0x1
    unsigned char pad1; // offset 0x5, size 0x1
    unsigned char pad2; // offset 0x6, size 0x1
    unsigned char pad3; // offset 0x7, size 0x1
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
// total size: 0x8
class relative_ordering {
    // Members
public:
    signed int other; // offset 0x0, size 0x4
    unsigned char before_other; // offset 0x4, size 0x1
};
// total size: 0x34
struct /* @anon2 */ {};
// total size: 0x10
class attach_entity_tag_data {
    // Members
public:
    unsigned int entity; // offset 0x0, size 0x4
    class xVec3 tag; // offset 0x4, size 0xC
};
// total size: 0x1
class volume_point_data {};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x1C
class zParticleGenerator : public xBase {
    // Members
public:
    class zParticleAsset * asset; // offset 0x10, size 0x4
    signed int flags; // offset 0x14, size 0x4
};
// total size: 0x4
class volume_sphere_data {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class attach_data {
    // Members
public:
    union { // inferred
        class attach_fixed_data fixed; // offset 0x0, size 0x1
        class attach_entity_data entity; // offset 0x0, size 0x8
        class attach_entity_tag_data entity_tag; // offset 0x0, size 0x10
    };
};
// total size: 0xC
class /* @class */ {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
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
class volume_circle_data {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float arc_length; // offset 0x4, size 0x4
};
// total size: 0x68
class zParticleAsset : public xDynAsset {
    // Members
public:
    unsigned char flags; // offset 0x10, size 0x1
    unsigned char attach_flags; // offset 0x11, size 0x1
    unsigned char motion_flags; // offset 0x12, size 0x1
    unsigned char volume_flags; // offset 0x13, size 0x1
    float rate; // offset 0x14, size 0x4
    unsigned int texture; // offset 0x18, size 0x4
    unsigned char attach_type; // offset 0x1C, size 0x1
    unsigned char motion_type; // offset 0x1D, size 0x1
    unsigned char volume_type; // offset 0x1E, size 0x1
    unsigned char system_type; // offset 0x1F, size 0x1
    class xVec3 location; // offset 0x20, size 0xC
    // total size: 0xC
    class /* @class */ {
        // Members
    public:
        float yaw; // offset 0x0, size 0x4
        float pitch; // offset 0x4, size 0x4
        float roll; // offset 0x8, size 0x4
    } axis; // offset 0x2C, size 0xC
    class attach_data attach; // offset 0x38, size 0x10
    class motion_data motion; // offset 0x48, size 0x14
    class volume_data volume; // offset 0x5C, size 0xC
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
// total size: 0xC
class volume_line_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float radius; // offset 0x4, size 0x4
    float length; // offset 0x8, size 0x4
};
// total size: 0x34
struct /* @anon3 */ {};
// total size: 0x1
class motion_none_data {};
// total size: 0x34
struct /* @anon4 */ {};
// total size: 0x14
class motion_spiral_data {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char points; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float radius_inner; // offset 0x4, size 0x4
    float radius_outer; // offset 0x8, size 0x4
    float duration; // offset 0xC, size 0x4
    float frequency; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zParticleSystems.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004639D0 -> 0x00463AFC
*/
// Range: 0x4639D0 -> 0x463AFC
class zParticleSystem * * zParticleSystemCreateAll() {
    /* anonymous block */ {
        // Range: 0x4639D0 -> 0x463AFC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleSystems.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463B00 -> 0x00463B08
*/
// Range: 0x463B00 -> 0x463B08
class zParticleGenerator * create_generator() {
    /* anonymous block */ {
        // Range: 0x463B00 -> 0x463B08
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleSystems.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00463B10 -> 0x00463B18
*/
// Range: 0x463B10 -> 0x463B18
signed int get_asset_size() {
    /* anonymous block */ {
        // Range: 0x463B10 -> 0x463B18
    }
}


