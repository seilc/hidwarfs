/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zTextBox.cpp
*/
static class ztextbox * head_active; // size: 0x4, address: 0x8075A6EC
static void (* render_bk_table[4])(class ztextbox & e); // size: 0x10, address: 0x806C2438
static class tag_type new_tags[1]; // size: 0x14, address: 0x806C2448
static unsigned long new_tags_size; // size: 0x4, address: 0x806C245C
// signature: @unnamed@WAD03_cpp@::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017B6B0 -> 0x8017B830
static void @unnamed@WAD03_cpp@::cb_dispatch() {
    // Local variables
    class ztextbox & e; // r31

    {
        // Range: 0x8017B7A4 -> 0x8017B7C8
        // Local variables
        class EventActionVisible * params; // r0
    }
    {
        // Range: 0x8017B7D8 -> 0x8017B7EC
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8017B7F0 -> 0x8017B804
        // Local variables
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x8017B830 -> 0x8017B8A4
void ztextbox::load(class ztextbox * this /* r30 */, class asset_type & a /* r31 */) {
}
// Range: 0x8017B8B0 -> 0x8017B91C
void ztextbox::reset(class ztextbox * this /* r31 */) {
}
// Range: 0x8017B920 -> 0x8017B964
void ztextbox::activate() {
    // References
    // -> static class ztextbox * head_active;
}
// Range: 0x8017B970 -> 0x8017B9C8
void ztextbox::deactivate() {
    // References
    // -> static class ztextbox * head_active;
}
// signature: ztextbox::set_text(unsigned int)
// Range: 0x8017B9D0 -> 0x8017BA4C
void ztextbox::set_text(class ztextbox * this /* r31 */) {
    // Local variables
    char * text; // r4
}
// signature: ztextbox::add_text(const char *)
// Range: 0x8017BA50 -> 0x8017BA84
void ztextbox::add_text() {
}
// signature: ztextbox::add_text(unsigned int)
// Range: 0x8017BA90 -> 0x8017BAE0
void ztextbox::add_text(class ztextbox * this /* r31 */) {
    // Local variables
    char * text; // r4
}
// Range: 0x8017BAE0 -> 0x8017BB5C
class Entity * Sext::text_box::Create(class EntityHandleBase * handle /* r29 */, class text_box * asset /* r30 */) {
    // References
    // -> struct {} __vt__8ztextbox;
}
// signature: ztextbox::update_all(xScene &, float)
// Range: 0x8017BB60 -> 0x8017BB7C
void ztextbox::update_all() {
    {
        // Range: 0x8017BB60 -> 0x8017BB78
        // Local variables
        class ztextbox * it; // r3
    }

    // References
    // -> static class ztextbox * head_active;
}
