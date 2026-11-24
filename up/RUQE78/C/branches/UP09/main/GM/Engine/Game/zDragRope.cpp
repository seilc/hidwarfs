/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDragRope.cpp
*/
static int segments; // size: 0x4, address: 0x807A3244
// Range: 0x800DDD40 -> 0x800DDE44
void zDragRope::Update(class zDragRope * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 pos1; // r1+0x3C
    class xVec3 pos2; // r1+0x30
}
// Range: 0x800DDE50 -> 0x800DDF44
void * zDragRope::~zDragRope(class zDragRope * this /* r28 */) {
    {
        // Range: 0x800DDE94 -> 0x800DDEB4
        // Local variables
        int i; // r30
    }

    // References
    // -> struct {} __vt__9zDragRope;
}
// Range: 0x800DDF80 -> 0x800DE32C
bool zDragRope::EndB_GetPosition(class zDragRope * this /* r30 */, class hkVector4 & pos /* r29 */, class hkVector4 * posPlayer2 /* r31 */) {
    {
        // Range: 0x800DDFB0 -> 0x800DE0C0
        // Local variables
        class xVec3 offset; // r1+0x3C
        class xMat4x3 boneMat; // r1+0x88
    }
    {
        // Range: 0x800DE200 -> 0x800DE308
        // Local variables
        class xVec3 offset; // r1+0x30
        class xMat4x3 boneMat; // r1+0x48
    }

    // References
    // -> class hkVector4 hkVector4Zero;
}
// Range: 0x800DE330 -> 0x800DE438
class Entity * Sext::zDragRopeAsset::Create(class EntityHandleBase * handle /* r29 */, class zDragRopeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zDragRope;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800DE440 -> 0x800DE4B4
void zDragRope::Init(class zDragRope * this /* r30 */, class zDragRopeAsset * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__23zDragRope_SpringAdapter;
}
// Range: 0x800DE4C0 -> 0x800DE5D8
void zDragRope::Setup(class zDragRope * this /* r29 */) {
}
// Range: 0x800DE5E0 -> 0x800DE990
void zDragRope::Init(class zDragRope * this /* r31 */) {
    // Local variables
    class xBase * base; // r6
    class EntityHandleBase * hosegoodie; // r0
    class EntityHandleBase * ropegoodie; // r0
    class xVec3 force; // r1+0x8

    {
        // Range: 0x800DE69C -> 0x800DE6AC
        // Local variables
        class zHouse * house; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zDragRope::SetLength(float)
// Range: 0x800DE990 -> 0x800DEA4C
void zDragRope::SetLength() {
    // Local variables
    class xVec3 force; // r1+0x8
}
// Range: 0x800DEA50 -> 0x800DEB14
void zDragRope::ResetLength() {
    // Local variables
    class xVec3 force; // r1+0x8
}
// Range: 0x800DEB20 -> 0x800DEB58
void zDragRope::Reset(class zDragRope * this /* r31 */) {
}
// signature: zDragRope::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DEB60 -> 0x800DEF18
void zDragRope::HandleEvent(class zDragRope * this /* r31 */) {
    {
        // Range: 0x800DED8C -> 0x800DEEF8
        // Local variables
        class zDirection * direction; // r0
        class EventActionDirection * local_params; // r0
        class xVec3 loc; // r1+0x30

        {
            // Range: 0x800DED98 -> 0x800DEEF8
            // Local variables
            class hkVector4 fxb; // r1+0x20
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
