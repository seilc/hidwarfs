/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxEvent.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804B2DA0 -> 0x804B3B44
*/
// total size: 0x8
class GWeakPtr {
    // Members
    class GPtr pProxy; // offset 0x0, size 0x4
    class IListener * pObject; // offset 0x4, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class IListener * pObject; // offset 0x0, size 0x4
};
struct {} __vt__16GFxKeyboardState; // size: 0xC, address: 0x80737298
// Range: 0x804B2DA0 -> 0x804B2F48
void * GFxKeyboardState::GFxKeyboardState(class GFxKeyboardState * this /* r31 */) {
    // References
    // -> struct {} __vt__16GFxKeyboardState;
}
// Range: 0x804B3050 -> 0x804B30B8
void GFxKeyboardState::ResetState(class GFxKeyboardState * this /* r31 */) {
}
// signature: GFxKeyboardState::IsKeyDown(int) const
// Range: 0x804B30C0 -> 0x804B3100
bool GFxKeyboardState::IsKeyDown() const {
    // Local variables
    int ByteIndex; // r5
}
// signature: GFxKeyboardState::IsKeyToggled(int) const
// Range: 0x804B3100 -> 0x804B313C
bool GFxKeyboardState::IsKeyToggled() const {
}
// signature: GFxKeyboardState::SetKeyToggled(int, bool)
// Range: 0x804B3140 -> 0x804B3174
void GFxKeyboardState::SetKeyToggled() {
}
// signature: GFxKeyboardState::SetKeyDown(int, unsigned char, GFxSpecialKeysState)
// Range: 0x804B3180 -> 0x804B323C
void GFxKeyboardState::SetKeyDown() {
    // Local variables
    int ByteIndex; // r7
}
// signature: GFxKeyboardState::SetKeyUp(int, unsigned char, GFxSpecialKeysState)
// Range: 0x804B3240 -> 0x804B32FC
void GFxKeyboardState::SetKeyUp() {
    // Local variables
    int ByteIndex; // r7
}
// signature: GFxKeyboardState::SetChar(unsigned long)
// Range: 0x804B3300 -> 0x804B338C
void GFxKeyboardState::SetChar() {
}
// signature: GFxKeyboardState::GetQueueEntry(short *, unsigned char *, unsigned long *, GFxEvent::EventType *, GFxSpecialKeysState *)
// Range: 0x804B3390 -> 0x804B3444
bool GFxKeyboardState::GetQueueEntry() {
}
// Range: 0x804B3450 -> 0x804B3544
void GFxKeyboardState::NotifyListeners(class GFxKeyboardState * this /* r23 */, class GASStringContext * psc /* r24 */, short code /* r25 */, unsigned char ascii /* r26 */, unsigned long wcharCode /* r27 */, enum EventType event /* r28 */) {
    // Local variables
    unsigned long i; // r30
    unsigned long n; // r29

    {
        // Range: 0x804B3480 -> 0x804B3500
        // Local variables
        class GPtr listener; // r1+0x8
    }
}
// Range: 0x804B35F0 -> 0x804B3790
void GFxKeyboardState::CleanupListeners(class GFxKeyboardState * this /* r29 */) {
    {
        // Range: 0x804B3604 -> 0x804B3768
        // Local variables
        int i; // r30
    }
}
// Range: 0x804B3790 -> 0x804B3ACC
void GFxKeyboardState::AddListener(class GFxKeyboardState * this /* r29 */, class IListener * listener /* r25 */) {
    {
        // Range: 0x804B37B0 -> 0x804B381C
        // Local variables
        unsigned long n; // r26
        unsigned long i; // r31
    }
}
