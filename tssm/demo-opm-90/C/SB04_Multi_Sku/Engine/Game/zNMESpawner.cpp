/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E3A0 -> 0x0026E3E8
*/
// Range: 0x26E3A0 -> 0x26E3E8
// this: r2
void zNMESpawner::SPUnlock(class SMNPCStatus * npcstat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E3A0 -> 0x26E3E8
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E3F0 -> 0x0026E514
*/
// Range: 0x26E3F0 -> 0x26E514
// this: r16
void zNMESpawner::ChildCleanup() {
    /* anonymous block */ {
        // Range: 0x26E3F0 -> 0x26E514
        signed int i; // r18
        class SMNPCStatus * npc_stat; // r2
        signed int cnt_know; // r8
        signed int cnt_dead; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E520 -> 0x0026E668
*/
// Range: 0x26E520 -> 0x26E668
// this: r20
signed int zNMESpawner::SpawnBeastie(class SMNPCStatus * npcstat /* r19 */, class SMSPStatus * spstat /* r18 */) {
    /* anonymous block */ {
        // Range: 0x26E520 -> 0x26E668
        class zNMECommon * npc; // r17
        class zMovePoint * sp; // r16
        class zMovePoint * nav_dest; // r29+0x6C
        class xVec3 pos_sp; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E670 -> 0x0026E6B8
*/
// Range: 0x26E670 -> 0x26E6B8
// this: r2
class SMNPCStatus * zNMESpawner::StatForNPC(class zNMECommon * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26E670 -> 0x26E6B8
        class SMNPCStatus * tmp_stat; // r2
        class SMNPCStatus * npc_stat; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026E6C0 -> 0x0026EB98
*/
// Range: 0x26E6C0 -> 0x26EB98
signed int IsSPLZClear(class zMovePoint * sp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x26E6C0 -> 0x26EB98
        class xVec3 pos_sp; // r29+0x210
        class xBound bnd; // r29+0x140
        class xVec3 delt; // r29+0x200
        class SpawnChkCollData cbdata; // r29+0xE0
        class xBound bnd_bigger; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EBA0 -> 0x0026ED48
*/
// Range: 0x26EBA0 -> 0x26ED48
// this: r2
unsigned char SpawnChkCollData::operator()(class xEnt & ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EBA0 -> 0x26ED48
        enum en_npctyp ntyp; // r2
        class xVec3 vec_cent; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026ED50 -> 0x0026EF10
*/
// Range: 0x26ED50 -> 0x26EF10
// this: r21
class SMSPStatus * zNMESpawner::SPSelect_Avail() {
    /* anonymous block */ {
        // Range: 0x26ED50 -> 0x26EF10
        class SMSPStatus * splist[32]; // r29+0x70
        signed int cnt; // r20
        signed int i; // r19
        class SMSPStatus * tmp_stat; // r2
        signed int rc; // r2
        class SMSPStatus * sp_stat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026EF10 -> 0x0026F1E4
*/
// Range: 0x26EF10 -> 0x26F1E4
// this: r16
void zNMESpawner::Notify(enum en_smnote note /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x26EF10 -> 0x26F1E4
        class SMNPCStatus * npcstat; // r2
        class SMNPCStatus * npcstat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026F1F0 -> 0x0026FAE8
*/
// Range: 0x26F1F0 -> 0x26FAE8
// this: r17
void zNMESpawner::UpdateContinuous() {
    /* anonymous block */ {
        // Range: 0x26F1F0 -> 0x26FAE8
        class SMSPStatus * spstat; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0026FAF0 -> 0x00270050
*/
// Range: 0x26FAF0 -> 0x270050
// this: r16
void zNMESpawner::UpdateAmbushWave() {
    /* anonymous block */ {
        // Range: 0x26FAF0 -> 0x270050
        class SMSPStatus * spstat; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270050 -> 0x00270614
*/
// Range: 0x270050 -> 0x270614
// this: r16
void zNMESpawner::UpdateWaveMode() {
    /* anonymous block */ {
        // Range: 0x270050 -> 0x270614
        class SMSPStatus * spstat; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270620 -> 0x00270728
*/
// Range: 0x270620 -> 0x270728
// this: r16
void zNMESpawner::Timestep(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x270620 -> 0x270728
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270730 -> 0x002707FC
*/
// Range: 0x270730 -> 0x2707FC
// this: r19
void zNMESpawner::MapPreferred() {
    /* anonymous block */ {
        // Range: 0x270730 -> 0x2707FC
        signed int i; // r18
        class SMNPCStatus * npc_stat; // r2
        class zMovePoint * sp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270800 -> 0x00270874
*/
// Range: 0x270800 -> 0x270874
// this: r7
signed int zNMESpawner::AddSpawnNPC(class zNMECommon * npc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x270800 -> 0x270874
        signed int ack; // r16
        signed int i; // r6
        class SMNPCStatus * npc_stat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270880 -> 0x002708C8
*/
// Range: 0x270880 -> 0x2708C8
// this: r2
signed int zNMESpawner::AddSpawnPoint(class zMovePoint * sp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x270880 -> 0x2708C8
        class SMSPStatus * sp_stat; // r2
        signed int ack; // r2
        signed int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002708D0 -> 0x00270930
*/
// Range: 0x2708D0 -> 0x270930
class zNMESpawner * zNMESpawner_GetInstance() {
    /* anonymous block */ {
        // Range: 0x2708D0 -> 0x270930
        class zNMESpawner * sm; // r2
        class zNMESpawner * sm_tmp; // r2
        class SMDepot * depot; // r2
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00270930 -> 0x002709AC
*/
// Range: 0x270930 -> 0x2709AC
void SceneFinish() {
    /* anonymous block */ {
        // Range: 0x270930 -> 0x2709AC
        class SMDepot * depot; // r18
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMESpawner.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002709B0 -> 0x00270A20
*/
// Range: 0x2709B0 -> 0x270A20
void ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x2709B0 -> 0x270A20
        class SMDepot * depot; // r17
        class zNMESpawner * sm; // r2
        signed int i; // r16
    }
}


