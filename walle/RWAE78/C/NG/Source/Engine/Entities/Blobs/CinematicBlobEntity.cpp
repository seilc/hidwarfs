/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\Blobs\CinematicBlobEntity.cpp
*/
class CinematicBlobSchema schema; // size: 0x18, address: 0x807FEBB8
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEBD0
class Schema * cinematicSchema; // size: 0x4, address: 0x80707D14
// signature: World::CinematicBlobSchema::Fix(World::Asset *, long, int)
// Range: 0x8024A570 -> 0x8024A630
void World::CinematicBlobSchema::Fix() {
    // Local variables
    class CinematicAsset * cinematic; // r0

    {
        // Range: 0x8024A5B4 -> 0x8024A610
        // Local variables
        unsigned int i; // r8

        {
            // Range: 0x8024A5B4 -> 0x8024A610
            // Local variables
            class CinematicChunkHeader * header; // r5
        }
    }
}
// signature: World::CinematicBlobSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024A630 -> 0x8024A674
class EntityStub * World::CinematicBlobSchema::CreateStub() {
}
// signature: World::CinematicBlobSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024A674 -> 0x8024A690
void World::CinematicBlobSchema::DestroyStub() {
}
// signature: World::CinematicBlobSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024A690 -> 0x8024A6EC
class Entity * World::CinematicBlobSchema::ActivateEntity() {
    // Local variables
    class CinematicBlobEntity * entity; // r31
}
// signature: World::CinematicBlobEntity::CinematicBlobEntity(World::EntityHandleBase *)
// Range: 0x8024A6EC -> 0x8024A770
void * World::CinematicBlobEntity::CinematicBlobEntity() {
    // References
    // -> struct {} __vt__Q25World19CinematicBlobEntity;
}
// signature: World::CinematicBlobEntity::ReplaceAsset(const World::Asset *, const World::Asset *)
// Range: 0x8024A770 -> 0x8024A778
bool World::CinematicBlobEntity::ReplaceAsset() {
}
// Range: 0x8024A778 -> 0x8024A780
bool World::CinematicBlobEntity::ReplaceAssetCompleted() {
}
// signature: World::CinematicBlobEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8024A780 -> 0x8024A9C8
class CinematicBlobEntity * World::CinematicBlobEntity::Create(class EntityHandleBase * handle /* r21 */, class Asset * baseAsset /* r20 */, int size /* r22 */) {
    // Local variables
    class CreateInfo modelInfo; // r1+0x20

    {
        // Range: 0x8024A85C -> 0x8024A99C
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x8024A85C -> 0x8024A99C
            // Local variables
            class ModelInstanceTableEntry * entry; // r24

            {
                // Range: 0x8024A85C -> 0x8024A984
                // Local variables
                int j; // r23

                {
                    // Range: 0x8024A85C -> 0x8024A984
                    // Local variables
                    class Renderable * renderable; // r22
                }
            }
        }
    }

    // References
    // -> static unsigned int DEFAULT_PROJECT_SHADOW_CACHE;
    // -> struct {} __vt__Q25World20ModelInstanceArticle;
    // -> class Scene * primaryScene;
}
// Range: 0x8024A9C8 -> 0x8024AB14
void World::CinematicBlobEntity::Deactivate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x8024AB14 -> 0x8024AC08
void World::CinematicBlobEntity::Destroy(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x8024AB38 -> 0x8024AB80
        // Local variables
        unsigned int i; // r29
    }
}
// signature: World::CinematicBlobEntity::CinematicUpdate(float)
// Range: 0x8024AC60 -> 0x8024ACB4
void World::CinematicBlobEntity::CinematicUpdate(class CinematicBlobEntity * this /* r31 */) {
}
// Range: 0x8024ACB4 -> 0x8024ACC0
void World::CinematicBlobEntity::Play() {
}
// Range: 0x8024ACC0 -> 0x8024ACD8
void World::CinematicBlobEntity::Pause() {
}
// Range: 0x8024ACD8 -> 0x8024AE14
void World::CinematicBlobEntity::Reset(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x8024AD08 -> 0x8024ADB4
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x8024AD08 -> 0x8024ADB4
            // Local variables
            class ModelInstanceTableEntry * instanceEntry; // r29
        }
    }
}
// signature: World::CinematicBlobEntity::RegisterCallback(World::IHackCinematicCallbackSink *)
// Range: 0x8024AE14 -> 0x8024AE1C
void World::CinematicBlobEntity::RegisterCallback() {
}
// Range: 0x8024AE1C -> 0x8024AF34
float World::CinematicBlobEntity::GetTotalCinematicTime() const {
    // Local variables
    float totalTime; // f1
    unsigned int i; // r4
}
// Range: 0x8024AF34 -> 0x8024B04C
void World::CinematicBlobEntity::ClearAnimationData(class CinematicBlobEntity * this /* r28 */) {
    {
        // Range: 0x8024AF68 -> 0x8024AF94
        // Local variables
        unsigned int i; // r29
    }
}
// signature: World::CinematicBlobEntity::AdvanceTime(float)
// Range: 0x8024B04C -> 0x8024B41C
void World::CinematicBlobEntity::AdvanceTime(class CinematicBlobEntity * this /* r21 */) {
    {
        // Range: 0x8024B0B4 -> 0x8024B0B4
        // Local variables
        unsigned char * addr; // r3
    }
    {
        // Range: 0x8024B138 -> 0x8024B394
        // Local variables
        class StackAllocator interpAlloc; // r1+0x20
        class StackAllocator animAlloc; // r1+0x2C

        {
            // Range: 0x8024B180 -> 0x8024B2BC
            // Local variables
            unsigned int i; // r22
        }
        {
            // Range: 0x8024B2F8 -> 0x8024B340
            // Local variables
            unsigned int i; // r22

            {
                // Range: 0x8024B2F8 -> 0x8024B340
                // Local variables
                class ComboStream * stream; // r0
            }
        }
    }

    // References
    // -> struct {} __vt__Q25World19CameraFlyBlobEntity;
    // -> struct {} __vt__Q25World19ComboAnimBlobEntity;
}
// Range: 0x8024B424 -> 0x8024B7E8
void World::CinematicBlobEntity::Evaluate(class CinematicBlobEntity * this /* r26 */) {
    {
        // Range: 0x8024B454 -> 0x8024B738
        // Local variables
        class View * view; // r24

        {
            // Range: 0x8024B45C -> 0x8024B514
            // Local variables
            class Viewport * viewport; // r24

            {
                // Range: 0x8024B480 -> 0x8024B514
                // Local variables
                class Matrix43 mat; // r1+0x40
                class UpdateStruct data; // r1+0x70
            }
        }
        {
            // Range: 0x8024B514 -> 0x8024B724
            // Local variables
            unsigned int i; // r29

            {
                // Range: 0x8024B514 -> 0x8024B724
                // Local variables
                class ComboAnimBlobAssetV2 * v2data; // r23
                class ComboStream * stream; // r27
                class ModelInstanceTableEntry * instanceEntry; // r28

                {
                    // Range: 0x8024B51C -> 0x8024B51C
                    // Local variables
                    unsigned char visible; // r0
                }
                {
                    // Range: 0x8024B5E0 -> 0x8024B628
                    // Local variables
                    class Model * model; // r28
                    class Skeleton * skel; // r23
                }
                {
                    // Range: 0x8024B628 -> 0x8024B714
                    // Local variables
                    class Matrix43 transform; // r1+0x10
                    class Vector * transVec; // r20
                    class Vector * scaleVec; // r21
                    class Quaternion * rotVec; // r22
                    int transformCount; // r27
                    class ThreadStackMarkSentry mark; // r1+0x8

                    {
                        // Range: 0x8024B6B4 -> 0x8024B708
                        // Local variables
                        int j; // r23
                    }
                }
            }
        }
    }
    {
        // Range: 0x8024B738 -> 0x8024B7BC
        // Local variables
        unsigned int i; // r20

        {
            // Range: 0x8024B738 -> 0x8024B7BC
            // Local variables
            class ModelInstanceTableEntry * instanceEntry; // r21
        }
    }

    // References
    // -> class DoFEffectSettings GlobalDoFSettings;
}
