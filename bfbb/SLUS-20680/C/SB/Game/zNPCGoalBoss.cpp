/*
    Compile unit: C:\SB\Game\zNPCGoalBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
// total size: 0x34
struct /* @anon28 */ {} zNPCGoalBossPatFudge::__vtable; // size: 0x34, address: 0x50DBE0
// total size: 0x34
struct /* @anon0 */ {} zNPCGoalCommon::__vtable; // size: 0x34, address: 0x50A340
// total size: 0x2C
struct /* @anon12 */ {} xGoal::__vtable; // size: 0x2C, address: 0x50BE00
// total size: 0x34
struct /* @anon17 */ {} zNPCGoalBossPatSpin::__vtable; // size: 0x34, address: 0x50DC20
// total size: 0x34
struct /* @anon1 */ {} zNPCGoalBossPatSpawn::__vtable; // size: 0x34, address: 0x50DC60
// total size: 0x34
struct /* @anon21 */ {} zNPCGoalBossPatFreeze::__vtable; // size: 0x34, address: 0x50DCA0
// total size: 0x34
struct /* @anon15 */ {} zNPCGoalBossPatSmack::__vtable; // size: 0x34, address: 0x50DCE0
// total size: 0x34
struct /* @anon6 */ {} zNPCGoalBossPatRun::__vtable; // size: 0x34, address: 0x50DD20
// total size: 0x34
struct /* @anon24 */ {} zNPCGoalBossPatSpit::__vtable; // size: 0x34, address: 0x50DD60
// total size: 0x34
struct /* @anon16 */ {} zNPCGoalBossPatHit::__vtable; // size: 0x34, address: 0x50DDA0
// total size: 0x34
struct /* @anon7 */ {} zNPCGoalBossPatTaunt::__vtable; // size: 0x34, address: 0x50DDE0
// total size: 0x34
struct /* @anon27 */ {} zNPCGoalBossPatIdle::__vtable; // size: 0x34, address: 0x50DE20
// total size: 0x34
struct /* @anon4 */ {} zNPCGoalBossSB1Deflate::__vtable; // size: 0x34, address: 0x50D310
// total size: 0x34
struct /* @anon20 */ {} zNPCGoalBossSB1Smash::__vtable; // size: 0x34, address: 0x50D350
// total size: 0x34
struct /* @anon11 */ {} zNPCGoalBossSB1Stomp::__vtable; // size: 0x34, address: 0x50D390
// total size: 0x34
struct /* @anon3 */ {} zNPCGoalBossSB1Taunt::__vtable; // size: 0x34, address: 0x50D3D0
// total size: 0x34
struct /* @anon25 */ {} zNPCGoalBossSB1Idle::__vtable; // size: 0x34, address: 0x50D410
// total size: 0x34
struct /* @anon18 */ {} zNPCGoalBossSandyClothesline::__vtable; // size: 0x34, address: 0x50C980
// total size: 0x34
struct /* @anon8 */ {} zNPCGoalBossSandyRunToRope::__vtable; // size: 0x34, address: 0x50C9C0
// total size: 0x34
struct /* @anon26 */ {} zNPCGoalBossSandyGetUp::__vtable; // size: 0x34, address: 0x50CA00
// total size: 0x34
struct /* @anon19 */ {} zNPCGoalBossSandySit::__vtable; // size: 0x34, address: 0x50CA40
// total size: 0x34
struct /* @anon9 */ {} zNPCGoalBossSandyLeap::__vtable; // size: 0x34, address: 0x50CA80
// total size: 0x34
struct /* @anon23 */ {} zNPCGoalBossSandyElbowDrop::__vtable; // size: 0x34, address: 0x50CAC0
// total size: 0x34
struct /* @anon14 */ {} zNPCGoalBossSandyNoHead::__vtable; // size: 0x34, address: 0x50CB00
// total size: 0x34
struct /* @anon2 */ {} zNPCGoalBossSandyMelee::__vtable; // size: 0x34, address: 0x50CB40
// total size: 0x34
struct /* @anon22 */ {} zNPCGoalBossSandyChase::__vtable; // size: 0x34, address: 0x50CB80
// total size: 0x34
struct /* @anon13 */ {} zNPCGoalBossSandyTaunt::__vtable; // size: 0x34, address: 0x50CBC0
// total size: 0x34
struct /* @anon5 */ {} zNPCGoalBossSandyIdle::__vtable; // size: 0x34, address: 0x50CC00
// total size: 0x34
struct /* @anon10 */ {} zNPCGoalExist::__vtable; // size: 0x34, address: 0x50C5B0
// total size: 0x34
struct /* @anon0 */ {};
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
// total size: 0x34
struct /* @anon1 */ {};
// total size: 0x34
struct /* @anon2 */ {};
// total size: 0x34
struct /* @anon3 */ {};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
// total size: 0x34
struct /* @anon4 */ {};
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
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x34
struct /* @anon5 */ {};
// total size: 0x34
struct /* @anon6 */ {};
// total size: 0x34
struct /* @anon7 */ {};
// total size: 0x4C
class zNPCGoalCommon : public xGoal {
    // Members
public:
    signed int flg_npcgauto; // offset 0x3C, size 0x4
    signed int flg_npcgable; // offset 0x40, size 0x4
    unsigned int anid_played; // offset 0x44, size 0x4
    signed int flg_info : 16; // offset 0x48, size 0x4
    signed int flg_user : 16; // offset 0x48, size 0x4
};
// total size: 0x34
struct /* @anon8 */ {};
// total size: 0x4
class xPSYNote {};
// total size: 0x34
struct /* @anon9 */ {};
// total size: 0x34
struct /* @anon10 */ {};
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
// total size: 0x34
struct /* @anon11 */ {};
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
// total size: 0x2C
struct /* @anon12 */ {};
// total size: 0x34
struct /* @anon13 */ {};
// total size: 0x34
struct /* @anon14 */ {};
// total size: 0x34
struct /* @anon15 */ {};
// total size: 0x34
struct /* @anon16 */ {};
// total size: 0x34
struct /* @anon17 */ {};
// total size: 0x34
struct /* @anon18 */ {};
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
// total size: 0x34
struct /* @anon19 */ {};
// total size: 0x34
struct /* @anon20 */ {};
// total size: 0x34
struct /* @anon21 */ {};
// total size: 0x34
struct /* @anon22 */ {};
// total size: 0x34
struct /* @anon23 */ {};
// total size: 0x34
struct /* @anon24 */ {};
// total size: 0x34
struct /* @anon25 */ {};
// total size: 0x1
class RyzMemData {};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
// total size: 0x34
struct /* @anon26 */ {};
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
// total size: 0x34
struct /* @anon27 */ {};
// total size: 0x34
struct /* @anon28 */ {};

/*
    Compile unit: C:\SB\Game\zNPCGoalBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00325180 -> 0x00325F78
*/
// Range: 0x325180 -> 0x325F78
class xFactoryInst * GOALCreate_Boss(signed int who /* r16 */, class RyzMemGrow * grow /* r2 */) {
    /* anonymous block */ {
        // Range: 0x325180 -> 0x325F78
        class xGoal * goal; // r2
    }
}


