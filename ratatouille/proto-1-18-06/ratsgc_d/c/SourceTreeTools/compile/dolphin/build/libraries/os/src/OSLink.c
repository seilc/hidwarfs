/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSLink.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D3DD4 -> 0x803D3DF8
*/
// total size: 0x8
struct OSModuleLink {
    // Members
    struct OSModuleInfo * next; // offset 0x0, size 0x4
    struct OSModuleInfo * prev; // offset 0x4, size 0x4
};
// total size: 0x20
struct OSModuleInfo {
    // Members
    unsigned long id; // offset 0x0, size 0x4
    struct OSModuleLink link; // offset 0x4, size 0x8
    unsigned long numSections; // offset 0xC, size 0x4
    unsigned long sectionInfoOffset; // offset 0x10, size 0x4
    unsigned long nameOffset; // offset 0x14, size 0x4
    unsigned long nameSize; // offset 0x18, size 0x4
    unsigned long version; // offset 0x1C, size 0x4
};
// total size: 0x4C
struct OSModuleHeader {
    // Members
    struct OSModuleInfo info; // offset 0x0, size 0x20
    unsigned long bssSize; // offset 0x20, size 0x4
    unsigned long relOffset; // offset 0x24, size 0x4
    unsigned long impOffset; // offset 0x28, size 0x4
    unsigned long impSize; // offset 0x2C, size 0x4
    unsigned char prologSection; // offset 0x30, size 0x1
    unsigned char epilogSection; // offset 0x31, size 0x1
    unsigned char unresolvedSection; // offset 0x32, size 0x1
    unsigned char bssSection; // offset 0x33, size 0x1
    unsigned long prolog; // offset 0x34, size 0x4
    unsigned long epilog; // offset 0x38, size 0x4
    unsigned long unresolved; // offset 0x3C, size 0x4
    unsigned long align; // offset 0x40, size 0x4
    unsigned long bssAlign; // offset 0x44, size 0x4
    unsigned long fixSize; // offset 0x48, size 0x4
};
// total size: 0x8
struct OSImportInfo {
    // Members
    unsigned long id; // offset 0x0, size 0x4
    unsigned long offset; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSRel {
    // Members
    unsigned short offset; // offset 0x0, size 0x2
    unsigned char type; // offset 0x2, size 0x1
    unsigned char section; // offset 0x3, size 0x1
    unsigned long addend; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSSectionInfo {
    // Members
    unsigned long offset; // offset 0x0, size 0x4
    unsigned long size; // offset 0x4, size 0x4
};
// Range: 0x803D3DD4 -> 0x803D3DF8
void __OSModuleInit() {}


