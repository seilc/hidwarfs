/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_modinit; // size: 0x4, address: 0x50F4AC
static class xBehaveMgr * g_behavmgr; // size: 0x4, address: 0x50F4B0
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
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
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x68
class xPsyche : public RyzMemData {
    // Members
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
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
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0x18
class xBehaveMgr : public RyzMemData {
    // Members
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
// total size: 0xC
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
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
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
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
// total size: 0x4
class xPSYNote {};
enum en_xpsytime {
    XPSY_TYMR_CURGOAL = 0,
    XPSY_TYMR_NOMORE = 1,
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
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
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EFB00 -> 0x002EFB34
*/
// Range: 0x2EFB00 -> 0x2EFB34
// this: r2
float xPsyche::TimerGet(enum en_xpsytime tymr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EFB00 -> 0x2EFB34
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EFB40 -> 0x002EFF9C
*/
// Range: 0x2EFB40 -> 0x2EFF9C
// this: r20
signed int xPsyche::TranGoal(float dt /* r20 */, void * updCtxt /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2EFB40 -> 0x2EFF9C
        signed int halfway; // r6
        signed int just_switched; // r18
        class xGoal * topgoal; // r16
        signed int moretodo; // r2
        signed int moretodo; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EFFC0 -> 0x002F00EC
*/
// Range: 0x2EFFC0 -> 0x2F00EC
// this: r2
signed int xPsyche::ParseTranRequest(enum en_trantype trantyp /* r2 */, signed int trangid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EFFC0 -> 0x2F00EC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F00F0 -> 0x002F02FC
*/
// Range: 0x2F00F0 -> 0x2F02FC
// this: r19
signed int xPsyche::Timestep(float dt /* r20 */, void * updCtxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2F00F0 -> 0x2F02FC
        class xGoal * curgoal; // r17
        signed int moretodo; // r2
        signed int trangid; // r2
        enum en_trantype trantyp; // r29+0x6C
        signed int old_psyflags; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0300 -> 0x002F03A4
*/
// Range: 0x2F0300 -> 0x2F03A4
// this: r18
class xGoal * xPsyche::FindGoal(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0300 -> 0x2F03A4
        class xGoal * goal; // r17
        class xGoal * safe; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F03B0 -> 0x002F050C
*/
// Range: 0x2F03B0 -> 0x2F050C
// this: r17
signed int xPsyche::GoalNone(signed int denyExplicit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F03B0 -> 0x2F050C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0510 -> 0x002F0634
*/
// Range: 0x2F0510 -> 0x2F0634
// this: r17
signed int xPsyche::GoalSwap(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x2F0510 -> 0x2F0634
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0640 -> 0x002F0840
*/
// Range: 0x2F0640 -> 0x2F0840
// this: r18
signed int xPsyche::GoalPop(signed int gid_popto /* r29+0x48 */) {
    /* anonymous block */ {
        // Range: 0x2F0640 -> 0x2F0840
        signed int result; // r17
        class xGoal * destgoal; // r16
        class xGoal * tmpgoal; // r7
        signed int i; // r6
        enum en_trantype trantype; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0840 -> 0x002F0974
*/
// Range: 0x2F0840 -> 0x2F0974
// this: r17
signed int xPsyche::GoalPopRecover(signed int overpend /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0840 -> 0x2F0974
        signed int result; // r16
        signed int i; // r7
        class xGoal * tmpgoal; // r5
        class xGoal * destgoal; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0980 -> 0x002F0A38
*/
// Range: 0x2F0980 -> 0x2F0A38
// this: r16
signed int xPsyche::GoalPopToBase(signed int overpend /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0980 -> 0x2F0A38
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0A40 -> 0x002F0BB4
*/
// Range: 0x2F0A40 -> 0x2F0BB4
// this: r17
signed int xPsyche::GoalPush(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x2F0A40 -> 0x2F0BB4
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0BC0 -> 0x002F0CFC
*/
// Range: 0x2F0BC0 -> 0x2F0CFC
// this: r17
signed int xPsyche::GoalSet(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x2F0BC0 -> 0x2F0CFC
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0D00 -> 0x002F0DF0
*/
// Range: 0x2F0D00 -> 0x2F0DF0
// this: r2
class xGoal * xPsyche::GetPrevRecovery(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0D00 -> 0x2F0DF0
        signed int i; // r6
        signed int idx_start; // r8
        class xGoal * tmpgoal; // r5
        class xGoal * recgoal; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0DF0 -> 0x002F0E10
*/
// Range: 0x2F0DF0 -> 0x2F0E10
// this: r2
signed int xPsyche::GIDOfPending() {
    /* anonymous block */ {
        // Range: 0x2F0DF0 -> 0x2F0E10
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0E10 -> 0x002F0E3C
*/
// Range: 0x2F0E10 -> 0x2F0E3C
// this: r2
signed int xPsyche::GIDOfActive() {
    /* anonymous block */ {
        // Range: 0x2F0E10 -> 0x2F0E3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0E40 -> 0x002F0E90
*/
// Range: 0x2F0E40 -> 0x2F0E90
// this: r2
class xGoal * xPsyche::GIDInStack(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0E40 -> 0x2F0E90
        class xGoal * da_goal; // r2
        class xGoal * tmpgoal; // r8
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0E90 -> 0x002F0EB8
*/
// Range: 0x2F0E90 -> 0x2F0EB8
// this: r2
class xGoal * xPsyche::GetCurGoal() {
    /* anonymous block */ {
        // Range: 0x2F0E90 -> 0x2F0EB8
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0EC0 -> 0x002F0F10
*/
// Range: 0x2F0EC0 -> 0x2F0F10
// this: r2
signed int xPsyche::IndexInStack(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0EC0 -> 0x2F0F10
        signed int da_idx; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0F10 -> 0x002F0F7C
*/
// Range: 0x2F0F10 -> 0x2F0F7C
// this: r2
void xPsyche::FreshWipe() {
    /* anonymous block */ {
        // Range: 0x2F0F10 -> 0x2F0F7C
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0F80 -> 0x002F101C
*/
// Range: 0x2F0F80 -> 0x2F101C
// this: r18
class xGoal * xPsyche::AddGoal(signed int gid /* r17 */, void * createData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F0F80 -> 0x2F101C
        class xGoal * goal; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1020 -> 0x002F1054
*/
// Range: 0x2F1020 -> 0x2F1054
// this: r16
void xPsyche::BrainEnd() {
    /* anonymous block */ {
        // Range: 0x2F1020 -> 0x2F1054
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1060 -> 0x002F1080
*/
// Range: 0x2F1060 -> 0x2F1080
// this: r7
void xPsyche::BrainExtend() {
    /* anonymous block */ {
        // Range: 0x2F1060 -> 0x2F1080
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1080 -> 0x002F10A0
*/
// Range: 0x2F1080 -> 0x2F10A0
// this: r7
void xPsyche::BrainBegin() {
    /* anonymous block */ {
        // Range: 0x2F1080 -> 0x2F10A0
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F10A0 -> 0x002F1124
*/
// Range: 0x2F10A0 -> 0x2F1124
// this: r18
void xBehaveMgr::UnSubscribe(class xPsyche * psy /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2F10A0 -> 0x2F1124
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1130 -> 0x002F11C0
*/
// Range: 0x2F1130 -> 0x2F11C0
// this: r2
class xPsyche * xBehaveMgr::Subscribe(class xBase * owner /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F1130 -> 0x2F11C0
        class xPsyche * psy; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F11C0 -> 0x002F12B8
*/
// Range: 0x2F11C0 -> 0x2F12B8
void xBehaveMgr_SceneReset() {
    /* anonymous block */ {
        // Range: 0x2F11C0 -> 0x2F12B8
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F12C0 -> 0x002F12CC
*/
// Range: 0x2F12C0 -> 0x2F12CC
void xBehaveMgr_SceneFinish() {
    /* anonymous block */ {
        // Range: 0x2F12C0 -> 0x2F12CC
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F12D0 -> 0x002F12D8
*/
// Range: 0x2F12D0 -> 0x2F12D8
void xBehaveMgr_ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x2F12D0 -> 0x2F12D8
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F12E0 -> 0x002F12E8
*/
// Range: 0x2F12E0 -> 0x2F12E8
class xBehaveMgr * xBehaveMgr_GetSelf() {
    /* anonymous block */ {
        // Range: 0x2F12E0 -> 0x2F12E8
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F12F0 -> 0x002F133C
*/
// Range: 0x2F12F0 -> 0x2F133C
void xBehaveMgr_Shutdown() {
    /* anonymous block */ {
        // Range: 0x2F12F0 -> 0x2F133C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1340 -> 0x002F13F8
*/
// Range: 0x2F1340 -> 0x2F13F8
void xBehaveMgr_Startup() {
    /* anonymous block */ {
        // Range: 0x2F1340 -> 0x2F13F8
    }
}


