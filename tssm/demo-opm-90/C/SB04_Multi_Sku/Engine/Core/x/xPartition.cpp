/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9190 -> 0x003A9218
*/
// Range: 0x3A9190 -> 0x3A9218
void xPartitionSpaceMove(class _tagPartSpace * src /* r2 */, class _tagPartSpace * dest /* r2 */, unsigned int data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9190 -> 0x3A9218
        class _tagPartLink * dest_lnk; // r9
        class _tagPartLink * src_lnk; // r8
        class _tagPartLink * src_pre; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9220 -> 0x003A9374
*/
// Range: 0x3A9220 -> 0x3A9374
signed int xPartitionUpdate(class _tagPartition * part /* r2 */, void * data /* r2 */, signed int old_idx /* r2 */, class xVec3 * current_pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9220 -> 0x3A9374
        signed int cur_idx; // r16
        class _tagPartSpace * src; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9380 -> 0x003A9544
*/
// Range: 0x3A9380 -> 0x3A9544
signed int xPartitionInsert(class _tagPartition * part /* r2 */, void * insert_data /* r18 */, class xVec3 * insert_pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9380 -> 0x3A9544
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9550 -> 0x003A9740
*/
// Range: 0x3A9550 -> 0x3A9740
void xPartitionWorld(class _tagPartition * part /* r18 */, class xEnv * env /* r19 */, signed int x_spaces /* r17 */, signed int y_spaces /* r16 */, signed int z_spaces /* r22 */) {
    /* anonymous block */ {
        // Range: 0x3A9550 -> 0x3A9740
        class xBox * bb; // r2
        float dx; // r29+0x80
        float dy; // r29+0x80
        float dz; // r29+0x80
        signed int z; // r21
        signed int y; // r20
        signed int x; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9740 -> 0x003A9930
*/
// Range: 0x3A9740 -> 0x3A9930
void xPartitionVolume(class _tagPartition * part /* r18 */, class xVolume * volume /* r19 */, signed int x_spaces /* r17 */, signed int y_spaces /* r16 */, signed int z_spaces /* r22 */) {
    /* anonymous block */ {
        // Range: 0x3A9740 -> 0x3A9930
        class xBound * xb; // r2
        class xBox * bb; // r2
        float dx; // r29+0x80
        float dy; // r29+0x80
        float dz; // r29+0x80
        signed int z; // r21
        signed int y; // r20
        signed int x; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xPartition.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9930 -> 0x003A9938
*/
// Range: 0x3A9930 -> 0x3A9938
void xPartitionReset() {
    /* anonymous block */ {
        // Range: 0x3A9930 -> 0x3A9938
    }
}


