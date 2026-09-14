/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB210 -> 0x002BB360
*/
// Range: 0x2BB210 -> 0x2BB360
// this: r17
void zUI::Unselect() {
    /* anonymous block */ {
        // Range: 0x2BB210 -> 0x2BB360
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB360 -> 0x002BB4B4
*/
// Range: 0x2BB360 -> 0x2BB4B4
// this: r17
void zUI::Select() {
    /* anonymous block */ {
        // Range: 0x2BB360 -> 0x2BB4B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB4C0 -> 0x002BB4F0
*/
// Range: 0x2BB4C0 -> 0x2BB4F0
// this: r2
void zUI::Invisible() {
    /* anonymous block */ {
        // Range: 0x2BB4C0 -> 0x2BB4F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB4F0 -> 0x002BB528
*/
// Range: 0x2BB4F0 -> 0x2BB528
// this: r2
void zUI::Visible() {
    /* anonymous block */ {
        // Range: 0x2BB4F0 -> 0x2BB528
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB530 -> 0x002BB590
*/
// Range: 0x2BB530 -> 0x2BB590
// this: r16
void zUI::FocusOff() {
    /* anonymous block */ {
        // Range: 0x2BB530 -> 0x2BB590
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB590 -> 0x002BB5F4
*/
// Range: 0x2BB590 -> 0x2BB5F4
// this: r16
void zUI::FocusOn() {
    /* anonymous block */ {
        // Range: 0x2BB590 -> 0x2BB5F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB600 -> 0x002BB898
*/
// Range: 0x2BB600 -> 0x2BB898
// this: r19
void zUI::AutoMenu(void item /* r18 */, unsigned int event /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BB600 -> 0x2BB898
        class zUI * ui; // r16
        unsigned int id; // r2
        unsigned char bAllowAutoMenu; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB8A0 -> 0x002BB974
*/
// Range: 0x2BB8A0 -> 0x2BB974
// this: r2
void zUI::DoApplyMotionFrame(class zUIMotionFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BB8A0 -> 0x2BB974
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB980 -> 0x002BB9E4
*/
// Range: 0x2BB980 -> 0x2BB9E4
// this: r2
void zUI::DoInitMotion() {
    /* anonymous block */ {
        // Range: 0x2BB980 -> 0x2BB9E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BB9F0 -> 0x002BC7D0
*/
// Range: 0x2BB9F0 -> 0x2BC7D0
// this: r20
void zUI::ApplyMotion() {
    /* anonymous block */ {
        // Range: 0x2BB9F0 -> 0x2BC7D0
        class zUIMotionFrame frame; // r29+0x110
        float timeCompensation; // r22
        unsigned char fireEndEvent; // r29+0xB0
        char * entity; // r19
        signed int i; // r18
        signed int size; // r17
        class zUIMotionCmdMove * cmd; // r2
        class zUIMotionCmdScale * cmd; // r2
        float scaleX; // r21
        float scaleY; // r20
        class zUIMotionCmdRotate * cmd; // r2
        float rotation; // r2
        class zUIMotionCmdOpacity * cmd; // r2
        float opacityChange; // r29+0x150
        class zUIMotionCmdAbsoluteScale * cmd; // r2
        float scaleX; // r3
        float scaleY; // r29+0x150
        float percent; // r29+0x150
        class zUIMotionCmdBrightness * cmd; // r2
        float brightnessChange; // r29+0x150
        class zUIMotionCmdColor * cmd; // r2
        float redChange; // r21
        float greenChange; // r20
        float blueChange; // r29+0x150
        class zUIMotionCmdUVScroll * cmd; // r2
        unsigned char in; // r16
        class xBase uiMotionBase; // r29+0x100
        class zUIMotionAsset * oldMotion; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BC7D0 -> 0x002BC888
*/
// Range: 0x2BC7D0 -> 0x2BC888
// this: r2
float zUI::CalcAcceleratedDistance(float totalDistance /* r29 */, float startTime /* r29 */, float endTime /* r29 */, float accelTime /* r29 */, float decelTime /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2BC7D0 -> 0x2BC888
        float timePassed; // r29
        float timeLength; // r29
        float topVelocity; // r29
        float curDistance; // r29
        float timeToEnd; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BC890 -> 0x002BC984
*/
// Range: 0x2BC890 -> 0x2BC984
// this: r18
void zUI::RunMotion(class zUIMotionAsset * asset /* r17 */, unsigned char loop /* r16 */, unsigned char reset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2BC890 -> 0x2BC984
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BC990 -> 0x002BC998
*/
// Range: 0x2BC990 -> 0x2BC998
void DoExit() {
    /* anonymous block */ {
        // Range: 0x2BC990 -> 0x2BC998
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BC9A0 -> 0x002BCDB4
*/
// Range: 0x2BC9A0 -> 0x2BCDB4
// this: r18
void zUI::DoUpdate(float dt /* r20 */, unsigned int buttonsPressed /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BC9A0 -> 0x2BCDB4
        class _tagxPad * pad; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BCDC0 -> 0x002BD2FC
*/
// Range: 0x2BCDC0 -> 0x2BD2FC
// this: r17
void zUI::DoHandleEvent(unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BCDC0 -> 0x2BD2FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD300 -> 0x002BD370
*/
// Range: 0x2BD300 -> 0x2BD370
// this: r2
void zUI::DoResetMotion() {
    /* anonymous block */ {
        // Range: 0x2BD300 -> 0x2BD370
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD370 -> 0x002BD414
*/
// Range: 0x2BD370 -> 0x2BD414
// this: r16
void zUI::DoReset() {
    /* anonymous block */ {
        // Range: 0x2BD370 -> 0x2BD414
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD420 -> 0x002BD428
*/
// Range: 0x2BD420 -> 0x2BD428
void DoSetup() {
    /* anonymous block */ {
        // Range: 0x2BD420 -> 0x2BD428
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD430 -> 0x002BD60C
*/
// Range: 0x2BD430 -> 0x2BD60C
// this: r19
void zUI::Signal(class xBase * from /* r18 */, unsigned int event /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2BD430 -> 0x2BD60C
        signed int i; // r16
        class xBase * dest; // r21
        class xBase * base; // r2
        signed int i; // r20
        class xBase * base; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD610 -> 0x002BD618
*/
// Range: 0x2BD610 -> 0x2BD618
unsigned char Blends() {
    /* anonymous block */ {
        // Range: 0x2BD610 -> 0x2BD618
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zUI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BD620 -> 0x002BD6C0
*/
// Range: 0x2BD620 -> 0x2BD6C0
static void UIEventHandler(class xBase * from /* r21 */, class xBase * to /* r20 */, unsigned int toEvent /* r19 */, float * toParam /* r18 */, class xBase * toParamWidget /* r17 */, unsigned int toParamWidgetID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2BD620 -> 0x2BD6C0
    }
}


