/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jerror.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E403C -> 0x805E42F8
*/
extern struct _FILE __files[65536]; // size: 0x0
char * jMsgTable[125]; // size: 0x1F4, address: 0x806E9450
// Range: 0x805E403C -> 0x805E4084
static void error_exit(struct jpeg_common_struct * cinfo /* r31 */) {
}
// Range: 0x805E4084 -> 0x805E40D0
static void output_message() {
    // Local variables
    char buffer[200]; // r1+0x8

    // References
    // -> struct _FILE __files[65536];
}
// Range: 0x805E40D0 -> 0x805E414C
static void emit_message() {
    // Local variables
    struct jpeg_error_mgr * err; // r31
}
// Range: 0x805E414C -> 0x805E4270
static void format_message() {
    // Local variables
    struct jpeg_error_mgr * err; // r10
    int msg_code; // r6
    char * msgtext; // r7
    char * msgptr; // r3
    char ch; // r0
    int isstring; // r5
}
// Range: 0x805E4270 -> 0x805E4288
static void reset_error_mgr() {
}
// Range: 0x805E4288 -> 0x805E42F8
struct jpeg_error_mgr * jStdError() {
    // References
    // -> char * jMsgTable[125];
}
