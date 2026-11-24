/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\CylinderGeometry.cpp
*/
// Range: 0x80173CE0 -> 0x80173E44
static void @unnamed@WAD03_cpp@::random_ring_offset(class xVec3 & offset /* r26 */, float radius /* f30 */, bool outerOnly /* r27 */) {
    // Local variables
    float ang; // f31
    float uz; // f1
    float r; // f0
    float rr; // f0
}
// Range: 0x80173E50 -> 0x80173ED0
class Entity * Sext::CylinderAsset::Create(class EntityHandleBase * handle /* r29 */, class CylinderAsset * asset /* r30 */) {
}
// signature: ElectricCylinder::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80173ED0 -> 0x80173EF8
void ElectricCylinder::HandleEvent() {
}
// Range: 0x80173F00 -> 0x80173F18
void ElectricCylinder::Reset() {
}
// Range: 0x80173F20 -> 0x80173F88
void ElectricCylinder::DebugReset(class ElectricCylinder * this /* r31 */) {
}
// signature: ElectricCylinder::ElectricCylinder(World::EntityHandleBase *)
// Range: 0x80173F90 -> 0x80173FE4
void * ElectricCylinder::ElectricCylinder(class ElectricCylinder * this /* r31 */) {
    // References
    // -> struct {} __vt__16ElectricCylinder;
}
// Range: 0x80173FF0 -> 0x8017407C
void * ElectricCylinder::~ElectricCylinder(class ElectricCylinder * this /* r30 */) {
    // References
    // -> struct {} __vt__16ElectricCylinder;
}
// signature: ElectricCylinder::Init(void *)
// Range: 0x801740D0 -> 0x8017411C
void ElectricCylinder::Init(class ElectricCylinder * this /* r31 */) {
}
// signature: ElectricCylinder::Update(float)
// Range: 0x80174120 -> 0x80174148
void ElectricCylinder::Update() {
}
// Range: 0x80174150 -> 0x8017419C
void ElectricCylinder::Setup(class ElectricCylinder * this /* r31 */) {
}
// Range: 0x801741A0 -> 0x80174358
void ElectricCylinder::Create(class ElectricCylinder * this /* r29 */, class CylinderAsset * inAsset /* r30 */) {
    // Local variables
    bool render; // r0
}
// signature: ElectricCylinder::SetIndices(const int, const int, const int, unsigned short *)
// Range: 0x80174360 -> 0x801743D8
void ElectricCylinder::SetIndices() {
    // Local variables
    int k; // r8

    {
        // Range: 0x80174360 -> 0x801743D4
        // Local variables
        int i; // r9

        {
            // Range: 0x80174360 -> 0x801743D4
            // Local variables
            int j; // r10
        }
    }
}
// signature: ElectricCylinder::SetVerts(const int, const int, const int, float, float, float, xVec3 *, float, float)
// Range: 0x801743E0 -> 0x80174590
void ElectricCylinder::SetVerts(int vert_count /* r28 */, int rows_count /* r29 */, float radiusX /* f29 */, float radiusY /* f30 */, float yStretch /* f31 */, class xVec3 * v /* r30 */, float dradius /* f25 */) {
    // Local variables
    float dwidth; // f27
    float icolumns; // f2
    float dang; // f26
    float dcos; // f0
    float dsin; // f0
    float xdir; // f4
    float ydir; // f5
    float x; // f0
    float y; // f0
    float z; // f0

    {
        // Range: 0x801744C8 -> 0x80174540
        // Local variables
        int i; // r4

        {
            // Range: 0x801744C8 -> 0x80174540
            // Local variables
            float dy; // f7
            float dx; // f6

            {
                // Range: 0x80174514 -> 0x80174540
                // Local variables
                int j; // r0
            }
        }
    }
}
// signature: ElectricCylinder::SetupFromAsset(Sext::CylinderAsset *)
// Range: 0x80174590 -> 0x801745E0
void ElectricCylinder::SetupFromAsset() {
}
// signature: CylinderRenderable::Render(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, xVec3 *, int)
// Range: 0x801745E0 -> 0x80174BEC
void CylinderRenderable::Render(class CylinderRenderable * this /* r27 */, class xVec3 * start /* r28 */, class xVec3 * end /* r30 */, class ImmediatePrototypeEntity * im /* r29 */) {
    // Local variables
    float flicker; // f20
    class xVec3 dirVec; // r1+0x2C
    class xMat3x3 m; // r1+0x68
    class ImmediateContext immCtxt; // r1+0x38
    float r1; // f19
    float r2; // f0
    float g1; // f18
    float g2; // f1
    float b1; // f17
    float b2; // f0
    float a1; // f16
    float a2; // f1
    class Renderable3D * rend; // r25

    {
        // Range: 0x801748B8 -> 0x80174B10
        // Local variables
        int i; // r30

        {
            // Range: 0x801748B8 -> 0x80174B10
            // Local variables
            int j; // r29

            {
                // Range: 0x801748B8 -> 0x80174B10
                // Local variables
                class xColor finalColor; // r1+0x10
                class xVec3 v; // r1+0x20
                float delta; // f15
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: Electricity::Render(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, xVec3 *, int)
// Range: 0x80174BF0 -> 0x801750F8
void Electricity::Render(class Electricity * this /* r28 */, class xVec3 * start /* r29 */, class xVec3 * end /* r30 */, class ImmediatePrototypeEntity * im /* r31 */) {
    // Local variables
    float motionAddition; // f28
    float alphaScale; // f2

    {
        // Range: 0x80174D24 -> 0x80174D64
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80174D64 -> 0x80174DB4
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x80174DB4 -> 0x80174E34
        // Local variables
        int i; // r26

        {
            // Range: 0x80174DB4 -> 0x80174E34
            // Local variables
            float amplitudeScale; // f1
        }
    }
    {
        // Range: 0x80174ED0 -> 0x80175058
        // Local variables
        float invRowM1; // f29

        {
            // Range: 0x80174EE8 -> 0x80175020
            // Local variables
            float amplitudeScale; // f1
            int newidx; // r26

            {
                // Range: 0x80174F30 -> 0x80174F78
                // Local variables
                int idx; // r25
            }
            {
                // Range: 0x80174F80 -> 0x80174FC8
                // Local variables
                int idx; // r25
            }
        }
        {
            // Range: 0x80175020 -> 0x80175058
            // Local variables
            float motionPercent; // f0
        }
    }
}
// signature: Electricity::DoRenderSmooth(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, float, float)
// Range: 0x80175100 -> 0x801760D8
void Electricity::DoRenderSmooth(class Electricity * this /* r15 */, class xVec3 * start /* r16 */, class xVec3 * end /* r17 */, float motionAddition /* r1+0x10 */, float alphaScale /* f19 */) {
    // Local variables
    int newRowsCount; // r25
    int newColsCount; // r24
    int newIndxCount; // r1+0x288
    class ImmediateContext immCtxt; // r1+0xC0
    class xVec3 dirVec; // r1+0x84
    class xMat3x3 m; // r1+0x90
    float r1; // f29
    float r2; // f31
    float g1; // f28
    float g2; // f27
    float b1; // f26
    float b2; // f25
    float a1; // f24
    float a2; // f23
    float invCols; // f22
    bool useWeighting; // r23
    bool swapWeighting; // r22
    float variationMult; // f0
    float invRowM1; // f21
    float invNewRowM1; // r1+0x170
    float controlVals[5][4]; // r1+0xF0
    float t1; // f0
    float ang; // f15
    int controlIndex; // r21
    float cx[4]; // r1+0x68
    float cy[4]; // r1+0x58
    float cz[4]; // r1+0x48
    int lastRow; // r1+0x284
    class Renderable3D * rend; // r14

    {
        // Range: 0x80175310 -> 0x801753F0
        // Local variables
        int j; // r9

        {
            // Range: 0x80175310 -> 0x801753F0
            // Local variables
            float j3; // f14
            float j2; // f13
            float j1; // f0
            float jratio; // f12
        }
    }
    {
        // Range: 0x80175460 -> 0x8017550C
        // Local variables
        float rY; // f17
        float rX; // f16

        {
            // Range: 0x8017548C -> 0x8017550C
            // Local variables
            int col; // r17

            {
                // Range: 0x8017548C -> 0x8017550C
                // Local variables
                class xVec3 & v; // r18
                float thisAng; // f18
            }
        }
    }
    {
        // Range: 0x8017550C -> 0x80175754
        // Local variables
        int row; // r17

        {
            // Range: 0x8017550C -> 0x80175754
            // Local variables
            float texU; // f20
            class xVec3 v; // r1+0x78
            float variationVal; // f2
            class xColor finalColor; // r1+0x1C
            float delta; // f20
            float rowF; // f0

            {
                // Range: 0x80175510 -> 0x80175754
                // Local variables
                int col; // r18

                {
                    // Range: 0x80175510 -> 0x80175754
                    // Local variables
                    float texV; // f0
                }
            }
        }
    }
    {
        // Range: 0x80175754 -> 0x80175D84
        // Local variables
        int row; // r20

        {
            // Range: 0x80175754 -> 0x80175D84
            // Local variables
            class xVec3 jointCenter; // r1+0x38
            class xColor finalColor; // r1+0x18
            float delta; // f14
            float variationVal; // f0
            float rowF; // f2
            int curveRow; // r19

            {
                // Range: 0x80175758 -> 0x80175758
                // Local variables
                int thirdLastControlIndex; // r5
                int secondLastControlIndex; // r4
                int lastControlIndex; // r6

                {
                    // Range: 0x80175758 -> 0x80175758
                    // Local variables
                    int subJoint; // r18

                    {
                        // Range: 0x80175758 -> 0x80175758
                        // Local variables
                        float texU; // f20
                        int curveRowIdx; // r1+0x280
                        float ctz; // f18
                        float cty; // f15
                        float ctx; // f14
                        float fourth; // f1
                        float third; // f0
                        float second; // f4
                        float first; // f9

                        {
                            // Range: 0x80175758 -> 0x80175758
                            // Local variables
                            int col; // r17

                            {
                                // Range: 0x80175758 -> 0x80175758
                                // Local variables
                                float texV; // f0
                            }
                        }
                    }
                }
            }
            {
                // Range: 0x80175758 -> 0x80175D84
                // Local variables
                int thirdLastControlIndex; // r6
                int secondLastControlIndex; // r5
                int lastControlIndex; // r3

                {
                    // Range: 0x80175758 -> 0x80175D84
                    // Local variables
                    int subJoint; // r18

                    {
                        // Range: 0x80175758 -> 0x80175D84
                        // Local variables
                        float texU; // f20
                        int curveRowIdx; // r30
                        float ctz; // f18
                        float cty; // f15
                        float ctx; // f14
                        float fourth; // f1
                        float third; // f0
                        float second; // f4
                        float first; // f9

                        {
                            // Range: 0x80175758 -> 0x80175D84
                            // Local variables
                            int col; // r19

                            {
                                // Range: 0x80175758 -> 0x80175D84
                                // Local variables
                                float texV; // f0
                            }
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80175D84 -> 0x80175FCC
        // Local variables
        int idx; // r18
        int row; // r17

        {
            // Range: 0x80175D84 -> 0x80175FCC
            // Local variables
            float texU; // f14
            class xVec3 v; // r1+0x2C
            float variationVal; // f2
            class xColor finalColor; // r1+0x14
            float delta; // f14
            float rowF; // f0

            {
                // Range: 0x80175D84 -> 0x80175FCC
                // Local variables
                int col; // r19

                {
                    // Range: 0x80175D84 -> 0x80175FCC
                    // Local variables
                    float texV; // f0
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: Electricity::DoRender(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, float, float)
// Range: 0x801760E0 -> 0x801765F8
void Electricity::DoRender(class Electricity * this /* r22 */, class xVec3 * start /* r23 */, class xVec3 * end /* r20 */, float motionAddition /* f14 */, float alphaScale /* f15 */) {
    // Local variables
    class ImmediateContext immCtxt; // r1+0x78
    class xVec3 dirVec; // r1+0x38
    class xMat3x3 m; // r1+0x48
    float r1; // f22
    float r2; // f2
    float g1; // f21
    float g2; // f3
    float b1; // f20
    float b2; // f4
    float a1; // f19
    float a2; // f5
    float invCols; // f18
    bool useWeighting; // r28
    bool swapWeighting; // r27
    float variationMult; // f0
    float invRowM1; // f17
    class Renderable3D * rend; // r20

    {
        // Range: 0x801762B0 -> 0x80176514
        // Local variables
        int col; // r25
        int i; // r26

        {
            // Range: 0x801762B0 -> 0x80176514
            // Local variables
            int j; // r24

            {
                // Range: 0x801762B0 -> 0x80176514
                // Local variables
                class xColor finalColor; // r1+0x10
                class xVec3 v; // r1+0x2C
                float delta; // f16
                float variationVal; // f1
                float useMotionAddition; // f0
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80176600 -> 0x8017666C
void * Electricity::~Electricity(class Electricity * this /* r30 */) {
    // References
    // -> struct {} __vt__11Electricity;
}
// Range: 0x80176670 -> 0x801766F8
void Electricity::Create(class Electricity * this /* r29 */) {
}
// Range: 0x80176700 -> 0x80176950
void Electricity::RandomizeOffsets(class Electricity * this /* r26 */, class xVec3 * refVerts /* r27 */, int refColsCount /* r28 */) {
    // Local variables
    int i; // r6
    int randomColumn; // r29

    {
        // Range: 0x80176814 -> 0x80176908
        // Local variables
        class xVec3 * v; // r4
        int colOff; // r0
    }
}
// Range: 0x80176950 -> 0x80176A08
void * MappedElectricity::~MappedElectricity(class MappedElectricity * this /* r29 */) {
    // References
    // -> struct {} __vt__17MappedElectricity;
}
// Range: 0x80176A10 -> 0x80176B6C
void MappedElectricity::Create(class MappedElectricity * this /* r31 */) {
    {
        // Range: 0x80176B14 -> 0x80176B4C
        // Local variables
        int i; // r5
    }
}
// signature: MappedElectricity::SetRowsAlphaScale(int, float)
// Range: 0x80176B70 -> 0x80176B9C
void MappedElectricity::SetRowsAlphaScale() {
    {
        // Range: 0x80176B70 -> 0x80176B98
        // Local variables
        int i; // r4
    }
}
// signature: MappedElectricity::GetPos(xVec3 *, xVec3 *, int)
// Range: 0x80176BA0 -> 0x80176C78
void MappedElectricity::GetPos(class MappedElectricity * this /* r29 */, class xVec3 * vOut /* r30 */, int idx /* r31 */) {
    // Local variables
    class xMat3x3 m; // r1+0x20
    class xVec3 v; // r1+0x14
    class xVec3 vC; // r1+0x8
}
// signature: MappedElectricity::DoUpdate(float)
// Range: 0x80176C80 -> 0x80176E08
void MappedElectricity::DoUpdate(class MappedElectricity * this /* r30 */) {
    // Local variables
    int i; // r27

    {
        // Range: 0x80176CE8 -> 0x80176DE8
        // Local variables
        int d; // r25
        int upBound; // r0
        int loBound; // r26

        {
            // Range: 0x80176CE8 -> 0x80176DBC
            // Local variables
            class xVec3 dirVec; // r1+0x8
            class xVec3 & start; // r24

            {
                // Range: 0x80176CE8 -> 0x80176DBC
                // Local variables
                int j; // r5

                {
                    // Range: 0x80176CE8 -> 0x80176DBC
                    // Local variables
                    class xVec3 * off; // r3
                    float delta; // f2
                }
            }
        }
    }
}
// signature: MappedElectricity::SetRowOffset(float, float, float, int)
// Range: 0x80176E10 -> 0x80176E68
void MappedElectricity::SetRowOffset() {
}
// signature: MappedElectricity::Render(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, xVec3 *, int)
// Range: 0x80176E70 -> 0x80177554
void MappedElectricity::Render(class MappedElectricity * this /* r27 */, class ImmediatePrototypeEntity * im /* r28 */) {
    // Local variables
    float alphaScale; // f24
    class ImmediateContext immCtxt; // r1+0x68
    class xVec3 dirVec; // r1+0x2C
    class xMat3x3 m; // r1+0x38
    float r1; // f23
    float r2; // f1
    float g1; // f22
    float g2; // f2
    float b1; // f21
    float b2; // f0
    float a1; // f20
    float a2; // f1
    float invCols; // f19
    class Renderable3D * rend; // r25

    {
        // Range: 0x80176FD0 -> 0x8017715C
        // Local variables
        float mult; // f29
        int i; // r6

        {
            // Range: 0x80177084 -> 0x80177154
            // Local variables
            float amplitudeScale; // f1
        }
    }
    {
        // Range: 0x8017729C -> 0x80177490
        // Local variables
        int col; // r29
        int i; // r30

        {
            // Range: 0x8017729C -> 0x80177490
            // Local variables
            int j; // r28

            {
                // Range: 0x8017729C -> 0x80177490
                // Local variables
                class xVec3 vC; // r1+0x14
                class xColor finalColor; // r1+0x10
                class xVec3 v; // r1+0x20
                float delta; // f18
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: MappedLaser::Render(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, xVec3 *, int)
// Range: 0x80177560 -> 0x80177D78
void MappedLaser::Render(class MappedLaser * this /* r23 */, class xVec3 * start /* r26 */, class xVec3 * end /* r25 */, class ImmediatePrototypeEntity * im /* r24 */) {
    // Local variables
    float invRowM1; // f23
    float motionAddition; // f22
    class ImmediateContext immCtxt; // r1+0x80
    class xVec3 dirVec; // r1+0x44
    class xMat3x3 m; // r1+0x50
    float r1; // f21
    float r2; // f2
    float g1; // f20
    float g2; // f3
    float b1; // f19
    float b2; // f4
    float a1; // f18
    float a2; // f5
    float invCols; // f17
    bool useWeighting; // r28
    bool swapWeighting; // r27
    float variationMult; // f0
    class Renderable3D * rend; // r20

    {
        // Range: 0x80177660 -> 0x801776D8
        // Local variables
        int i; // r20

        {
            // Range: 0x80177660 -> 0x801776D8
            // Local variables
            float amplitudeScale; // f1
        }
    }
    {
        // Range: 0x8017783C -> 0x80177958
        // Local variables
        float amplitudeScale; // f1
        int newidx; // r20

        {
            // Range: 0x80177860 -> 0x801778A8
            // Local variables
            int idx; // r22
        }
        {
            // Range: 0x801778AC -> 0x801778F4
            // Local variables
            int idx; // r22
        }
    }
    {
        // Range: 0x80177A44 -> 0x80177CA4
        // Local variables
        int col; // r25
        int i; // r26

        {
            // Range: 0x80177A44 -> 0x80177CA4
            // Local variables
            int j; // r24

            {
                // Range: 0x80177A44 -> 0x80177CA4
                // Local variables
                class xVec3 vC; // r1+0x2C
                class xColor finalColor; // r1+0x10
                class xVec3 v; // r1+0x38
                float delta; // f16
                float variationVal; // f1
                float useMotionAddition; // f0
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80177D80 -> 0x80177E20
void ElectricSpotLight::Create(class ElectricSpotLight * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// signature: ElectricSpotLight::Render(xVec3 *, xVec3 *, World::ImmediatePrototypeEntity *, xVec3 *, int)
// Range: 0x80177E20 -> 0x801783E4
void ElectricSpotLight::Render(class ElectricSpotLight * this /* r27 */, class xVec3 * start /* r28 */, class ImmediatePrototypeEntity * im /* r29 */) {
    // Local variables
    float flicker; // f21
    class xVec3 dirVec; // r1+0x20
    class xMat3x3 m; // r1+0x58
    class ImmediateContext immCtxt; // r1+0x2C
    float r1; // f20
    float r2; // f0
    float g1; // f19
    float g2; // f1
    float b1; // f18
    float b2; // f0
    float a1; // f17
    float a2; // f1
    class Renderable3D * rend; // r25

    {
        // Range: 0x801780C4 -> 0x80178310
        // Local variables
        int i; // r30

        {
            // Range: 0x801780C4 -> 0x80178310
            // Local variables
            int j; // r29

            {
                // Range: 0x801780C4 -> 0x80178310
                // Local variables
                class xColor finalColor; // r1+0x10
                class xVec3 v; // r1+0x14
                float delta; // f16
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
