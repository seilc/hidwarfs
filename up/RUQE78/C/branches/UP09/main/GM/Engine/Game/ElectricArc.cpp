/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\ElectricArc.cpp
*/
// Range: 0x8025BAA0 -> 0x8025BB80
class Entity * Sext::ElectricArcAsset::Create(class EntityHandleBase * handle /* r29 */, class ElectricArcAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11ElectricArc;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: ElectricArcEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8025BB80 -> 0x8025BB9C
static void ElectricArcEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x8025BBA0 -> 0x8025BCC8
void * ElectricArc::~ElectricArc(class ElectricArc * this /* r26 */) {
    // References
    // -> struct {} __vt__11ElectricArc;
}
// Range: 0x8025BCD0 -> 0x8025BDA4
void ElectricArc::Release(class ElectricArc * this /* r27 */) {
    {
        // Range: 0x8025BD14 -> 0x8025BD20
        // Local variables
        int i; // r28
    }
}
// signature: ElectricArc::ElectricArc(World::EntityHandleBase *)
// Range: 0x8025BDB0 -> 0x8025BE0C
void * ElectricArc::ElectricArc() {
    // References
    // -> struct {} __vt__11ElectricArc;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: ElectricArc::Init(void *)
// Range: 0x8025BE10 -> 0x8025BF18
void ElectricArc::Init(class ElectricArc * this /* r29 */) {
    {
        // Range: 0x8025BE6C -> 0x8025BEF0
        // Local variables
        int i; // r30

        {
            // Range: 0x8025BE6C -> 0x8025BEF0
            // Local variables
            class Cylinder cAsset; // r1+0x8

            {
                // Range: 0x8025BE74 -> 0x8025BE74
                // Local variables
                class EntityHandleBase * goodie; // r0
            }
        }
    }
}
// signature: ElectricArc::GetGeom(int)
// Range: 0x8025BF20 -> 0x8025BF30
class ElectricCylinder * ElectricArc::GetGeom() {
}
// Range: 0x8025BF30 -> 0x8025C6C8
void ElectricArc::Setup(class ElectricArc * this /* r31 */) {
    {
        // Range: 0x8025C018 -> 0x8025C0D8
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C018 -> 0x8025C0D8
            // Local variables
            class Cylinder cAsset; // r1+0x210
            class ElectricCylinder * c; // r24
        }
    }
    {
        // Range: 0x8025C134 -> 0x8025C1F0
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C134 -> 0x8025C1F0
            // Local variables
            class Cylinder cAsset; // r1+0x1A8
            class Electricity * c; // r24
        }
    }
    {
        // Range: 0x8025C24C -> 0x8025C308
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C24C -> 0x8025C308
            // Local variables
            class Cylinder cAsset; // r1+0x140
            class Electricity * c; // r24
        }
    }
    {
        // Range: 0x8025C364 -> 0x8025C420
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C364 -> 0x8025C420
            // Local variables
            class Cylinder cAsset; // r1+0xD8
            class MappedElectricity * c; // r24
        }
    }
    {
        // Range: 0x8025C47C -> 0x8025C538
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C47C -> 0x8025C538
            // Local variables
            class Cylinder cAsset; // r1+0x70
            class MappedLaser * c; // r24
        }
    }
    {
        // Range: 0x8025C594 -> 0x8025C650
        // Local variables
        int i; // r28

        {
            // Range: 0x8025C594 -> 0x8025C650
            // Local variables
            class Cylinder cAsset; // r1+0x8
            class ElectricSpotLight * c; // r24
        }
    }

    // References
    // -> struct {} __vt__17ElectricSpotLight;
    // -> struct {} __vt__11MappedLaser;
    // -> struct {} __vt__17MappedElectricity;
    // -> struct {} __vt__11Electricity;
    // -> struct {} __vt__16ElectricCylinder;
}
// signature: ElectricArc::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8025C6D0 -> 0x8025CD3C
void ElectricArc::HandleEvent(class ElectricArc * this /* r29 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8025C840 -> 0x8025C884
        // Local variables
        class EventActionOn * paramst; // r0
    }
    {
        // Range: 0x8025C884 -> 0x8025C8CC
        // Local variables
        class EventActionToggle * paramst; // r0
    }
    {
        // Range: 0x8025C8CC -> 0x8025CB98
        // Local variables
        class EventAttachArcPoint * paramst; // r0

        {
            // Range: 0x8025C8CC -> 0x8025CB94
            // Local variables
            class ElectricPoint * possiblePoint; // r30
        }
    }
    {
        // Range: 0x8025CB98 -> 0x8025CD20
        // Local variables
        class EventAttachArcPoint * paramst; // r0

        {
            // Range: 0x8025CB98 -> 0x8025CD20
            // Local variables
            class ElectricPoint * possiblePoint; // r30
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: ElectricArc::Detect(xVec3 *, float)
// Range: 0x8025CD40 -> 0x8025D01C
float ElectricArc::Detect() {
    {
        // Range: 0x8025CD78 -> 0x8025CFDC
        // Local variables
        float cosAngle2; // f0
        float cosAngle1; // f0
        class xVec3 pV; // r1+0x44
        class xVec3 pr; // r1+0x50
        class xVec3 q; // r1+0x5C
        class xVec3 p; // r1+0x68

        {
            // Range: 0x8025CE58 -> 0x8025CFDC
            // Local variables
            float currentDist2; // f0
            class xVec3 d; // r1+0x38
        }
    }
}
// Range: 0x8025D020 -> 0x8025D50C
void ElectricArc::Update(class ElectricArc * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float dist; // f30

    {
        // Range: 0x8025D0BC -> 0x8025D168
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x8025D3E4 -> 0x8025D490
        // Local variables
        float d; // f0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8025D510 -> 0x8025D8E0
void ElectricArc::Render(class ElectricArc * this /* r29 */, class xVec3 * p1 /* r30 */, class xVec3 * p2 /* r28 */) {
    // Local variables
    class xVec3 start; // r1+0x48
    class xVec3 end; // r1+0x3C
    float timer; // f0
    class xVec3 dirVec; // r1+0x30

    {
        // Range: 0x8025D5AC -> 0x8025D738
        // Local variables
        float len; // f0
    }
    {
        // Range: 0x8025D73C -> 0x8025D7A4
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x8025D7B4 -> 0x8025D8A4
        // Local variables
        int i; // r30

        {
            // Range: 0x8025D7B4 -> 0x8025D8A4
            // Local variables
            int refColsCount; // r12
            class xVec3 * refVerts; // r10
        }
    }
}
// Range: 0x8025D8F0 -> 0x8025D980
void * ElectricCylinder::~ElectricCylinder(class ElectricCylinder * this /* r30 */) {
    // References
    // -> struct {} __vt__16ElectricCylinder;
}
// signature: ElectricCylinder::Create(int, int, float, float, float, bool)
// Range: 0x8025D980 -> 0x8025DAF4
void ElectricCylinder::Create(class ElectricCylinder * this /* r30 */, float deltaRadius /* f31 */, bool render /* r31 */) {
}
// signature: ElectricCylinder::SetCapIndices(int &, int, const int, const int, unsigned short *)
// Range: 0x8025DB00 -> 0x8025DC8C
void ElectricCylinder::SetCapIndices() {
    // Local variables
    int j; // r9
    int primCapCount; // r0
    bool flip; // r10
}
// signature: ElectricCylinder::SetIndices(const int, const int, const int, unsigned short *)
// Range: 0x8025DC90 -> 0x8025DEF0
void ElectricCylinder::SetIndices(class ElectricCylinder * this /* r28 */, int rows_count /* r29 */, int col_count /* r30 */, unsigned short * idx /* r31 */) {
    // Local variables
    int i; // r3
    int j; // r0
    int k; // r1+0x8
}
// signature: ElectricCylinder::SetVerts(const int, const int, const int, float, float, xVec3 *, float)
// Range: 0x8025DEF0 -> 0x8025E19C
void ElectricCylinder::SetVerts(int vert_count /* r28 */, int rows_count /* r29 */, float radius /* f30 */, class xVec3 * v /* r30 */, float dr /* f31 */) {
    // Local variables
    float dwidth; // f28
    float icolumns; // f3
    float dang; // f27
    float dradius; // f0
    float dcos; // f0
    float dsin; // f0
    float xdir; // f4
    float ydir; // f5
    float x; // f0
    float y; // f0
    float z; // f0

    {
        // Range: 0x8025DFBC -> 0x8025E14C
        // Local variables
        int i; // r7

        {
            // Range: 0x8025DFBC -> 0x8025E14C
            // Local variables
            float dy; // f7
            float dx; // f6

            {
                // Range: 0x8025DFD0 -> 0x8025DFD0
                // Local variables
                int j; // r8
            }
        }
    }
}
// signature: ElectricCylinder::Render(xVec3 *, xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, Sext::FloatColorRGBA, Sext::FloatColorRGBA, float, xVec3 *, int)
// Range: 0x8025E1A0 -> 0x8025ED90
void ElectricCylinder::Render(class ElectricCylinder * this /* r27 */, class xVec3 * start /* r28 */, class xVec3 * dirVec /* r29 */, class ImmediatePrototypeEntity * im /* r15 */, class FloatColorRGBA & colorStart /* r30 */, class FloatColorRGBA & colorEnd /* r31 */, float flicker /* f22 */) {
    // Local variables
    class xMat3x3 m; // r1+0x98
    class ImmediateContext immCtxt; // r1+0x50
    float dwidth; // f24

    {
        // Range: 0x8025E630 -> 0x8025E8D0
        // Local variables
        int i; // r19

        {
            // Range: 0x8025E630 -> 0x8025E8AC
            // Local variables
            int j; // r18

            {
                // Range: 0x8025E630 -> 0x8025E8AC
                // Local variables
                float f; // f10
                unsigned char a; // r25
                unsigned char b; // r15
                unsigned char g; // r16
                unsigned char r; // r17
                class xVec3 v; // r1+0x44
                float delta; // f23
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: ElectricSpotLight::Create(int, int, float, float, float, bool)
// Range: 0x8025ED90 -> 0x8025EE34
void ElectricSpotLight::Create(class ElectricSpotLight * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// signature: ElectricSpotLight::Render(xVec3 *, xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, Sext::FloatColorRGBA, Sext::FloatColorRGBA, float, xVec3 *, int)
// Range: 0x8025EE40 -> 0x8025FA30
void ElectricSpotLight::Render(class ElectricSpotLight * this /* r27 */, class xVec3 * start /* r28 */, class xVec3 * dirVec /* r29 */, class ImmediatePrototypeEntity * im /* r15 */, class FloatColorRGBA & colorStart /* r30 */, class FloatColorRGBA & colorEnd /* r31 */, float flicker /* f22 */) {
    // Local variables
    class xMat3x3 m; // r1+0x98
    class ImmediateContext immCtxt; // r1+0x50
    float dwidth; // f24

    {
        // Range: 0x8025F2D0 -> 0x8025F570
        // Local variables
        int i; // r19

        {
            // Range: 0x8025F2D0 -> 0x8025F54C
            // Local variables
            int j; // r18

            {
                // Range: 0x8025F2D0 -> 0x8025F54C
                // Local variables
                float f; // f10
                unsigned char a; // r25
                unsigned char b; // r15
                unsigned char g; // r16
                unsigned char r; // r17
                class xVec3 v; // r1+0x44
                float delta; // f23
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8025FA30 -> 0x8025FBA4
void * MappedElectricity::~MappedElectricity(class MappedElectricity * this /* r29 */) {
    // References
    // -> struct {} __vt__16ElectricCylinder;
    // -> struct {} __vt__11Electricity;
    // -> struct {} __vt__17MappedElectricity;
}
// signature: MappedElectricity::Create(int, int, float, float, float, bool)
// Range: 0x8025FBB0 -> 0x8025FCF4
void MappedElectricity::Create(class MappedElectricity * this /* r31 */) {
    {
        // Range: 0x8025FCA0 -> 0x8025FCA0
        // Local variables
        int i; // r5
    }
}
// signature: MappedElectricity::Update(float)
// Range: 0x8025FD00 -> 0x802601C8
void MappedElectricity::Update() {
    // Local variables
    int i; // r8

    {
        // Range: 0x8025FD74 -> 0x80260198
        // Local variables
        int d; // r10
        int upBound; // r27
        int loBound; // r9

        {
            // Range: 0x8025FD74 -> 0x8026018C
            // Local variables
            class xVec3 dirVec; // r1+0x8
            class xVec3 & end; // r4
            class xVec3 & start; // r11

            {
                // Range: 0x8025FD74 -> 0x8025FDEC
                // Local variables
                int j; // r12

                {
                    // Range: 0x8025FD74 -> 0x8025FDEC
                    // Local variables
                    class xVec3 * off; // r27
                    float delta; // f9
                }
            }
        }
    }
}
// Range: 0x802601D0 -> 0x802601DC
void MappedElectricity::ClearRowOffsets() {
}
// signature: MappedElectricity::SetRowOffset(float, float, float, int)
// Range: 0x802601E0 -> 0x80260238
void MappedElectricity::SetRowOffset() {
}
// signature: MappedElectricity::Render(xVec3 *, xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, Sext::FloatColorRGBA, Sext::FloatColorRGBA, float, xVec3 *, int)
// Range: 0x80260240 -> 0x802610F0
void MappedElectricity::Render(class MappedElectricity * this /* r24 */, class ImmediatePrototypeEntity * im /* r16 */, class FloatColorRGBA & colorStart /* r25 */, class FloatColorRGBA & colorEnd /* r26 */, float flicker /* f16 */, class xVec3 * refVerts /* r27 */, int refColsCount /* r28 */) {
    // Local variables
    class xMat3x3 m; // r1+0xA8
    class ImmediateContext immCtxt; // r1+0x60
    float dwidth; // f17

    {
        // Range: 0x80260674 -> 0x802608B8
        // Local variables
        float mult; // f18
        int i; // r5

        {
            // Range: 0x80260720 -> 0x80260888
            // Local variables
            float amplitudeScale; // f17
        }
    }
    {
        // Range: 0x80260958 -> 0x80260C04
        // Local variables
        int i; // r20

        {
            // Range: 0x80260958 -> 0x80260BC4
            // Local variables
            int j; // r21

            {
                // Range: 0x80260958 -> 0x80260BC4
                // Local variables
                class xVec3 vC; // r1+0x44
                unsigned int finalColor; // r3
                unsigned char a; // r0
                unsigned char b; // r28
                unsigned char g; // r23
                unsigned char r; // r22
                class xVec3 v; // r1+0x50
                float delta; // f18
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: MappedLaser::Render(xVec3 *, xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, Sext::FloatColorRGBA, Sext::FloatColorRGBA, float, xVec3 *, int)
// Range: 0x802610F0 -> 0x80261BA0
void MappedLaser::Render(class MappedLaser * this /* r26 */, class ImmediatePrototypeEntity * im /* r18 */, class FloatColorRGBA & colorStart /* r27 */, class FloatColorRGBA & colorEnd /* r28 */) {
    // Local variables
    class xMat3x3 m; // r1+0xA8
    class ImmediateContext immCtxt; // r1+0x60
    float dwidth; // f4

    {
        // Range: 0x802614B8 -> 0x80261718
        // Local variables
        int i; // r5

        {
            // Range: 0x802614B8 -> 0x80261698
            // Local variables
            int j; // r6

            {
                // Range: 0x802614B8 -> 0x80261698
                // Local variables
                class xVec3 vC; // r1+0x44
                unsigned char a; // r9
                unsigned char b; // r21
                unsigned char g; // r12
                unsigned char r; // r20
                class xVec3 v; // r1+0x50
                float delta; // f5
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: Electricity::Render(xVec3 *, xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, Sext::FloatColorRGBA, Sext::FloatColorRGBA, float, xVec3 *, int)
// Range: 0x80261BA0 -> 0x80262A10
void Electricity::Render(class Electricity * this /* r15 */, class xVec3 * start /* r16 */, class xVec3 * dirVec /* r17 */, class ImmediatePrototypeEntity * im /* r22 */, class FloatColorRGBA & colorStart /* r18 */, class FloatColorRGBA & colorEnd /* r19 */, float flicker /* f16 */, class xVec3 * refVerts /* r21 */, int refColsCount /* r20 */) {
    // Local variables
    class xMat3x3 m; // r1+0x98
    class ImmediateContext immCtxt; // r1+0x50
    float dwidth; // f17

    {
        // Range: 0x80261F98 -> 0x802621E0
        // Local variables
        float mult; // f18
        int i; // r5

        {
            // Range: 0x80262048 -> 0x802621B0
            // Local variables
            float amplitudeScale; // f17
        }
    }
    {
        // Range: 0x80262280 -> 0x80262524
        // Local variables
        int i; // r24

        {
            // Range: 0x80262280 -> 0x802624D4
            // Local variables
            int j; // r23

            {
                // Range: 0x80262280 -> 0x802624D4
                // Local variables
                unsigned int finalColor; // r0
                unsigned char a; // r0
                unsigned char b; // r20
                unsigned char g; // r21
                unsigned char r; // r22
                class xVec3 v; // r1+0x44
                float delta; // f18
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80262A10 -> 0x80262AD0
void * Electricity::~Electricity(class Electricity * this /* r29 */) {
    // References
    // -> struct {} __vt__16ElectricCylinder;
    // -> struct {} __vt__11Electricity;
}
// signature: Electricity::Create(int, int, float, float, float, bool)
// Range: 0x80262AD0 -> 0x80262B2C
void Electricity::Create(class Electricity * this /* r31 */) {
}
// Range: 0x80262B30 -> 0x80262D88
void Electricity::RandomizeOffsets(class Electricity * this /* r26 */, class xVec3 * refVerts /* r27 */, int refColsCount /* r28 */) {
    // Local variables
    int i; // r6
    int randomColumn; // r25

    {
        // Range: 0x80262C48 -> 0x80262D04
        // Local variables
        class xVec3 * v; // r3
        int colOff; // r0
    }
}
// Range: 0x80262D90 -> 0x80262EE8
void ElectricArc::ProcessCollision(class ElectricArc * this /* r30 */, class xBase * hitObject /* r31 */) {
    {
        // Range: 0x80262E40 -> 0x80262ED0
        // Local variables
        class EventActionHit params; // r1+0x8
    }
}
// Range: 0x80262EF0 -> 0x8026307C
void ElectricArc::CheckForHit(class ElectricArc * this /* r31 */) {
    // Local variables
    class xVec3 * pt1; // r0
    class xVec3 * pt2; // r0
    class hkVector4 vA; // r1+0x20
    class hkVector4 vB; // r1+0x10
    class LOSChecker losChecker; // r1+0x30

    {
        // Range: 0x80262F20 -> 0x80262F20
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80262F20 -> 0x80262F20
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x80262FF8 -> 0x80262FF8
        // Local variables
        class hkMonitorStream & mStream; // r0

        {
            // Range: 0x80262FF8 -> 0x80262FF8
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__10LOSChecker;
}
// signature: ElectricArc::CheckFlags(unsigned int, unsigned int)
// Range: 0x80263090 -> 0x80263110
bool ElectricArc::CheckFlags() {
}
// Range: 0x80263110 -> 0x802631EC
class Entity * Sext::ElectricPointAsset::Create(class EntityHandleBase * handle /* r29 */, class ElectricPointAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__13ElectricPoint;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: ElectricPoint::Init(void *)
// Range: 0x80263210 -> 0x80263518
void ElectricPoint::Init(class ElectricPoint * this /* r27 */) {
    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80263520 -> 0x80263528
class xMat4x3 * ElectricPoint::DriveGetCurMat() {
}
// signature: ElectricPoint::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80263530 -> 0x80263920
void ElectricPoint::DriveCauseMove(class ElectricPoint * this /* r30 */, class xMat4x3 * parent /* r8 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 InvRel; // r1+0x98
    class xMat4x3 tempMat; // r1+0x58
    class xMat4x3 baseMat; // r1+0x18
    class xVec3 R; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80263920 -> 0x80263BA8
void ElectricPoint::Reset(class ElectricPoint * this /* r31 */) {
    {
        // Range: 0x80263B08 -> 0x80263B90
        // Local variables
        class xBase * other; // r0
        unsigned int flags; // r0
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xMat4x3 g_I3;
}
// signature: ElectricPoint::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80263BB0 -> 0x80263DA8
void ElectricPoint::HandleEvent(class ElectricPoint * this /* r31 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x80263C84 -> 0x80263D4C
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r28
        class EventActionDrivenBy * paramst; // r0
    }
}
// Range: 0x80263DB0 -> 0x80264150
void ElectricPoint::Update(class ElectricPoint * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80263DD0 -> 0x80263E5C
        // Local variables
        class xVec3 tgt; // r1+0x8
    }
}
// Range: 0x80264150 -> 0x802650CC
void ElectricPoint::Render() {
    // References
    // -> float dt;
    // -> class Renderable3DTransform g_identity;
}
