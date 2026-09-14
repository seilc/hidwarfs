/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\basync.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8044B154 -> 0x8044B768
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EDEA0
// Range: 0x8044B154 -> 0x8044B26C
static void FrameSyncHierarchyRecurse(struct RwFrame * frame /* r31 */, int flags /* r1+0x8 */) {
    // Local variables
    int accumflags; // r29
    struct RwLLLink * current; // r30
    struct RwLLLink * end; // r27
    struct RwObjectHasFrame * object; // r28

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EDEBA
// Range: 0x8044B26C -> 0x8044B374
static void FrameSyncHierarchyRecurseNoLTM(struct RwFrame * frame /* r31 */) {
    // Local variables
    struct RwLLLink * current; // r30
    struct RwLLLink * end; // r27
    struct RwObjectHasFrame * object; // r28

    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDED9
// Range: 0x8044B374 -> 0x8044B4FC
static void FrameSyncHierarchy(struct RwFrame * frame /* r31 */) {
    // Local variables
    int oldFlags; // r28
    struct RwLLLink * current; // r30
    struct RwLLLink * end; // r24
    struct RwObjectHasFrame * object; // r26
    struct RwLLLink * current; // r29
    struct RwLLLink * end; // r23
    struct RwObjectHasFrame * object; // r25

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDEEC
// Range: 0x8044B4FC -> 0x8044B590
int _rwFrameSyncDirty() {
    // Local variables
    struct RwLLLink * lpFrameCur; // r31
    struct RwLLLink * lpFrameEnd; // r30
    struct RwFrame * rootFrame; // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EDEFE
// Range: 0x8044B590 -> 0x8044B66C
static void FrameSyncHierarchyLTMRecurse(struct RwFrame * frame /* r31 */, int flags /* r1+0x8 */) {
    // Local variables
    int accumflags; // r30

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDF1B
// Range: 0x8044B66C -> 0x8044B768
void _rwFrameSyncHierarchyLTM(struct RwFrame * frame /* r31 */) {
    // Local variables
    int oldFlags; // r30

    // References
    // -> static char __dbFunctionName[25];
}


