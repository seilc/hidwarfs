/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\Animate\AnimSetup.cpp
*/
class _OGAnimationSetSchema _OGAnimationSetschema; // size: 0x18, address: 0x80765B38
class SchemaRegistrator _OGAnimationSetschemaReg; // size: 0x8, address: 0x80765B50
static class zQueue sSAQueue; // size: 0x2008, address: 0x80765B58
// Range: 0x8007C920 -> 0x8007C930
void World::_OGAnimationSetEntity::Deactivate() {
}
// Range: 0x8007C930 -> 0x8007C980
void World::_OGAnimationSetEntity::Destroy(class _OGAnimationSetEntity * this /* r31 */) {
}
// signature: World::_OGAnimationSetSchema::Fix(World::Asset *, long, int)
// Range: 0x8007C9E0 -> 0x8007C9E8
void World::_OGAnimationSetSchema::Fix() {
}
// signature: World::_OGAnimationSetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8007C9F0 -> 0x8007CA3C
class EntityStub * World::_OGAnimationSetSchema::CreateStub(class _OGAnimationSetSchema * this /* r31 */) {
}
// signature: World::_OGAnimationSetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8007CA40 -> 0x8007CA58
void World::_OGAnimationSetSchema::DestroyStub() {
}
// signature: World::_OGAnimationSetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8007CA60 -> 0x8007CAC4
class Entity * World::_OGAnimationSetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGAnimationSetEntity;
}
// Range: 0x8007CB10 -> 0x8007CBCC
void AnimationSoundsSceneExit() {
    // Local variables
    int count; // r27

    {
        // Range: 0x8007CB4C -> 0x8007CBAC
        // Local variables
        int i; // r26
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
// signature: AnimationSetRead(void *, unsigned long long, void *, unsigned int, unsigned int *)
// Range: 0x8007CBD0 -> 0x8007DCA8
void * AnimationSetRead(unsigned long long assetID /* r1+0x8 */, void * inData /* r15 */, unsigned int inSize /* r1+0x10 */, unsigned int * outSize /* r1+0x14 */) {
    // Local variables
    class AnimationSet * animationSet; // r0
    unsigned int i; // r0
    unsigned int j; // r29
    void * * rawAnimData; // r21
    unsigned int row; // r5
    unsigned int col; // r0
    unsigned int slice; // r4
    unsigned int maxFiles; // r16
    class xAnimFile * * animFileList; // r1+0x2C
    enum eAnimSetType animSetType; // r14
    class xAnimTable * tables[4]; // r1+0x18
    int tableCount; // r1+0x28
    class xAnimState * astate; // r20

    {
        // Range: 0x8007CD1C -> 0x8007D43C
        {
            // Range: 0x8007CD24 -> 0x8007CD24
            // Local variables
            bool AnimLoadSuccessful; // r30
        }
    }
    {
        // Range: 0x8007D548 -> 0x8007DB60
        // Local variables
        int k; // r19

        {
            // Range: 0x8007D548 -> 0x8007DB60
            // Local variables
            int effectsCount; // r18
            int vfxCount; // r18

            {
                // Range: 0x8007D548 -> 0x8007D548
                // Local variables
                unsigned int subStateID; // r0
            }
            {
                // Range: 0x8007D548 -> 0x8007D548
                // Local variables
                int j; // r7

                {
                    // Range: 0x8007D548 -> 0x8007D548
                    // Local variables
                    class xAnimVFX_Effect * effect; // r8
                }
            }
            {
                // Range: 0x8007D548 -> 0x8007DB34
                // Local variables
                int j; // r17

                {
                    // Range: 0x8007D548 -> 0x8007DB34
                    // Local variables
                    class zSoundAsset * sasset; // r16
                }
            }
        }
    }
    {
        // Range: 0x8007DBFC -> 0x8007DC78
        // Local variables
        int k; // r0

        {
            // Range: 0x8007DBFC -> 0x8007DC78
            // Local variables
            class xAnimFile * foundFile; // r6
        }
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> class zGlobals globals;
    // -> static class xMemWatermark memWatermark;
    // -> unsigned int gxAnimUseGrowAlloc;
}
// Range: 0x8007DCB0 -> 0x8007DF18
void AnimationSetUnload(void * userdata /* r24 */, unsigned long long aid /* r26:r25 */) {
    // Local variables
    class AnimationSet * animationSet; // r0
    enum eAnimSetType animSetType; // r23

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
