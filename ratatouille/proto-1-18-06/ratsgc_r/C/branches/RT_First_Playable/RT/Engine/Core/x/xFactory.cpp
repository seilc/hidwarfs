/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFactory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005A55C -> 0x8005A55C
*/
// total size: 0x1
struct RyzMemData {};
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x34
struct xFactory : public RyzMemData {
    // Members
protected:
    struct XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    struct st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    struct xFactoryInst * products; // offset 0x14, size 0x4
    struct RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0xC
struct xFactoryInst : public RyzMemData {
    // Members
protected:
    int itemType; // offset 0x0, size 0x4
    struct xFactoryInst * nextprod; // offset 0x4, size 0x4
    struct xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0xC
struct XGOFTypeInfo {
    // Members
    int tid; // offset 0x0, size 0x4
    struct xFactoryInst * (* creator)(int, struct RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(struct xFactoryInst *); // offset 0x8, size 0x4
};
// total size: 0x0
struct xBase {};
// total size: 0x1C
struct RyzMemGrow {
    // Members
protected:
    int flg_grow; // offset 0x0, size 0x4
    int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    struct xBase * user; // offset 0xC, size 0x4
    int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    struct xBase * user_last; // offset 0x18, size 0x4
};

