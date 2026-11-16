/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x30
struct /* @anon0 */ {} xGoalGeneric::__vtable; // size: 0x30, address: 0x50B390
// total size: 0x30
struct /* @anon2 */ {} xGoalEmpty::__vtable; // size: 0x30, address: 0x50B3C0
// total size: 0x2C
struct /* @anon1 */ {} xGoal::__vtable; // size: 0x2C, address: 0x50B300
void GOALDestroy_Generic(class xFactoryInst *); // size: 0x0, address: 0x2F2950
class xFactoryInst * GOALCreate_Generic(signed int, class RyzMemGrow *, void *); // size: 0x0, address: 0x2F2980
// total size: 0x30
struct /* @anon0 */ {};
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x3C
class xGoal : public xListItem, public xFactoryInst {
    // Members
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
};
// total size: 0x1C
class RyzMemGrow {
    // Members
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
// total size: 0x54
class xGoalGeneric : public xGoal {
    // Members
public:
    signed int (* fun_enter)(class xGoal *, void *, float, void *); // offset 0x3C, size 0x4
    signed int (* fun_exit)(class xGoal *, void *, float, void *); // offset 0x40, size 0x4
    signed int (* fun_suspend)(class xGoal *, void *, float, void *); // offset 0x44, size 0x4
    signed int (* fun_resume)(class xGoal *, void *, float, void *); // offset 0x48, size 0x4
    signed int (* fun_sysevent)(class xGoal *, void *, class xBase *, class xBase *, unsigned int, float *, class xBase *, signed int *); // offset 0x4C, size 0x4
    void * usrData; // offset 0x50, size 0x4
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x0
class xPsyche {};
// total size: 0x2C
struct /* @anon1 */ {};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
// total size: 0x0
class xBase {};
// total size: 0x30
struct /* @anon2 */ {};
// total size: 0x1
class RyzMemData {};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F27F0 -> 0x002F2848
*/
// Range: 0x2F27F0 -> 0x2F2848
// this: r2
signed int xGoalGeneric::SysEvent(class xBase * from /* r5 */, class xBase * to /* r14 */, unsigned int toEvent /* r13 */, float * toParam /* r12 */, class xBase * toParamWidget /* r3 */, signed int * handled /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F27F0 -> 0x2F2848
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2850 -> 0x002F2884
*/
// Range: 0x2F2850 -> 0x2F2884
// this: r2
signed int xGoalGeneric::Resume(float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2850 -> 0x2F2884
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2890 -> 0x002F28C4
*/
// Range: 0x2F2890 -> 0x2F28C4
// this: r2
signed int xGoalGeneric::Suspend(float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2890 -> 0x2F28C4
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F28D0 -> 0x002F2904
*/
// Range: 0x2F28D0 -> 0x2F2904
// this: r2
signed int xGoalGeneric::Exit(float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F28D0 -> 0x2F2904
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2910 -> 0x002F2944
*/
// Range: 0x2F2910 -> 0x2F2944
// this: r2
signed int xGoalGeneric::Enter(float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2910 -> 0x2F2944
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2950 -> 0x002F2974
*/
// Range: 0x2F2950 -> 0x2F2974
static void GOALDestroy_Generic(class xFactoryInst * item /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2950 -> 0x2F2974
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2980 -> 0x002F2A80
*/
// Range: 0x2F2980 -> 0x2F2A80
static class xFactoryInst * GOALCreate_Generic(signed int who /* r16 */, class RyzMemGrow * growCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2980 -> 0x2F2A80
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2A80 -> 0x002F2ADC
*/
// Range: 0x2F2A80 -> 0x2F2ADC
void xGoalSimple_RegisterTypes(class xFactory * fac /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F2A80 -> 0x2F2ADC
    }
}


