/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A3D90 -> 0x002A3E68
*/
// Range: 0x2A3D90 -> 0x2A3E68
void zNMEAsset_RegisterEnemies(class zScene * zscn /* r17 */, signed int * base_idx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2A3D90 -> 0x2A3E68
        class st_XORDEREDARRAY * npclist; // r2
        signed int num_npc; // r2
        signed int i; // r22
        class base * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A3E70 -> 0x002A3F38
*/
// Range: 0x2A3E70 -> 0x2A3F38
void zNMEAsset_CreateEnemies() {
    /* anonymous block */ {
        // Range: 0x2A3E70 -> 0x2A3F38
        signed int num_alldyn; // r2
        signed int i; // r17
        unsigned int siz_dynass; // r29+0x3C
        class xDynAsset * dynass; // r2
        class DynNMEInfo * nmeinf_next; // r7
        class DynNMEInfo * nmeinf; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A3F40 -> 0x002A40A0
*/
// Range: 0x2A3F40 -> 0x2A40A0
signed int zNMEAsset_CountEnemies(signed int * num_nme /* r17 */, signed int * num_INnpc /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2A3F40 -> 0x2A40A0
        signed int count_NME; // r20
        signed int num_alldyn; // r2
        signed int i; // r19
        unsigned int siz_dynass; // r29+0x6C
        class xDynAsset * dynass; // r2
        signed int isOurs; // r5
        class DynNMEInfo * nmeinf_next; // r4
        class DynNMEInfo * nmeinf; // [invalid]
        signed int needToHash; // @ 0x00636960
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A40A0 -> 0x002A40D4
*/
// Range: 0x2A40A0 -> 0x2A40D4
static class xEnt * MakeNMEGeneric(class xDynAsset * dynass /* r4 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A40A0 -> 0x2A40D4
        class xEntAsset * entass; // r2
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A40E0 -> 0x002A40FC
*/
// Range: 0x2A40E0 -> 0x2A40FC
static signed int ValidTurret(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A40E0 -> 0x2A40FC
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4100 -> 0x002A411C
*/
// Range: 0x2A4100 -> 0x2A411C
static signed int ValidStandard(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4100 -> 0x2A411C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4120 -> 0x002A413C
*/
// Range: 0x2A4120 -> 0x2A413C
static signed int ValidNeptune(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4120 -> 0x2A413C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4140 -> 0x002A415C
*/
// Range: 0x2A4140 -> 0x2A415C
static signed int ValidMindy(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4140 -> 0x2A415C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4160 -> 0x002A417C
*/
// Range: 0x2A4160 -> 0x2A417C
static signed int ValidFrogFish(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4160 -> 0x2A417C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4180 -> 0x002A419C
*/
// Range: 0x2A4180 -> 0x2A419C
static signed int ValidDennis(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4180 -> 0x2A419C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A41A0 -> 0x002A41BC
*/
// Range: 0x2A41A0 -> 0x2A41BC
static signed int ValidCritter(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A41A0 -> 0x2A41BC
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A41C0 -> 0x002A41DC
*/
// Range: 0x2A41C0 -> 0x2A41DC
static signed int ValidCrate(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A41C0 -> 0x2A41DC
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A41E0 -> 0x002A41FC
*/
// Range: 0x2A41E0 -> 0x2A41FC
static signed int ValidCastNCrew(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A41E0 -> 0x2A41FC
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4200 -> 0x002A421C
*/
// Range: 0x2A4200 -> 0x2A421C
static signed int ValidBucketOTron(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4200 -> 0x2A421C
        unsigned int size_expected; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4220 -> 0x002A423C
*/
// Range: 0x2A4220 -> 0x2A423C
static signed int ValidGeneric(class xDynAsset * dynass /* r2 */, unsigned int siz_dynass /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4220 -> 0x2A423C
        unsigned int size_expected; // r2
    }
}


