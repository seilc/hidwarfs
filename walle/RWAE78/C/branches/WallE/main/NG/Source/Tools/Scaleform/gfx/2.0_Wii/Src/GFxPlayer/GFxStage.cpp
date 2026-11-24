/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStage.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8054C880 -> 0x8054E7F8
*/
// total size: 0x30
class GASStageObject : public GASObject {};
// total size: 0x4C
class GASStageProto : public GASPrototype {};
// total size: 0x4C
class GASPrototype : public GASStageObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x30, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x3C, size 0xC
    class garray * pInterfaces; // offset 0x48, size 0x4
};
// total size: 0x3C
class GASStageCtorFunction : public GASFunctionObject {
    // Members
    class GWeakPtr MovieRoot; // offset 0x34, size 0x8
};
static class GASNameFunction GFx_StageFunctionTable[4]; // size: 0x20, address: 0x806E8A68
struct {} __vt__20GASStageCtorFunction; // size: 0xD8, address: 0x8073C138
struct {} __vt__13GASStageProto; // size: 0xB8, address: 0x8073C210
struct {} __vt__47GASPrototype<14GASStageObject,14GASEnvironment>; // size: 0xB8, address: 0x8073C2C8
struct {} __vt__14GASStageObject; // size: 0xB4, address: 0x8073C380
// Range: 0x8054C880 -> 0x8054C920
void * GASStageObject::GASStageObject(class GASStageObject * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__14GASStageObject;
}
// signature: GFx_StageFuncStub(const GASFnCall &)
// Range: 0x8054C920 -> 0x8054C958
static void GFx_StageFuncStub() {
}
// Range: 0x8054C960 -> 0x8054CC54
void * GASStageProto::GASStageProto(class GASStageProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GFx_StageFunctionTable[4];
    // -> struct {} __vt__13GASStageProto;
    // -> struct {} __vt__47GASPrototype<14GASStageObject,14GASEnvironment>;
}
// Range: 0x8054CDD0 -> 0x8054CE6C
void GASStageProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x8054CE70 -> 0x8054D1DC
void * GASStageCtorFunction::GASStageCtorFunction(class GASStageCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */, class GFxMovieRoot * movieRoot /* r29 */) {
    // References
    // -> struct {} __vt__20GASStageCtorFunction;
}
// Range: 0x8054D1E0 -> 0x8054D724
bool GASStageCtorFunction::GetMemberRaw(class GASStageCtorFunction * this /* r27 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASValue * val /* r30 */) {
    // Local variables
    class GPtr movieRoot; // r1+0x18

    {
        // Range: 0x8054D3D8 -> 0x8054D53C
        // Local variables
        char * scaleMode; // r5
    }
    {
        // Range: 0x8054D53C -> 0x8054D6CC
        // Local variables
        char * align; // r5
    }
}
// Range: 0x8054D730 -> 0x8054DCD0
bool GASStageCtorFunction::SetMember(class GASStageCtorFunction * this /* r25 */, class GASEnvironment * penv /* r26 */, class GASString & name /* r27 */, class GASValue & val /* r28 */, class GASPropFlags & flags /* r31 */) {
    // Local variables
    class GPtr pmovieRoot; // r1+0x28
    class GASStringContext * psc; // r29

    {
        // Range: 0x8054D770 -> 0x8054DA20
        // Local variables
        enum ScaleModeType prevScaleMode; // r0
        enum ScaleModeType scaleMode; // r24
        class GASString & scaleModeStr; // r0
    }
    {
        // Range: 0x8054DA20 -> 0x8054DC74
        // Local variables
        unsigned int len; // r0
        unsigned int char2; // r27
        unsigned int char1; // r26
        enum AlignType align; // r4
        class GASString & alignStr; // r24
    }
}
// Range: 0x8054DCD0 -> 0x8054DDE8
bool GASStageCtorFunction::SetMemberRaw(class GASStageCtorFunction * this /* r27 */, class GASStringContext * psc /* r28 */, class GASString & name /* r29 */, class GASValue & val /* r30 */, class GASPropFlags & flags /* r31 */) {
}
// Range: 0x8054DDF0 -> 0x8054DE74
void GASStageCtorFunction::NotifyOnResize(class GASStageCtorFunction * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// Range: 0x8054DE80 -> 0x8054DF60
void GASStageCtorFunction::NotifyOnResize(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASValue stageCtorVal; // r1+0x10

    {
        // Range: 0x8054DE94 -> 0x8054DF34
        // Local variables
        class GASObjectInterface * pstageObj; // r0
    }
}
