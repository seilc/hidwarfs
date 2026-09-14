/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027EE00 -> 0x0027EF60
*/
// Range: 0x27EE00 -> 0x27EF60
void zNMEMsg_AreaExplode(class zNMECommon * who /* r18 */, float radius /* r21 */, class xVec3 * pos_altOrigin /* r17 */, float spd_grow /* r20 */, signed int skipNME /* r16 */) {
    /* anonymous block */ {
        // Range: 0x27EE00 -> 0x27EF60
        class ExplodeCollideData cbdata; // r29+0x50
        class NMEMsg * msg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027EF60 -> 0x0027F230
*/
// Range: 0x27EF60 -> 0x27F230
// this: r17
unsigned char ExplodeCollideData::operator()(class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x27EF60 -> 0x27F230
        class xCollis colrec; // r29+0x40
        class zNMECommon * npc_hit; // r2
        class NMEMsg * msg; // r2
        float tym_toImpact; // r29+0xF0
        class xVec3 vec_diff; // r29+0xE0
        float fparam[4]; // r29+0x30
        enum en_ZBASETYPE typesWeCanHurt[11]; // @ 0x0061AC30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027F230 -> 0x0027F3DC
*/
// Range: 0x27F230 -> 0x27F3DC
void zNMEMsg_AreaNMEYellBoo(class zNMECommon * who /* r19 */, float radius /* r20 */, class xVec3 * pos_fromHere /* r17 */) {
    /* anonymous block */ {
        // Range: 0x27F230 -> 0x27F3DC
        class st_XORDEREDARRAY * npclist; // r2
        class xVec3 from; // r29+0x80
        float ds2_discard; // r22
        signed int i; // r18
        class zNMECommon * npc; // r2
        enum en_npctyp ntyp; // r2
        class xVec3 diff; // r29+0x70
        signed int amSpooking; // @ 0x006373B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027F3E0 -> 0x0027F7FC
*/
// Range: 0x27F3E0 -> 0x27F7FC
void zNMEMsg_AreaNMEExplode(class zNMECommon * who /* r21 */, float radius /* r20 */, class xVec3 * pos_fromHere /* r16 */, float spd_grow /* r23 */) {
    /* anonymous block */ {
        // Range: 0x27F3E0 -> 0x27F7FC
        class st_XORDEREDARRAY * npclist; // r20
        class xVec3 from; // r29+0x140
        float ds2_discard; // r22
        class NMEMsg msgtmp; // r29+0xC0
        signed int i; // r19
        class zNMECommon * npc; // r18
        class xVec3 diff; // r29+0x130
        enum en_npctyp ntyp; // r2
        float tym_delay; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027F800 -> 0x0027FA14
*/
// Range: 0x27F800 -> 0x27FA14
void zNMEMsg_AreaPlayerStun(float stuntime /* r22 */, float radius /* r21 */, class xVec3 * pos /* r16 */) {
    /* anonymous block */ {
        // Range: 0x27F800 -> 0x27FA14
        class st_XORDEREDARRAY * npclist; // r19
        class xVec3 from; // r29+0xB0
        float ds2_discard; // r20
        class NMEMsg msg; // r29+0x60
        signed int i; // r18
        class zNMECommon * npc; // r2
        enum en_npctyp ntyp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027FA20 -> 0x0027FDB0
*/
// Range: 0x27FA20 -> 0x27FDB0
void zNMEMsg_AreaNotify(class zNMECommon * sender /* r18 */, class NMEMsg * msg /* r17 */, float radius /* r29+0x110 */, signed int filter /* r20 */, enum en_npctyp * npcTypeList /* r16 */) {
    /* anonymous block */ {
        // Range: 0x27FA20 -> 0x27FDB0
        signed int i; // r21
        class st_XORDEREDARRAY * npclist; // r22
        class zNMECommon * npc; // r20
        enum en_npctyp ntyp; // r2
        signed int skipit; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027FDB0 -> 0x0027FE98
*/
// Range: 0x27FDB0 -> 0x27FE98
void zNMEMsg_AreaNotify(class zNMECommon * sender /* r18 */, enum en_npcmsg msgid /* r17 */, float rad /* r20 */, signed int filter /* r16 */, enum en_npctyp toNMEType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x27FDB0 -> 0x27FE98
        enum en_npctyp toTypes[2]; // r29+0x58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0027FEA0 -> 0x00280040
*/
// Range: 0x27FEA0 -> 0x280040
void zNMEMsg_SendMsg(class NMEMsg * inmsg /* r19 */, class zNMECommon * npc_sendto /* r16 */, float delay /* r20 */) {
    /* anonymous block */ {
        // Range: 0x27FEA0 -> 0x280040
        class st_XORDEREDARRAY * npclist; // r17
        signed int idx; // r2
        class NMEPSData * npcps; // r2
        signed int i; // r18
        class NMEPSClt * clt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00280040 -> 0x002800AC
*/
// Range: 0x280040 -> 0x2800AC
void zNMEMsg_SendMsg(enum en_npcmsg msgevent /* r17 */, class zNMECommon * npc_sendto /* r16 */) {
    /* anonymous block */ {
        // Range: 0x280040 -> 0x2800AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002800B0 -> 0x002801B4
*/
// Range: 0x2800B0 -> 0x2801B4
void Timestep(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2800B0 -> 0x2801B4
        class NMEPSData * npcps; // r2
        signed int i; // r19
        class NMEMsg * msg; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002801C0 -> 0x0028045C
*/
// Range: 0x2801C0 -> 0x28045C
void SceneReset() {
    /* anonymous block */ {
        // Range: 0x2801C0 -> 0x28045C
        class NMEPSData * npcps; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEMessenger.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00280460 -> 0x00280470
*/
// Range: 0x280460 -> 0x280470
// this: r2
void zMODMessage::SceneFinish() {
    /* anonymous block */ {
        // Range: 0x280460 -> 0x280470
    }
}


