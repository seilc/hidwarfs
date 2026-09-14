/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B240 -> 0x0043B274
*/
// Range: 0x43B240 -> 0x43B274
// this: r2
float xPsyche::TimerGet(enum en_xpsytime tymr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43B240 -> 0x43B274
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B280 -> 0x0043B6E0
*/
// Range: 0x43B280 -> 0x43B6E0
// this: r18
signed int xPsyche::TranGoal(float dt /* r20 */, void * updCtxt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43B280 -> 0x43B6E0
        signed int halfway; // r6
        signed int just_switched; // r16
        class xGoal * topgoal; // r2
        signed int moretodo; // r2
        signed int moretodo; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B6E0 -> 0x0043B80C
*/
// Range: 0x43B6E0 -> 0x43B80C
// this: r2
signed int xPsyche::ParseTranRequest(enum en_trantype trantyp /* r2 */, signed int trangid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43B6E0 -> 0x43B80C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B810 -> 0x0043B9A4
*/
// Range: 0x43B810 -> 0x43B9A4
// this: r19
signed int xPsyche::Timestep(float dt /* r20 */, void * updCtxt /* r18 */) {
    /* anonymous block */ {
        // Range: 0x43B810 -> 0x43B9A4
        signed int old_psyflags; // r2
        signed int sanity; // r17
        signed int moretodo; // r2
        signed int trangid; // r2
        enum en_trantype trantyp; // r29+0x6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B9B0 -> 0x0043B9E8
*/
// Range: 0x43B9B0 -> 0x43B9E8
// this: r2
class xGoal * xPsyche::HasGoal(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43B9B0 -> 0x43B9E8
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043B9F0 -> 0x0043BA28
*/
// Range: 0x43B9F0 -> 0x43BA28
// this: r2
class xGoal * xPsyche::FindGoal(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43B9F0 -> 0x43BA28
        class xGoal * goal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043BA30 -> 0x0043BB64
*/
// Range: 0x43BA30 -> 0x43BB64
// this: r17
signed int xPsyche::GoalNone(signed int denyExplicit /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43BA30 -> 0x43BB64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043BB70 -> 0x0043BC9C
*/
// Range: 0x43BB70 -> 0x43BC9C
// this: r17
signed int xPsyche::GoalSwap(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x43BB70 -> 0x43BC9C
        signed int result; // r16
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043BCA0 -> 0x0043BE7C
*/
// Range: 0x43BCA0 -> 0x43BE7C
// this: r18
signed int xPsyche::GoalPop(signed int gid_popto /* r29+0x48 */) {
    /* anonymous block */ {
        // Range: 0x43BCA0 -> 0x43BE7C
        signed int gid_popto'93; // r2
        signed int result; // r17
        class xGoal * destgoal; // r16
        class xGoal * tmpgoal; // r2
        signed int i; // r7
        enum en_trantype trantype; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043BE80 -> 0x0043BF90
*/
// Range: 0x43BE80 -> 0x43BF90
// this: r17
signed int xPsyche::GoalPopRecover(signed int overpend /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43BE80 -> 0x43BF90
        signed int result; // r16
        signed int i; // r7
        class xGoal * tmpgoal; // r2
        class xGoal * destgoal; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043BF90 -> 0x0043C038
*/
// Range: 0x43BF90 -> 0x43C038
// this: r16
signed int xPsyche::GoalPopToBase(signed int overpend /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43BF90 -> 0x43C038
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C040 -> 0x0043C204
*/
// Range: 0x43C040 -> 0x43C204
// this: r17
signed int xPsyche::GoalPush(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x43C040 -> 0x43C204
        signed int result; // r16
        class xGoal * goal; // r5
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C210 -> 0x0043C394
*/
// Range: 0x43C210 -> 0x43C394
// this: r17
signed int xPsyche::GoalSet(signed int gid /* r29+0x38 */) {
    /* anonymous block */ {
        // Range: 0x43C210 -> 0x43C394
        signed int result; // r16
        class xGoal * goal; // r5
        enum en_trantype trantype; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C3A0 -> 0x0043C3C0
*/
// Range: 0x43C3A0 -> 0x43C3C0
// this: r2
signed int xPsyche::GIDOfPending() {
    /* anonymous block */ {
        // Range: 0x43C3A0 -> 0x43C3C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C3C0 -> 0x0043C3EC
*/
// Range: 0x43C3C0 -> 0x43C3EC
// this: r2
signed int xPsyche::GIDOfActive() {
    /* anonymous block */ {
        // Range: 0x43C3C0 -> 0x43C3EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C3F0 -> 0x0043C438
*/
// Range: 0x43C3F0 -> 0x43C438
// this: r2
class xGoal * xPsyche::GIDInStack(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43C3F0 -> 0x43C438
        class xGoal * da_goal; // r2
        class xGoal * tmpgoal; // r2
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C440 -> 0x0043C468
*/
// Range: 0x43C440 -> 0x43C468
// this: r2
class xGoal * xPsyche::GetCurGoal() {
    /* anonymous block */ {
        // Range: 0x43C440 -> 0x43C468
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C470 -> 0x0043C4B8
*/
// Range: 0x43C470 -> 0x43C4B8
// this: r2
signed int xPsyche::IndexInStack(signed int gid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43C470 -> 0x43C4B8
        signed int da_idx; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C4C0 -> 0x0043C530
*/
// Range: 0x43C4C0 -> 0x43C530
// this: r2
void xPsyche::FreshWipe() {
    /* anonymous block */ {
        // Range: 0x43C4C0 -> 0x43C530
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C530 -> 0x0043C5C4
*/
// Range: 0x43C530 -> 0x43C5C4
// this: r18
class xGoal * xPsyche::AddGoal(signed int gid /* r17 */, void * createData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43C530 -> 0x43C5C4
        class xGoal * goal; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C5D0 -> 0x0043C604
*/
// Range: 0x43C5D0 -> 0x43C604
// this: r16
void xPsyche::BrainEnd() {
    /* anonymous block */ {
        // Range: 0x43C5D0 -> 0x43C604
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C610 -> 0x0043C630
*/
// Range: 0x43C610 -> 0x43C630
// this: r4
void xPsyche::BrainBegin() {
    /* anonymous block */ {
        // Range: 0x43C610 -> 0x43C630
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C630 -> 0x0043C6B4
*/
// Range: 0x43C630 -> 0x43C6B4
// this: r18
void xBehaveMgr::UnSubscribe(class xPsyche * psy /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43C630 -> 0x43C6B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C6C0 -> 0x0043C750
*/
// Range: 0x43C6C0 -> 0x43C750
// this: r2
class xPsyche * xBehaveMgr::Subscribe(class xBase * owner /* r16 */) {
    /* anonymous block */ {
        // Range: 0x43C6C0 -> 0x43C750
        class xPsyche * psy; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C750 -> 0x0043C758
*/
// Range: 0x43C750 -> 0x43C758
class xBehaveMgr * xBehaveMgr_GetSelf() {
    /* anonymous block */ {
        // Range: 0x43C750 -> 0x43C758
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C760 -> 0x0043C7A4
*/
// Range: 0x43C760 -> 0x43C7A4
void xBehaveMgr_Shutdown() {
    /* anonymous block */ {
        // Range: 0x43C760 -> 0x43C7A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043C7B0 -> 0x0043C8A4
*/
// Range: 0x43C7B0 -> 0x43C8A4
void xBehaveMgr_Startup() {
    /* anonymous block */ {
        // Range: 0x43C7B0 -> 0x43C8A4
    }
}


