/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\Blobs\CinematicBlobEntity.cpp
*/
unsigned int DEFAULT_PROJECT_SHADOW_CACHE; // size: 0x4, address: 0x80692B40
// signature: World::CinematicBlobEntity::CinematicBlobEntity(World::EntityHandleBase *)
// Range: 0x801BEC10 -> 0x801BECB0
void * World::CinematicBlobEntity::CinematicBlobEntity(class CinematicBlobEntity * this /* r30 */) {
    // References
    // -> struct {} __vt__Q25World19CinematicBlobEntity;
}
// Range: 0x801BECB0 -> 0x801BEF64
class Entity * World::CinematicAsset::Create(class EntityHandleBase * handle /* r20 */, class CinematicAsset * asset /* r19 */) {
    // Local variables
    class CreateInfo modelInfo; // r1+0x28

    {
        // Range: 0x801BEDA0 -> 0x801BEF38
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x801BEDA0 -> 0x801BEF38
            // Local variables
            void * modelMem; // r4
            class StackAllocator allocator; // r1+0x1C
            enum eShadow castShadow; // r1+0x8
            int memSize; // r1+0xC
            class ModelInstanceTableEntry & entry; // r26

            {
                // Range: 0x801BEDA0 -> 0x801BEF38
                // Local variables
                int j; // r25

                {
                    // Range: 0x801BEDA0 -> 0x801BEF38
                    // Local variables
                    class Renderable * renderable; // r19
                }
            }
        }
    }

    // References
    // -> unsigned int DEFAULT_PROJECT_SHADOW_CACHE;
    // -> class Scene * primaryScene;
}
// Range: 0x801BEF80 -> 0x801BEFD8
void World::CinematicBlobEntity::Deactivate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x801BEFE0 -> 0x801BF0E4
void World::CinematicBlobEntity::Destroy(class CinematicBlobEntity * this /* r26 */) {
    {
        // Range: 0x801BEFF8 -> 0x801BF04C
        // Local variables
        unsigned int i; // r27
    }
}
// Range: 0x801BF160 -> 0x801BF1F0
void World::CinematicBlobEntity::DeferDestroy(class CinematicBlobEntity * this /* r29 */) {
    {
        // Range: 0x801BF174 -> 0x801BF1B0
        // Local variables
        unsigned int i; // r30
    }
}
// signature: World::CinematicBlobEntity::CinematicUpdate(float)
// Range: 0x801BF1F0 -> 0x801BF26C
void World::CinematicBlobEntity::CinematicUpdate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x801BF270 -> 0x801BF27C
void World::CinematicBlobEntity::Play() {
}
// Range: 0x801BF280 -> 0x801BF298
void World::CinematicBlobEntity::Pause() {
}
// Range: 0x801BF2A0 -> 0x801BF378
void World::CinematicBlobEntity::Reset(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x801BF2D0 -> 0x801BF32C
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x801BF2D0 -> 0x801BF32C
            // Local variables
            class ModelInstanceTableEntry & instanceEntry; // r29
        }
    }
}
// signature: World::CinematicBlobEntity::RegisterCallback(World::IHackCinematicCallbackSink *)
// Range: 0x801BF380 -> 0x801BF388
void World::CinematicBlobEntity::RegisterCallback() {
}
// Range: 0x801BF390 -> 0x801BF3DC
float World::CinematicBlobEntity::GetTotalCinematicTime() const {
    // Local variables
    float totalTime; // f1
    unsigned int i; // r0
}
// Range: 0x801BF3E0 -> 0x801BF4E0
void World::CinematicBlobEntity::ClearAnimationData(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x801BF408 -> 0x801BF44C
        // Local variables
        unsigned int i; // r29
    }
}
// signature: World::CinematicBlobEntity::AdvanceTime(float)
// Range: 0x801BF4E0 -> 0x801BF74C
void World::CinematicBlobEntity::AdvanceTime(class CinematicBlobEntity * this /* r31 */) {
    {
        // Range: 0x801BF558 -> 0x801BF558
        // Local variables
        unsigned char * addr; // r3
    }
    {
        // Range: 0x801BF5D4 -> 0x801BF700
        // Local variables
        class StackAllocator animAlloc; // r1+0x8

        {
            // Range: 0x801BF664 -> 0x801BF700
            // Local variables
            unsigned int i; // r28
        }
    }
}
// Range: 0x801BF750 -> 0x801BFC5C
void World::CinematicBlobEntity::Evaluate(class CinematicBlobEntity * this /* r24 */) {
    {
        // Range: 0x801BF780 -> 0x801BFB20
        // Local variables
        class View * view; // r23

        {
            // Range: 0x801BF788 -> 0x801BF840
            // Local variables
            class Viewport * viewport; // r23

            {
                // Range: 0x801BF7AC -> 0x801BF840
                // Local variables
                class Matrix43 mat; // r1+0x40
                class UpdateStruct data; // r1+0x70
            }
        }
        {
            // Range: 0x801BF840 -> 0x801BF874
            // Local variables
            unsigned int i; // r6
        }
        {
            // Range: 0x801BF874 -> 0x801BFB20
            // Local variables
            unsigned int i; // r28

            {
                // Range: 0x801BF874 -> 0x801BFB20
                // Local variables
                unsigned short partCount; // r0
                class ComboAnimBlobAssetV2 * v2data; // r26
                class ModelInstanceTableEntry & instanceEntry; // r27

                {
                    // Range: 0x801BF87C -> 0x801BF974
                    // Local variables
                    unsigned char j; // r25

                    {
                        // Range: 0x801BF87C -> 0x801BF974
                        // Local variables
                        unsigned char idx; // r0
                        unsigned char res; // r0
                        unsigned char partIndex; // r1+0x8
                    }
                }
                {
                    // Range: 0x801BF998 -> 0x801BF9C4
                    // Local variables
                    unsigned short j; // r22
                }
                {
                    // Range: 0x801BF9D0 -> 0x801BFA18
                    // Local variables
                    class Model * model; // r25
                    class Skeleton * skel; // r22
                }
                {
                    // Range: 0x801BFA18 -> 0x801BFAFC
                    // Local variables
                    class Matrix43 transform; // r1+0x10
                    class Vector * transVec; // r19
                    class Vector * scaleVec; // r20
                    class Quaternion * rotVec; // r21
                    int transformCount; // r22
                    class ThreadStackMarkSentry mark; // r1+0xC

                    {
                        // Range: 0x801BFAA0 -> 0x801BFAFC
                        // Local variables
                        int j; // r26
                    }
                }
            }
        }
    }
    {
        // Range: 0x801BFB20 -> 0x801BFC44
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x801BFB20 -> 0x801BFC44
            // Local variables
            class ModelInstanceTableEntry & instanceEntry; // r26

            {
                // Range: 0x801BFB40 -> 0x801BFBEC
                // Local variables
                unsigned char j; // r27
            }
            {
                // Range: 0x801BFBEC -> 0x801BFC44
                // Local variables
                unsigned short partCount; // r0

                {
                    // Range: 0x801BFBFC -> 0x801BFC44
                    // Local variables
                    unsigned short j; // r19
                }
            }
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
