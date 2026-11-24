/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFontManager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804C2710 -> 0x804C4ABC
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x4
class NodePtr {
    // Members
    class GFxFontHandle * pNode; // offset 0x0, size 0x4
};
// total size: 0xC
class ghashset_cached_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    unsigned long HashValue; // offset 0x4, size 0x4
    class NodePtr value; // offset 0x8, size 0x4
};
// Range: 0x804C2710 -> 0x804C293C
void * GFxFontManager::GFxFontManager(class GFxFontManager * this /* r31 */, class GFxMovieDefImpl * pdefImpl /* r28 */, class GFxSharedState * psharedState /* r27 */) {
    // References
    // -> struct {} __vt__14GFxFontManager;
}
// Range: 0x804C29F0 -> 0x804C2B9C
void * GFxFontManager::~GFxFontManager(class GFxFontManager * this /* r30 */) {
}
// Range: 0x804C2BA0 -> 0x804C2E14
void GFxFontManager::RemoveFontHandle(class GFxFontManager * this /* r25 */, class GFxFontHandle * phandle /* r26 */) {
}
// Range: 0x804C2E20 -> 0x804C3734
class GFxFontHandle * GFxFontManager::FindOrCreateHandle(class GFxFontManager * this /* r23 */, char * pfontName /* r24 */, unsigned int matchFontFlags /* r25 */, class GFxFontResource * * ppfoundFont /* r26 */) {
    // Local variables
    class GFxFontHandle * phandle; // r1+0xC
    class GFxFontLib * pfontLib; // r30
    class GFxFontProvider * pfontProvider; // r29
    class GFxFontResource * pfontRes; // r17
    char * plookupFontName; // r28
    unsigned int lookupFlags; // r27
    float scaleFactor; // f30

    {
        // Range: 0x804C2E6C -> 0x804C2E6C
        // Local variables
        class FontResult fr; // r1+0x18
    }
    {
        // Range: 0x804C2E6C -> 0x804C36A8
        // Local variables
        class FontResult fr; // r1+0x10
    }
}
// Range: 0x804C4510 -> 0x804C4734
class GFxFontHandle * GFxFontManager::CreateFontHandle(class GFxFontManager * this /* r30 */, char * pfontName /* r31 */, unsigned int matchFontFlags /* r27 */) {
    // Local variables
    class GFxFontResource * pfoundFont; // r1+0x14
    class GFxFontHandle * phandle; // r1+0x10

    {
        // Range: 0x804C454C -> 0x804C4630
        // Local variables
        unsigned int newMatchFontFlags; // r0
    }
}
// signature: GFxFontManager::CreateAnyFontHandle(const char *)
// Range: 0x804C4A70 -> 0x804C4ABC
class GFxFontHandle * GFxFontManager::CreateAnyFontHandle(class GFxFontManager * this /* r31 */) {
    // Local variables
    class GFxFontHandle * pfontHandle; // r0
}
