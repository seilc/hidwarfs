/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1C40 -> 0x003D1E04
*/
// Range: 0x3D1C40 -> 0x3D1E04
void xGridCheckBoundSetup(class xBox & box /* r21 */, signed int & lower_x /* r20 */, signed int & lower_z /* r19 */, signed int & upper_x /* r18 */, signed int & upper_z /* r17 */, class xGrid & grid /* r16 */, class xBound & bound /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1C40 -> 0x3D1E04
        float ex; // r29+0x80
        float ez; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1E10 -> 0x003D1EC8
*/
// Range: 0x3D1E10 -> 0x3D1EC8
void xGridIterClose(class xGridIterator & it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1E10 -> 0x3D1EC8
        signed int & iter_active; // r2
        class xGridBound * cur; // r7
        class xGridBound * * prev; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1ED0 -> 0x003D1F6C
*/
// Range: 0x3D1ED0 -> 0x3D1F6C
class xGridBound * xGridIterFirstCell(class xGrid * grid /* r2 */, signed int grx /* r2 */, signed int grz /* r2 */, class xGridIterator & it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1ED0 -> 0x3D1F6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1F70 -> 0x003D1FA8
*/
// Range: 0x3D1F70 -> 0x3D1FA8
class xGridBound * xGridIterFirstCell(class xGridBound * * head /* r2 */, class xGridIterator & it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D1F70 -> 0x3D1FA8
        class xGridBound * curcell; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1FB0 -> 0x003D25B8
*/
// Range: 0x3D1FB0 -> 0x3D25B8
void xGridCheckPosition(class xGrid * grid /* r21 */, class xVec3 * pos /* r18 */, class xQCData * qcd /* r22 */, signed int (* hitCB)(class xEnt *, void *) /* r23 */, void * cbdata /* r30 */) {
    /* anonymous block */ {
        // Range: 0x3D1FB0 -> 0x3D25B8
        class xGridIterator it; // r29+0xC0
        class xEnt * ent; // r2
        signed int px; // r2
        signed int pz; // r2
        class xGridBound * cell; // r16
        float clcenterx; // r29+0xD0
        float clcenterz; // r1
        signed int i; // r20
        signed int _x; // r2
        signed int _z; // r2
        signed int offs[4][3][2]; // @ 0x00604530
        signed int k; // @ 0x0063800C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D25C0 -> 0x003D26FC
*/
// Range: 0x3D25C0 -> 0x3D26FC
signed int xGridEntIsTooBig(class xGrid * grid /* r2 */, class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D25C0 -> 0x3D26FC
        class xBound * bound; // r2
        float maxr; // r29
        class xBBox * bbox; // r2
        float rx; // r29
        float ry; // r29
        float rz; // r29
        class xBBox * bbox; // r2
        float rx; // r29
        float rz; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2700 -> 0x003D2800
*/
// Range: 0x3D2700 -> 0x3D2800
void xGridGetCell(class xGrid * grid /* r2 */, float posx /* r29 */, float posz /* r29 */, signed int & grx /* r2 */, signed int & grz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D2700 -> 0x3D2800
        float pgridx; // r4
        float pgridz; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2800 -> 0x003D29C8
*/
// Range: 0x3D2800 -> 0x3D29C8
void xGridUpdate(class xGrid * grid /* r2 */, class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D2800 -> 0x3D29C8
        signed int dx; // r2
        signed int dz; // r2
        class xGridBound * gridb; // r2
        class xGridBound * cur; // r9
        class xGridBound * * prev; // r6
        class xGridBound * * cell; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D29D0 -> 0x003D2A58
*/
// Range: 0x3D29D0 -> 0x3D2A58
signed int xGridRemove(class xGridBound * gridb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D29D0 -> 0x3D2A58
        class xGridBound * cur; // r6
        class xGridBound * * prev; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2A60 -> 0x003D2EA0
*/
// Range: 0x3D2A60 -> 0x3D2EA0
signed int xGridAdd(class xGrid * grid /* r20 */, class xEnt * ent /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3D2A60 -> 0x3D2EA0
        class xBound * bound; // r2
        class xVec3 * center; // r5
        float maxr; // r29+0x60
        class xSphere * sph; // r2
        class xBBox * bbox; // r2
        float rx; // r29+0x60
        float ry; // r29+0x60
        float rz; // r29+0x60
        class xBBox * bbox; // r2
        float rx; // r29+0x60
        float rz; // r29+0x60
        float cgridx; // r4
        float cgridz; // r2
        signed int x; // r2
        signed int z; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2EA0 -> 0x003D2F98
*/
// Range: 0x3D2EA0 -> 0x3D2F98
void xGridEmpty(class xGrid * grid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D2EA0 -> 0x3D2F98
        class xGridBound * * head; // r2
        class xGridBound * curr; // r11
        signed int x; // r10
        signed int z; // r9
        class xGridBound * currnext; // r2
        class xGridBound * currnext; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2FA0 -> 0x003D2FCC
*/
// Range: 0x3D2FA0 -> 0x3D2FCC
void xGridKill(class xGrid * grid /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D2FA0 -> 0x3D2FCC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xGrid.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2FD0 -> 0x003D31F4
*/
// Range: 0x3D2FD0 -> 0x3D31F4
void xGridInit(class xGrid * grid /* r18 */, class xBox * bounds /* r2 */, unsigned short nx /* r17 */, unsigned short nz /* r2 */, unsigned char ingrid_id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D2FD0 -> 0x3D31F4
        float gsizex; // r3
        float gsizez; // r2
    }
}


