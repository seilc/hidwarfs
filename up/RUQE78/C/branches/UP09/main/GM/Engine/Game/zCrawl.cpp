/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCrawl.cpp
*/
// Range: 0x800D6130 -> 0x800D6174
void zCrawl::Init(class zCrawl * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x800D6180 -> 0x800D6428
void zCrawl::Setup(class zCrawl * this /* r31 */) {
    // Local variables
    class Vector4 row_1; // r1+0x28
    class Vector4 row_2; // r1+0x18
    class Vector4 row_3; // r1+0x8
}
// Range: 0x800D6430 -> 0x800D64EC
void zCrawl::SetupIcons(class zCrawl * this /* r31 */) {
    // Local variables
    class xVec3 entryIconPos; // r1+0x8
}
// Range: 0x800D64F0 -> 0x800D65C0
void zCrawl::Reset(class zCrawl * this /* r31 */) {
    {
        // Range: 0x800D6520 -> 0x800D6570
        // Local variables
        int x; // r7
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800D65C0 -> 0x800D688C
void zCrawl::HandleEvent(class zCrawl * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    {
        // Range: 0x800D6770 -> 0x800D6828
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r25
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x800D6890 -> 0x800D696C
class Entity * Sext::zCrawlAsset::Create(class EntityHandleBase * handle /* r29 */, class zCrawlAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zCrawl;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zCrawl::Update(float)
// Range: 0x800D6970 -> 0x800D6974
void zCrawl::Update() {
}
// Range: 0x800D6980 -> 0x800D6E68
bool zCrawl::movePlayer(class zCrawl * this /* r29 */, float dt /* f31 */, int dir /* r30 */, class zDugPlayer * player /* r31 */) {
    // Local variables
    bool turned; // r6

    {
        // Range: 0x800D6988 -> 0x800D6AD4
        // Local variables
        class xVec3 targetDir; // r1+0xC8
    }
    {
        // Range: 0x800D6ADC -> 0x800D6D20
        // Local variables
        class xVec3 pD; // r1+0x98
        class xVec3 pC; // r1+0xA4
        class xVec3 pB; // r1+0xB0
        class xVec3 pA; // r1+0xBC
        float fixAmount; // f0
    }

    // References
    // -> static class xBox sUnitBoxa;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zCrawl::TimeStep(float)
// Range: 0x800D6E70 -> 0x800D6E90
void zCrawl::TimeStep() {
}
// Range: 0x800D6E90 -> 0x800D73A8
void zCrawl::ContextCheckForPresence(class zCrawl * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    // Local variables
    unsigned int playerAction; // r0

    {
        // Range: 0x800D6F14 -> 0x800D738C
        // Local variables
        unsigned int flags; // r0

        {
            // Range: 0x800D70D0 -> 0x800D738C
            // Local variables
            class zUpContextAction * ca; // r0

            {
                // Range: 0x800D7104 -> 0x800D7328
                // Local variables
                class xVec3 pPos; // r1+0xA0
                float dzB; // f2
                float dyB; // f9
                float dxB; // f8
                float dzA; // f3
                float dyA; // f3
                float dxA; // f7
                class hkVector4 pos; // r1+0xB0

                {
                    // Range: 0x800D7144 -> 0x800D7254
                    // Local variables
                    class xVec3 playerToDest; // r1+0x94
                }
                {
                    // Range: 0x800D7254 -> 0x800D7328
                    // Local variables
                    class xVec3 playerToDest; // r1+0x88
                }
            }
        }
    }

    // References
    // -> static class xBox sUnitBoxa;
}
// signature: zCrawl::GetAnimPackage(ePlayerName)
// Range: 0x800D73C0 -> 0x800D73D8
class zAnimPackage * zCrawl::GetAnimPackage() {
}
// Range: 0x800D73E0 -> 0x800D78E4
void zCrawl::DriveAttach(class zCrawl * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x800D78F0 -> 0x800D78F8
class xMat4x3 * zCrawl::DriveGetCurMat() {
}
// signature: zCrawl::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800D7900 -> 0x800D805C
void zCrawl::DriveCauseMove(class zCrawl * this /* r26 */, class xMat4x3 * parent /* r27 */, class xMat4x3 * relMat /* r28 */, class xMat4x3 * oldMat /* r29 */, bool rotate /* r30 */, bool yaw /* r31 */, float givenYaw /* f31 */) {
    // Local variables
    class xVec3 newEuler; // r1+0x50
    class xMat4x3 baseMat; // r1+0x90
    class xVec3 Raa; // r1+0x44
    class xVec3 Rbb; // r1+0x38

    {
        // Range: 0x800D7948 -> 0x800D7C5C
        // Local variables
        class xMat3x3 a_descaled; // r1+0xD0
    }
    {
        // Range: 0x800D7C70 -> 0x800D7E88
        // Local variables
        class xMat3x3 rot; // r1+0x60

        {
            // Range: 0x800D7D54 -> 0x800D7D6C
            // Local variables
            float yawDiff; // f1
        }
    }
}
// signature: zCrawl::DrivePrep(World::xOGEntity *)
// Range: 0x800D8060 -> 0x800D8124
bool zCrawl::DrivePrep() {
}
