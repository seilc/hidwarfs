/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xTextureManager.cpp
*/
static class xTextureManager mgr; // size: 0x2DF0, address: 0x807625D8
// Range: 0x800662B0 -> 0x80066534
void xInternalTextureNode::FreeMemory(class xInternalTextureNode * this /* r21 */) {
    {
        // Range: 0x80066358 -> 0x80066520
        // Local variables
        int zeroIndex; // r23

        {
            // Range: 0x80066364 -> 0x8006647C
            // Local variables
            unsigned int i; // r22
        }
    }

    // References
    // -> static class xTextureManager mgr;
}
// Range: 0x80066540 -> 0x80066558
void * xTextureHandle::xTextureHandle() {
}
// Range: 0x80066560 -> 0x800668F4
void xTextureHandle::Reference(class xTextureHandle * this /* r28 */, unsigned long long assetID /* r30:r29 */, bool clearPrev /* r27 */) {
    // Local variables
    class RwTexture * pTexture; // r0

    {
        // Range: 0x800665B4 -> 0x80066820
        // Local variables
        class PKRAssetTOCInfo info; // r1+0x8
    }

    // References
    // -> static class xTextureManager mgr;
}
// Range: 0x80066900 -> 0x80066A00
void xTextureHandle::Reference(class xTextureHandle * this /* r30 */, class RwTexture * pTexture /* r31 */) {
    // References
    // -> static class xTextureManager mgr;
}
// Range: 0x80066A00 -> 0x80066B18
void * xTextureHandle::~xTextureHandle(class xTextureHandle * this /* r31 */) {
    // References
    // -> static class xTextureManager mgr;
}
// Range: 0x80066B20 -> 0x80066BC8
class xTextureManager * xTextureManager::Get() {
    // References
    // -> static class xTextureManager mgr;
}
// Range: 0x80066BD0 -> 0x80066CF8
void xTextureManager::AddTexture(class xTextureHandle * handle /* r30 */, class PKRAssetTOCInfo * pInfo /* r31 */) {
    // Local variables
    class xInternalTextureNode * pNode; // r29

    {
        // Range: 0x80066C18 -> 0x80066C68
        // Local variables
        unsigned int i; // r9
    }
    {
        // Range: 0x80066C78 -> 0x80066CB8
        // Local variables
        unsigned int i; // r5
    }
}
// Range: 0x80066D00 -> 0x80066DA0
void xTextureManager::FreeMemory(class xTextureManager * this /* r29 */) {
    {
        // Range: 0x80066D18 -> 0x80066D2C
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x80066D3C -> 0x80066D84
        // Local variables
        unsigned int i; // r0
    }
}
