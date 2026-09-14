/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zHeistMovementPath.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801900EC -> 0x80190EDC
*/
class zHeistMovementPathManager * heistMovementPathManager; // size: 0x4, address: 0x803C3610
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x38
struct zHeistMovementPathAsset : public xDynAsset {
    // Members
    unsigned int startingPointId; // offset 0x10, size 0x4
    unsigned int endingPointId; // offset 0x14, size 0x4
    unsigned int connectStartPathIds[3]; // offset 0x18, size 0xC
    unsigned int connectEndPathIds[3]; // offset 0x24, size 0xC
    unsigned int gangMemberDetectionPointId; // offset 0x30, size 0x4
    unsigned int enemyDetectionPointId; // offset 0x34, size 0x4
};
// total size: 0x28
struct xMovePointAsset : public xBaseAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
// total size: 0x0
struct xSpline3 {};
// total size: 0x30
struct xMovePoint : public xBase {
    // Members
    struct xMovePointAsset * asset; // offset 0x10, size 0x4
    struct xVec3 * pos; // offset 0x14, size 0x4
    struct xMovePoint * * nodes; // offset 0x18, size 0x4
    struct xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    float delay; // offset 0x28, size 0x4
    struct xSpline3 * spl; // offset 0x2C, size 0x4
};
// total size: 0x24
struct RxObjSpace3DVertex {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float nx; // offset 0xC, size 0x4
    float ny; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    unsigned char r; // offset 0x18, size 0x1
    unsigned char g; // offset 0x19, size 0x1
    unsigned char b; // offset 0x1A, size 0x1
    unsigned char a; // offset 0x1B, size 0x1
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0x50
class zHeistMovementPath : public xBase {
    // Functions
    zHeistMovementPath(struct zHeistMovementPathAsset * theAsset);

    void SceneEnter();

    unsigned char ValidatePath();

    void RenderOverlay(int selectedPath);

    void EventCB(unsigned int toEvent);

    void StoreConnectingPathIndices();

    int GetDefaultPathSelectIdx(int atStart);

    int GetNextPathSelectIdx(int currSelectIdx, int atStart);

    int GetPrevPathSelectIdx(int currSelectIdx, int atStart);

    unsigned char ConnectedAtStart(int testIdx);

    unsigned char ConnectedAtEnd(int testIdx);

    // Static members
    static class zHeistMovementPathManager * heistMovementPathManager; // size: 0x4

    // Members
protected:
    struct zHeistMovementPathAsset * pathAsset; // offset 0x10, size 0x4
    int pathArrayIdx; // offset 0x14, size 0x4
    int numPoints; // offset 0x18, size 0x4
    struct xMovePoint * startingPoint; // offset 0x1C, size 0x4
    struct xMovePoint * endingPoint; // offset 0x20, size 0x4
    struct xMovePoint * gangMemberDetectionPoint; // offset 0x24, size 0x4
    struct xMovePoint * enemyDetectionPoint; // offset 0x28, size 0x4
    struct xMovePoint * * movePointChain; // offset 0x2C, size 0x4
    struct RxObjSpace3DVertex * vertexArray; // offset 0x30, size 0x4
    int connectStartPathArrayIdx[3]; // offset 0x34, size 0xC
    int connectEndPathArrayIdx[3]; // offset 0x40, size 0xC
    unsigned int pathState; // offset 0x4C, size 0x4
};
// Range: 0x801900EC -> 0x801901B8
// this: r30
zHeistMovementPath::zHeistMovementPath(struct zHeistMovementPathAsset * theAsset /* r31 */) {
    // References
    // -> class zHeistMovementPathManager * heistMovementPathManager;
}

// Range: 0x801901B8 -> 0x801901FC
void zHeistMovementPath::Init(struct xBase & data /* r3 */, struct xDynAsset & asset /* r31 */) {}

// Range: 0x801901FC -> 0x80190238
// this: r31
void zHeistMovementPath::SceneEnter() {
    // References
    // -> class zHeistMovementPathManager * heistMovementPathManager;
}

unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x80190238 -> 0x80190358
// this: r31
unsigned char zHeistMovementPath::ValidatePath() {
    // Local variables
    struct xMovePoint * next; // r4
    signed short i; // r5

    // References
    // -> unsigned int gActiveHeap;
}

// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
struct xVec3 m_UnitAxisX; // size: 0xC, address: 0x803C5750
struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x803C575C
void * RwEngineInstance; // size: 0x4, address: 0x803C4584
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x80190358 -> 0x80190670
// this: r26
void zHeistMovementPath::RenderOverlay(int selectedPath /* r16 */) {
    // Local variables
    struct xVec3 forwardVec; // r1+0x40
    int i; // r27
    struct xVec3 centerPoint; // r1+0x34
    struct xVec3 sidewaysVec; // r1+0x28
    struct xVec3 rightPoint; // r1+0x1C
    struct xVec3 leftPoint; // r1+0x10
    enum RwBlendFunction srcBlend; // r1+0xC
    enum RwBlendFunction destBlend; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> struct xVec3 m_UnitAxisX;
    // -> struct xVec3 m_UnitAxisY;
}

// Range: 0x80190670 -> 0x8019069C
void zHeistMovementPath::EventCB(struct xBase * from /* r0 */, struct xBase * to /* r4 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */, struct xBase * toParamWidget /* r0 */, unsigned int toParamWidgetID /* r0 */) {}

// Range: 0x8019069C -> 0x801906F8
// this: r0
void zHeistMovementPath::EventCB(unsigned int toEvent /* r0 */) {}

// Range: 0x801906F8 -> 0x801907A0
// this: r29
void zHeistMovementPath::StoreConnectingPathIndices() {
    // Local variables
    class zHeistMovementPath * sPath; // r0
    class zHeistMovementPath * ePath; // r0
    int i; // r30
}

// Range: 0x801907A0 -> 0x8019082C
// this: r3
int zHeistMovementPath::GetDefaultPathSelectIdx(int atStart /* r0 */) {
    // Local variables
    int i; // r0
    int i; // r0
}

// Range: 0x8019082C -> 0x801909A4
// this: r30
int zHeistMovementPath::GetNextPathSelectIdx(int currSelectIdx /* r31 */, int atStart /* r29 */) {
    // Local variables
    int i; // r5
    int prevSelectPath; // r6
    int prevSelectPath; // r6
}

// Range: 0x801909A4 -> 0x80190B84
// this: r30
int zHeistMovementPath::GetPrevPathSelectIdx(int currSelectIdx /* r31 */, int atStart /* r29 */) {
    // Local variables
    int i; // r0
    int i; // r0
    int i; // r5
    int prevSelectPath; // r6
    int prevSelectPath; // r6
}

// Range: 0x80190B84 -> 0x80190BB8
// this: r0
unsigned char zHeistMovementPath::ConnectedAtStart(int testIdx /* r0 */) {
    // Local variables
    int i; // r0
}

// Range: 0x80190BB8 -> 0x80190BEC
// this: r0
unsigned char zHeistMovementPath::ConnectedAtEnd(int testIdx /* r0 */) {
    // Local variables
    int i; // r0
}

// total size: 0xC
class zHeistMovementPathManager {
    // Functions
    void Init();

    void RenderOverlays();

    void RegisterPath(class zHeistMovementPath * regPath);

    int AddToPathCount();

    void InsertPath(class zHeistMovementPath * insPath, int idx);

    void SetDefaultPathSelect(int pathIdx, int atStart);

    void NextPathSelect(int pathIdx, int atStart);

    void PrevPathSelect(int pathIdx, int atStart);

    unsigned char ValidSelectedPath();

    // Members
protected:
    int pathCount; // offset 0x0, size 0x4
    class zHeistMovementPath * * pathArray; // offset 0x4, size 0x4
    int selectedPathIdx; // offset 0x8, size 0x4
};
// Range: 0x80190BEC -> 0x80190C1C
// this: r0
void zHeistMovementPathManager::Init() {}

// Range: 0x80190C1C -> 0x80190C40
void zHeistMovementPathManager::Exit() {}

// Range: 0x80190C40 -> 0x80190CB8
// this: r29
void zHeistMovementPathManager::RenderOverlays() {
    // Local variables
    int i; // r30
}

// Range: 0x80190CB8 -> 0x80190D30
// this: r30
void zHeistMovementPathManager::RegisterPath(class zHeistMovementPath * regPath /* r31 */) {
    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80190D30 -> 0x80190D44
// this: r0
int zHeistMovementPathManager::AddToPathCount() {
    // Local variables
    int idx; // r4
}

// Range: 0x80190D44 -> 0x80190D54
// this: r0
void zHeistMovementPathManager::InsertPath(class zHeistMovementPath * insPath /* r0 */, int idx /* r0 */) {}

// Range: 0x80190D54 -> 0x80190D94
// this: r31
void zHeistMovementPathManager::SetDefaultPathSelect(int pathIdx /* r0 */, int atStart /* r5 */) {}

// Range: 0x80190D94 -> 0x80190E20
// this: r28
void zHeistMovementPathManager::NextPathSelect(int pathIdx /* r0 */, int atStart /* r29 */) {
    // Local variables
    int tempIdx; // r30
}

// Range: 0x80190E20 -> 0x80190EAC
// this: r28
void zHeistMovementPathManager::PrevPathSelect(int pathIdx /* r0 */, int atStart /* r29 */) {
    // Local variables
    int tempIdx; // r30
}

// Range: 0x80190EAC -> 0x80190EDC
// this: r0
unsigned char zHeistMovementPathManager::ValidSelectedPath() {}


