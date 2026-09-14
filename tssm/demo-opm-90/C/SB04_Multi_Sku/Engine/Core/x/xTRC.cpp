/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004487C0 -> 0x00448C60
*/
// Range: 0x4487C0 -> 0x448C60
void RenderText(char * text /* r2 */, unsigned char enabled /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4487C0 -> 0x448C60
        class xColor_tag c2; // r29+0x15C
        class xtextbox tb; // @ 0x007AB2D0
        signed char @19982; // @ 0x006382EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00448C60 -> 0x00449134
*/
// Range: 0x448C60 -> 0x449134
void render_mem_card_no_space(signed int needed /* r2 */, signed int available /* r2 */, signed int neededFiles /* r2 */, unsigned char enabled /* r16 */) {
    /* anonymous block */ {
        // Range: 0x448C60 -> 0x449134
        char * error_text; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00449140 -> 0x004492F0
*/
// Range: 0x449140 -> 0x4492F0
void xTRCPad(signed int pad_id /* r2 */, enum _tagTRCState state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x449140 -> 0x4492F0
        signed int display_message; // r2
        signed int i; // r17
        char * autoSaveFailed[4]; // r29+0x30
        class zUIText * autoSaveTextBox; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004492F0 -> 0x004499A0
*/
// Range: 0x4492F0 -> 0x4499A0
static signed int DisplayMessage(enum _tagTRCState state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4492F0 -> 0x4499A0
        unsigned int len_message_text; // r2
        char * msg; // r6
        char c; // r2
        unsigned int sub_len; // r2
        class RwCamera * cam; // r16
        class RwRGBA bg; // r29+0x15C
        signed char @19818; // @ 0x006382E0
        class xtextbox tb; // @ 0x007AB150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004499A0 -> 0x004499F4
*/
// Range: 0x4499A0 -> 0x4499F4
void xTRCReset() {
    /* anonymous block */ {
        // Range: 0x4499A0 -> 0x4499F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00449A00 -> 0x0044A308
*/
// Range: 0x449A00 -> 0x44A308
void xTRCRender() {
    /* anonymous block */ {
        // Range: 0x449A00 -> 0x44A308
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044A310 -> 0x0044A320
*/
// Range: 0x44A310 -> 0x44A320
void xTRCClearPadMsg() {
    /* anonymous block */ {
        // Range: 0x44A310 -> 0x44A320
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044A320 -> 0x0044A470
*/
// Range: 0x44A320 -> 0x44A470
static unsigned int pad_message_valid() {
    /* anonymous block */ {
        // Range: 0x44A320 -> 0x44A470
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044A470 -> 0x0044A58C
*/
// Range: 0x44A470 -> 0x44A58C
void xTRCInitMessages() {
    /* anonymous block */ {
        // Range: 0x44A470 -> 0x44A58C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTRC.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044A590 -> 0x0044A614
*/
// Range: 0x44A590 -> 0x44A614
void xTRCInit() {
    /* anonymous block */ {
        // Range: 0x44A590 -> 0x44A614
    }
}


