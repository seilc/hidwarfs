/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zPlayerInput.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026546C -> 0x8026594C
*/
unsigned int BUTTON_JUMP; // size: 0x4, address: 0x80D65698
unsigned int BUTTON_ACTION_MOVE; // size: 0x4, address: 0x80D6569C
unsigned int BUTTON_CONTEXT_MOVE; // size: 0x4, address: 0x80D656A0
unsigned int BUTTON_OTHER_MOVE; // size: 0x4, address: 0x80D656A4
// total size: 0x8
struct AnalogStick {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x4
struct Buttons {
    // Members
    unsigned char jump; // offset 0x0, size 0x1
    unsigned char actionMove; // offset 0x1, size 0x1
    unsigned char contextMove; // offset 0x2, size 0x1
    unsigned char otherMove; // offset 0x3, size 0x1
};
// total size: 0x24
class zPlayerInput {
    // Functions
    zPlayerInput();

    ~zPlayerInput();

    void Clear();

    void Release();

    void SetPad(class zPad * pad);

    void Update(float dt);

    void HumanPlayerUpdate(float dt);

    void GetAnalog1(float & x, float & y, float & angle, float & mag) const;

    class zPad * GetPad() const;

    // Members
public:
    struct AnalogStick stick1; // offset 0x0, size 0x8
    struct AnalogStick stick2; // offset 0x8, size 0x8
    struct Buttons on; // offset 0x10, size 0x4
    struct Buttons pressed; // offset 0x14, size 0x4
    struct Buttons released; // offset 0x18, size 0x4
private:
    class zPad * mPad; // offset 0x1C, size 0x4
    float mActionTimer; // offset 0x20, size 0x4
};
// Range: 0x8026546C -> 0x80265478
// this: r3
zPlayerInput::zPlayerInput() {}

// Range: 0x80265478 -> 0x802654C0
// this: r31
zPlayerInput::~zPlayerInput() {}

// Range: 0x802654C0 -> 0x80265540
// this: r31
void zPlayerInput::Clear() {}

// Range: 0x80265540 -> 0x8026554C
// this: r3
void zPlayerInput::Release() {}

static char __FUNCTION__[7]; // size: 0x7, address: 0x80D656A8
// Range: 0x8026554C -> 0x80265668
// this: r31
void zPlayerInput::SetPad(class zPad * pad /* r30 */) {
    // References
    // -> static char __FUNCTION__[7];
}

// total size: 0x8
class zPadAnalogControl {
    // Static members
    static int ANALOG_MAX; // size: 0x4
    static int ANALOG_MIN; // size: 0x4

    // Members
    class zPad * owner; // offset 0x0, size 0x4
    int analogIndex; // offset 0x4, size 0x4
};
// total size: 0x2
struct _tagPadAnalog {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_Enabled = 1,
    ePad_Total = 2,
};
// total size: 0x4
struct _tagiPad {
    // Members
    int port; // offset 0x0, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x18
struct analog_data {
    // Members
    struct xVec2 offset; // offset 0x0, size 0x8
    struct xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x138
struct _tagxPad {
    // Members
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    struct _tagPadAnalog analog1; // offset 0x38, size 0x2
    struct _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    struct _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    struct analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x24
class zPad {
    // Static members
    static int MAX_PADS; // size: 0x4
    static int MAX_PORTS; // size: 0x4

    // Members
    unsigned char used; // offset 0x0, size 0x1
    unsigned char enable; // offset 0x1, size 0x1
    unsigned char triggered; // offset 0x2, size 0x1
    unsigned int key1; // offset 0x4, size 0x4
    unsigned int key2; // offset 0x8, size 0x4
    unsigned int key3; // offset 0xC, size 0x4
    int padPort; // offset 0x10, size 0x4
    class zPadAnalogControl analog1; // offset 0x14, size 0x8
    class zPadAnalogControl analog2; // offset 0x1C, size 0x8
};
// Range: 0x80265668 -> 0x80265698
// this: r1+0x8
void zPlayerInput::Update(float dt /* r1+0xC */) {}

// Range: 0x80265698 -> 0x802658A0
// this: r31
void zPlayerInput::HumanPlayerUpdate(float dt /* r1+0x8 */) {
    // Local variables
    float padMovement; // f31

    // References
    // -> unsigned int BUTTON_ACTION_MOVE;
    // -> unsigned int BUTTON_JUMP;
    // -> unsigned int BUTTON_CONTEXT_MOVE;
    // -> unsigned int BUTTON_OTHER_MOVE;
}

// Range: 0x802658A0 -> 0x80265944
// this: r29
void zPlayerInput::GetAnalog1(float & x /* r30 */, float & y /* r31 */, float & angle /* r27 */, float & mag /* r28 */) const {}

// Range: 0x80265944 -> 0x8026594C
// this: r3
class zPad * zPlayerInput::GetPad() const {}


