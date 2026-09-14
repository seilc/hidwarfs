/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004450D0 -> 0x00445128
*/
// Range: 0x4450D0 -> 0x445128
void iCameraPerformRenderWareHack(class RwCamera * camera /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4450D0 -> 0x445128
        class RpWorldSector * * newFrustumSectors; // r2
        signed int cameraExtOffset; // r2
        class RpWorldCameraExt * cameraExt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445130 -> 0x004452E0
*/
// Range: 0x445130 -> 0x4452E0
class RwCamera * RwCameraBeginUpdateWrapper(class RwCamera * camera /* r16 */) {
    /* anonymous block */ {
        // Range: 0x445130 -> 0x4452E0
        class RwCamera * retval; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004452E0 -> 0x00445350
*/
// Range: 0x4452E0 -> 0x445350
void iCameraSetFog(unsigned char enable /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4452E0 -> 0x445350
        class iFogParams * pFogParams; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445350 -> 0x00445490
*/
// Range: 0x445350 -> 0x445490
void iCameraSetFogRenderStates() {
    /* anonymous block */ {
        // Range: 0x445350 -> 0x445490
        class RwCamera * pCamera; // r2
        class iFogParams * pFogParams; // r2
        unsigned int bite_me; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445490 -> 0x00445AFC
*/
// Range: 0x445490 -> 0x445AFC
void iCameraUpdateFog(signed long t /* r19 */) {
    /* anonymous block */ {
        // Range: 0x445490 -> 0x445AFC
        class iFogParams * fa; // r2
        class iFogParams * fb; // r2
        float a; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445B00 -> 0x00445D64
*/
// Range: 0x445B00 -> 0x445D64
void iCameraSetFogParams(class iFogParams * fp /* r2 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x445B00 -> 0x445D64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445D70 -> 0x00445DB0
*/
// Range: 0x445D70 -> 0x445DB0
void iCameraSetNearFarClip(float nearPlane /* r29 */, float farPlane /* r29 */) {
    /* anonymous block */ {
        // Range: 0x445D70 -> 0x445DB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445DB0 -> 0x00445E4C
*/
// Range: 0x445DB0 -> 0x445E4C
void iCamGetViewMatrix(class RwCamera * camera /* r2 */, class xMat4x3 * view_matrix /* r17 */) {
    /* anonymous block */ {
        // Range: 0x445DB0 -> 0x445E4C
        class RwMatrixTag * rw_view; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445E50 -> 0x00445E80
*/
// Range: 0x445E50 -> 0x445E80
float iCameraGetFOV(class RwCamera * cam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x445E50 -> 0x445E80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445E80 -> 0x00445F08
*/
// Range: 0x445E80 -> 0x445F08
void iCameraUpdatePos(class RwCamera * cam /* r2 */, class xMat4x3 * pos /* r17 */) {
    /* anonymous block */ {
        // Range: 0x445E80 -> 0x445F08
        class RwFrame * f; // r2
        class RwMatrixTag * m; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445F10 -> 0x00445F1C
*/
// Range: 0x445F10 -> 0x445F1C
void iCameraShowRaster(class RwCamera * cam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x445F10 -> 0x445F1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00445F20 -> 0x0044600C
*/
// Range: 0x445F20 -> 0x44600C
void iCameraDestroy(class RwCamera * camera /* r17 */) {
    /* anonymous block */ {
        // Range: 0x445F20 -> 0x44600C
        class RpWorld * pWorld; // r2
        class RwRaster * raster; // r2
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\iCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00446010 -> 0x0044612C
*/
// Range: 0x446010 -> 0x44612C
class RwCamera * iCameraCreate(signed int width /* r20 */, signed int height /* r19 */, signed int mainGameCamera /* r18 */) {
    /* anonymous block */ {
        // Range: 0x446010 -> 0x44612C
        class RwV2d vw; // r29+0x68
        class RwFrame * cameraFrame; // r2
        class RwRaster * cameraRaster; // r2
        class RwRaster * zbuffer; // r2
    }
}


