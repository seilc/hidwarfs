/*
    Compile unit: E:\SD2\Game\flat\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class zFMVFile zFMVFileTable[41]; // size: 0x668, address: 0x2FD340
signed int sweLocalPacketState; // size: 0x4, address: 0x357744
// total size: 0x28
class zFMVFile {
    // Members
public:
    enum eFMVFile type; // offset 0x0, size 0x4
    char fileName[32]; // offset 0x4, size 0x20
    unsigned int fileNameID; // offset 0x24, size 0x4
};
enum eFMVFile {
    eFMVFile_HeavyIronLOGO = 0,
    eFMVFile_SDTitleSequence = 1,
    eFMVFile_Demo1 = 2,
    eFMVFile_Demo2 = 3,
    eFMVFile_Demo3 = 4,
    eFMVFile_Demo4 = 5,
    eFMVFile_Demo5 = 6,
    eFMVFile_Demo6 = 7,
    eFMVFile_Demo7 = 8,
    eFMVFile_Demo8 = 9,
    eFMVFile_Demo9 = 10,
    eFMVFile_Demo10 = 11,
    eFMVFile_Demo11 = 12,
    eFMVFile_Demo12 = 13,
    eFMVFile_Demo13 = 14,
    eFMVFile_Demo14 = 15,
    eFMVFile_Demo15 = 16,
    eFMVFile_THQLOGO = 17,
    eFMVFile_WarnerBrosLOGO = 18,
    eFMVFile_WBExtra0 = 19,
    eFMVFile_WBExtra1 = 20,
    eFMVFile_WBExtra2 = 21,
    eFMVFile_WBExtra3 = 22,
    eFMVFile_WBExtra4 = 23,
    eFMVFile_Credits = 24,
    eFMVFile_EndCredits = 25,
    eFMVFile_RenderWareLOGO = 26,
    eFMVFile_Cin1 = 27,
    eFMVFile_Cin2 = 28,
    eFMVFile_Cin3 = 29,
    eFMVFile_Cin4 = 30,
    eFMVFile_Cin5 = 31,
    eFMVFile_Cin6 = 32,
    eFMVFile_Cin7 = 33,
    eFMVFile_Cin8 = 34,
    eFMVFile_Cin9 = 35,
    eFMVFile_Cin10 = 36,
    eFMVFile_Cin11 = 37,
    eFMVFile_Cin12 = 38,
    eFMVFile_Cin13 = 39,
    eFMVFile_Cin14 = 40,
    eFMVFileCount = 41,
};

/*
    Compile unit: E:\SD2\Game\flat\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C3D0 -> 0x0026C3F0
*/
// Range: 0x26C3D0 -> 0x26C3F0
char * zFMVFileGetName(enum eFMVFile fileEnum /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26C3D0 -> 0x26C3F0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026C3F0 -> 0x0026C49C
*/
// Range: 0x26C3F0 -> 0x26C49C
unsigned int zFMVPlay(char * filename /* r2 */, unsigned int buttons /* r17 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x26C3F0 -> 0x26C49C
        unsigned int ret; // r16
        char c[32]; // r29+0x40
    }
}


