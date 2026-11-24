/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTransform.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805A3B90 -> 0x805A5988
*/
// total size: 0x64
class GASTransformProto : public GASPrototype {};
// total size: 0x64
class GASPrototype : public GASTransformObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x48, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x54, size 0xC
    class garray * pInterfaces; // offset 0x60, size 0x4
};
class GASNameFunction FunctionTable[1]; // size: 0x8, address: 0x808E11E0
// Range: 0x805A3B90 -> 0x805A3E50
void * GASTransformObject::GASTransformObject(class GASTransformObject * this /* r30 */, class GASEnvironment * penv /* r31 */, class GFxASCharacter * pcharacter /* r28 */) {
    // References
    // -> struct {} __vt__18GASTransformObject;
}
// Range: 0x805A3E50 -> 0x805A4614
bool GASTransformObject::GetMember(class GASTransformObject * this /* r29 */, class GASEnvironment * penv /* r30 */, class GASString & name /* r26 */, class GASValue * val /* r31 */) {
    {
        // Range: 0x805A3E98 -> 0x805A4094
        // Local variables
        class GPtr movieRoot; // r1+0x18
        bool rv; // r27

        {
            // Range: 0x805A3EC0 -> 0x805A402C
            {
                // Range: 0x805A3EEC -> 0x805A4024
                // Local variables
                class GRect r; // r1+0xD0
                class GRect bounds; // r1+0x50
            }
        }
    }
    {
        // Range: 0x805A4094 -> 0x805A41D0
        // Local variables
        class GPtr movieRoot; // r1+0x14
        bool rv; // r27

        {
            // Range: 0x805A40BC -> 0x805A4168
            {
                // Range: 0x805A40E8 -> 0x805A4160
                // Local variables
                class Cxform ct; // r1+0xB0
            }
        }
    }
    {
        // Range: 0x805A41D0 -> 0x805A42E8
        // Local variables
        class GPtr movieRoot; // r1+0x10
        bool rv; // r27

        {
            // Range: 0x805A41F8 -> 0x805A4280
            {
                // Range: 0x805A4224 -> 0x805A4278
                // Local variables
                class GMatrix2D m; // r1+0x98
            }
        }
    }
    {
        // Range: 0x805A42E8 -> 0x805A447C
        // Local variables
        class GPtr movieRoot; // r1+0xC
        class Cxform ct; // r1+0x78

        {
            // Range: 0x805A4314 -> 0x805A4368
            {
                // Range: 0x805A4340 -> 0x805A4368
                // Local variables
                class GFxASCharacter * curr; // r27
            }
        }
    }
    {
        // Range: 0x805A447C -> 0x805A45E0
        // Local variables
        class GPtr movieRoot; // r1+0x8
        class GMatrix2D mt; // r1+0x60

        {
            // Range: 0x805A44A8 -> 0x805A44FC
            {
                // Range: 0x805A44D4 -> 0x805A44FC
                // Local variables
                class GFxASCharacter * curr; // r27
            }
        }
    }
}
// Range: 0x805A4620 -> 0x805A4974
bool GASTransformObject::SetMember(class GASTransformObject * this /* r26 */, class GASEnvironment * penv /* r27 */, class GASString & name /* r28 */, class GASValue & val /* r29 */, class GASPropFlags & flags /* r31 */) {
    {
        // Range: 0x805A4670 -> 0x805A47DC
        // Local variables
        class GPtr movieRoot; // r1+0xC

        {
            // Range: 0x805A4698 -> 0x805A4794
            {
                // Range: 0x805A46C4 -> 0x805A4774
                {
                    // Range: 0x805A46F0 -> 0x805A4774
                    // Local variables
                    class GASColorTransformObject * ctobj; // r0
                }
            }
        }
    }
    {
        // Range: 0x805A47DC -> 0x805A4944
        // Local variables
        class GPtr movieRoot; // r1+0x8

        {
            // Range: 0x805A4800 -> 0x805A48FC
            {
                // Range: 0x805A482C -> 0x805A48DC
                {
                    // Range: 0x805A4858 -> 0x805A48DC
                    // Local variables
                    class GASMatrixObject * mobj; // r0

                    {
                        // Range: 0x805A487C -> 0x805A48DC
                        // Local variables
                        class GMatrix2D m; // r1+0x10
                    }
                }
            }
        }
    }
}
// Range: 0x805A4980 -> 0x805A4E28
void * GASTransformProto::GASTransformProto(class GASTransformProto * this /* r28 */, class GASStringContext * psc /* r29 */, class GASObject * pprototype /* r30 */, class GASFunctionRef & constructor /* r24 */) {
    // Local variables
    class GASValue undef; // r1+0xB8

    // References
    // -> class GASNameFunction FunctionTable[1];
    // -> struct {} __vt__17GASTransformProto;
    // -> struct {} __vt__51GASPrototype<18GASTransformObject,14GASEnvironment>;
}
// Range: 0x805A50B0 -> 0x805A519C
void GASTransformProto::GlobalCtor(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GFxASCharacter * ptarget; // r30
}
