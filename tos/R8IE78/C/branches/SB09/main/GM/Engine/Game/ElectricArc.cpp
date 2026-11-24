/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\ElectricArc.cpp
*/
static float knockBackScaleAway; // size: 0x4, address: 0x806C2414
static float knockBackScaleUp; // size: 0x4, address: 0x806C2418
// Range: 0x801783F0 -> 0x80178470
class Entity * Sext::ElectricArcAsset::Create(class EntityHandleBase * handle /* r29 */, class ElectricArcAsset * asset /* r30 */) {
}
// signature: ElectricArcEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80178470 -> 0x8017848C
static void ElectricArcEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80178490 -> 0x801784F4
void * ElectricArc::~ElectricArc(class ElectricArc * this /* r30 */) {
    // References
    // -> struct {} __vt__11ElectricArc;
}
// Range: 0x80178500 -> 0x801785B0
void ElectricArc::Release(class ElectricArc * this /* r28 */) {
    {
        // Range: 0x80178544 -> 0x8017857C
        // Local variables
        int i; // r29
    }
}
// signature: ElectricArc::ElectricArc(World::EntityHandleBase *)
// Range: 0x801785B0 -> 0x80178600
void * ElectricArc::ElectricArc(class ElectricArc * this /* r31 */) {
    // References
    // -> struct {} __vt__11ElectricArc;
}
// signature: ElectricArc::SetBSPVisible(bool)
// Range: 0x80178600 -> 0x80178638
void ElectricArc::SetBSPVisible() {
}
// signature: ElectricArc::Init(void *)
// Range: 0x80178640 -> 0x801786AC
void ElectricArc::Init(class ElectricArc * this /* r31 */) {
}
// Range: 0x801786B0 -> 0x80178ACC
void ElectricArc::Setup(class ElectricArc * this /* r31 */) {
    {
        // Range: 0x801786C0 -> 0x8017874C
        // Local variables
        int i; // r28

        {
            // Range: 0x801786C0 -> 0x8017874C
            // Local variables
            class ElectricCylinder * cg; // r0

            {
                // Range: 0x801786CC -> 0x801786CC
                // Local variables
                class EntityHandleBase * goodie; // r0
            }
        }
    }
    {
        // Range: 0x801787B0 -> 0x80178834
        // Local variables
        int i; // r26

        {
            // Range: 0x801787B0 -> 0x80178834
            // Local variables
            class CylinderRenderable * cr; // r25
        }
    }
    {
        // Range: 0x80178838 -> 0x801788C0
        // Local variables
        int i; // r25

        {
            // Range: 0x80178838 -> 0x801788C0
            // Local variables
            class Electricity * c; // r26
        }
    }
    {
        // Range: 0x801788C4 -> 0x8017894C
        // Local variables
        int i; // r25

        {
            // Range: 0x801788C4 -> 0x8017894C
            // Local variables
            class MappedElectricity * c; // r26
        }
    }
    {
        // Range: 0x80178950 -> 0x801789E8
        // Local variables
        int i; // r25

        {
            // Range: 0x80178950 -> 0x801789E8
            // Local variables
            class MappedLaser * c; // r26
        }
    }
    {
        // Range: 0x801789EC -> 0x80178A84
        // Local variables
        int i; // r25

        {
            // Range: 0x801789EC -> 0x80178A84
            // Local variables
            class ElectricSpotLight * c; // r26
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__17ElectricSpotLight;
    // -> struct {} __vt__11MappedLaser;
    // -> struct {} __vt__18CylinderRenderable;
}
// Range: 0x80178B30 -> 0x80178BB0
void ElectricArc::Reset(class ElectricArc * this /* r31 */) {
}
// Range: 0x80178BB0 -> 0x80178C08
void ElectricArc::DebugReset(class ElectricArc * this /* r29 */) {
}
// signature: ElectricArc::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80178C10 -> 0x80178EDC
void ElectricArc::HandleEvent(class ElectricArc * this /* r31 */, class EventAny * genericParams /* r27 */) {
    {
        // Range: 0x80178C98 -> 0x80178CB4
        // Local variables
        class EventActionOn * paramst; // r0
    }
    {
        // Range: 0x80178CB4 -> 0x80178CD4
        // Local variables
        class EventActionToggle * paramst; // r0
    }
    {
        // Range: 0x80178CD4 -> 0x80178D0C
        // Local variables
        class EventAttachArcPoint * paramst; // r0

        {
            // Range: 0x80178CD4 -> 0x80178D08
            // Local variables
            class ElectricPoint * possiblePoint; // r4
        }
    }
    {
        // Range: 0x80178D0C -> 0x80178D48
        // Local variables
        class EventAttachArcPoint * paramst; // r0

        {
            // Range: 0x80178D0C -> 0x80178D40
            // Local variables
            class ElectricPoint * possiblePoint; // r4
        }
    }
    {
        // Range: 0x80178D48 -> 0x80178EBC
        // Local variables
        float vLen; // f31
        class xVec3 dV; // r1+0x8

        {
            // Range: 0x80178E5C -> 0x80178EBC
            // Local variables
            int vertSize; // r29

            {
                // Range: 0x80178E6C -> 0x80178EBC
                // Local variables
                int i; // r28

                {
                    // Range: 0x80178E6C -> 0x80178EBC
                    // Local variables
                    class xVec3 * v; // r27
                }
            }
        }
    }
}
// signature: ElectricArc::AttachArcPoint(ElectricPoint *, int)
// Range: 0x80178F60 -> 0x80178FC0
void ElectricArc::AttachArcPoint(class ElectricArc * this /* r30 */, class ElectricPoint * p /* r31 */) {
}
// signature: ElectricArc::DetachArcPoint(ElectricPoint *, int)
// Range: 0x80178FC0 -> 0x80179010
void ElectricArc::DetachArcPoint(class ElectricArc * this /* r30 */, int idx /* r31 */) {
}
// signature: ElectricArc::Detect(xVec3 *, float)
// Range: 0x80179010 -> 0x801791B4
float ElectricArc::Detect(class ElectricArc * this /* r28 */, class xVec3 * pt3 /* r29 */) {
    {
        // Range: 0x80179038 -> 0x8017918C
        // Local variables
        float cosAngle2; // f0
        float cosAngle1; // f0
        class xVec3 pV; // r1+0x2C
        class xVec3 pr; // r1+0x38
        class xVec3 q; // r1+0x44
        class xVec3 p; // r1+0x50

        {
            // Range: 0x8017911C -> 0x8017918C
            // Local variables
            float currentDist2; // f1
            class xVec3 d; // r1+0x20
        }
    }
}
// Range: 0x801791C0 -> 0x801795B8
void ElectricArc::Update(class ElectricArc * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float dist; // f29

    {
        // Range: 0x80179284 -> 0x80179314
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x80179340 -> 0x80179488
        // Local variables
        float vLen; // f31
        class xVec3 dV; // r1+0x8
    }
    {
        // Range: 0x8017948C -> 0x80179534
        // Local variables
        float d; // f0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: ElectricArc::Render(xVec3 *, xVec3 *)
// Range: 0x801795C0 -> 0x801797AC
void ElectricArc::Render(class ElectricArc * this /* r31 */, class xVec3 * p2 /* r27 */) {
    // Local variables
    class xVec3 start; // r1+0x20
    class xVec3 end; // r1+0x14
    float timer; // f30

    {
        // Range: 0x80179634 -> 0x80179690
        // Local variables
        float len; // f0
        class xVec3 dirVec; // r1+0x8
    }
    {
        // Range: 0x80179690 -> 0x801796EC
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x801796EC -> 0x80179784
        // Local variables
        int i; // r27

        {
            // Range: 0x801796EC -> 0x80179784
            {
                // Range: 0x801796EC -> 0x80179784
                // Local variables
                int refColsCount; // r8
                class xVec3 * refVerts; // r7
            }
        }
    }
}
// Range: 0x801797B0 -> 0x80179A20
void ElectricArc::ProcessCollision(class ElectricArc * this /* r30 */, class xBase * hitObject /* r31 */) {
    {
        // Range: 0x80179954 -> 0x80179A08
        // Local variables
        class xVec3 knockbackVec; // r1+0x8
        class zCombatDamageInfo damageInfo; // r1+0x14
    }

    // References
    // -> static float knockBackScaleUp;
    // -> static float knockBackScaleAway;
}
// Range: 0x80179A20 -> 0x80179B3C
void ElectricArc::CheckForHit(class ElectricArc * this /* r28 */) {
    // Local variables
    class hkVector4 vA; // r1+0x20
    class hkVector4 vB; // r1+0x10
    class hkpShapePhantom * playerPhantom; // r0

    {
        // Range: 0x80179A94 -> 0x80179B20
        // Local variables
        class hkpShapeRayCastOutput rayCastOutput; // r1+0x60
        class hkpShapeRayCastInput rayCastInput; // r1+0x30
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: ElectricArc::CheckFlags(unsigned int, unsigned int)
// Range: 0x80179B40 -> 0x80179BC0
bool ElectricArc::CheckFlags() {
}
// Range: 0x80179BC0 -> 0x80179C40
class Entity * Sext::ElectricPointAsset::Create(class EntityHandleBase * handle /* r29 */, class ElectricPointAsset * asset /* r30 */) {
}
// signature: ElectricPoint::ElectricPoint(World::EntityHandleBase *)
// Range: 0x80179C40 -> 0x80179C88
void * ElectricPoint::ElectricPoint(class ElectricPoint * this /* r31 */) {
    // References
    // -> struct {} __vt__13ElectricPoint;
}
// signature: ElectricPoint::Init(void *)
// Range: 0x80179C90 -> 0x80179CF8
void ElectricPoint::Init(class ElectricPoint * this /* r31 */) {
}
// Range: 0x80179D00 -> 0x80179D94
void ElectricPoint::SetupModel(class ElectricPoint * this /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// Range: 0x80179DA0 -> 0x80179E08
void ElectricPoint::ResetMat(class ElectricPoint * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: ElectricPoint::SetAt(xVec3 *)
// Range: 0x80179E10 -> 0x80179E5C
void ElectricPoint::SetAt(class ElectricPoint * this /* r31 */) {
}
// signature: ElectricPoint::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80179E60 -> 0x80179F50
void ElectricPoint::DriveCauseMove(class ElectricPoint * this /* r28 */, class xMat4x3 * parent /* r29 */, class xMat4x3 * relMat /* r30 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x98
    class xMat4x3 tempMat; // r1+0x58
    class xMat4x3 baseMat; // r1+0x18
    class xVec3 R; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// signature: ElectricPoint::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x80179F50 -> 0x80179FF4
void ElectricPoint::DriveAttach(class ElectricPoint * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8
}
// Range: 0x8017A000 -> 0x8017A0C8
void ElectricPoint::Reset(class ElectricPoint * this /* r31 */) {
    {
        // Range: 0x8017A060 -> 0x8017A0B4
        // Local variables
        class xBase * other; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8017A0D0 -> 0x8017A128
void ElectricPoint::DebugReset(class ElectricPoint * this /* r29 */) {
}
// signature: ElectricPoint::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017A130 -> 0x8017A35C
void ElectricPoint::HandleEvent(class ElectricPoint * this /* r31 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x8017A24C -> 0x8017A30C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x8017A360 -> 0x8017A504
void ElectricPoint::Update(class ElectricPoint * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8017A380 -> 0x8017A400
        // Local variables
        class xVec3 tgt; // r1+0x10
    }
}
// Range: 0x8017A510 -> 0x8017A558
void ElectricPoint::Render(class ElectricPoint * this /* r31 */) {
}
