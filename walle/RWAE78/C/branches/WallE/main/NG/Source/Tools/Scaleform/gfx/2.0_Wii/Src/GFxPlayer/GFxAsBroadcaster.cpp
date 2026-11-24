/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxAsBroadcaster.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8048BB40 -> 0x8048D7E8
*/
// total size: 0x3C
class GASAsBroadcaster : public GASObject {
    // Members
    class garray Listeners; // offset 0x30, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class ListenerObject * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class ListenerObject {
    // Members
    class GPtr Object; // offset 0x0, size 0x4
    class GPtr Character; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxASCharacter * pObject; // offset 0x0, size 0x4
};
// total size: 0x58
class GASAsBroadcasterProto : public GASPrototype {};
// total size: 0x58
class GASPrototype : public GASAsBroadcaster {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x3C, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x48, size 0xC
    class garray * pInterfaces; // offset 0x54, size 0x4
};
// total size: 0x34
class GASAsBroadcasterCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_AsBcFunctionTable[4]; // size: 0x20, address: 0x806E7BF0
class GASNameFunction StaticFunctionTable[2]; // size: 0x10, address: 0x806E7C10
// Range: 0x8048BB40 -> 0x8048BBB0
void * GASAsBroadcaster::GASAsBroadcaster(class GASAsBroadcaster * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__16GASAsBroadcaster;
}
// Range: 0x8048BD50 -> 0x8048BDCC
void GASAsBroadcaster::commonInit(class GASAsBroadcaster * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// Range: 0x8048BDD0 -> 0x8048BE40
void GASAsBroadcasterProto::AddListener(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASObjectInterface * plistener; // r0
}
// Range: 0x8048BE40 -> 0x8048BEFC
void GASAsBroadcasterProto::BroadcastMessage(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASString eventName; // r1+0x8
}
// Range: 0x8048BF00 -> 0x8048BF78
void GASAsBroadcasterProto::RemoveListener(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASObjectInterface * plistener; // r0
}
// Range: 0x8048BF80 -> 0x8048C280
void * GASAsBroadcasterProto::GASAsBroadcasterProto(class GASAsBroadcasterProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_AsBcFunctionTable[4];
    // -> struct {} __vt__21GASAsBroadcasterProto;
    // -> struct {} __vt__49GASPrototype<16GASAsBroadcaster,14GASEnvironment>;
}
// Range: 0x8048C4E0 -> 0x8048C57C
void GASAsBroadcasterProto::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x8048C580 -> 0x8048C6AC
void * GASAsBroadcasterCtorFunction::GASAsBroadcasterCtorFunction(class GASAsBroadcasterCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[2];
    // -> struct {} __vt__28GASAsBroadcasterCtorFunction;
}
// Range: 0x8048C6B0 -> 0x8048C72C
void GASAsBroadcasterCtorFunction::Initialize(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASObjectInterface * ptr; // r30
}
// Range: 0x8048C730 -> 0x8048C774
bool GASAsBroadcaster::Initialize(class GASStringContext * psc /* r30 */, class GASObjectInterface * pobj /* r31 */) {
}
// Range: 0x8048C780 -> 0x8048C89C
bool GASAsBroadcaster::InitializeProto(class GASStringContext * psc /* r28 */, class GASObjectInterface * pobj /* r29 */) {
    // References
    // -> static class GASNameFunction GAS_AsBcFunctionTable[4];
}
// Range: 0x8048C8A0 -> 0x8048C9A0
bool GASAsBroadcaster::InitializeInstance(class GASStringContext * psc /* r29 */, class GASObjectInterface * pobj /* r30 */) {
}
// signature: GASAsBroadcaster::AddListener(GASEnvironment *, GASObjectInterface *, GASObjectInterface *)
// Range: 0x8048C9A0 -> 0x8048CB50
bool GASAsBroadcaster::AddListener(class GASEnvironment * penv /* r26 */, class GASObjectInterface * plistener /* r27 */) {
    // Local variables
    class GASValue listenersVal; // r1+0x18

    {
        // Range: 0x8048C9DC -> 0x8048CB20
        // Local variables
        class GASObject * pobj; // r30

        {
            // Range: 0x8048CA10 -> 0x8048CAEC
            // Local variables
            class GASValue val; // r1+0x8

            {
                // Range: 0x8048CA50 -> 0x8048CABC
                // Local variables
                unsigned int n; // r28
                unsigned int i; // r29
            }
        }
    }
}
// signature: GASAsBroadcaster::RemoveListener(GASEnvironment *, GASObjectInterface *, GASObjectInterface *)
// Range: 0x8048CB50 -> 0x8048CCDC
bool GASAsBroadcaster::RemoveListener(class GASEnvironment * penv /* r27 */, class GASObjectInterface * plistener /* r28 */) {
    // Local variables
    class GASValue listenersVal; // r1+0x8

    {
        // Range: 0x8048CB8C -> 0x8048CCAC
        // Local variables
        class GASObject * pobj; // r30

        {
            // Range: 0x8048CBC0 -> 0x8048CC8C
            {
                // Range: 0x8048CC00 -> 0x8048CC7C
                // Local variables
                int i; // r29
            }
        }
    }
}
// signature: GASAsBroadcaster::BroadcastMessage(GASEnvironment *, GASObjectInterface *, const GASString &, int, int)
// Range: 0x8048CCE0 -> 0x8048CFCC
bool GASAsBroadcaster::BroadcastMessage(class GASEnvironment * penv /* r18 */, class GASString & eventName /* r19 */, int nArgs /* r20 */, int firstArgBottomIndex /* r21 */) {
    // Local variables
    class GASValue listenersVal; // r1+0x38

    {
        // Range: 0x8048CD1C -> 0x8048CF9C
        // Local variables
        class GASObject * pobj; // r25

        {
            // Range: 0x8048CD50 -> 0x8048CF7C
            {
                // Range: 0x8048CD90 -> 0x8048CF6C
                // Local variables
                unsigned int n; // r23
                unsigned int i; // r24

                {
                    // Range: 0x8048CD90 -> 0x8048CF6C
                    // Local variables
                    class GASObjectInterface * plistener; // r22

                    {
                        // Range: 0x8048CD90 -> 0x8048CF18
                        // Local variables
                        class GASValue methodVal; // r1+0x28

                        {
                            // Range: 0x8048CD90 -> 0x8048CEFC
                            // Local variables
                            class GASValue result; // r1+0x8
                            class GASFunctionRef method; // r1+0x18
                        }
                    }
                }
            }
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
