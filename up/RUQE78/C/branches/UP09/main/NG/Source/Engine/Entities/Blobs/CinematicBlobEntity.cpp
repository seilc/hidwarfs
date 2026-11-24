/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\Blobs\CinematicBlobEntity.cpp
*/
// signature: World::CinematicBlobEntity::CinematicBlobEntity(World::EntityHandleBase *)
// Range: 0x802E3CFC -> 0x802E3D78
void * World::CinematicBlobEntity::CinematicBlobEntity() {
    // References
    // -> struct {} __vt__Q25World19CinematicBlobEntity;
}
// Range: 0x802E3D80 -> 0x802E4138
class Entity * World::CinematicAsset::Create(class EntityHandleBase * handle /* r19 */, class CinematicAsset * asset /* r18 */) {
    // Local variables
    class CreateInfo modelInfo; // r1+0x38

    {
        // Range: 0x802E3F50 -> 0x802E40F8
        // Local variables
        unsigned int i; // r23

        {
            // Range: 0x802E3F50 -> 0x802E40F8
            // Local variables
            void * modelMem; // r0
            class StackAllocator allocator; // r1+0x28
            enum eShadow castShadow; // r1+0x8
            int memSize; // r1+0xC
            class ModelInstanceTableEntry & entry; // r22

            {
                // Range: 0x802E3F50 -> 0x802E40E0
                // Local variables
                int j; // r21

                {
                    // Range: 0x802E3F50 -> 0x802E40E0
                    // Local variables
                    class Renderable * renderable; // r20
                }
            }
        }
    }

    // References
    // -> static unsigned int DEFAULT_PROJECT_SHADOW_CACHE;
    // -> class Scene * primaryScene;
}
// Range: 0x802E4140 -> 0x802E428C
void World::CinematicBlobEntity::Deactivate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x802E428C -> 0x802E4384
void World::CinematicBlobEntity::Destroy(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x802E42B0 -> 0x802E42FC
        // Local variables
        unsigned int i; // r29
    }
}
// signature: World::CinematicBlobEntity::CinematicUpdate(float)
// Range: 0x802E4388 -> 0x802E4404
void World::CinematicBlobEntity::CinematicUpdate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x802E4404 -> 0x802E441C
void World::CinematicBlobEntity::Pause() {
}
// Range: 0x802E441C -> 0x802E456C
void World::CinematicBlobEntity::Reset(class CinematicBlobEntity * this /* r27 */) {
    {
        // Range: 0x802E444C -> 0x802E450C
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x802E444C -> 0x802E450C
            // Local variables
            class ModelInstanceTableEntry & instanceEntry; // r28
        }
    }
}
// signature: World::CinematicBlobEntity::RegisterCallback(World::IHackCinematicCallbackSink *)
// Range: 0x802E456C -> 0x802E4574
void World::CinematicBlobEntity::RegisterCallback() {
}
// Range: 0x802E4574 -> 0x802E468C
float World::CinematicBlobEntity::GetTotalCinematicTime() const {
    // Local variables
    float totalTime; // f1
    unsigned int i; // r4
}
// Range: 0x802E468C -> 0x802E47A4
void World::CinematicBlobEntity::ClearAnimationData(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x802E46C0 -> 0x802E46EC
        // Local variables
        unsigned int i; // r29
    }
}
// signature: World::CinematicBlobEntity::AdvanceTime(float)
// Range: 0x802E47A4 -> 0x802E4A68
void World::CinematicBlobEntity::AdvanceTime(class CinematicBlobEntity * this /* r29 */) {
    {
        // Range: 0x802E481C -> 0x802E481C
        // Local variables
        unsigned char * addr; // r3
    }
    {
        // Range: 0x802E4898 -> 0x802E49F0
        // Local variables
        class StackAllocator animAlloc; // r1+0x8

        {
            // Range: 0x802E4918 -> 0x802E49BC
            // Local variables
            unsigned int i; // r30
        }
    }

    // References
    // -> struct {} __vt__Q25World19CameraFlyBlobEntity;
    // -> struct {} __vt__Q25World19ComboAnimBlobEntity;
}
// Range: 0x802E4A68 -> 0x802E4F8C
void World::CinematicBlobEntity::Evaluate(class CinematicBlobEntity * this /* r22 */) {
    {
        // Range: 0x802E4A98 -> 0x802E4E50
        // Local variables
        class View * view; // r23

        {
            // Range: 0x802E4AA0 -> 0x802E4B58
            // Local variables
            class Viewport * viewport; // r23

            {
                // Range: 0x802E4AC4 -> 0x802E4B58
                // Local variables
                class Matrix43 mat; // r1+0x40
                class UpdateStruct data; // r1+0x70
            }
        }
        {
            // Range: 0x802E4B58 -> 0x802E4B6C
            // Local variables
            unsigned int i; // r6
        }
        {
            // Range: 0x802E4B8C -> 0x802E4E3C
            // Local variables
            unsigned int i; // r26

            {
                // Range: 0x802E4B8C -> 0x802E4E3C
                // Local variables
                unsigned short partCount; // r0
                class ComboAnimBlobAssetV2 * v2data; // r24
                class ModelInstanceTableEntry & instanceEntry; // r25

                {
                    // Range: 0x802E4B98 -> 0x802E4C84
                    // Local variables
                    unsigned char j; // r23

                    {
                        // Range: 0x802E4B98 -> 0x802E4C84
                        // Local variables
                        unsigned char idx; // r4
                        unsigned char res; // r0
                        unsigned char partIndex; // r1+0x8
                    }
                }
                {
                    // Range: 0x802E4CC4 -> 0x802E4CE0
                    // Local variables
                    unsigned short j; // r21
                }
                {
                    // Range: 0x802E4CFC -> 0x802E4D44
                    // Local variables
                    class Model * model; // r23
                    class Skeleton * skel; // r21
                }
                {
                    // Range: 0x802E4D44 -> 0x802E4E2C
                    // Local variables
                    class Matrix43 transform; // r1+0x10
                    class Vector * transVec; // r19
                    class Vector * scaleVec; // r20
                    class Quaternion * rotVec; // r23
                    int transformCount; // r21
                    class ThreadStackMarkSentry mark; // r1+0xC

                    {
                        // Range: 0x802E4DCC -> 0x802E4E20
                        // Local variables
                        int j; // r24
                    }
                }
            }
        }
    }
    {
        // Range: 0x802E4E50 -> 0x802E4F60
        // Local variables
        unsigned int i; // r23

        {
            // Range: 0x802E4E50 -> 0x802E4F60
            // Local variables
            class ModelInstanceTableEntry & instanceEntry; // r24

            {
                // Range: 0x802E4E70 -> 0x802E4EF8
                // Local variables
                unsigned char j; // r25
            }
            {
                // Range: 0x802E4F1C -> 0x802E4F60
                // Local variables
                unsigned short partCount; // r0

                {
                    // Range: 0x802E4F2C -> 0x802E4F2C
                    // Local variables
                    unsigned short j; // r19
                }
            }
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
