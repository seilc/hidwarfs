/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zEntSimpleObj.cpp
*/
static unsigned int sMgrCount; // size: 0x4, address: 0x807F8E84
static class zSimpleMgr * sMgrList; // size: 0x4, address: 0x807F8E88
static unsigned int sSimpleCustomCount; // size: 0x4, address: 0x807F8E8C
static class xEnt * * sSimpleCustomList; // size: 0x4, address: 0x807F8E90
static class xOGSchema SimpleObjectSchema; // size: 0x18, address: 0x807F8E98
static class SchemaRegistrator SimpleObjectSchemaReg; // size: 0x8, address: 0x807F8EB0
// Range: 0x801FB790 -> 0x801FBD90
void World::SimpleObjectEntity::UpdateRender(class SimpleObjectEntity * this /* r23 */) {
    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: CmpSimpleMgr(const void *, const void *)
// Range: 0x801FBDD0 -> 0x801FBDD8
static int CmpSimpleMgr() {
}
// signature: VisUpdateSimpleMgr(xEnt *)
// Range: 0x801FBDE0 -> 0x801FBE30
static void VisUpdateSimpleMgr() {
}
// Range: 0x801FBE30 -> 0x801FC3CC
void zEntSimpleObj_MgrInit(class zEntSimpleObj * * entList /* r23 */, unsigned int entCount /* r24 */) {
    // Local variables
    unsigned int i; // r28
    class zEntSimpleObj * * tempEntList; // r27
    unsigned int tempEntCount; // r26
    unsigned int custEntCount; // r25
    class zSimpleMgr * smgr; // r29

    // References
    // -> class zGlobals globals;
    // -> static class xEnt * * sSimpleCustomList;
    // -> static unsigned int sSimpleCustomCount;
    // -> static class zSimpleMgr * sMgrList;
    // -> static unsigned int sMgrCount;
}
// Range: 0x801FC3D0 -> 0x801FC448
void zEntSimpleObj_MgrCustomUpdate(class zScene * s /* r27 */, float dt /* f31 */) {
    // Local variables
    unsigned int i; // r28

    // References
    // -> static unsigned int sSimpleCustomCount;
    // -> static class xEnt * * sSimpleCustomList;
}
// signature: zEntSimpleObj_Render(xEnt *)
// Range: 0x801FC450 -> 0x801FC480
static void zEntSimpleObj_Render() {
}
// signature: zEntSimpleObj_Init(void *, void *)
// Range: 0x801FC480 -> 0x801FC4A8
void zEntSimpleObj_Init() {
    // References
    // -> struct {} __vt__13zEntSimpleObj;
}
// signature: zEntSimpleObj_Init(zEntSimpleObj *, xEntAsset *, bool, bool)
// Range: 0x801FC4B0 -> 0x801FC8FC
void zEntSimpleObj_Init(class zEntSimpleObj * ent /* r28 */, class xEntAsset * asset /* r29 */, bool candestroy /* r30 */) {
    // Local variables
    class xSimpleObjAsset * sasset; // r0
    class xSimpleObjAsset * simpleObjectAsset; // r0
    void * animData; // r31

    {
        // Range: 0x801FC4D8 -> 0x801FC55C
        // Local variables
        class xOGEntityModelContext context; // r1+0x8
    }
    {
        // Range: 0x801FC740 -> 0x801FC77C
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }
    {
        // Range: 0x801FC784 -> 0x801FC7CC
        // Local variables
        unsigned long long destructibleUID; // r3:r4
    }
}
// signature: zEntSimpleObj_Move(xEnt *, xScene *, float, xEntFrame *)
// Range: 0x801FC900 -> 0x801FC904
static void zEntSimpleObj_Move() {
}
// signature: zEntSimpleObj_CustomMove(xEnt *, xScene *, float, xEntFrame *)
// Range: 0x801FC910 -> 0x801FC998
void zEntSimpleObj_CustomMove() {
}
// Range: 0x801FC9A0 -> 0x801FCAD0
void zEntSimpleObj_Update(class zEntSimpleObj * ent /* r30 */, class xScene * sc /* r31 */, float dt /* f31 */) {
    // References
    // -> class xGlobals * xglobals;
    // -> class zViewport viewports[4];
}
// Range: 0x801FCAD0 -> 0x801FCC14
void zEntSimpleObj_Setup(class zEntSimpleObj * ent /* r31 */) {
    // References
    // -> unsigned int model_id;
}
// Range: 0x801FCC20 -> 0x801FCD2C
void zEntSimpleObj_SceneExit() {
    // Local variables
    int tidx; // r0
    class zEntSimpleObj * current; // r29
    class zEntSimpleObj * last; // r28

    // References
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_Save(zEntSimpleObj *, xSerial *)
// Range: 0x801FCD30 -> 0x801FCD34
void zEntSimpleObj_Save() {
}
// signature: zEntSimpleObj_Load(zEntSimpleObj *, xSerial *)
// Range: 0x801FCD40 -> 0x801FCD44
void zEntSimpleObj_Load() {
}
// signature: zEntSimpleObj_Reset(zEntSimpleObj *, xScene *)
// Range: 0x801FCD50 -> 0x801FD324
void zEntSimpleObj_Reset(class zEntSimpleObj * ent /* r31 */) {
    {
        // Range: 0x801FCD80 -> 0x801FCE4C
        // Local variables
        enum eShadow castShadow; // r0
        class xOGEntityModelContext context; // r1+0x10
    }
}
// signature: zEntSimpleObjEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801FD330 -> 0x801FE19C
void zEntSimpleObjEventCB(class xBase * to /* r28 */, unsigned int toEvent /* r29 */, class EventAny * genericParams /* r30 */) {
    // Local variables
    class zEntSimpleObj * s; // reg65535
    void * lightkitMem; // r0
    class LightKitAsset * lightkitAsset; // r29

    {
        // Range: 0x801FD368 -> 0x801FD454
        // Local variables
        bool sentByDestructable; // r3

        {
            // Range: 0x801FD370 -> 0x801FD3B0
            // Local variables
            class EventActionDestructableFlag * params; // r0
        }
        {
            // Range: 0x801FD3B0 -> 0x801FD3C8
            // Local variables
            class EventActionHit * params; // r0
        }
    }
    {
        // Range: 0x801FD8BC -> 0x801FD97C
        // Local variables
        class hkpPropertyValue val; // r1+0x30
    }
    {
        // Range: 0x801FDABC -> 0x801FDB80
        // Local variables
        class hkpPropertyValue val; // r1+0x28
    }
    {
        // Range: 0x801FDCE0 -> 0x801FDD54
        // Local variables
        class xVec3 savePos; // r1+0x38
    }
    {
        // Range: 0x801FDDD8 -> 0x801FDDF0
        // Local variables
        class EventActionSetSkyDome * params; // r0
    }
    {
        // Range: 0x801FDDF4 -> 0x801FDE54
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionShrapnel * params; // r0
    }
    {
        // Range: 0x801FDE54 -> 0x801FDF30
        // Local variables
        class xBase * toParamWidgetPtr; // r0
        class EventActionLightKit * params; // r0
    }
    {
        // Range: 0x801FDF40 -> 0x801FDF94
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x801FDF70 -> 0x801FDF90
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }
    {
        // Range: 0x801FE078 -> 0x801FE0AC
        // Local variables
        class xBase * toParamWidgetPtr; // r0
        class EventActionMount * params; // r0

        {
            // Range: 0x801FE094 -> 0x801FE0AC
            // Local variables
            float mt; // f0
        }
    }
    {
        // Range: 0x801FE0B0 -> 0x801FE0E4
        // Local variables
        class xBase * toParamWidgetPtr; // r0
        class EventActionMount * params; // r0

        {
            // Range: 0x801FE0CC -> 0x801FE0E4
            // Local variables
            float mt; // f0
        }
    }

    // References
    // -> struct {} __vt__Q28Graphics8LightKit;
    // -> class zGlobals globals;
}
// signature: zEntSimpleObj_MoveUpdate(zEntSimpleObj *)
// Range: 0x801FE1A0 -> 0x801FE1A4
void zEntSimpleObj_MoveUpdate() {
}
