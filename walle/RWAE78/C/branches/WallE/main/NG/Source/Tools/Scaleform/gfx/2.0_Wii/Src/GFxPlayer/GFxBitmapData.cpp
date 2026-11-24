/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxBitmapData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80488CC0 -> 0x8048AB28
*/
// total size: 0x34
class GASBitmapData : public GASObject {
    // Members
    class GPtr pImageRes; // offset 0x30, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxImageResource * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class GFxImageResource : public GFxResource {
    // Members
    class GPtr pImageInfo; // offset 0xC, size 0x4
    class GFxResourceKey Key; // offset 0x10, size 0x8
    enum ResourceUse UseType; // offset 0x18, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxImageLoader * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxImageLoader : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GASRectangleObject * pObject; // offset 0x0, size 0x4
};
// total size: 0x30
class GASRectangleObject : public GASObject {};
// total size: 0x50
class GASBitmapDataProto : public GASPrototype {};
// total size: 0x50
class GASPrototype : public GASBitmapData {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x34, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x40, size 0xC
    class garray * pInterfaces; // offset 0x4C, size 0x4
};
// total size: 0x34
class GASBitmapDataCtorFunction : public GASFunctionObject {};
struct {} __vt__25GASBitmapDataCtorFunction; // size: 0xD8, address: 0x80734A68
struct {} __vt__18GASBitmapDataProto; // size: 0xB8, address: 0x80734B40
struct {} __vt__46GASPrototype<13GASBitmapData,14GASEnvironment>; // size: 0xB8, address: 0x80734BF8
struct {} __vt__13GASBitmapData; // size: 0xB4, address: 0x80734CB0
static class GASNameFunction GFx_BitmapDataFunctionTable[2]; // size: 0x10, address: 0x806E7BB8
class GASNameFunction StaticFunctionTable[2]; // size: 0x10, address: 0x806E7BC8
// Range: 0x80488CC0 -> 0x80488D28
void * GASBitmapData::GASBitmapData(class GASBitmapData * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__13GASBitmapData;
}
// Range: 0x80488D90 -> 0x80488E0C
void GASBitmapData::commonInit(class GASBitmapData * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// Range: 0x80488E20 -> 0x80489238
class GASBitmapData * GFx_LoadBitmap<GFxString>(class GASEnvironment * penv /* r26 */, class GFxString & linkageId /* r27 */) {
    // Local variables
    class GASBitmapData * pobj; // r30

    {
        // Range: 0x80488E64 -> 0x8048920C
        // Local variables
        bool userImageProtocol; // r28
        char * plinkageIdStr; // r29

        {
            // Range: 0x80488E74 -> 0x80488F64
            // Local variables
            class GFxString urlLowerCase; // r1+0x1C
        }
        {
            // Range: 0x80488F8C -> 0x80489088
            // Local variables
            class GFxSharedState * pss; // r0
        }
        {
            // Range: 0x80489088 -> 0x804891EC
            // Local variables
            class GFxImageResource * pbmpRes; // r25
            class GFxResourceBindData resBindData; // r1+0x20
        }
    }
}
// Range: 0x80489F00 -> 0x8048A2F0
class GASBitmapData * GFx_LoadBitmap<GASString>(class GASEnvironment * penv /* r26 */, class GASString & linkageId /* r27 */) {
    // Local variables
    class GASBitmapData * pobj; // r30

    {
        // Range: 0x80489F44 -> 0x8048A2C4
        // Local variables
        bool userImageProtocol; // r28
        char * plinkageIdStr; // r29

        {
            // Range: 0x80489F58 -> 0x8048A02C
            // Local variables
            class GASString urlLowerCase; // r1+0x1C
        }
        {
            // Range: 0x8048A044 -> 0x8048A140
            // Local variables
            class GFxSharedState * pss; // r0
        }
        {
            // Range: 0x8048A140 -> 0x8048A2A4
            // Local variables
            class GFxImageResource * pbmpRes; // r25
            class GFxResourceBindData resBindData; // r1+0x20
        }
    }
}
// signature: GASBitmapData::LoadBitmap(GASEnvironment *, const GFxString &)
// Range: 0x80488E10 -> 0x80488E14
class GASBitmapData * GASBitmapData::LoadBitmap() {
}
// Range: 0x80489420 -> 0x8048970C
void GASBitmapData::SetImage(class GASBitmapData * this /* r29 */, class GASEnvironment * penv /* r30 */, class GFxImageResource * pimg /* r28 */) {
    // Local variables
    class GASValue params[4]; // r1+0x60
}
// signature: GFx_BitmapDataFuncStub(const GASFnCall &)
// Range: 0x80489780 -> 0x804897B8
static void GFx_BitmapDataFuncStub() {
}
// Range: 0x804897C0 -> 0x80489AB8
void * GASBitmapDataProto::GASBitmapDataProto(class GASBitmapDataProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GFx_BitmapDataFunctionTable[2];
    // -> struct {} __vt__18GASBitmapDataProto;
    // -> struct {} __vt__46GASPrototype<13GASBitmapData,14GASEnvironment>;
}
// Range: 0x80489C60 -> 0x80489D8C
void * GASBitmapDataCtorFunction::GASBitmapDataCtorFunction(class GASBitmapDataCtorFunction * this /* r30 */, class GASStringContext * psc /* r31 */) {
    // References
    // -> class GASNameFunction StaticFunctionTable[2];
    // -> struct {} __vt__25GASBitmapDataCtorFunction;
}
// Range: 0x80489D90 -> 0x80489E2C
void GASBitmapDataCtorFunction::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
// Range: 0x80489E30 -> 0x80489EFC
void GASBitmapDataCtorFunction::LoadBitmap(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GASString linkageId; // r1+0x8
}
