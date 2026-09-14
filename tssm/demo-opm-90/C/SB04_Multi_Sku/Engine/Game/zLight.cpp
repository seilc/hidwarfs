/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA600 -> 0x002CA654
*/
// Range: 0x2CA600 -> 0x2CA654
void zLightSetVolume(class zVolume * vol /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CA600 -> 0x2CA654
        unsigned int lp_id; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA660 -> 0x002CA6B0
*/
// Range: 0x2CA660 -> 0x2CA6B0
void zLightRemoveLocalEnv() {
    /* anonymous block */ {
        // Range: 0x2CA660 -> 0x2CA6B0
        signed int i; // r6
        class RwLLLink * link; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA6B0 -> 0x002CA778
*/
// Range: 0x2CA6B0 -> 0x2CA778
void zLightAddLocal(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CA6B0 -> 0x2CA778
        class xVec3 default_light_pos; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA780 -> 0x002CA87C
*/
// Range: 0x2CA780 -> 0x2CA87C
void zLightAddLocalEnv() {
    /* anonymous block */ {
        // Range: 0x2CA780 -> 0x2CA87C
        signed int i; // r19
        class _zLight * zlight; // r2
        class iLight * light; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA880 -> 0x002CA958
*/
// Range: 0x2CA880 -> 0x2CA958
void zLightUpdate(class xBase * to /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2CA880 -> 0x2CA958
        class _zLight * t; // r16
        class xVec3 pos; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CA960 -> 0x002CAA44
*/
// Range: 0x2CA960 -> 0x2CAA44
void zLightEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2CA960 -> 0x2CAA44
        class _zLight * t; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAA50 -> 0x002CAA58
*/
// Range: 0x2CAA50 -> 0x2CAA58
void zLightLoad(class _zLight * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2CAA50 -> 0x2CAA58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAA60 -> 0x002CAA68
*/
// Range: 0x2CAA60 -> 0x2CAA68
void zLightSave(class _zLight * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2CAA60 -> 0x2CAA68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAA70 -> 0x002CAAEC
*/
// Range: 0x2CAA70 -> 0x2CAAEC
void zLightDestroyAll() {
    /* anonymous block */ {
        // Range: 0x2CAA70 -> 0x2CAAEC
        signed int total; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAAF0 -> 0x002CAB80
*/
// Range: 0x2CAAF0 -> 0x2CAB80
void zLightResolveLinks() {
    /* anonymous block */ {
        // Range: 0x2CAAF0 -> 0x2CAB80
        signed int i; // r17
        class _zLight * zl; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAB80 -> 0x002CAD64
*/
// Range: 0x2CAB80 -> 0x2CAD64
void zLightInit(class xBase * b /* r17 */, class zLightAsset * tasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CAB80 -> 0x2CAD64
        class _zLight * t; // r2
        unsigned int itype; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAD70 -> 0x002CAD78
*/
// Range: 0x2CAD70 -> 0x2CAD78
void zLightInit(void * b /* r2 */, void * tasset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2CAD70 -> 0x2CAD78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLight.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAD80 -> 0x002CAE00
*/
// Range: 0x2CAD80 -> 0x2CAE00
void zLightResetAll(class xEnv * env /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CAD80 -> 0x2CAE00
    }
}


