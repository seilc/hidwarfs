/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLocatorEntity.cpp
*/
static class zQueue locatorsQueue; // size: 0x1008, address: 0x8081FB78
// Range: 0x801920D0 -> 0x80192160
void zLocators_Update(float dt /* f31 */) {
    // Local variables
    int count; // r29

    {
        // Range: 0x801920F0 -> 0x8019213C
        // Local variables
        int i; // r28

        {
            // Range: 0x801920F0 -> 0x8019213C
            // Local variables
            class zLocator * locator; // r27
        }
    }

    // References
    // -> static class zQueue locatorsQueue;
}
// Range: 0x80192160 -> 0x801921F8
void zLocators_PlayVFX(unsigned long long clipID /* r30:r29 */, void * entity /* r31 */) {
    // Local variables
    int count; // r26

    {
        // Range: 0x80192184 -> 0x801921D8
        // Local variables
        int i; // r25

        {
            // Range: 0x80192184 -> 0x801921D8
            // Local variables
            class zLocator * locator; // r24
        }
    }

    // References
    // -> static class zQueue locatorsQueue;
}
// signature: LocatorEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80192200 -> 0x80192204
static void LocatorEventWrapper() {
}
// signature: zLocator::zLocator(World::EntityHandleBase *, void *)
// Range: 0x80192210 -> 0x80192474
void * zLocator::zLocator(class zLocator * this /* r31 */) {
    // Local variables
    char * c; // r29

    {
        // Range: 0x80192368 -> 0x80192390
        // Local variables
        int i; // r28
    }

    // References
    // -> static class zQueue locatorsQueue;
    // -> struct {} __vt__8zLocator;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80192480 -> 0x801924E8
class Entity * Sext::Locator::Create(class EntityHandleBase * handle /* r30 */, class Locator * asset /* r31 */) {
}
// signature: zLocator::GetBoneMat(World::ModelInstanceArticle *, unsigned long)
// Range: 0x801924F0 -> 0x80192730
void zLocator::GetBoneMat(class zLocator * this /* r29 */) {
    // Local variables
    class xMat4x3 root_mat; // r1+0x38

    {
        // Range: 0x80192614 -> 0x80192714
        // Local variables
        class Matrix43 m; // r1+0x8
    }
}
// signature: zLocator::Update(float)
// Range: 0x80192730 -> 0x80192F40
void zLocator::Update(class zLocator * this /* r29 */) {
    // Local variables
    class xMat4x3 matAsset; // r1+0x100
    class Quaternion rotVec; // r1+0x90
    class Vector scaleVec; // r1+0x80
    class Vector transVec; // r1+0x70

    {
        // Range: 0x801929A0 -> 0x80192EAC
        // Local variables
        class Matrix43 transform; // r1+0xD0
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneX;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneZ;
    // -> class xMat4x3 g_I3;
}
// signature: zLocator::PlayVFX(unsigned long long, void *)
// Range: 0x80192F40 -> 0x80193188
void zLocator::PlayVFX(class zLocator * this /* r30 */, void * entity /* r31 */) {
    // Local variables
    int locatorNameLen; // r28
    char buf[256]; // r1+0x8

    // References
    // -> bool sInvalidSceneState;
}
// Range: 0x80193190 -> 0x801933C0
void zLocator::SetupVFX(class zLocator * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
}
// Range: 0x801933C0 -> 0x80193468
void zLocator::StopVFX(class zLocator * this /* r29 */) {
    // References
    // -> bool sInvalidSceneState;
}
