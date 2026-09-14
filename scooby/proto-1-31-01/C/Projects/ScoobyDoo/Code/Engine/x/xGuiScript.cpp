/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int interpreterMethodItem; // size: 0x4, address: 0x4A4FE8
static unsigned int interpreterMethodSys; // size: 0x4, address: 0x4A4FEC
class _xGuiSys gGuiSys[52]; // size: 0xC30, address: 0xAA5B80
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class _xGuiItem gGuiItem[180]; // size: 0x4380, address: 0xAA1800
class _xGuiSys * gActiveGuiSys; // size: 0x4, address: 0x4A4DF0
void iGuiItemRenderFunc_MayaClip(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x384DF0
void iGuiItemRenderFunc_Maya(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x385330
void iGuiItemRenderFunc_TextNumber(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x385F90
void iGuiItemRenderFunc_Text(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x3857D0
void iGuiItemRenderFunc_Image(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x386530
void iGuiItemRenderFunc_DebugOutline(class _xGuiItem *, class _xGuiSys *); // size: 0x0, address: 0x386580
void xScriptGuiItemRemoveFlag(signed int, signed int); // size: 0x0, address: 0x3A6E30
void xScriptGuiItemAddFlag(signed int, signed int); // size: 0x0, address: 0x3A6C90
signed int xScriptGuiItemGetFlag(signed int); // size: 0x0, address: 0x3A6960
void xScriptGuiItemLink(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3A7AA0
void xScriptGuiItemAdjustPos(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3A9470
void xScriptGuiItemSetPartUVUsingPart(signed int, signed int, signed int); // size: 0x0, address: 0x3A7DB0
signed int xScriptGuiItemGetDataID(signed int); // size: 0x0, address: 0x3A92E0
void xScriptGuiItemSetPartID(signed int, signed int); // size: 0x0, address: 0x3A89C0
void xScriptGuiItemSetMayaVal(signed int, signed int, signed int); // size: 0x0, address: 0x3A8010
void xScriptGuiItemSetMayaInfoModelID(signed int, signed int); // size: 0x0, address: 0x3A8440
void xScriptGuiItemSetMayaInfoTextureID(signed int, signed int); // size: 0x0, address: 0x3A85D0
void xScriptGuiItemSetMayaInfo(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3A8760
void xScriptGuiItemSetColor(signed int, signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3A8C00
void xScriptGuiItemSetPadObj(signed int, signed int); // size: 0x0, address: 0x3A6FD0
void xScriptGuiItemSetRenderFunc(signed int, signed int); // size: 0x0, address: 0x3A9E80
void xScriptGuiItemAdjustOffset(signed int, signed int, signed int); // size: 0x0, address: 0x3A97F0
void xScriptGuiItemSetOffset(signed int, signed int, signed int); // size: 0x0, address: 0x3A99C0
void xScriptGuiItemSetPos(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3A9630
void xScriptGuiItemSetFlag(signed int, signed int); // size: 0x0, address: 0x3A6AF0
void xScriptGuiItemSetDataID(signed int, signed int); // size: 0x0, address: 0x3A7900
void xScriptGuiItemFuncCall(signed int, signed int, signed int); // size: 0x0, address: 0x3A9B80
void xScriptGuiItemSelect(signed int, signed int); // size: 0x0, address: 0x3AA1A0
signed int xScriptGuiItemCreate(signed int, signed int); // size: 0x0, address: 0x3AA630
void xScriptGuiItemAdvanceText(signed int, signed int); // size: 0x0, address: 0x3AA490
signed int xScriptGuiSysAtOffset(signed int, signed int, signed int); // size: 0x0, address: 0x3AB300
void xScriptGuiSysOffsetMoveTo(signed int, signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3AAF30
void xScriptGuiSysAdjustOffset(signed int, signed int, signed int); // size: 0x0, address: 0x3AB4D0
void xScriptGuiSysSetOffset(signed int, signed int, signed int); // size: 0x0, address: 0x3AB690
void xScriptGuiSysSetRenderFunc(signed int, signed int); // size: 0x0, address: 0x3ABD20
void xScriptGuiSysSetDim(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3AABB0
void xScriptGuiSysSetPos(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3AB840
void xScriptGuiSysSetPadObj(signed int, signed int); // size: 0x0, address: 0x3ABB90
void xScriptGuiSysSetFlag(signed int, signed int); // size: 0x0, address: 0x3A6480
void xScriptGuiSysSet(signed int); // size: 0x0, address: 0x3ABA00
void xScriptGuiSysRemoveFlag(signed int, signed int); // size: 0x0, address: 0x3A67C0
void xScriptGuiSysLink(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3AA8A0
signed int xScriptGuiSysGetFlag(signed int); // size: 0x0, address: 0x3A62F0
signed int xScriptGuiSysCreate(signed int); // size: 0x0, address: 0x3AC010
void xScriptGuiSysAdjustPos(signed int, signed int, signed int, signed int); // size: 0x0, address: 0x3AAD70
void xScriptGuiSysAddFlag(signed int, signed int); // size: 0x0, address: 0x3A6620
// total size: 0x3C
class _xGuiSys {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateCount; // offset 0x1, size 0x1
    unsigned char m_pad[2]; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    signed short m_off[2]; // offset 0x8, size 0x4
    void * m_data; // offset 0xC, size 0x4
    class _xGuiItem * m_item; // offset 0x10, size 0x4
    class _xGuiItem * m_select; // offset 0x14, size 0x4
    class _xGuiSys * m_dir[6]; // offset 0x18, size 0x18
    void * m_edobjPad; // offset 0x30, size 0x4
    void * m_func[2]; // offset 0x34, size 0x8
};
// total size: 0x60
class _xGuiItem {
    // Members
public:
    unsigned char m_idx; // offset 0x0, size 0x1
    unsigned char m_scriptCreateIndex; // offset 0x1, size 0x1
    signed short m_textOffset; // offset 0x2, size 0x2
    unsigned int m_flag; // offset 0x4, size 0x4
    unsigned int m_rgba; // offset 0x8, size 0x4
    unsigned int m_dataID; // offset 0xC, size 0x4
    class _xGuiMaya m_img; // offset 0x10, size 0x18
    void * m_edobjPad; // offset 0x28, size 0x4
    void * m_func[5]; // offset 0x2C, size 0x14
    class _xGuiItem * m_dir[6]; // offset 0x40, size 0x18
    class _xGuiItem * m_next; // offset 0x58, size 0x4
    class _xGuiItem * m_prev; // offset 0x5C, size 0x4
};
// total size: 0x138
class tagxPad {
    // Members
public:
    unsigned long m_lastTime; // offset 0x0, size 0x4
    unsigned long m_currentTime; // offset 0x8, size 0x4
    unsigned char m_active; // offset 0x10, size 0x1
    unsigned char m_playerNumber; // offset 0x11, size 0x1
    unsigned char m_controllerNumber; // offset 0x12, size 0x1
    unsigned char m_deviceType; // offset 0x13, size 0x1
    signed int m_padHandle; // offset 0x14, size 0x4
    void * m_funcInit; // offset 0x18, size 0x4
    void * m_funcMapper; // offset 0x1C, size 0x4
    void * m_funcAction; // offset 0x20, size 0x4
    class _tagNativePadData * m_pad; // offset 0x24, size 0x4
    class _XBUTTON m_xbutton[16]; // offset 0x28, size 0x100
    unsigned char m_analogActive; // offset 0x128, size 0x1
    signed char m_analogXValue; // offset 0x129, size 0x1
    signed char m_analogYValue; // offset 0x12A, size 0x1
    signed int m_shock : 3; // offset 0x12B, size 0x4
    unsigned char m_vib[6]; // offset 0x12C, size 0x6
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0xC
class tagxPadAction {
    // Members
public:
    unsigned int m_action; // offset 0x0, size 0x4
    unsigned short m_button; // offset 0x4, size 0x2
    unsigned short m_status; // offset 0x6, size 0x2
    unsigned char pad; // offset 0x8, size 0x1
    unsigned char m_analogActive; // offset 0x9, size 0x1
    signed char m_analogXValue; // offset 0xA, size 0x1
    signed char m_analogYValue; // offset 0xB, size 0x1
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x28
class _tagNativePadData {
    // Members
public:
    unsigned char status; // offset 0x0, size 0x1
    unsigned int id : 4; // offset 0x1, size 0x4
    unsigned int size : 4; // offset 0x1, size 0x4
    unsigned short buttons; // offset 0x2, size 0x2
    unsigned char analog[4]; // offset 0x4, size 0x4
    unsigned char pressure[12]; // offset 0x8, size 0xC
    unsigned char reserved[12]; // offset 0x14, size 0xC
    unsigned short last_buttons; // offset 0x20, size 0x2
    unsigned short pressed; // offset 0x22, size 0x2
    unsigned short released; // offset 0x24, size 0x2
};
// total size: 0x10
class _XBUTTON {
    // Members
public:
    unsigned int m_id; // offset 0x0, size 0x4
    unsigned int m_nativeID; // offset 0x4, size 0x4
    unsigned int m_nativeJoyID; // offset 0x8, size 0x4
    unsigned int m_down : 13; // offset 0xC, size 0x4
    unsigned int m_last_down : 13; // offset 0xC, size 0x4
    unsigned int m_pressed : 1; // offset 0xC, size 0x4
    unsigned int m_last_pressed : 1; // offset 0xC, size 0x4
    unsigned int m_released : 1; // offset 0xC, size 0x4
    unsigned int m_last_released : 1; // offset 0xC, size 0x4
    unsigned int unused : 2; // offset 0xC, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x18
class _xGuiMaya {
    // Members
public:
    unsigned int m_modelID; // offset 0x0, size 0x4
    unsigned int m_texID; // offset 0x4, size 0x4
    signed char m_partID; // offset 0x8, size 0x1
    signed char m_val[3]; // offset 0x9, size 0x3
    signed short m_off[2]; // offset 0xC, size 0x4
    signed short m_bbox[4]; // offset 0x10, size 0x8
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A62F0 -> 0x003A6478
*/
// Range: 0x3A62F0 -> 0x3A6478
signed int xScriptGuiSysGetFlag(signed int sysIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A62F0 -> 0x3A6478
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6480 -> 0x003A6618
*/
// Range: 0x3A6480 -> 0x3A6618
void xScriptGuiSysSetFlag(signed int sysIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6480 -> 0x3A6618
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6620 -> 0x003A67B8
*/
// Range: 0x3A6620 -> 0x3A67B8
void xScriptGuiSysAddFlag(signed int sysIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6620 -> 0x3A67B8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A67C0 -> 0x003A6958
*/
// Range: 0x3A67C0 -> 0x3A6958
void xScriptGuiSysRemoveFlag(signed int sysIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A67C0 -> 0x3A6958
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6960 -> 0x003A6AE8
*/
// Range: 0x3A6960 -> 0x3A6AE8
signed int xScriptGuiItemGetFlag(signed int itemIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6960 -> 0x3A6AE8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6AF0 -> 0x003A6C88
*/
// Range: 0x3A6AF0 -> 0x3A6C88
void xScriptGuiItemSetFlag(signed int itemIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6AF0 -> 0x3A6C88
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6C90 -> 0x003A6E28
*/
// Range: 0x3A6C90 -> 0x3A6E28
void xScriptGuiItemAddFlag(signed int itemIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6C90 -> 0x3A6E28
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6E30 -> 0x003A6FC8
*/
// Range: 0x3A6E30 -> 0x3A6FC8
void xScriptGuiItemRemoveFlag(signed int itemIdx /* r17 */, signed int flag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6E30 -> 0x3A6FC8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6FD0 -> 0x003A7160
*/
// Range: 0x3A6FD0 -> 0x3A7160
void xScriptGuiItemSetPadObj(signed int itemIdx /* r17 */, signed int padobj /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6FD0 -> 0x3A7160
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7160 -> 0x003A75A4
*/
// Range: 0x3A7160 -> 0x3A75A4
signed int xPadMapperFunc_GuiMenu(class tagxPad * pad /* r18 */, class tagxPadAction * actions /* r17 */, signed int maxActions /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7160 -> 0x3A75A4
        class tagxPadAction * a; // r5
        class _XBUTTON * b; // r4
        signed int i; // r3
        signed int actionCount; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A75B0 -> 0x003A77EC
*/
// Range: 0x3A75B0 -> 0x3A77EC
void xPadActionFunc_GuiMenu(signed int count /* r21 */, class tagxPadAction * actions /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A75B0 -> 0x3A77EC
        class _xGuiSys * activeSys; // r18
        class tagxPadAction * a; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A77F0 -> 0x003A78FC
*/
// Range: 0x3A77F0 -> 0x3A78FC
void xGuiSendPadAction(class _xGuiSys * sys /* r18 */, class _xGuiItem * item /* r17 */, signed int action /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A77F0 -> 0x3A78FC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7900 -> 0x003A7A98
*/
// Range: 0x3A7900 -> 0x3A7A98
void xScriptGuiItemSetDataID(signed int itemIdx /* r17 */, signed int dataID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7900 -> 0x3A7A98
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7AA0 -> 0x003A7DB0
*/
// Range: 0x3A7AA0 -> 0x3A7DB0
void xScriptGuiItemLink(signed int itemA /* r19 */, signed int dira /* r18 */, signed int itemB /* r17 */, signed int dirb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7AA0 -> 0x3A7DB0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7DB0 -> 0x003A8004
*/
// Range: 0x3A7DB0 -> 0x3A8004
void xScriptGuiItemSetPartUVUsingPart(signed int itemIdx /* r18 */, signed int modelID /* r17 */, signed int partID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7DB0 -> 0x3A8004
        class _xGuiItem * i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8010 -> 0x003A843C
*/
// Range: 0x3A8010 -> 0x3A843C
void xScriptGuiItemSetMayaVal(signed int itemIdx /* r18 */, signed int valIdx /* r17 */, signed int value /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A8010 -> 0x3A843C
        class _xGuiItem * i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8440 -> 0x003A85D0
*/
// Range: 0x3A8440 -> 0x3A85D0
void xScriptGuiItemSetMayaInfoModelID(signed int itemIdx /* r17 */, signed int modelID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A8440 -> 0x3A85D0
        class _xGuiItem * i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A85D0 -> 0x003A8760
*/
// Range: 0x3A85D0 -> 0x3A8760
void xScriptGuiItemSetMayaInfoTextureID(signed int itemIdx /* r17 */, signed int textureID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A85D0 -> 0x3A8760
        class _xGuiItem * i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8760 -> 0x003A89B4
*/
// Range: 0x3A8760 -> 0x3A89B4
void xScriptGuiItemSetMayaInfo(signed int itemIdx /* r19 */, signed int modelID /* r18 */, signed int textureID /* r17 */, signed int partID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A8760 -> 0x3A89B4
        class _xGuiItem * i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A89C0 -> 0x003A8BF4
*/
// Range: 0x3A89C0 -> 0x3A8BF4
void xScriptGuiItemSetPartID(signed int itemIdx /* r17 */, signed int partID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A89C0 -> 0x3A8BF4
        class _xGuiItem * i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8C00 -> 0x003A92D8
*/
// Range: 0x3A8C00 -> 0x3A92D8
void xScriptGuiItemSetColor(signed int itemIdx /* r20 */, signed int r /* r19 */, signed int g /* r18 */, signed int b /* r17 */, signed int a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A8C00 -> 0x3A92D8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A92E0 -> 0x003A9464
*/
// Range: 0x3A92E0 -> 0x3A9464
signed int xScriptGuiItemGetDataID(signed int itemIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A92E0 -> 0x3A9464
        class _xGuiItem * i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9470 -> 0x003A9628
*/
// Range: 0x3A9470 -> 0x3A9628
void xScriptGuiItemAdjustPos(signed int itemIdx /* r19 */, signed int dx /* r18 */, signed int dy /* r17 */, signed int dz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A9470 -> 0x3A9628
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9630 -> 0x003A97E8
*/
// Range: 0x3A9630 -> 0x3A97E8
void xScriptGuiItemSetPos(signed int itemIdx /* r19 */, signed int x /* r18 */, signed int y /* r17 */, signed int z /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A9630 -> 0x3A97E8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A97F0 -> 0x003A99C0
*/
// Range: 0x3A97F0 -> 0x3A99C0
void xScriptGuiItemAdjustOffset(signed int itemIdx /* r18 */, signed int dx /* r17 */, signed int dy /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A97F0 -> 0x3A99C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A99C0 -> 0x003A9B80
*/
// Range: 0x3A99C0 -> 0x3A9B80
void xScriptGuiItemSetOffset(signed int itemIdx /* r18 */, signed int dx /* r17 */, signed int dy /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A99C0 -> 0x3A9B80
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9B80 -> 0x003A9E80
*/
// Range: 0x3A9B80 -> 0x3A9E80
void xScriptGuiItemFuncCall(signed int sysIdx /* r18 */, signed int idx /* r17 */, signed int func /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A9B80 -> 0x3A9E80
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9E80 -> 0x003AA1A0
*/
// Range: 0x3A9E80 -> 0x3AA1A0
void xScriptGuiItemSetRenderFunc(signed int itemIdx /* r17 */, signed int funcID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A9E80 -> 0x3AA1A0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA1A0 -> 0x003AA490
*/
// Range: 0x3AA1A0 -> 0x3AA490
void xScriptGuiItemSelect(signed int sysIdx /* r17 */, signed int idx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AA1A0 -> 0x3AA490
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA490 -> 0x003AA628
*/
// Range: 0x3AA490 -> 0x3AA628
void xScriptGuiItemAdvanceText(signed int idx /* r17 */, signed int amount /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AA490 -> 0x3AA628
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA630 -> 0x003AA898
*/
// Range: 0x3AA630 -> 0x3AA898
signed int xScriptGuiItemCreate(signed int flag /* r17 */, signed int sysIdx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AA630 -> 0x3AA898
        class _xGuiItem * item; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AA8A0 -> 0x003AABB0
*/
// Range: 0x3AA8A0 -> 0x3AABB0
void xScriptGuiSysLink(signed int sysA /* r19 */, signed int dira /* r18 */, signed int sysB /* r17 */, signed int dirb /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AA8A0 -> 0x3AABB0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AABB0 -> 0x003AAD68
*/
// Range: 0x3AABB0 -> 0x3AAD68
void xScriptGuiSysSetDim(signed int sysIdx /* r19 */, signed int w /* r18 */, signed int h /* r17 */, signed int d /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AABB0 -> 0x3AAD68
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAD70 -> 0x003AAF28
*/
// Range: 0x3AAD70 -> 0x3AAF28
void xScriptGuiSysAdjustPos(signed int sysIdx /* r19 */, signed int dx /* r18 */, signed int dy /* r17 */, signed int dz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AAD70 -> 0x3AAF28
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AAF30 -> 0x003AB2F8
*/
// Range: 0x3AAF30 -> 0x3AB2F8
void xScriptGuiSysOffsetMoveTo(signed int sysID /* r20 */, signed int xoff /* r19 */, signed int yoff /* r18 */, signed int dx /* r17 */, signed int dy /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AAF30 -> 0x3AB2F8
        class _xGuiSys * sys; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AB300 -> 0x003AB4C8
*/
// Range: 0x3AB300 -> 0x3AB4C8
signed int xScriptGuiSysAtOffset(signed int sysID /* r18 */, signed int xoff /* r17 */, signed int yoff /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AB300 -> 0x3AB4C8
        class _xGuiSys * sys; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AB4D0 -> 0x003AB688
*/
// Range: 0x3AB4D0 -> 0x3AB688
void xScriptGuiSysAdjustOffset(signed int sysIdx /* r18 */, signed int dx /* r17 */, signed int dy /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AB4D0 -> 0x3AB688
        class _xGuiSys * sys; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AB690 -> 0x003AB838
*/
// Range: 0x3AB690 -> 0x3AB838
void xScriptGuiSysSetOffset(signed int sysIdx /* r18 */, signed int dx /* r17 */, signed int dy /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AB690 -> 0x3AB838
        class _xGuiSys * sys; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AB840 -> 0x003AB9F8
*/
// Range: 0x3AB840 -> 0x3AB9F8
void xScriptGuiSysSetPos(signed int sysIdx /* r19 */, signed int x /* r18 */, signed int y /* r17 */, signed int z /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3AB840 -> 0x3AB9F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ABA00 -> 0x003ABB88
*/
// Range: 0x3ABA00 -> 0x3ABB88
void xScriptGuiSysSet(signed int idx /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3ABA00 -> 0x3ABB88
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ABB90 -> 0x003ABD20
*/
// Range: 0x3ABB90 -> 0x3ABD20
void xScriptGuiSysSetPadObj(signed int idx /* r17 */, signed int padobj /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3ABB90 -> 0x3ABD20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ABD20 -> 0x003AC010
*/
// Range: 0x3ABD20 -> 0x3AC010
void xScriptGuiSysSetRenderFunc(signed int sys /* r17 */, signed int funcID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3ABD20 -> 0x3AC010
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AC010 -> 0x003AC108
*/
// Range: 0x3AC010 -> 0x3AC108
signed int xScriptGuiSysCreate(signed int flag /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3AC010 -> 0x3AC108
        class _xGuiSys * sys; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AC110 -> 0x003AC120
*/
// Range: 0x3AC110 -> 0x3AC120
void xGuiReInitializeInterpreter() {
    /* anonymous block */ {
        // Range: 0x3AC110 -> 0x3AC120
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGuiScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003AC120 -> 0x003AC598
*/
// Range: 0x3AC120 -> 0x3AC598
void xGuiRegisterExternals() {
    /* anonymous block */ {
        // Range: 0x3AC120 -> 0x3AC598
    }
}


