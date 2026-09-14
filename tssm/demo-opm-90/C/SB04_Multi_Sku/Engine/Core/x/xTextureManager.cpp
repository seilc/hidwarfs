/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044AB90 -> 0x0044AC78
*/
// Range: 0x44AB90 -> 0x44AC78
// this: r18
void xTextureManager::FreeMemoryBlockingCall() {
    /* anonymous block */ {
        // Range: 0x44AB90 -> 0x44AC78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044AC80 -> 0x0044AD20
*/
// Range: 0x44AC80 -> 0x44AD20
// this: r16
void xTextureManager::FreeMemory() {
    /* anonymous block */ {
        // Range: 0x44AC80 -> 0x44AD20
        unsigned int i; // r18
        unsigned int i; // r18
        class xInternalMovieNode * pNode; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044AD20 -> 0x0044AF20
*/
// Range: 0x44AD20 -> 0x44AF20
// this: r17
unsigned char xTextureManager::freeElement(class xInternalTextureNode * pPrevNode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x44AD20 -> 0x44AF20
        unsigned int i; // r5
        signed int index; // r8
        signed int lru; // r7
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044AF20 -> 0x0044B0CC
*/
// Range: 0x44AF20 -> 0x44B0CC
// this: r20
void xTextureManager::reload(class xTextureHandle * pHandle /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44AF20 -> 0x44B0CC
        class xInternalTextureNode * pNode; // r18
        unsigned int doubleSize; // r2
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B0D0 -> 0x0044B1C4
*/
// Range: 0x44B0D0 -> 0x44B1C4
// this: r2
void xTextureManager::AddMovie(class xTextureHandle * handle /* r18 */, class PKRAssetTOCInfo * pInfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x44B0D0 -> 0x44B1C4
        class xInternalMovieNode * pNode; // r16
        unsigned int i; // r7
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B1D0 -> 0x0044B2D4
*/
// Range: 0x44B1D0 -> 0x44B2D4
// this: r2
void xTextureManager::AddTexture(class xTextureHandle * handle /* r18 */, class PKRAssetTOCInfo * pInfo /* r17 */) {
    /* anonymous block */ {
        // Range: 0x44B1D0 -> 0x44B2D4
        class xInternalTextureNode * pNode; // r16
        unsigned int i; // r7
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B2E0 -> 0x0044B398
*/
// Range: 0x44B2E0 -> 0x44B398
class xTextureManager & Get() {
    /* anonymous block */ {
        // Range: 0x44B2E0 -> 0x44B398
        signed char @19041; // @ 0x006382C8
        class xTextureManager mgr; // @ 0x007A97C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B3A0 -> 0x0044B718
*/
// Range: 0x44B3A0 -> 0x44B718
void fileCallback(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44B3A0 -> 0x44B718
        class xInternalTextureNode * pNode; // r2
        unsigned int i; // r18
        unsigned int size; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B720 -> 0x0044B748
*/
// Range: 0x44B720 -> 0x44B748
// this: r2
class xTextureHandle & xTextureHandle::operator=(class xTextureHandle & handle /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44B720 -> 0x44B748
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B750 -> 0x0044B990
*/
// Range: 0x44B750 -> 0x44B990
// this: r16
class RwTexture * xTextureHandle::GetTexture() {
    /* anonymous block */ {
        // Range: 0x44B750 -> 0x44B990
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044B990 -> 0x0044BAD8
*/
// Range: 0x44B990 -> 0x44BAD8
// this: r17
xTextureHandle::~xTextureHandle() {
    /* anonymous block */ {
        // Range: 0x44B990 -> 0x44BAD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044BAE0 -> 0x0044BC04
*/
// Range: 0x44BAE0 -> 0x44BC04
// this: r17
void xTextureHandle::Reference(class RwTexture * pTexture /* r16 */) {
    /* anonymous block */ {
        // Range: 0x44BAE0 -> 0x44BC04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044BC10 -> 0x0044C050
*/
// Range: 0x44BC10 -> 0x44C050
// this: r20
void xTextureHandle::PlayMovie(unsigned int assetID /* r19 */, unsigned int looping /* r21 */, unsigned int freezeframed /* r22 */, unsigned int startframe /* r23 */, unsigned int endframe /* r30 */) {
    /* anonymous block */ {
        // Range: 0x44BC10 -> 0x44C050
        class PKRAssetTOCInfo info; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044C050 -> 0x0044C05C
*/
// Range: 0x44C050 -> 0x44C05C
// this: r2
unsigned char xTextureHandle::IsMoviePlaying() {
    /* anonymous block */ {
        // Range: 0x44C050 -> 0x44C05C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044C060 -> 0x0044C558
*/
// Range: 0x44C060 -> 0x44C558
// this: r17
void xTextureHandle::Reference(unsigned int assetID /* r16 */, unsigned char clearPrev /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44C060 -> 0x44C558
        class RwTexture * pTexture; // r2
        class PKRAssetTOCInfo info; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044C560 -> 0x0044C578
*/
// Range: 0x44C560 -> 0x44C578
// this: r2
xTextureHandle::xTextureHandle() {
    /* anonymous block */ {
        // Range: 0x44C560 -> 0x44C578
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xTextureManager.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044C580 -> 0x0044C9AC
*/
// Range: 0x44C580 -> 0x44C9AC
// this: r19
void xInternalTextureNode::FreeMemory() {
    /* anonymous block */ {
        // Range: 0x44C580 -> 0x44C9AC
        signed int zeroIndex; // r18
        unsigned int i; // r17
    }
}


