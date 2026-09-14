/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381180 -> 0x0038126C
*/
// Range: 0x381180 -> 0x38126C
// this: r18
void z_disco_floor::set_state_range(signed int min /* r19 */, signed int max /* r16 */, unsigned char immediate /* r17 */) {
    /* anonymous block */ {
        // Range: 0x381180 -> 0x38126C
        unsigned int min_state; // r16
        unsigned int max_state; // r2
        unsigned int newstate; // r2
        unsigned int newstate; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381270 -> 0x003814D0
*/
// Range: 0x381270 -> 0x3814D0
// this: r20
void z_disco_floor::set_state(unsigned int state /* r2 */, unsigned char immediate /* r2 */) {
    /* anonymous block */ {
        // Range: 0x381270 -> 0x3814D0
        unsigned int r; // @ 0x00637E10
        signed int bit_index; // @ 0x00636DCC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003814D0 -> 0x003815C4
*/
// Range: 0x3814D0 -> 0x3815C4
// this: r16
void z_disco_floor::update(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x3814D0 -> 0x3815C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003815D0 -> 0x00381E78
*/
// Range: 0x3815D0 -> 0x381E78
// this: r16
void z_disco_floor::setup() {
    /* anonymous block */ {
        // Range: 0x3815D0 -> 0x381E78
        unsigned int data_size; // r17
        unsigned int i; // r29+0x310
        class xSurface * & surf; // r2
        class xSurface surf; // @ 0x006899C0
        class zSurfAssetIN asset; // @ 0x00689B10
        class zSurfaceProps props; // @ 0x006899F0
        unsigned char inited; // @ 0x00637E14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00381E80 -> 0x00381FF8
*/
// Range: 0x381E80 -> 0x381FF8
// this: r18
void z_disco_floor::load(class z_disco_floor_asset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x381E80 -> 0x381FF8
        unsigned char * data; // r2
        unsigned int * state_offsets; // r2
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382000 -> 0x00382008
*/
// Range: 0x382000 -> 0x382008
void init(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x382000 -> 0x382008
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382010 -> 0x00382018
*/
// Range: 0x382010 -> 0x382018
void init() {
    /* anonymous block */ {
        // Range: 0x382010 -> 0x382018
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382020 -> 0x003820E4
*/
// Range: 0x382020 -> 0x3820E4
static void add_tweaks(class z_disco_floor & df /* r16 */) {
    /* anonymous block */ {
        // Range: 0x382020 -> 0x3820E4
        char buffer[128]; // r29+0x20
        char * name; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003820F0 -> 0x0038233C
*/
// Range: 0x3820F0 -> 0x38233C
static void update_state(class z_disco_floor & df /* r20 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3820F0 -> 0x38233C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382340 -> 0x00382C9C
*/
// Range: 0x382340 -> 0x382C9C
static void refresh_state(class z_disco_floor & df /* r16 */) {
    /* anonymous block */ {
        // Range: 0x382340 -> 0x382C9C
        unsigned int i; // r22
        unsigned int i; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382CA0 -> 0x00382DB4
*/
// Range: 0x382CA0 -> 0x382DB4
static unsigned int find_objects(char * name /* r16 */, class xEnt * * objects /* r21 */, unsigned int size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x382CA0 -> 0x382DB4
        char buffer[256]; // r29+0x70
        unsigned int prefix_size; // r29+0x17C
        unsigned int start; // r29+0x178
        unsigned int i; // r19
        unsigned int total; // r18
        signed int j; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382DC0 -> 0x00382E70
*/
// Range: 0x382DC0 -> 0x382E70
static void object_prefix(char * name /* r18 */, unsigned int & size /* r17 */, unsigned int & first /* r16 */) {
    /* anonymous block */ {
        // Range: 0x382DC0 -> 0x382E70
        unsigned int namelen; // r2
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDiscoFloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382E70 -> 0x00382FDC
*/
// Range: 0x382E70 -> 0x382FDC
static void event_handler(class xBase * to /* r2 */, unsigned int event /* r2 */, float * argf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x382E70 -> 0x382FDC
        class z_disco_floor & f; // r16
    }
}


