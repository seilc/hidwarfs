/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFunction.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804CF060 -> 0x804D3C08
*/
// total size: 0x8
class GASCFunctionDef : public GASFunctionDef {
    // Members
    void (* pFunction)(class GASFnCall & fn); // offset 0x4, size 0x4
};
// total size: 0x38
class GASAsFunctionDef : public GASFunctionDef {
    // Members
    class GPtr pActionBuffer; // offset 0x4, size 0x4
    class garray WithStack; // offset 0x8, size 0xC
    int StartPc; // offset 0x14, size 0x4
    int Length; // offset 0x18, size 0x4
    void * pContextData; // offset 0x1C, size 0x4
    unsigned char ExecType; // offset 0x20, size 0x1
    unsigned char LocalRegisterCount; // offset 0x21, size 0x1
    unsigned short Function2Flags; // offset 0x22, size 0x2
    class garray_cc Args; // offset 0x24, size 0x14
};
// total size: 0x14
class garray_cc : public garray_base {
    // Members
    class ArgSpec default_value; // offset 0xC, size 0x8
};
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class GFxMovieRoot * pObject; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieRoot * pObject; // offset 0x0, size 0x4
};
// total size: 0x34
class GASFunctionCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_FunctionObjectTable[3]; // size: 0x18, address: 0x806E7E60
struct {} __vt__16GASFunctionProto; // size: 0xB8, address: 0x80737AD0
struct {} __vt__41GASPrototype<9GASObject,14GASEnvironment>; // size: 0xB8, address: 0x80737B88
struct {} __vt__23GASFunctionCtorFunction; // size: 0xD8, address: 0x80737C40
struct {} __vt__17GASFunctionObject; // size: 0xD8, address: 0x80737D18
struct {} __vt__16GASAsFunctionDef; // size: 0x28, address: 0x80737DF0
struct {} __vt__15GASCFunctionDef; // size: 0x28, address: 0x80737E18
// signature: GASCFunctionDef::Invoke(const GASFnCall &, GASLocalFrame *, GASEnvironment *)
// Range: 0x804CF060 -> 0x804CF210
void GASCFunctionDef::Invoke(class GASCFunctionDef * this /* r25 */, class GASFnCall & fn /* r26 */) {
    {
        // Range: 0x804CF074 -> 0x804CF1F8
        // Local variables
        class GASObjectInterface * pthis; // r27

        {
            // Range: 0x804CF08C -> 0x804CF1D8
            // Local variables
            class GASFnCall fn2; // r1+0x8
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x804CF210 -> 0x804CF27C
bool GASCFunctionDef::operator==(class GASCFunctionDef * this /* r30 */, class GASFunctionDef & f /* r31 */) const {
}
// Range: 0x804CF290 -> 0x804CF300
bool GASCFunctionDef::operator!=(class GASCFunctionDef * this /* r30 */, class GASFunctionDef & f /* r31 */) const {
}
// signature: GASCFunctionDef::GetEnvironment(const GASFnCall &, GPtr<GFxASCharacter> *)
// Range: 0x804CF300 -> 0x804CF308
class GASEnvironment * GASCFunctionDef::GetEnvironment() {
}
// Range: 0x804CF310 -> 0x804CF724
void * GASAsFunctionDef::GASAsFunctionDef(class GASAsFunctionDef * this /* r25 */, class GASActionBuffer * ab /* r23 */, class GASEnvironment * env /* r26 */, int start /* r27 */, class garray & WithStack /* r28 */, enum ExecuteType execType /* r29 */) {
    // References
    // -> struct {} __vt__16GASAsFunctionDef;
}
// Range: 0x804CF920 -> 0x804CFAE8
void * GASAsFunctionDef::~GASAsFunctionDef(class GASAsFunctionDef * this /* r30 */) {
    // References
    // -> struct {} __vt__16GASAsFunctionDef;
}
// Range: 0x804CFB90 -> 0x804CFD10
class GASEnvironment * GASAsFunctionDef::GetEnvironment(class GASFnCall & fn /* r28 */, class GPtr * ptargetCh /* r29 */) {
    // Local variables
    class GASEnvironment * pourEnv; // r30
}
// Range: 0x804CFD10 -> 0x804D10E8
void GASAsFunctionDef::Invoke(class GASAsFunctionDef * this /* r29 */, class GASFnCall & fn /* r30 */, class GASLocalFrame * localFrame /* r18 */, class GASEnvironment * pourEnv /* r31 */) {
    // Local variables
    class GPtr ch; // r1+0x18
    class GASObjectInterface * pthis; // r21
    class GASObjectInterface * passedThis; // r20

    {
        // Range: 0x804D013C -> 0x804D03D0
        // Local variables
        int version; // r18
        int i; // r18

        {
            // Range: 0x804D0148 -> 0x804D017C
            // Local variables
            class GASValue thisVal; // r1+0x100
        }
        {
            // Range: 0x804D0380 -> 0x804D03C0
            // Local variables
            int n; // r22
        }
    }
    {
        // Range: 0x804D03D0 -> 0x804D0B50
        // Local variables
        int CurrentReg; // r22
        int i; // r22

        {
            // Range: 0x804D05E0 -> 0x804D062C
            // Local variables
            int n; // r18
        }
        {
            // Range: 0x804D0644 -> 0x804D0798
            {
                // Range: 0x804D0674 -> 0x804D0790
                // Local variables
                class GASFunctionRef __ctor__; // r1+0xF0
            }
        }
        {
            // Range: 0x804D0814 -> 0x804D0844
            // Local variables
            class GASValue pthisVal; // r1+0xE0
        }
        {
            // Range: 0x804D08E0 -> 0x804D08E8
            // Local variables
            int i; // r18
        }
        {
            // Range: 0x804D0A50 -> 0x804D0A78
            // Local variables
            class GASValue superVal; // r1+0xD0
        }
        {
            // Range: 0x804D0AC8 -> 0x804D0B14
            // Local variables
            class GASValue parent; // r1+0xC0
        }
    }

    // References
    // -> struct {} __vt__14GASSuperObject;
}
// signature: GASAsFunctionDef::operator==(const GASFunctionDef &) const
// Range: 0x804D1160 -> 0x804D1194
bool GASAsFunctionDef::operator==() const {
}
// signature: GASAsFunctionDef::operator!=(const GASFunctionDef &) const
// Range: 0x804D11B0 -> 0x804D11E4
bool GASAsFunctionDef::operator!=() const {
}
// signature: GASFunctionObject::GASFunctionObject(GASStringContext *)
// Range: 0x804D11F0 -> 0x804D1240
void * GASFunctionObject::GASFunctionObject(class GASFunctionObject * this /* r31 */) {
    // References
    // -> struct {} __vt__17GASFunctionObject;
}
// signature: GASFunctionObject::GASFunctionObject(GASEnvironment *, GASFunctionDef *)
// Range: 0x804D1240 -> 0x804D1298
void * GASFunctionObject::GASFunctionObject(class GASFunctionObject * this /* r30 */, class GASFunctionDef * func /* r31 */) {
    // References
    // -> struct {} __vt__17GASFunctionObject;
}
// signature: GASFunctionObject::GASFunctionObject(GASStringContext *, GASObject *, void (*)(const GASFnCall &))
// Range: 0x804D12A0 -> 0x804D1340
void * GASFunctionObject::GASFunctionObject(class GASFunctionObject * this /* r29 */, class GASStringContext * psc /* r30 */, void (* func)(class GASFnCall & fn) /* r31 */) {
    // References
    // -> struct {} __vt__15GASCFunctionDef;
    // -> struct {} __vt__17GASFunctionObject;
}
// Range: 0x804D1340 -> 0x804D13B8
void * GASFunctionObject::GASFunctionObject(class GASFunctionObject * this /* r30 */, void (* func)(class GASFnCall & fn) /* r31 */) {
    // References
    // -> struct {} __vt__15GASCFunctionDef;
    // -> struct {} __vt__17GASFunctionObject;
}
// Range: 0x804D13C0 -> 0x804D1418
void * GASFunctionObject::GASFunctionObject(class GASFunctionObject * this /* r30 */, class GASFunctionDef * func /* r31 */) {
    // References
    // -> struct {} __vt__17GASFunctionObject;
}
// Range: 0x804D1420 -> 0x804D1508
void * GASFunctionObject::~GASFunctionObject(class GASFunctionObject * this /* r30 */) {
    // References
    // -> struct {} __vt__9GASObject;
    // -> struct {} __vt__17GASFunctionObject;
}
// Range: 0x804D1510 -> 0x804D15D4
void GASFunctionObject::SetProtoAndCtor(class GASFunctionObject * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */) {
    // Local variables
    class GASFunctionRef ctor; // r1+0x20
}
// Range: 0x804D15E0 -> 0x804D170C
void GASFunctionObject::Invoke(class GASFunctionObject * this /* r28 */, class GASFnCall & fn /* r29 */, class GASLocalFrame * localFrame /* r30 */) const {
    // Local variables
    class GASEnvironment * penv; // r31
    class GPtr targetCh; // r1+0xC
}
// signature: GASFunctionObject::operator==(const GASFunctionObject &) const
// Range: 0x804D1960 -> 0x804D1978
bool GASFunctionObject::operator==() const {
}
// signature: GASFunctionObject::operator!=(const GASFunctionObject &) const
// Range: 0x804D1980 -> 0x804D199C
bool GASFunctionObject::operator!=() const {
}
// signature: GASFunctionObject::operator==(const GASFunctionDef &) const
// Range: 0x804D19A0 -> 0x804D19C8
bool GASFunctionObject::operator==() const {
}
// signature: GASFunctionObject::operator!=(const GASFunctionDef &) const
// Range: 0x804D19D0 -> 0x804D19F8
bool GASFunctionObject::operator!=() const {
}
// Range: 0x804D1A00 -> 0x804D1A24
bool GASFunctionObject::IsCFunction() const {
}
// Range: 0x804D1A30 -> 0x804D1A54
bool GASFunctionObject::IsAsFunction() const {
}
// Range: 0x804D1A60 -> 0x804D1A68
class GASFunctionRef GASFunctionObject::ToFunction() {
}
// Range: 0x804D1A70 -> 0x804D1AD0
int GASFunctionObject::GetNumArgs(class GASFunctionObject * this /* r31 */) const {
}
// signature: GASFunctionRefBase::Init(GASFunctionObject *, unsigned char)
// Range: 0x804D1AD0 -> 0x804D1B2C
void GASFunctionRefBase::Init(class GASFunctionRefBase * this /* r31 */) {
}
// signature: GASFunctionRefBase::Init(GASFunctionObject &, unsigned char)
// Range: 0x804D1B30 -> 0x804D1B44
void GASFunctionRefBase::Init() {
}
// signature: GASFunctionRefBase::Init(const GASFunctionRefBase &, unsigned char)
// Range: 0x804D1B50 -> 0x804D1BD8
void GASFunctionRefBase::Init(class GASFunctionRefBase * this /* r30 */, class GASFunctionRefBase & orig /* r31 */) {
}
// Range: 0x804D1BE0 -> 0x804D1C70
void GASFunctionRefBase::DropRefs(class GASFunctionRefBase * this /* r31 */) {
}
// Range: 0x804D1C70 -> 0x804D1D58
void GASFunctionRefBase::Assign(class GASFunctionRefBase * this /* r29 */, class GASFunctionRefBase & orig /* r30 */) {
}
// Range: 0x804D1D60 -> 0x804D1E0C
void GASFunctionRefBase::SetInternal(class GASFunctionRefBase * this /* r30 */, bool internal /* r31 */) {
}
// Range: 0x804D1E10 -> 0x804D1ED0
void GASFunctionRefBase::SetLocalFrame(class GASFunctionRefBase * this /* r29 */, class GASLocalFrame * localFrame /* r30 */, bool internal /* r31 */) {
}
// signature: GASFunctionRefBase::operator()(const GASFnCall &) const
// Range: 0x804D1ED0 -> 0x804D1EEC
void GASFunctionRefBase::operator()(class GASFunctionRefBase * this /* r5 */) const {
}
// signature: GASFunctionRefBase::operator==(const GASFunctionRefBase &) const
// Range: 0x804D1EF0 -> 0x804D1F08
bool GASFunctionRefBase::operator==() const {
}
// signature: GASFunctionRefBase::operator!=(const GASFunctionRefBase &) const
// Range: 0x804D1F10 -> 0x804D1F2C
bool GASFunctionRefBase::operator!=() const {
}
// signature: GASFunctionRefBase::operator==(const GASFunctionRefBase *) const
// Range: 0x804D1F30 -> 0x804D1F60
bool GASFunctionRefBase::operator==() const {
}
// signature: GASFunctionRefBase::operator!=(const GASFunctionRefBase *) const
// Range: 0x804D1F60 -> 0x804D1F98
bool GASFunctionRefBase::operator!=() const {
}
// Range: 0x804D1FA0 -> 0x804D2474
void * GASFunctionProto::GASFunctionProto(class GASFunctionProto * this /* r23 */, class GASStringContext * psc /* r24 */, class GASObject * pprototype /* r26 */, class GASFunctionRef & constructor /* r21 */, bool initFuncs /* r25 */) {
    // References
    // -> struct {} __vt__15GASCFunctionDef;
    // -> struct {} __vt__17GASFunctionObject;
    // -> static class GASNameFunction GAS_FunctionObjectTable[3];
    // -> struct {} __vt__16GASFunctionProto;
    // -> struct {} __vt__41GASPrototype<9GASObject,14GASEnvironment>;
}
// Range: 0x804D2650 -> 0x804D2708
void GASFunctionProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
    // References
    // -> struct {} __vt__17GASFunctionObject;
}
// Range: 0x804D2710 -> 0x804D2BF8
void GASFunctionProto::Apply(class GASFnCall & fn /* r25 */) {
    // Local variables
    class GASObjectInterface * thisObj; // r27
    int nArgs; // r26
    class GASValue result; // r1+0x8

    {
        // Range: 0x804D283C -> 0x804D28F8
        // Local variables
        class GASObject * args; // r23

        {
            // Range: 0x804D28C8 -> 0x804D28CC
            // Local variables
            int i; // r29
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// Range: 0x804D2C00 -> 0x804D3034
void GASFunctionProto::Call(class GASFnCall & fn /* r27 */) {
    // Local variables
    class GASObjectInterface * thisObj; // r29
    int nArgs; // r28
    class GASValue result; // r1+0x8

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GASFunctionCtorFunction::GASFunctionCtorFunction(GASStringContext *)
// Range: 0x804D3040 -> 0x804D30C8
void * GASFunctionCtorFunction::GASFunctionCtorFunction(class GASFunctionCtorFunction * this /* r31 */) {
    // References
    // -> struct {} __vt__23GASFunctionCtorFunction;
    // -> struct {} __vt__15GASCFunctionDef;
    // -> struct {} __vt__17GASFunctionObject;
}
