/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int g_TextureCount; // size: 0x4, address: 0x4A4C98
signed int g_TextureLevelReset; // size: 0x4, address: 0x4A4C9C
class _xTex * g_Textures[200]; // size: 0x320, address: 0x4AD440
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x20
class _iTexResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int pad[3]; // offset 0x4, size 0xC
    class _PVRheader header; // offset 0x10, size 0x10
};
// total size: 0x8
class _iTexRuntime {
    // Members
public:
    void * surface; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
};
// total size: 0x8
class _xTex {
    // Members
public:
    class _iTexResource * m_resource; // offset 0x0, size 0x4
    class _iTexRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x10
class _PVRheader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nTextureDataSize; // offset 0x4, size 0x4
    unsigned int nTextureType; // offset 0x8, size 0x4
    unsigned short nWidth; // offset 0xC, size 0x2
    unsigned short nHeight; // offset 0xE, size 0x2
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E320 -> 0x0032E3C4
*/
// Range: 0x32E320 -> 0x32E3C4
class _xTex * xTexFind(unsigned int assetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32E320 -> 0x32E3C4
        unsigned int testID; // r2
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E3D0 -> 0x0032E4C0
*/
// Range: 0x32E3D0 -> 0x32E4C0
void xTexAdd(class _xTex * next /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32E3D0 -> 0x32E4C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E4C0 -> 0x0032E4D0
*/
// Range: 0x32E4C0 -> 0x32E4D0
void xTexLevelReset() {
    /* anonymous block */ {
        // Range: 0x32E4C0 -> 0x32E4D0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E4D0 -> 0x0032E4E0
*/
// Range: 0x32E4D0 -> 0x32E4E0
void xTexSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x32E4D0 -> 0x32E4E0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xTex.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E4E0 -> 0x0032E508
*/
// Range: 0x32E4E0 -> 0x32E508
void xTexInit() {
    /* anonymous block */ {
        // Range: 0x32E4E0 -> 0x32E508
    }
}


