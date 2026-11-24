/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\Animate\AnimDAE.cpp
*/
// Range: 0x8004C210 -> 0x8004D14C
void AnimDAE::Eval(void * rawData /* r21 */, float time /* f28 */, class xVec3 * tran /* r15 */, class xVec3 * scale /* r16 */, class xQuat * quat /* r17 */, float * morphs /* r20 */, class ModelVisibility * vis /* r19 */) {
    // Local variables
    class ThreadStackMarkSentry mark; // r1+0x14

    {
        // Range: 0x8004C284 -> 0x8004D0F8
        // Local variables
        class ComboAnimBlobAssetV2 * comboAnimV2; // r0

        {
            // Range: 0x8004C298 -> 0x8004C3E0
            // Local variables
            unsigned char j; // r18

            {
                // Range: 0x8004C298 -> 0x8004C3E0
                // Local variables
                class PartsVisibility & partVis; // r0
                unsigned char res; // r0
                unsigned char partIndex; // r7
            }
        }
        {
            // Range: 0x8004C3F4 -> 0x8004C444
            // Local variables
            float morphtime; // f1
            class ComboAnimBlobAssetV2 * oldthis; // r0
        }
    }

    // References
    // -> float g_wiiQuatPermuteLookup[8];
}
// signature: AnimDAE::Duration(void *)
// Range: 0x8004DC80 -> 0x8004DC9C
float AnimDAE::Duration() {
}
// signature: AnimDAE::BoneCount(void *)
// Range: 0x8004DCA0 -> 0x8004DCB8
unsigned int AnimDAE::BoneCount() {
}
// signature: AnimDAE::MorphCount(void *)
// Range: 0x8004DCC0 -> 0x8004DCD8
unsigned int AnimDAE::MorphCount() {
}
// signature: AnimDAE::TexMergeStart(void *)
// Range: 0x8004DCE0 -> 0x8004DCFC
float AnimDAE::TexMergeStart() {
}
// signature: AnimDAE::TexMergeEnd(void *)
// Range: 0x8004DD00 -> 0x8004DD1C
float AnimDAE::TexMergeEnd() {
}
// Range: 0x8004DD20 -> 0x8004DD44
unsigned long long AnimDAE::DestMergeTex(void * rawData /* r4 */) {
}
// Range: 0x8004DD50 -> 0x8004DD74
unsigned long long AnimDAE::DestMergeSpecularTex(void * rawData /* r4 */) {
}
