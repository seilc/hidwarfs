/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
class zComboReward * comboReward; // size: 0x4, address: 0x609688
static signed int comboNumRewards; // size: 0x4, address: 0x60968C
static float comboMaxTime; // size: 0x4, address: 0x6084F0
static float comboInputMult; // size: 0x4, address: 0x6084F4
static float comboDisplayTime; // size: 0x4, address: 0x6084F8
static enum move_direction comboFadeDir; // size: 0x4, address: 0x6084FC
static class widget_chunk * comboHUD; // size: 0x4, address: 0x609690
static float comboLastCounter; // size: 0x4, address: 0x609694
static float comboCounter; // size: 0x4, address: 0x609698
static float comboMult; // size: 0x4, address: 0x60969C
static enum zComboType comboLastType; // size: 0x4, address: 0x6096A0
static signed int comboHitsNextLevel; // size: 0x4, address: 0x6096A4
static signed int comboLevel; // size: 0x4, address: 0x6096A8
static float comboTimer; // size: 0x4, address: 0x6096AC
static unsigned char sComboIsPaused; // size: 0x1, address: 0x6096B0
unsigned char fade_text_motive_update(class widget &, class motive &, float); // size: 0x0, address: 0x42C3A0
char _ctype_[]; // size: 0x0, address: 0x5E3180
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x28
class asset : public xDynAsset {
    // Members
public:
    class xVec3 loc; // offset 0x10, size 0xC
    class xVec3 size; // offset 0x1C, size 0xC
};
// total size: 0x34
class render_context {
    // Members
public:
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 size; // offset 0xC, size 0xC
    class xVec3 rot; // offset 0x18, size 0xC
    float r; // offset 0x24, size 0x4
    float g; // offset 0x28, size 0x4
    float b; // offset 0x2C, size 0x4
    float a; // offset 0x30, size 0x4
};
// total size: 0x10
class zComboReward {
    // Members
public:
    signed int numHits; // offset 0x0, size 0x4
    signed int powerMult; // offset 0x4, size 0x4
    unsigned int textAssetID; // offset 0x8, size 0x4
    class xTextAsset * textAsset; // offset 0xC, size 0x4
};
// total size: 0x4
class xTextAsset {
    // Members
public:
    unsigned int len; // offset 0x0, size 0x4
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
enum /* @enum */ {
    ACT_NONE = 0,
    ACT_SHOW = 1,
    ACT_HIDE = 2,
    MAX_ACT = 3,
};
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0x88
class widget {
    // Members
public:
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        unsigned char visible; // offset 0x0, size 0x1
        unsigned char enabled; // offset 0x1, size 0x1
        unsigned char active; // offset 0x2, size 0x1
        float timer; // offset 0x4, size 0x4
    } flag; // offset 0x0, size 0x8
    class render_context rc; // offset 0x8, size 0x34
    class render_context start_rc; // offset 0x3C, size 0x34
    class asset * a; // offset 0x70, size 0x4
    enum /* @enum */ {
        ACT_NONE = 0,
        ACT_SHOW = 1,
        ACT_HIDE = 2,
        MAX_ACT = 3,
    } activity; // offset 0x74, size 0x4
    class motive_node * _motive_top; // offset 0x7C, size 0x4
    class motive_node * _motive_temp; // offset 0x80, size 0x4
    class motive_node * * _motive_temp_tail; // offset 0x84, size 0x4
};
// total size: 0x18C
class widget_chunk : public xBase {
    // Members
public:
    class text_widget w; // offset 0x10, size 0x17C
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
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x17C
class text_widget : public widget {
    // Members
public:
    char text[128]; // offset 0x88, size 0x80
    class xtextbox tb; // offset 0x108, size 0x74
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
// total size: 0x30
class motive {
    // Members
public:
    union { // inferred
        float * value; // offset 0x0, size 0x4
        class xColor_tag * value_color; // offset 0x0, size 0x4
    };
    union { // inferred
        float delta; // offset 0x4, size 0x4
        float on_time; // offset 0x4, size 0x4
    };
    union { // inferred
        float max_offset; // offset 0x8, size 0x4
        float total_time; // offset 0x8, size 0x4
        float begin_scale; // offset 0x8, size 0x4
    };
    union { // inferred
        float accel; // offset 0xC, size 0x4
        float fade_time; // offset 0xC, size 0x4
        float final_scale; // offset 0xC, size 0x4
    };
    union { // inferred
        void * context; // offset 0x10, size 0x4
        class xColor_tag on_color; // offset 0x10, size 0x4
        float begin_alpha; // offset 0x10, size 0x4
    };
    union { // inferred
        float period; // offset 0x14, size 0x4
        class xColor_tag off_color; // offset 0x14, size 0x4
        float end_alpha; // offset 0x14, size 0x4
    };
    union { // inferred
        float elapsed; // offset 0x18, size 0x4
        float orig_width; // offset 0x18, size 0x4
    };
    union { // inferred
        float offset; // offset 0x1C, size 0x4
        float current_scale; // offset 0x1C, size 0x4
    };
    unsigned char (* fp_update)(class widget &, class motive &, float); // offset 0x20, size 0x4
    unsigned char (* fp_finish)(class widget &, class motive &); // offset 0x24, size 0x4
    union { // inferred
        float start_delta; // offset 0x28, size 0x4
        float orig_height; // offset 0x28, size 0x4
    };
    unsigned char hold; // offset 0x2C, size 0x1
    unsigned char inverse; // offset 0x2D, size 0x1
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x38
class jot {
    // Members
public:
    class substr s; // offset 0x0, size 0x8
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned short dummy : 4; // offset 0x0, size 0x2
};
enum move_direction {
    LEFT = 0,
    RIGHT = 1,
    TOP = 2,
    BOTTOM = 3,
};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x74
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    class basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    class callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
    char * * texts; // offset 0x5C, size 0x4
    unsigned int * text_sizes; // offset 0x60, size 0x4
    unsigned int texts_size; // offset 0x64, size 0x4
    class substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x214
class xIniFile {
    // Members
public:
    signed int NumValues; // offset 0x0, size 0x4
    signed int NumSections; // offset 0x4, size 0x4
    class xIniValue * Values; // offset 0x8, size 0x4
    class xIniSection * Sections; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    char name[256]; // offset 0x14, size 0x100
    char pathname[256]; // offset 0x114, size 0x100
};
enum zComboType {
    eComboType_NonDecreasing = 0,
    eComboType_StandHit = 1,
    eComboType_CrouchHit = 2,
    eComboType_JumpHit = 3,
    eComboType_StandFierceHit = 4,
    eComboType_RunFierceHit = 5,
    eComboType_CrouchFierceHit = 6,
    eComboType_JumpFierceHit = 7,
    eComboType_Throw = 8,
    eComboType_CrouchRoll = 9,
    eComboType_StretchHit = 10,
    eComboType_Count = 11,
    eComboType_ForceSizeInt = 2147483647,
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x0
class motive_node {};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    class basic_rect clip; // offset 0x20, size 0x10
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned char visible; // offset 0x0, size 0x1
    unsigned char enabled; // offset 0x1, size 0x1
    unsigned char active; // offset 0x2, size 0x1
    float timer; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00485C30 -> 0x00485EDC
*/
// Range: 0x485C30 -> 0x485EDC
void zCombo_Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x485C30 -> 0x485EDC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00485EE0 -> 0x00485F40
*/
// Range: 0x485EE0 -> 0x485F40
void zCombo_Paused() {
    /* anonymous block */ {
        // Range: 0x485EE0 -> 0x485F40
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00485F40 -> 0x00485F6C
*/
// Range: 0x485F40 -> 0x485F6C
signed int zCombo_GetPowerMult() {
    /* anonymous block */ {
        // Range: 0x485F40 -> 0x485F6C
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00485F70 -> 0x004860A0
*/
// Range: 0x485F70 -> 0x4860A0
void zCombo_Add(float points /* r20 */, enum zComboType type /* r16 */) {
    /* anonymous block */ {
        // Range: 0x485F70 -> 0x4860A0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004860A0 -> 0x004861B4
*/
// Range: 0x4860A0 -> 0x4861B4
void zCombo_Setup() {
    /* anonymous block */ {
        // Range: 0x4860A0 -> 0x4861B4
        unsigned int id; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004861C0 -> 0x00486590
*/
// Range: 0x4861C0 -> 0x486590
void zCombo_ParseINI(class xIniFile * ini /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4861C0 -> 0x486590
        char * fadeDir; // r16
        signed int i; // r20
        char buffer[128]; // r29+0x70
        char * str; // r2
        char * end; // r19
    }
}


