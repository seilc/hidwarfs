/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSurfaces.cpp
*/
// Range: 0x80265FB0 -> 0x80266000
void zSinkingSurface::Init(class zSinkingSurface * this /* r30 */, void * inAsset /* r31 */) {
}
// Range: 0x80266000 -> 0x80266064
void zSinkingSurface::Setup(class zSinkingSurface * this /* r31 */) {
}
// Range: 0x80266070 -> 0x80266264
void zSinkingSurface::LoadValuesFromAsset(class zSinkingSurface * this /* r31 */) {
    {
        // Range: 0x802660E0 -> 0x80266120
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x8026617C -> 0x802661C8
        // Local variables
        class xEnt * tempEnt; // r3
    }
    {
        // Range: 0x802661C8 -> 0x80266218
        // Local variables
        class zDirection * tempDirectionAsset; // r3
    }
}
// Range: 0x80266270 -> 0x802662AC
void zSinkingSurface::Reset(class zSinkingSurface * this /* r31 */) {
}
// signature: zSinkingSurface::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802662B0 -> 0x8026639C
void zSinkingSurface::HandleEvent(class zSinkingSurface * this /* r29 */) {
}
// Range: 0x802663A0 -> 0x8026647C
class Entity * Sext::zSinkingSurfaceAsset::Create(class EntityHandleBase * handle /* r29 */, class zSinkingSurfaceAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__15zSinkingSurface;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zSinkingSurface::Update(float)
// Range: 0x80266480 -> 0x802665CC
void zSinkingSurface::Update(class zSinkingSurface * this /* r29 */) {
    {
        // Range: 0x802664A8 -> 0x802665A0
        // Local variables
        int i; // r30

        {
            // Range: 0x802664A8 -> 0x802665A0
            // Local variables
            class zUPPlayer * tempUpPlayer; // r23

            {
                // Range: 0x802664B8 -> 0x802665A0
                // Local variables
                float checkHeight; // f0
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_Null;
}
// Range: 0x802665D0 -> 0x802665D4
void zSinkingSurface::SceneExit() {
}
// Range: 0x802665E0 -> 0x8026677C
void zSinkingSurface::ContextCheckForPresence(class zSinkingSurface * this /* r30 */, class zCommonPlayer * player /* r31 */) {
    {
        // Range: 0x80266658 -> 0x8026675C
        // Local variables
        class zUpContextAction * ca; // r0
    }
}
// signature: zSinkingSurface::GetAnimPackage(ePlayerName)
// Range: 0x802667B0 -> 0x802667FC
class zAnimPackage * zSinkingSurface::GetAnimPackage() {
}
