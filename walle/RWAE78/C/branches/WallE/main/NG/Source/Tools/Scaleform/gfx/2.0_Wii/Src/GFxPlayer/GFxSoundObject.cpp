/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxSoundObject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8053B940 -> 0x8053C8C8
*/
// total size: 0x54
class GASSoundProto : public GASPrototype {};
// total size: 0x54
class GASPrototype : public GASSoundObject {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x38, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x44, size 0xC
    class garray * pInterfaces; // offset 0x50, size 0x4
};
// total size: 0x38
class GASSoundObject : public GASObject {
    // Members
    class GFxString Sound; // offset 0x30, size 0x4
    int SoundId; // offset 0x34, size 0x4
};
static class GASNameFunction GAS_SoundFunctionTable[13]; // size: 0x68, address: 0x806E88C0
// signature: GASSoundProto::Start(const GASFnCall &)
// Range: 0x8053B940 -> 0x8053B944
void GASSoundProto::Start() {
}
// signature: GASSoundProto::Stop(const GASFnCall &)
// Range: 0x8053B950 -> 0x8053B954
void GASSoundProto::Stop() {
}
// signature: GASSoundProto::Attach(const GASFnCall &)
// Range: 0x8053B960 -> 0x8053B964
void GASSoundProto::Attach() {
}
// signature: GASSoundProto::GetBytesLoaded(const GASFnCall &)
// Range: 0x8053B970 -> 0x8053B9BC
void GASSoundProto::GetBytesLoaded() {
}
// signature: GASSoundProto::GetBytesTotal(const GASFnCall &)
// Range: 0x8053B9C0 -> 0x8053BA0C
void GASSoundProto::GetBytesTotal() {
}
// signature: GASSoundProto::GetPan(const GASFnCall &)
// Range: 0x8053BA10 -> 0x8053BA5C
void GASSoundProto::GetPan() {
}
// signature: GASSoundProto::GetTransform(const GASFnCall &)
// Range: 0x8053BA60 -> 0x8053BA98
void GASSoundProto::GetTransform() {
}
// signature: GASSoundProto::GetVolume(const GASFnCall &)
// Range: 0x8053BAA0 -> 0x8053BAEC
void GASSoundProto::GetVolume() {
}
// signature: GASSoundProto::LoadSound(const GASFnCall &)
// Range: 0x8053BAF0 -> 0x8053BAF4
void GASSoundProto::LoadSound() {
}
// signature: GASSoundProto::SetPan(const GASFnCall &)
// Range: 0x8053BB00 -> 0x8053BB04
void GASSoundProto::SetPan() {
}
// signature: GASSoundProto::SetTransform(const GASFnCall &)
// Range: 0x8053BB10 -> 0x8053BB14
void GASSoundProto::SetTransform() {
}
// signature: GASSoundProto::SetVolume(const GASFnCall &)
// Range: 0x8053BB20 -> 0x8053BB24
void GASSoundProto::SetVolume() {
}
// Range: 0x8053BB30 -> 0x8053BC50
void GASSoundProto::GlobalCtor(class GASFnCall & fn /* r28 */) {
    // References
    // -> struct {} __vt__14GASSoundObject;
}
// Range: 0x8053BC50 -> 0x8053BF64
void * GASSoundProto::GASSoundProto(class GASSoundProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_SoundFunctionTable[13];
    // -> struct {} __vt__13GASSoundProto;
    // -> struct {} __vt__47GASPrototype<14GASSoundObject,14GASEnvironment>;
    // -> struct {} __vt__14GASSoundObject;
}
