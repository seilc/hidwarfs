/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCollectibleSpawner.cpp
*/
// signature: @unnamed@WAD02_cpp@::CollectibleSpawnerEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80161270 -> 0x80161280
static void @unnamed@WAD02_cpp@::CollectibleSpawnerEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80161280 -> 0x80161354
class Entity * Sext::CollectibleSpawnerAsset::Create(class EntityHandleBase * handle /* r29 */, class CollectibleSpawnerAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__19zCollectibleSpawner;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80161360 -> 0x80161474
void zCollectibleSpawner::Init(class zCollectibleSpawner * this /* r26 */, class CollectibleSpawnerAsset * asset /* r27 */) {
    {
        // Range: 0x8016138C -> 0x80161438
        // Local variables
        int i; // r28

        {
            // Range: 0x8016138C -> 0x80161438
            // Local variables
            class Slot * * slot; // r0

            {
                // Range: 0x80161404 -> 0x80161418
                // Local variables
                unsigned int j; // r6
            }
        }
    }
}
// Range: 0x80161480 -> 0x80161504
void zCollectibleSpawner::Setup(class zCollectibleSpawner * this /* r28 */) {
    {
        // Range: 0x8016149C -> 0x801614D4
        // Local variables
        unsigned int i; // r29
    }
}
// Range: 0x80161510 -> 0x801615E8
void zCollectibleSpawner::Reset() {
    {
        // Range: 0x80161510 -> 0x801615C8
        // Local variables
        int i; // r8

        {
            // Range: 0x80161510 -> 0x801615C8
            {
                // Range: 0x8016151C -> 0x8016151C
                // Local variables
                unsigned int j; // r9
            }
        }
    }
}
// Range: 0x801615F0 -> 0x801615F4
void zCollectibleSpawner::DebugReset() {
}
// Range: 0x80161600 -> 0x80161604
void zCollectibleSpawner::SceneExit() {
}
// signature: zCollectibleSpawner::UpdateSlot(float, zCollectibleSpawner::Slot *)
// Range: 0x80161610 -> 0x8016181C
void zCollectibleSpawner::UpdateSlot(class zCollectibleSpawner * this /* r26 */, class Slot * slot /* r27 */) {
    {
        // Range: 0x80161648 -> 0x801617D0
        // Local variables
        int i; // r28

        {
            // Range: 0x80161648 -> 0x801617D0
            // Local variables
            float interval; // f3
            float delay; // f2

            {
                // Range: 0x80161648 -> 0x801617D0
                // Local variables
                float prob; // f0
            }
        }
    }

    // References
    // -> static class zCollectibleInstancer * collectibleInstancer;
}
// Range: 0x80161820 -> 0x80161A9C
void zCollectibleSpawner::Update(class zCollectibleSpawner * this /* r29 */, float dt /* f30 */) {
    {
        // Range: 0x80161828 -> 0x80161A60
        // Local variables
        int i; // r30
    }
}
// signature: zCollectibleSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80161AA0 -> 0x80161D10
void zCollectibleSpawner::HandleEvent(class zCollectibleSpawner * this /* r28 */, class EventAny * params /* r30 */) {
    {
        // Range: 0x80161B28 -> 0x80161BFC
        // Local variables
        class xVec3 pos; // r1+0x8
        class xVec3 scale; // r1+0x14
    }
    {
        // Range: 0x80161BFC -> 0x80161CB4
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r29
        class EventActionDrivenBy * paramst; // r0
    }

    // References
    // -> class xVec3 m_DoubleVec;
}
