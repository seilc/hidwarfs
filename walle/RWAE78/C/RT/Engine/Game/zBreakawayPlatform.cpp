/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zBreakawayPlatform.cpp
*/
unsigned int BreakawayPlatform_MODEL_INSTANCE_OFFSET; // size: 0x4, address: 0x806CB9E4
static class xOGSchema _BreakawayPlatformSchema; // size: 0x18, address: 0x8076A5B8
static class SchemaRegistrator _BreakawayPlatformSchemaReg; // size: 0x8, address: 0x8076A5D0
static class xAnimTable * animTables; // size: 0x4, address: 0x8076A5D8
// signature: @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80085C50 -> 0x80085C6C
static void @unnamed@WAD01_cpp@::BreakawayPlatformEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80085C70 -> 0x80085DA8
void zBreakawayPlatform::SetMovePoint(class zBreakawayPlatform * this /* r31 */, class xMovePoint * mp /* r30 */) {
    // Local variables
    class xVec3 heading; // r1+0x14

    {
        // Range: 0x80085CBC -> 0x80085D34
        // Local variables
        class xMat3x3 tempmat; // r1+0x20
        class xVec3 tempdir; // r1+0x8
    }
}
// Range: 0x80085DB0 -> 0x80085E00
void zBreakawayPlatform::Init(class zBreakawayPlatform * this /* r30 */, class zBreakawayPlatformAsset * asset /* r31 */) {
}
// Range: 0x80085E00 -> 0x800860AC
void zBreakawayPlatform::Setup(class zBreakawayPlatform * this /* r30 */) {
    // Local variables
    class xBox boundingBox; // r1+0x18

    {
        // Range: 0x80085E5C -> 0x80085E8C
        // Local variables
        class xOGEntityModelContext context; // r1+0x8
    }
    {
        // Range: 0x80085E8C -> 0x80085F28
        // Local variables
        class xAnimTable * table; // r5
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAnimTable * animTables;
}
// Range: 0x800860F0 -> 0x800862C4
void zBreakawayPlatform::DrivenBySetup(class zBreakawayPlatform * this /* r31 */) {
    {
        // Range: 0x80086138 -> 0x80086280
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80086138 -> 0x80086280
            {
                // Range: 0x80086138 -> 0x80086280
                // Local variables
                class xEnt * dent; // r26
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x800862D0 -> 0x80086A68
void zBreakawayPlatform::Reset(class zBreakawayPlatform * this /* r30 */, bool inPlace /* r29 */) {
}
// Range: 0x80086A70 -> 0x80086B1C
bool zBreakawayPlatform::ShouldMove(class zBreakawayPlatform * this /* r29 */) {
}
// Range: 0x80086B20 -> 0x8008749C
void zBreakawayPlatform::Move(class zBreakawayPlatform * this /* r30 */, float dt /* f29 */) {
    // Local variables
    float newdist; // f30
    float qdot; // f1
    class xVec3 tgt; // r1+0x68
    class xVec3 direction; // r1+0x5C
    class xVec3 bank; // r1+0x50
    class xQuat quat; // r1+0x40
    class xQuat qold; // r1+0x30
    class xMat3x3 tmpmat; // r1+0x78
    class xVec3 scale; // r1+0x24

    {
        // Range: 0x80086CEC -> 0x8008726C
        // Local variables
        float u; // f27

        {
            // Range: 0x80086D08 -> 0x8008726C
            {
                // Range: 0x80086E0C -> 0x80087014
                // Local variables
                class xVec3 gravity; // r1+0x18
            }
        }
    }
    {
        // Range: 0x800872D0 -> 0x80087444
        // Local variables
        class xQuat quat; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: zBreakawayPlatform::Mounted(xEnt *)
// Range: 0x800874F0 -> 0x8008762C
void zBreakawayPlatform::Mounted(class zBreakawayPlatform * this /* r30 */) {
    {
        // Range: 0x80087544 -> 0x800875C0
        // Local variables
        float maxDisp; // f0
    }
}
// Range: 0x80087630 -> 0x80087698
void zBreakawayPlatform::SetVisible(class zBreakawayPlatform * this /* r30 */, bool vis /* r31 */) {
}
// signature: zBreakawayPlatform::SetCollision(bool)
// Range: 0x800876A0 -> 0x80087720
void zBreakawayPlatform::SetCollision(class zBreakawayPlatform * this /* r30 */) {
}
// Range: 0x80087720 -> 0x800878E4
void zBreakawayPlatform::SetupWarn(class zBreakawayPlatform * this /* r30 */) {
}
// Range: 0x800878F0 -> 0x80087D08
void zBreakawayPlatform::SetupDisappear(class zBreakawayPlatform * this /* r31 */) {
}
// Range: 0x80087D10 -> 0x800881B0
void zBreakawayPlatform::SetupReappear(class zBreakawayPlatform * this /* r30 */) {
}
// Range: 0x800881B0 -> 0x80088414
void zBreakawayPlatform::UpdateWarn(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80088360 -> 0x800883F4
        // Local variables
        float b; // f3
        float g; // f2
        float r; // f1
        float fraction; // f7
    }
}
// Range: 0x80088420 -> 0x800887A8
void zBreakawayPlatform::UpdateDisappear(class zBreakawayPlatform * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x800884F0 -> 0x8008853C
        // Local variables
        float delta; // f2
    }
    {
        // Range: 0x80088618 -> 0x80088708
        // Local variables
        float alpha; // f1
    }
}
// Range: 0x800887B0 -> 0x80088A08
void zBreakawayPlatform::UpdateReappear(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800888F8 -> 0x800889AC
        // Local variables
        float alpha; // f1
    }
}
// Range: 0x80088A10 -> 0x80088C4C
void zBreakawayPlatform::ChangeState(class zBreakawayPlatform * this /* r30 */, unsigned int newState /* r31 */) {
}
// Range: 0x80088C50 -> 0x800897DC
void zBreakawayPlatform::Update(class zBreakawayPlatform * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 tmpMat; // r1+0x150

    {
        // Range: 0x8008970C -> 0x8008978C
        // Local variables
        class xQuat quat; // r1+0xB0
        class xMat4x3 * pMat; // r29
    }
}
// Range: 0x80089820 -> 0x8008989C
void zBreakawayPlatform::SceneExit(class zBreakawayPlatform * this /* r30 */) {
}
// signature: zBreakawayPlatform::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800898A0 -> 0x80089BB8
void zBreakawayPlatform::HandleEvent(class zBreakawayPlatform * this /* r30 */) {
    {
        // Range: 0x80089A9C -> 0x80089AF4
        // Local variables
        class EventActionOneFloat * params; // r0

        {
            // Range: 0x80089AD0 -> 0x80089AF0
            // Local variables
            class FloatAndVoid dist; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80089BC0 -> 0x80089E9C
class xAnimTable * zBreakawayPlatform::CreateAnimTable(unsigned long long animSetID /* r30:r29 */) {
    // Local variables
    class xAnimTable * table; // r27

    // References
    // -> static class xAnimTable * animTables;
}
// signature: zBreakawayPlatform::RemoveAnimTable(unsigned long long)
// Range: 0x80089F30 -> 0x80089FE4
void zBreakawayPlatform::RemoveAnimTable() {
    // Local variables
    class xAnimTable * table; // r31
    class xAnimTable * prev; // r30

    // References
    // -> static class xAnimTable * animTables;
}
// Range: 0x80089FF0 -> 0x8008A154
void zBreakawayPlatformInit(void * base /* r29 */, void * asset /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__11zCollidable;
    // -> struct {} __vt__18zBreakawayPlatform;
}
// Range: 0x8008A1A0 -> 0x8008A21C
void zBreakawayPlatformSceneExit() {
    // Local variables
    int tidx; // r0
    class zBreakawayPlatform * current; // r31
    class zBreakawayPlatform * last; // r30

    // References
    // -> class zGlobals globals;
}
