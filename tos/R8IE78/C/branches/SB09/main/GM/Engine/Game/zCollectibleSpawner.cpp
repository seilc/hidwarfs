/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCollectibleSpawner.cpp
*/
float HealthDropRateBoost1; // size: 0x4, address: 0x806BD500
float HealthDropRateBoost2; // size: 0x4, address: 0x806BD504
float HealthDropRateBoost3; // size: 0x4, address: 0x806BD508
float AmmoDropRateBoost0_3; // size: 0x4, address: 0x806BD50C
float AmmoDropRateBoost4_6; // size: 0x4, address: 0x806BD510
float AmmoDropRateBoost7_9; // size: 0x4, address: 0x806BD514
// signature: CollectibleSpawner::CollectibleSpawnerEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B27F0 -> 0x800B2800
static void CollectibleSpawner::CollectibleSpawnerEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800B2800 -> 0x800B2964
void CollectibleSpawner::random_sphere_offset(class xVec3 & offset /* r27 */, float radius /* f30 */) {
    // Local variables
    float ang; // f31
    float uz; // f27
    float r; // f0
    float rr; // f0
}
// Range: 0x800B2970 -> 0x800B29FC
void CollectibleSpawner::ring_offset(class xVec3 & offset /* r31 */, float angle /* f29 */, float radius /* f30 */) {
}
// Range: 0x800B2A00 -> 0x800B2A80
void CollectibleSpawner::random_ring_offset(class xVec3 & offset /* r31 */, float radius /* f31 */) {
    // Local variables
    float ang; // f1
}
// Range: 0x800B2A80 -> 0x800B2B00
class Entity * Sext::CollectibleSpawnerAsset::Create(class EntityHandleBase * handle /* r29 */, class CollectibleSpawnerAsset * asset /* r30 */) {
}
// signature: zCollectibleSpawner::zCollectibleSpawner(World::EntityHandleBase *)
// Range: 0x800B2B00 -> 0x800B2B3C
void * zCollectibleSpawner::zCollectibleSpawner(class zCollectibleSpawner * this /* r31 */) {
    // References
    // -> struct {} __vt__19zCollectibleSpawner;
}
// Range: 0x800B2B40 -> 0x800B2C2C
void zCollectibleSpawner::Init(class zCollectibleSpawner * this /* r30 */, class CollectibleSpawnerAsset * asset /* r31 */) {
    {
        // Range: 0x800B2B8C -> 0x800B2C10
        // Local variables
        int i; // r25

        {
            // Range: 0x800B2B8C -> 0x800B2C10
            // Local variables
            class Slot * * slot; // r0

            {
                // Range: 0x800B2BCC -> 0x800B2C10
                // Local variables
                unsigned int j; // r6
            }
        }
    }
}
// Range: 0x800B2CD0 -> 0x800B2DA0
void zCollectibleSpawner::Setup(class zCollectibleSpawner * this /* r27 */) {
    {
        // Range: 0x800B2CE8 -> 0x800B2D70
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x800B2DA0 -> 0x800B2E44
void zCollectibleSpawner::Reset(class zCollectibleSpawner * this /* r28 */) {
    {
        // Range: 0x800B2DB4 -> 0x800B2E24
        // Local variables
        int i; // r29

        {
            // Range: 0x800B2DB4 -> 0x800B2E24
            // Local variables
            class Slot * * slot; // r0

            {
                // Range: 0x800B2DB8 -> 0x800B2E24
                // Local variables
                unsigned int j; // r5
            }
        }
    }
}
// Range: 0x800B2E90 -> 0x800B2E94
void zCollectibleSpawner::DebugReset() {
}
// Range: 0x800B2EA0 -> 0x800B3014
void zCollectibleSpawner::ReturnSlot(class zCollectibleSpawner * this /* r31 */, int offset /* r29 */) {
    // Local variables
    class Slot * * slot; // r0

    {
        // Range: 0x800B2EDC -> 0x800B2F10
        // Local variables
        unsigned int j; // r6
    }
}
// signature: zCollectibleSpawner::UpdateSlot(float, zCollectibleSpawner::Slot *)
// Range: 0x800B3020 -> 0x800B3504
void zCollectibleSpawner::UpdateSlot(class zCollectibleSpawner * this /* r23 */, class Slot * slot /* r24 */) {
    {
        // Range: 0x800B3090 -> 0x800B349C
        // Local variables
        int i; // r26

        {
            // Range: 0x800B3090 -> 0x800B349C
            // Local variables
            float interval; // f3
            float delay; // f2

            {
                // Range: 0x800B3090 -> 0x800B349C
                // Local variables
                class xVec3 initialVelocity; // r1+0x8
                class xVec3 collectiblePos; // r1+0x14
                class zFloatingCollectible * toCopyFrom; // r25
                float probSpawn; // f22
                float prob; // f0

                {
                    // Range: 0x800B3098 -> 0x800B3098
                    // Local variables
                    float playerHealth; // f0
                }
                {
                    // Range: 0x800B3098 -> 0x800B3098
                    // Local variables
                    short ammo; // r0
                }
                {
                    // Range: 0x800B3098 -> 0x800B3098
                    // Local variables
                    class zPlanktonPlayer * plankton; // r0
                }
                {
                    // Range: 0x800B3098 -> 0x800B3110
                    // Local variables
                    float angle; // f1
                }
            }
        }
    }

    // References
    // -> float AmmoDropRateBoost7_9;
    // -> float AmmoDropRateBoost4_6;
    // -> float AmmoDropRateBoost0_3;
    // -> float HealthDropRateBoost3;
    // -> float HealthDropRateBoost2;
    // -> float HealthDropRateBoost1;
    // -> int unhappyNuggetsInProgress;
    // -> static class zCollectibleInstancer * collectibleInstancer;
}
// Range: 0x800B3550 -> 0x800B35D8
void zCollectibleSpawner::Update(class zCollectibleSpawner * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x800B356C -> 0x800B35C0
        // Local variables
        int i; // r31

        {
            // Range: 0x800B356C -> 0x800B35C0
            // Local variables
            class Slot * * slot; // r0
        }
    }
}
// signature: zCollectibleSpawner::AddRequest(const char *, const xVec3 &, const xVec3 &, World::xOGEntity *)
// Range: 0x800B35E0 -> 0x800B3684
void zCollectibleSpawner::AddRequest(class xVec3 & scale /* r31 */) {
}
// signature: zCollectibleSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B3690 -> 0x800B3978
void zCollectibleSpawner::HandleEvent(class zCollectibleSpawner * this /* r30 */, class xBase * from /* r31 */, class EventAny * params /* r29 */) {
    {
        // Range: 0x800B371C -> 0x800B3774
        // Local variables
        class xVec3 pos; // r1+0x2C
        class xVec3 scale; // r1+0x38
    }
    {
        // Range: 0x800B3774 -> 0x800B3864
        // Local variables
        class EventActionSpawnCollectibleAtPosition * paramst; // r0
        class xVec3 pos; // r1+0x14
        class xVec3 scale; // r1+0x20

        {
            // Range: 0x800B3780 -> 0x800B3840
            // Local variables
            class xOGEntity * targetObject; // r0

            {
                // Range: 0x800B37D4 -> 0x800B3840
                // Local variables
                class xMat4x3 * targetMat; // r29
            }
        }
    }
    {
        // Range: 0x800B3864 -> 0x800B3924
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }

    // References
    // -> class xVec3 m_DoubleVec;
}
