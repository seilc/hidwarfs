/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxMovieClipLoader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804F73E0 -> 0x804FA178
*/
// total size: 0x34
class GASMovieClipLoader : public GASObject {
    // Members
    class GFxStringHash ProgressInfo; // offset 0x30, size 0x4
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
// total size: 0x8
class ProgressDesc {
    // Members
    int LoadedBytes; // offset 0x0, size 0x4
    int TotalBytes; // offset 0x4, size 0x4
};
// total size: 0xC
class ghash_node {
    // Members
    class GFxString first; // offset 0x0, size 0x4
    class ProgressDesc second; // offset 0x4, size 0x8
};
// total size: 0x8
class node_ref {
    // Members
    class GFxString * pfirst; // offset 0x0, size 0x4
    class ProgressDesc * psecond; // offset 0x4, size 0x4
};
// total size: 0x10
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0xC
};
// total size: 0x50
class GASMovieClipLoaderProto : public GASPrototype {};
// total size: 0x50
class GASPrototype : public GASMovieClipLoader {
    // Members
    class GASFunctionWeakRef Constructor; // offset 0x34, size 0xC
    class GASFunctionWeakRef __Constructor__; // offset 0x40, size 0xC
    class garray * pInterfaces; // offset 0x4C, size 0x4
};
// total size: 0x34
class GASMovieClipLoaderCtorFunction : public GASFunctionObject {};
static class GASNameFunction GAS_MovieClipLoaderFuncTable[4]; // size: 0x20, address: 0x806E8280
// Range: 0x804F73E0 -> 0x804F7448
void * GASMovieClipLoader::GASMovieClipLoader(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */) {
    // References
    // -> struct {} __vt__18GASMovieClipLoader;
}
// Range: 0x804F7690 -> 0x804F7724
void GASMovieClipLoader::commonInit(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */) {
}
// Range: 0x804F7730 -> 0x804F77F0
void GASMovieClipLoader::NotifyOnLoadStart(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */, class GFxASCharacter * ptarget /* r1+0x8 */) {
}
// Range: 0x804F79D0 -> 0x804F7AA0
void GASMovieClipLoader::NotifyOnLoadComplete(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */, class GFxASCharacter * ptarget /* r1+0x8 */, int status /* r1+0xC */) {
}
// Range: 0x804F7AA0 -> 0x804F7B60
void GASMovieClipLoader::NotifyOnLoadInit(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */, class GFxASCharacter * ptarget /* r1+0x8 */) {
}
// Range: 0x804F7B60 -> 0x804F7C74
void GASMovieClipLoader::NotifyOnLoadError(class GASMovieClipLoader * this /* r29 */, class GASEnvironment * penv /* r30 */, class GFxASCharacter * ptarget /* r1+0x8 */, char * errorCode /* r31 */, int status /* r1+0xC */) {
}
// Range: 0x804F7C80 -> 0x804F7E48
void GASMovieClipLoader::NotifyOnLoadProgress(class GASMovieClipLoader * this /* r30 */, class GASEnvironment * penv /* r31 */, class GFxASCharacter * ptarget /* r1+0x8 */, int loadedBytes /* r1+0xC */, int totalBytes /* r1+0x10 */) {
    {
        // Range: 0x804F7C88 -> 0x804F7D68
        // Local variables
        class ProgressDesc * pprogress; // r0
        class GFxString path; // r1+0x1C
    }
}
// Range: 0x804F8C00 -> 0x804F8F34
void GASMovieClipLoaderProto::GetProgress(class GASFnCall & fn /* r29 */) {
    // Local variables
    class GASMovieClipLoader * pmovieClipLoader; // r0

    {
        // Range: 0x804F8C38 -> 0x804F8EE4
        // Local variables
        class ProgressDesc * pprogress; // r0
        class GASString path; // r1+0x24
    }
}
// Range: 0x804F8F40 -> 0x804F91AC
void GASMovieClipLoaderProto::LoadClip(class GASFnCall & fn /* r31 */) {
    // Local variables
    class GASMovieClipLoader * pmovieClipLoader; // r28
    class GASString urlStr; // r1+0xC
}
// Range: 0x804F91B0 -> 0x804F9384
void GASMovieClipLoaderProto::UnloadClip(class GASFnCall & fn /* r29 */) {
}
// Range: 0x804F9390 -> 0x804F9688
void * GASMovieClipLoaderProto::GASMovieClipLoaderProto(class GASMovieClipLoaderProto * this /* r29 */, class GASStringContext * psc /* r30 */, class GASObject * pprototype /* r31 */, class GASFunctionRef & constructor /* r25 */) {
    // References
    // -> static class GASNameFunction GAS_MovieClipLoaderFuncTable[4];
    // -> struct {} __vt__23GASMovieClipLoaderProto;
    // -> struct {} __vt__51GASPrototype<18GASMovieClipLoader,14GASEnvironment>;
}
// signature: GASMovieClipLoaderCtorFunction::GASMovieClipLoaderCtorFunction(GASStringContext *)
// Range: 0x804F9820 -> 0x804F986C
void * GASMovieClipLoaderCtorFunction::GASMovieClipLoaderCtorFunction(class GASMovieClipLoaderCtorFunction * this /* r31 */) {
    // References
    // -> struct {} __vt__30GASMovieClipLoaderCtorFunction;
}
// Range: 0x804F9870 -> 0x804F9934
void GASMovieClipLoaderCtorFunction::GlobalCtor(class GASFnCall & fn /* r30 */) {
}
