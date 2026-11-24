/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontLib.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804C1EF0 -> 0x804C2704
*/
// total size: 0xC
class GFxFontLibImpl : public GNewOverrideBase {
    // Members
    class garray FontMovies; // offset 0x0, size 0xC
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x8
class FontResult {
    // Members
    class GFxMovieDef * pMovieDef; // offset 0x0, size 0x4
    class GFxFontResource * pFontResource; // offset 0x4, size 0x4
};
// Range: 0x804C1EF0 -> 0x804C1F70
void * GFxFontLib::GFxFontLib(class GFxFontLib * this /* r31 */) {
    // References
    // -> struct {} __vt__10GFxFontLib;
    // -> struct {} __vt__8GFxState;
}
// Range: 0x804C2060 -> 0x804C20FC
void * GFxFontLib::~GFxFontLib(class GFxFontLib * this /* r29 */) {
    // References
    // -> struct {} __vt__10GFxFontLib;
}
// Range: 0x804C2100 -> 0x804C2350
void GFxFontLib::AddFontsFrom(class GFxFontLib * this /* r24 */, class GFxMovieDef * md /* r26 */, bool pin /* r27 */) {
    // Local variables
    class GFxMovieDefImpl * pmdi; // r0
}
// Range: 0x804C2350 -> 0x804C23C0
void * GFxFontLib::FontResult::~FontResult(class FontResult * this /* r30 */) {
}
// Range: 0x804C23C0 -> 0x804C2704
bool GFxFontLib::FindFont(class GFxFontLib * this /* r17 */, class FontResult * presult /* r18 */, char * pfontname /* r19 */, unsigned int fontFlags /* r6 */, class GFxMovieDef * puserDef /* r20 */, class GFxSharedState * psharedStates /* r21 */) {
    // Local variables
    unsigned int i; // r25
    unsigned int resIndex; // r24
    class GFxMovieDataDef * pdataDef; // r23
    bool fontFound; // r22
    class GFxMovieDefImpl * pudi; // r0
    class GFxResourceBindData rbd; // r1+0x8
}
