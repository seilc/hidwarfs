/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCTypesIN2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FA59C -> 0x802FA5A8
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x18
struct zNPCTypeInfoIN2 {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    void (* scene_init)(); // offset 0x4, size 0x4
    void (* scene_enter)(); // offset 0x8, size 0x4
    void (* setup)(); // offset 0xC, size 0x4
    void (* reset)(); // offset 0x10, size 0x4
    void (* scene_exit)(); // offset 0x14, size 0x4
};
static struct zNPCTypeInfoIN2 info[3]; // size: 0x48, address: 0x804D8D10
// Range: 0x802FA59C -> 0x802FA5A8
struct zNPCTypeInfoIN2 * zNPCTypesGetInfo() {
    // References
    // -> static struct zNPCTypeInfoIN2 info[3];
}


