/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontMap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804C4AC0 -> 0x804C6070
*/
// total size: 0x4
class GFxFontMapImpl : public GNewOverrideBase {
    // Members
    class GFxStringHash FontMap; // offset 0x0, size 0x4
};
// total size: 0x4
class GFxStringHash : public ghash {};
// total size: 0x4
class ghash {
    // Members
    class ghash_set Hash; // offset 0x0, size 0x4
};
// total size: 0x4
class ghash_set {
    // Members
    class table * pTable; // offset 0x0, size 0x4
};
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x14
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x10
};
// total size: 0x10
class ghash_node {
    // Members
    class GFxString first; // offset 0x0, size 0x4
    class MapEntry second; // offset 0x4, size 0xC
};
// total size: 0x8
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    class MapEntry * psecond; // offset 0x4, size 0x4
};
// total size: 0x4
class NoCaseKey {
    // Members
    class GFxString * pStr; // offset 0x0, size 0x4
};
struct {} __vt__10GFxFontMap; // size: 0xC, address: 0x80737758
// Range: 0x804C4AC0 -> 0x804C4B38
void * GFxFontMap::GFxFontMap(class GFxFontMap * this /* r31 */) {
    // References
    // -> struct {} __vt__10GFxFontMap;
    // -> struct {} __vt__8GFxState;
}
// Range: 0x804C4DC0 -> 0x804C4E5C
void * GFxFontMap::~GFxFontMap(class GFxFontMap * this /* r29 */) {
    // References
    // -> struct {} __vt__10GFxFontMap;
}
// signature: GFxFontMap::MapFont(const char *, const char *, GFxFontMap::MapFontFlags, float)
// Range: 0x804C4E60 -> 0x804C5004
bool GFxFontMap::MapFont(class GFxFontMap * this /* r28 */, char * pnewFontName /* r29 */, enum MapFontFlags mff /* r30 */, float scaleFactor /* f31 */) {
    // Local variables
    class GFxString fontName; // r1+0x10
    class MapEntry me; // r1+0x20
}
// signature: GFxFontMap::GetFontMapping(GFxFontMap::MapEntry *, const char *)
// Range: 0x804C5FA0 -> 0x804C6070
bool GFxFontMap::GetFontMapping(class GFxFontMap * this /* r31 */, class MapEntry * pentry /* r30 */) {
    // Local variables
    class MapEntry * pfound; // r31
}
