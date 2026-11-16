/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class talk_callback * tcb; // size: 0x4, address: 0x50F5CC
static // total size: 0x4
class /* @class */ {
    // Members
public:
    class ztaskbox * active; // offset 0x0, size 0x4
} shared; // size: 0x4, address: 0x50F5D0
// total size: 0x18
struct /* @anon1 */ {} ztaskbox::talk_callback::__vtable; // size: 0x18, address: 0x50B8A0
// total size: 0x18
struct /* @anon0 */ {} ztalkbox::callback::__vtable; // size: 0x18, address: 0x0
signed int cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x323280
// total size: 0x24
class ztaskbox : public xBase {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned char enabled : 8; // offset 0x0, size 0x1
        unsigned int dummy : 24; // offset 0x0, size 0x4
    } flag; // offset 0x10, size 0x4
    class asset_type * asset; // offset 0x14, size 0x4
    enum state_enum state; // offset 0x18, size 0x4
    class callback * cb; // offset 0x1C, size 0x4
    class ztaskbox * current; // offset 0x20, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x4
class xTextAsset {
    // Members
public:
    unsigned int len; // offset 0x0, size 0x4
};
// total size: 0x18
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
// total size: 0x4
class callback {};
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned char enabled : 8; // offset 0x0, size 0x1
    unsigned int dummy : 24; // offset 0x0, size 0x4
};
// total size: 0x0
class asset_type {};
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
// total size: 0x0
class ztextbox {};
// total size: 0xC
class talk_callback : public callback {
    // Members
public:
    class ztaskbox * task; // offset 0x4, size 0x4
    enum answer_enum answer; // offset 0x8, size 0x4
};
// total size: 0x14
class /* @class */ {
    // Members
public:
    char * skip; // offset 0x0, size 0x4
    char * noskip; // offset 0x4, size 0x4
    char * quit; // offset 0x8, size 0x4
    char * noquit; // offset 0xC, size 0x4
    char * yesno; // offset 0x10, size 0x4
};
// total size: 0x34
class asset_type : public xDynAsset {
    // Members
public:
    unsigned char persistent : 8; // offset 0x10, size 0x1
    unsigned char loop : 8; // offset 0x11, size 0x1
    unsigned char enable : 8; // offset 0x12, size 0x1
    unsigned char retry : 8; // offset 0x13, size 0x1
    unsigned int talk_box; // offset 0x14, size 0x4
    unsigned int next_task; // offset 0x18, size 0x4
    unsigned int stages[6]; // offset 0x1C, size 0x18
};
// total size: 0x0
class zNPCCommon {};
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
// total size: 0x3C
class ztalkbox : public xBase {
    // Members
public:
    // total size: 0x1
    class /* @class */ {
        // Members
    public:
        unsigned char visible : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class ztextbox * dialog_box; // offset 0x18, size 0x4
    class ztextbox * prompt_box; // offset 0x1C, size 0x4
    class ztextbox * quit_box; // offset 0x20, size 0x4
    // total size: 0x14
    class /* @class */ {
        // Members
    public:
        char * skip; // offset 0x0, size 0x4
        char * noskip; // offset 0x4, size 0x4
        char * quit; // offset 0x8, size 0x4
        char * noquit; // offset 0xC, size 0x4
        char * yesno; // offset 0x10, size 0x4
    } prompt; // offset 0x24, size 0x14
    class zNPCCommon * npc; // offset 0x38, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class ztaskbox * active; // offset 0x0, size 0x4
};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
enum answer_enum {
    ANSWER_CONTINUE = 0,
    ANSWER_YES = 1,
    ANSWER_NO = 2,
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x4
class callback {};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum state_enum {
    STATE_INVALID = -1,
    STATE_BEGIN = 0,
    STATE_DESCRIPTION = 1,
    STATE_REMINDER = 2,
    STATE_SUCCESS = 3,
    STATE_FAILURE = 4,
    STATE_END = 5,
    MAX_STATE = 6,
};
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0x18
struct /* @anon1 */ {};
// total size: 0x1
class /* @class */ {
    // Members
public:
    unsigned char visible : 1; // offset 0x0, size 0x1
};

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323280 -> 0x00323414
*/
// Range: 0x323280 -> 0x323414
signed int cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    /* anonymous block */ {
        // Range: 0x323280 -> 0x323414
        class ztaskbox & e; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323420 -> 0x003234F0
*/
// Range: 0x323420 -> 0x3234F0
// this: r16
void ztaskbox::on_talk_stop() {
    /* anonymous block */ {
        // Range: 0x323420 -> 0x3234F0
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003234F0 -> 0x00323678
*/
// Range: 0x3234F0 -> 0x323678
// this: r16
void ztaskbox::set_state(enum state_enum state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3234F0 -> 0x323678
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323680 -> 0x00323688
*/
// Range: 0x323680 -> 0x323688
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x323680 -> 0x323688
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323690 -> 0x003236C8
*/
// Range: 0x323690 -> 0x3236C8
void init() {
    /* anonymous block */ {
        // Range: 0x323690 -> 0x3236C8
        class talk_callback tcb; // @ 0x005DD6E0
        signed char @3564; // @ 0x0050F5D4
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003236D0 -> 0x003236D8
*/
// Range: 0x3236D0 -> 0x3236D8
// this: r2
void ztaskbox::set_callback(class callback * cb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3236D0 -> 0x3236D8
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003236E0 -> 0x00323774
*/
// Range: 0x3236E0 -> 0x323774
// this: r2
void ztaskbox::stop_talk() {
    /* anonymous block */ {
        // Range: 0x3236E0 -> 0x323774
        class ztalkbox * talk; // r2
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323780 -> 0x003238FC
*/
// Range: 0x323780 -> 0x3238FC
// this: r18
void ztaskbox::start_talk(class zNPCCommon * npc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x323780 -> 0x3238FC
        class ztalkbox * talk; // r16
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323900 -> 0x00323910
*/
// Range: 0x323900 -> 0x323910
// this: r2
void ztaskbox::write(class xSerial & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x323900 -> 0x323910
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323910 -> 0x00323950
*/
// Range: 0x323910 -> 0x323950
// this: r16
void ztaskbox::read(class xSerial & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x323910 -> 0x323950
        unsigned char state; // r29+0x2F
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323950 -> 0x003239FC
*/
// Range: 0x323950 -> 0x3239FC
// this: r17
void ztaskbox::load(class asset_type & a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x323950 -> 0x3239FC
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323A00 -> 0x00323A34
*/
// Range: 0x323A00 -> 0x323A34
// this: r2
void talk_callback::on_start() {
    /* anonymous block */ {
        // Range: 0x323A00 -> 0x323A34
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323A40 -> 0x00323A4C
*/
// Range: 0x323A40 -> 0x323A4C
// this: r4
void talk_callback::on_stop() {
    /* anonymous block */ {
        // Range: 0x323A40 -> 0x323A4C
    }
}


/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323A50 -> 0x00323A58
*/
// Range: 0x323A50 -> 0x323A58
// this: r2
void talk_callback::on_answer(enum answer_enum answer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x323A50 -> 0x323A58
    }
}


