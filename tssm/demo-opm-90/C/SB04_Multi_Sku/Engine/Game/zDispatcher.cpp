/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F020 -> 0x0037F028
*/
// Range: 0x37F020 -> 0x37F028
signed short zDispatcher_GetCurrentWorld() {
    /* anonymous block */ {
        // Range: 0x37F020 -> 0x37F028
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F030 -> 0x0037F1E4
*/
// Range: 0x37F030 -> 0x37F1E4
unsigned int zDispatcher_FindNextValidWorld(unsigned int sceneID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37F030 -> 0x37F1E4
        char sceneName[4]; // r29+0x4C
        signed int worldIndex; // r17
        signed int i; // r8
        signed int j; // r7
        signed int newIndex; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F1F0 -> 0x0037F28C
*/
// Range: 0x37F1F0 -> 0x37F28C
unsigned int zDispatcher_FindTaskPointer(unsigned int sceneID /* r2 */, signed int task /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37F1F0 -> 0x37F28C
        char sceneName[4]; // r29+0xC
        signed int i; // r8
        signed int j; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F290 -> 0x0037F318
*/
// Range: 0x37F290 -> 0x37F318
void zDispatcher_FindWorldTask(unsigned int sceneID /* r2 */, signed int & world /* r2 */, signed int & task /* r2 */) {
    /* anonymous block */ {
        // Range: 0x37F290 -> 0x37F318
        char sceneName[4]; // r29+0xC
        signed int i; // r10
        signed int j; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0037F320 -> 0x003807D4
*/
// Range: 0x37F320 -> 0x3807D4
void ZDSP_elcb_event(class xBase * from /* r20 */, class xBase * xb /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r16 */, class xBase * toParamWidget /* r19 */, unsigned int toParamWidgetID /* r18 */) {
    /* anonymous block */ {
        // Range: 0x37F320 -> 0x3807D4
        signed short currentTask'665; // r3
        signed short currentWorld'664; // r3
        class st_ZDISPATCH_DATA * dspdata; // r17
        signed int old_vibration; // r2
        class pointer_asset * pointerAsset; // r2
        class zFMVFile * file; // r2
        float pointer; // r29+0x1D0
        class zCar * car; // r2
        class zCar * car; // r2
        class zUITextAsset * uia; // r2
        class xVec3 start; // r29+0x198
        class xVec3 end; // r29+0x188
        class xPortalAsset portalAsset; // @ 0x0068A380
        class _zPortal portal; // @ 0x0068A360
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003807E0 -> 0x00380DB0
*/
// Range: 0x3807E0 -> 0x380DB0
static signed int ZDSP_doCommand(class st_ZDISPATCH_CONTEXT * cmdCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3807E0 -> 0x380DB0
        signed int iv; // r2
        enum en_DISPATCH_COMMAND cmd; // r2
        void * indata; // r17
        void * result; // r2
        signed int warned; // @ 0x00637E34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380DB0 -> 0x00380DB8
*/
// Range: 0x380DB0 -> 0x380DB8
void zDispatcher_Load(class st_ZDISPATCH_DATA * dspdata /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x380DB0 -> 0x380DB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380DC0 -> 0x00380DC8
*/
// Range: 0x380DC0 -> 0x380DC8
void zDispatcher_Save(class st_ZDISPATCH_DATA * dspdata /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x380DC0 -> 0x380DC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380DD0 -> 0x00380DD8
*/
// Range: 0x380DD0 -> 0x380DD8
void zDispatcher_InitDep() {
    /* anonymous block */ {
        // Range: 0x380DD0 -> 0x380DD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380DE0 -> 0x00380E40
*/
// Range: 0x380DE0 -> 0x380E40
void zDispatcher_Init(class st_ZDISPATCH_DATA * dspdata /* r17 */, class xBaseAsset * bass /* r16 */) {
    /* anonymous block */ {
        // Range: 0x380DE0 -> 0x380E40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380E40 -> 0x00380E54
*/
// Range: 0x380E40 -> 0x380E54
class st_ZDISPATCH_DATA * zDispatcher_getInst(class st_ZDISPATCH_DATA * pool /* r2 */, signed int idx /* r2 */) {
    /* anonymous block */ {
        // Range: 0x380E40 -> 0x380E54
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380E60 -> 0x00380EE0
*/
// Range: 0x380E60 -> 0x380EE0
class st_ZDISPATCH_DATA * zDispatcher_memPool(signed int cnt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x380E60 -> 0x380EE0
        class st_ZDISPATCH_DATA * pool; // r18
        class st_ZDISPATCH_DEPOT * depot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380EE0 -> 0x00380F14
*/
// Range: 0x380EE0 -> 0x380F14
void zDispatcher_sceneFinish() {
    /* anonymous block */ {
        // Range: 0x380EE0 -> 0x380F14
        class st_ZDISPATCH_DEPOT * depot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380F20 -> 0x00380F54
*/
// Range: 0x380F20 -> 0x380F54
void zDispatcher_scenePrepare() {
    /* anonymous block */ {
        // Range: 0x380F20 -> 0x380F54
        class st_ZDISPATCH_DEPOT * depot; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380F60 -> 0x00380F68
*/
// Range: 0x380F60 -> 0x380F68
void zDispatcher_Shutdown() {
    /* anonymous block */ {
        // Range: 0x380F60 -> 0x380F68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380F70 -> 0x00380F78
*/
// Range: 0x380F70 -> 0x380F78
void zDispatcher_Startup() {
    /* anonymous block */ {
        // Range: 0x380F70 -> 0x380F78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDispatcher.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00380F80 -> 0x00381180
*/
// Range: 0x380F80 -> 0x381180
void zDispatcherParseINI(class xIniFile * ini /* r20 */) {
    /* anonymous block */ {
        // Range: 0x380F80 -> 0x381180
        signed int i; // r19
        char itemName[16]; // r29+0x160
        char value[256]; // r29+0x60
        char * value_; // r2
        signed int j; // r18
        char * ltok; // r29+0x17C
        char * tok; // r2
    }
}


