/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xEnt.cpp
*/
char * g_xEnt_FMT; // size: 0x4, address: 0x806F2924
static float nsn_angle; // size: 0x4, address: 0x806F2928
static class xBox all_ents_box; // size: 0x18, address: 0x807540F8
static int all_ents_box_init; // size: 0x4, address: 0x80754110
class xEnt * onlyEnt; // size: 0x4, address: 0x80754114
int chooseNext; // size: 0x4, address: 0x80754118
// Range: 0x8002E460 -> 0x8002E470
void xEntSceneInit() {
    // References
    // -> static int all_ents_box_init;
}
// Range: 0x8002E470 -> 0x8002E474
void xEntSceneExit() {
}
// signature: xEntAddHittableFlag(xEnt *)
// Range: 0x8002E480 -> 0x8002E52C
static void xEntAddHittableFlag() {
    {
        // Range: 0x8002E4C4 -> 0x8002E4C4
        // Local variables
        unsigned int i; // r0
    }
}
// signature: xEntInit(xEnt *, xEntAsset *)
// Range: 0x8002E530 -> 0x8002E67C
void xEntInit() {
}
// signature: xEntGrowGlobalBoundingBox(const xVec3 *)
// Range: 0x8002E680 -> 0x8002E7A8
void xEntGrowGlobalBoundingBox() {
    // References
    // -> static class xBox all_ents_box;
    // -> static int all_ents_box_init;
}
// Range: 0x8002E7B0 -> 0x8002EC3C
void xEntInitForType(class xEnt * ent /* r30 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8002EC40 -> 0x8002EC90
void xEntExit(class xEnt * ent /* r31 */) {
}
// Range: 0x8002EC90 -> 0x8002EE2C
void xEntSetup(class xEnt * ent /* r31 */) {
}
// Range: 0x8002EE30 -> 0x8002F54C
void xEntDrivenBySetup(class xEnt * ent /* r19 */) {
    {
        // Range: 0x8002EE80 -> 0x8002F508
        // Local variables
        unsigned int i; // r20

        {
            // Range: 0x8002EE80 -> 0x8002F508
            {
                // Range: 0x8002EE80 -> 0x8002F508
                // Local variables
                class xEnt * dent; // r0

                {
                    // Range: 0x8002EE80 -> 0x8002F508
                    {
                        // Range: 0x8002EE80 -> 0x8002F4FC
                        // Local variables
                        class xMat4x3 invMat; // r1+0x8
                    }
                }
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class zGlobals globals;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8002F5A0 -> 0x8002F718
void xEntDrivenByReset(class xEnt * ent /* r27 */) {
    {
        // Range: 0x8002F5D0 -> 0x8002F6F0
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8002F5D0 -> 0x8002F6F0
            {
                // Range: 0x8002F5D0 -> 0x8002F6F0
                // Local variables
                class xEnt * dent; // r0
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class zGlobals globals;
}
// Range: 0x8002F720 -> 0x8002F7E4
void xEntSave(class xEnt * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x8002F7F0 -> 0x8002FA1C
void xEntLoad(class xEnt * ent /* r31 */, class xSerial * s /* r25 */) {
    // Local variables
    int b; // r1+0xC

    // References
    // -> class Scene * primaryScene;
}
// signature: xEntReset(xEnt *)
// Range: 0x8002FA20 -> 0x8002FA30
void xEntReset() {
}
// Range: 0x8002FA30 -> 0x800300FC
void xEntReset(class xEnt * ent /* r28 */, class xVec3 * pos /* r29 */, class xVec3 * ang /* r30 */) {
    // Local variables
    class xMat4x3 frame; // r1+0x20

    {
        // Range: 0x8002FDD8 -> 0x8002FEA4
        // Local variables
        unsigned short old_flags; // r24
        class xModelInstance * minst; // r23
    }

    // References
    // -> class xVec3 g_O3;
    // -> bool gInSceneResetOrInit;
    // -> class Scene * primaryScene;
}
// signature: xEntGetAnimFlags(const xEnt *)
// Range: 0x80030150 -> 0x80030168
unsigned int xEntGetAnimFlags() {
}
// Range: 0x80030170 -> 0x800301B8
class xModelInstance * xEntLoadModel(class xEnt * ent /* r31 */) {
    // Local variables
    class xModelInstance * model; // r3
}
// signature: xEntRender(xEnt *)
// Range: 0x800301C0 -> 0x8003027C
void xEntRender() {
    {
        // Range: 0x80030200 -> 0x80030254
        // Local variables
        class xVec3 shadVec; // r1+0x20
    }

    // References
    // -> int xModelBucketEnabled;
}
// Range: 0x80030280 -> 0x80030924
void xEntUpdate(class xEnt * ent /* r30 */, class xScene * sc /* r31 */, float dt /* f31 */) {
    // Local variables
    enum MotionType motionType; // r4

    {
        // Range: 0x800304DC -> 0x80030648
        // Local variables
        class hkTransform tempXform; // r1+0x20
    }
}
// signature: xEntBeginUpdate(xEnt *, xScene *, float)
// Range: 0x80030930 -> 0x80030B7C
void xEntBeginUpdate(class xEnt * ent /* r31 */, float dt /* f31 */) {
}
// Range: 0x80030B80 -> 0x80030CE0
void xEntEndUpdate(class xEnt * ent /* r30 */, class xScene * sc /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80030C30 -> 0x80030C58
        // Local variables
        class xVec3 * upos; // r0
        class xVec3 * mpos; // r0
    }
}
// signature: xEntDefaultBoundUpdate(xEnt *, xVec3 *)
// Range: 0x80030D70 -> 0x80030ECC
void xEntDefaultBoundUpdate() {
    // Local variables
    class xBound * bound; // r0

    // References
    // -> float TERMINAL_VELOCITY_FACTOR;
}
// signature: xEntDefaultTranslate(xEnt *, xVec3 *, xMat4x3 *)
// Range: 0x80030ED0 -> 0x80031188
void xEntDefaultTranslate(class xEnt * ent /* r29 */, class xMat4x3 * dmat /* r30 */) {
}
// Range: 0x80031190 -> 0x80031498
void xEntMotionToMatrix(class xEnt * ent /* r29 */, class xEntFrame * frame /* r31 */) {
}
// signature: xEntMove(xEnt *, xScene *, float)
// Range: 0x800314B0 -> 0x80031978
void xEntMove(class xEnt * ent /* r31 */, float dt /* f31 */) {
    // Local variables
    class hkpRigidBody * entHKBody; // r30

    {
        // Range: 0x8003150C -> 0x800318B0
        // Local variables
        class xEntFrame * dframe; // r29

        {
            // Range: 0x80031558 -> 0x80031588
            // Local variables
            class xVec3 dpos; // r1+0x6C
        }
        {
            // Range: 0x80031590 -> 0x8003164C
            // Local variables
            class xMat4x3 newMat; // r1+0x1E8
        }
        {
            // Range: 0x80031654 -> 0x80031748
            // Local variables
            class xVec3 scale; // r1+0x60
            class xMat4x3 deltaMat; // r1+0x168
            class xMat4x3 invOldmat; // r1+0x1A8

            {
                // Range: 0x8003165C -> 0x800316B0
                // Local variables
                class xMat4x3 newMat; // r1+0x128
            }
            {
                // Range: 0x800316B0 -> 0x80031708
                // Local variables
                class xMat4x3 expectedMat; // r1+0xA8
                class xMat4x3 baseMat; // r1+0xE8
            }
        }
        {
            // Range: 0x80031758 -> 0x800318B0
            // Local variables
            class xQuat quat; // r1+0x50
            class xMat3x3 tempMat; // r1+0x78
            class xMat4x3 * pMat; // r0

            {
                // Range: 0x800317F8 -> 0x80031850
                // Local variables
                class hkpPropertyValue val; // r1+0x28
            }
        }
    }
}
// signature: xEnt::AddDriver(xEnt *)
// Range: 0x80031A10 -> 0x80031AB8
void xEnt::AddDriver() {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80031AC0 -> 0x80031B80
void xEnt::RemoveDriver() {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: xEntApplyPhysics(xEnt *, xScene *, float)
// Range: 0x80031B80 -> 0x80031C14
void xEntApplyPhysics() {
    // Local variables
    class xVec3 dposvel; // r1+0x8
}
// Range: 0x80031C20 -> 0x80031FA0
bool xEntTurnToFace(class xEnt * ent /* r29 */, class xVec3 * target /* r30 */, float speedLimit /* f29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 currentFacing; // r1+0x14
    float dot; // f31

    {
        // Range: 0x80031DA0 -> 0x80031F50
        // Local variables
        float maxAngle; // f0
        float angle; // f5
        class xVec3 axis; // r1+0x8
    }
}
// Range: 0x80031FA0 -> 0x80031FA4
void xEntLoadCheckPoint() {
}
// Range: 0x80031FB0 -> 0x80031FB4
void xEntStoreCheckPoint() {
}
// signature: xCollisionEnt::Create(const xMat4x3 &, World::CollisionMeshBlobEntity *, int)
// Range: 0x80031FC0 -> 0x8003244C
class xCollisionEnt * xCollisionEnt::Create(class CollisionMeshBlobEntity * pBlob /* r30 */) {
    // Local variables
    class xBase * base; // r0
    class xBound * bound; // r0

    // References
    // -> float TERMINAL_VELOCITY_FACTOR;
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__13xCollisionEnt;
}
// Range: 0x800324D0 -> 0x80032548
void * xCollisionEnt::~xCollisionEnt(class xCollisionEnt * this /* r30 */) {
    // References
    // -> struct {} __vt__13xCollisionEnt;
}
// signature: xGetSurface(xEnt *, unsigned int, bool *)
// Range: 0x80032550 -> 0x80032614
class SurfaceGamePlay * xGetSurface(bool * usingSurfaceFromTriangles /* r31 */) {
    // Local variables
    class SurfaceGamePlay * surface; // r6

    {
        // Range: 0x80032578 -> 0x800325FC
        // Local variables
        class Goodie * * pSurfaceTable; // r7
        class TriangleInfo * pTriInfo; // r5
    }
}
