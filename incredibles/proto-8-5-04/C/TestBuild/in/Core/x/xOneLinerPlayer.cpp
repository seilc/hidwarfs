/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x14
struct /* @anon5 */ {} CUniqueAmountGreaterThanX::__vtable; // size: 0x14, address: 0x600FB0
// total size: 0x14
struct /* @anon2 */ {} BasicInform::__vtable; // size: 0x14, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0x14
struct /* @anon4 */ {} CHappensXTimesWithinY::__vtable; // size: 0x14, address: 0x600FD0
// total size: 0x14
struct /* @anon3 */ {} CXNumUniqueWithinY::__vtable; // size: 0x14, address: 0x600FF0
// total size: 0x14
struct /* @anon0 */ {} CUniqueAmountLessThanX::__vtable; // size: 0x14, address: 0x601010
// total size: 0x14
struct /* @anon6 */ {} CTrueForYLong::__vtable; // size: 0x14, address: 0x601030
// total size: 0x14
struct /* @anon1 */ {} CActiveEvent::__vtable; // size: 0x14, address: 0x601050
// total size: 0x8
class testerPlayer {
    // Members
public:
    signed int firstParam; // offset 0x0, size 0x4
    float secondParam; // offset 0x4, size 0x4
};
// total size: 0x58
class CXNumUniqueWithinY : public BasicInform {
    // Members
public:
    void * m_Uniqueness[10]; // offset 0x4, size 0x28
    float m_fHitTimeCountdown[10]; // offset 0x2C, size 0x28
    signed int m_nUniqueCount; // offset 0x54, size 0x4
};
enum iSndGroupHandle {
};
// total size: 0xC
class CTrueForYLong : public BasicInform {
    // Members
public:
    float m_fTruthStartTime; // offset 0x4, size 0x4
    void * m_Uniqueness; // offset 0x8, size 0x4
};
// total size: 0xC
class CUniqueAmountLessThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x14
struct /* @anon0 */ {};
// total size: 0xC
class CUniqueAmountGreaterThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x14
struct /* @anon1 */ {};
// total size: 0x44
class xOneLiner {
    // Members
public:
    unsigned int m_soundGroupNameHash; // offset 0x0, size 0x4
    float m_fSoundStartDelay; // offset 0x4, size 0x4
    float m_fTimeSpan; // offset 0x8, size 0x4
    float m_fTimeLastPlayed; // offset 0xC, size 0x4
    unsigned int m_uNumPlays; // offset 0x10, size 0x4
    float m_fDelayBetweenPlays; // offset 0x14, size 0x4
    float m_fProbability; // offset 0x18, size 0x4
    float m_fDefaultDuration; // offset 0x1C, size 0x4
    float m_fLastDuration; // offset 0x20, size 0x4
    unsigned int m_uMaxPlays; // offset 0x24, size 0x4
    enum iSndGroupHandle m_soundGroupHandle; // offset 0x28, size 0x4
    class xOneLinerManager * m_pOLManager; // offset 0x2C, size 0x4
    signed short m_eventType; // offset 0x30, size 0x2
    signed short m_bPlaysInMusicChannel; // offset 0x32, size 0x2
    class BasicInform * m_pData; // offset 0x34, size 0x4
    enum ePlayerType m_playerType; // offset 0x38, size 0x4
    class testerPlayer m_testerData; // offset 0x3C, size 0x8
};
// total size: 0x14
struct /* @anon2 */ {};
// total size: 0x24
class xOneLinerManager {
    // Members
public:
    class xOneLiner * m_aOneLinerPlayers; // offset 0x0, size 0x4
    signed int m_iNextSound; // offset 0x4, size 0x4
    enum iSndGroupHandle m_currentSoundID; // offset 0x8, size 0x4
    float m_pauseBetweenSounds; // offset 0xC, size 0x4
    float m_lastUpdateTime; // offset 0x10, size 0x4
    float m_lastPlayedTime; // offset 0x14, size 0x4
    float m_queuedSoundTimer; // offset 0x18, size 0x4
    unsigned short m_NumEventTypes; // offset 0x1C, size 0x2
    unsigned short m_NumOLPlayers; // offset 0x1E, size 0x2
    unsigned short m_nextSoundPriority; // offset 0x20, size 0x2
    unsigned short m_priorityFilter; // offset 0x22, size 0x2
};
// total size: 0x8
class CActiveEvent : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
};
// total size: 0x30
class CHappensXTimesWithinY : public BasicInform {
    // Members
public:
    float m_fHappenTimeCountdown[10]; // offset 0x4, size 0x28
    signed int m_nHappenedCount; // offset 0x2C, size 0x4
};
// total size: 0x14
struct /* @anon3 */ {};
enum ePlayerType {
    eALWAYS = 0,
    eCOUNTER = 1,
    eCHECKER = 2,
    eTESTER = 3,
    ePLAYER_TYPE_SIZE = 4,
};
// total size: 0x4
class BasicInform {};
// total size: 0x14
struct /* @anon4 */ {};
// total size: 0x14
struct /* @anon5 */ {};
// total size: 0x14
struct /* @anon6 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002970F0 -> 0x00297220
*/
// Range: 0x2970F0 -> 0x297220
// this: r17
unsigned char xOneLiner::UpdatePlaySound(float currentTime /* r29+0x40 */, float fRollsPerSecond /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2970F0 -> 0x297220
        unsigned char play; // r16
        unsigned char roll; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297220 -> 0x00297394
*/
// Range: 0x297220 -> 0x297394
// this: r16
unsigned char xOneLiner::Init() {
    /* anonymous block */ {
        // Range: 0x297220 -> 0x297394
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002973A0 -> 0x002973AC
*/
// Range: 0x2973A0 -> 0x2973AC
// this: r2
void CUniqueAmountGreaterThanX::Inform(float fDuration /* r29 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2973A0 -> 0x2973AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002973B0 -> 0x002973F8
*/
// Range: 0x2973B0 -> 0x2973F8
// this: r2
unsigned char CUniqueAmountGreaterThanX::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2973B0 -> 0x2973F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297400 -> 0x00297410
*/
// Range: 0x297400 -> 0x297410
// this: r2
unsigned char CUniqueAmountGreaterThanX::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297400 -> 0x297410
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297410 -> 0x00297494
*/
// Range: 0x297410 -> 0x297494
// this: r2
void CHappensXTimesWithinY::Inform(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297410 -> 0x297494
        signed int replaceIndex; // r8
        float leastTimeLeft; // r1
        signed int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002974A0 -> 0x00297508
*/
// Range: 0x2974A0 -> 0x297508
// this: r2
unsigned char CHappensXTimesWithinY::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2974A0 -> 0x297508
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297510 -> 0x00297524
*/
// Range: 0x297510 -> 0x297524
// this: r2
unsigned char CHappensXTimesWithinY::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297510 -> 0x297524
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297530 -> 0x002975F8
*/
// Range: 0x297530 -> 0x2975F8
// this: r2
void CXNumUniqueWithinY::Inform(class testerPlayer & data /* r2 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297530 -> 0x2975F8
        signed int replaceIndex; // r10
        float leastTimeLeft; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297600 -> 0x00297670
*/
// Range: 0x297600 -> 0x297670
// this: r2
unsigned char CXNumUniqueWithinY::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x297600 -> 0x297670
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297670 -> 0x00297680
*/
// Range: 0x297670 -> 0x297680
// this: r2
unsigned char CXNumUniqueWithinY::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297670 -> 0x297680
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297680 -> 0x0029768C
*/
// Range: 0x297680 -> 0x29768C
// this: r2
void CUniqueAmountLessThanX::Inform(float fDuration /* r29 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297680 -> 0x29768C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297690 -> 0x002976D8
*/
// Range: 0x297690 -> 0x2976D8
// this: r2
unsigned char CUniqueAmountLessThanX::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x297690 -> 0x2976D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002976E0 -> 0x002976F0
*/
// Range: 0x2976E0 -> 0x2976F0
// this: r2
unsigned char CUniqueAmountLessThanX::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2976E0 -> 0x2976F0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002976F0 -> 0x0029774C
*/
// Range: 0x2976F0 -> 0x29774C
// this: r16
void CTrueForYLong::Inform(void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2976F0 -> 0x29774C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297750 -> 0x0029775C
*/
// Range: 0x297750 -> 0x29775C
// this: r2
unsigned char CTrueForYLong::Age() {
    /* anonymous block */ {
        // Range: 0x297750 -> 0x29775C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297760 -> 0x002977CC
*/
// Range: 0x297760 -> 0x2977CC
// this: r17
unsigned char CTrueForYLong::Test(class testerPlayer & data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x297760 -> 0x2977CC
        float fTrueForSeconds; // r1
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002977D0 -> 0x002977D8
*/
// Range: 0x2977D0 -> 0x2977D8
// this: r2
void CActiveEvent::Inform(float fDuration /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2977D0 -> 0x2977D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002977E0 -> 0x00297828
*/
// Range: 0x2977E0 -> 0x297828
// this: r2
unsigned char CActiveEvent::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2977E0 -> 0x297828
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297830 -> 0x00297838
*/
// Range: 0x297830 -> 0x297838
unsigned char Test() {
    /* anonymous block */ {
        // Range: 0x297830 -> 0x297838
    }
}


