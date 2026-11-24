/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zTextBox.cpp
*/
static class ztextbox * head_active; // size: 0x4, address: 0x8082C140
static void (* render_bk_table[4])(class ztextbox & e); // size: 0x10, address: 0x807B56E8
static class tag_type new_tags[1]; // size: 0x14, address: 0x807B56F8
static unsigned long new_tags_size; // size: 0x4, address: 0x807B570C
// signature: @unnamed@WAD03_cpp@::render_bk_fill(const ztextbox &)
// Range: 0x80266B10 -> 0x80266B14
static void @unnamed@WAD03_cpp@::render_bk_fill() {
}
// signature: @unnamed@WAD03_cpp@::render_bk_tex_scale(const ztextbox &)
// Range: 0x80266B20 -> 0x80266B24
static void @unnamed@WAD03_cpp@::render_bk_tex_scale() {
}
// signature: @unnamed@WAD03_cpp@::render_bk_tex_wrap(const ztextbox &)
// Range: 0x80266B30 -> 0x80266B34
static void @unnamed@WAD03_cpp@::render_bk_tex_wrap() {
}
// signature: @unnamed@WAD03_cpp@::render_bk_by_pieces(const ztextbox &)
// Range: 0x80266B40 -> 0x80266B44
static void @unnamed@WAD03_cpp@::render_bk_by_pieces() {
}
// signature: @unnamed@WAD03_cpp@::parse_tag_blahblah(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80266B50 -> 0x80266B54
static void @unnamed@WAD03_cpp@::parse_tag_blahblah() {
}
// signature: @unnamed@WAD03_cpp@::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80266B60 -> 0x80266F38
static void @unnamed@WAD03_cpp@::cb_dispatch(class xBase * to /* r31 */) {
    // Local variables
    class ztextbox & e; // r0

    {
        // Range: 0x80266D38 -> 0x80266DE8
        // Local variables
        class EventActionVisible * params; // r0
    }
    {
        // Range: 0x80266E44 -> 0x80266EB4
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80266EB8 -> 0x80266F08
        // Local variables
        class EventActionLegacy * params; // r0
    }

    // References
    // -> static class ztextbox * head_active;
}
// Range: 0x80266F40 -> 0x80267140
class Entity * Sext::text_box::Create(class EntityHandleBase * handle /* r29 */, class text_box * asset /* r30 */) {
    // References
    // -> static class ztextbox * head_active;
    // -> struct {} __vt__8ztextbox;
    // -> struct {} __vt__Q25World9xOGEntity;
}
