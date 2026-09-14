/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEntMotion.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F070 -> 0x8002F168
*/
// Range: 0x8002F070 -> 0x8002F08C
void xEntMPSetSpeed(struct xEntMotion * motion /* r0 */, float speed /* f1 */) {}

// Range: 0x8002F08C -> 0x8002F0A8
unsigned int xEntERIsRetracted(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x8002F0A8 -> 0x8002F0D8
unsigned int xEntERIsRetracting(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x8002F0D8 -> 0x8002F108
unsigned int xEntERIsExtended(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x8002F108 -> 0x8002F120
unsigned int xEntERIsExtending(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x8002F120 -> 0x8002F130
void xEntMotionStop(struct xEntMotion * motion /* r0 */) {}

// Range: 0x8002F130 -> 0x8002F158
unsigned char xEntMPAtEnd(struct xEntMotion * motion /* r0 */) {
    // Local variables
    struct xEntMPData * mp; // r0
}

// Range: 0x8002F158 -> 0x8002F168
void xEntMotionRun(struct xEntMotion * motion /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEntMotion.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009F894 -> 0x8009F8A0
*/
// Range: 0x8009F894 -> 0x8009F8A0
unsigned int xEntMotionIsStopped(const struct xEntMotion * motion /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEntMotion.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C40C4 -> 0x800C40C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xEntMotion.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8370 -> 0x800C8500
*/
// Range: 0x800C8370 -> 0x800C83A4
void xEntMotionAccelerate(struct xEntMotion * motion /* r0 */, float new_speed /* f0 */, float time /* f0 */) {}

// Range: 0x800C83A4 -> 0x800C83C8
void xEntSplineAccelerate(struct xEntMotion * motion /* r3 */, float new_speed /* f0 */, float time /* f0 */) {}

// Range: 0x800C83C8 -> 0x800C83F4
void xEntSpeedDataSet(struct xEntSpeedData * speed_data /* r0 */, float new_speed /* f1 */, float time /* f0 */) {}

// Range: 0x800C83F4 -> 0x800C8418
void xEntMPAccelerate(struct xEntMotion * motion /* r3 */, float new_speed /* f0 */, float time /* f0 */) {}

// Range: 0x800C8418 -> 0x800C844C
float xEntMotionGetSpeed(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x800C844C -> 0x800C8454
float xEntSplineGetSpeed(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x800C8454 -> 0x800C845C
float xEntMPGetSpeed(const struct xEntMotion * motion /* r0 */) {}

// Range: 0x800C845C -> 0x800C8490
void xEntMotionSetSpeed(struct xEntMotion * motion /* r0 */, float speed /* f0 */) {}

// Range: 0x800C8490 -> 0x800C84B4
void xEntSplineSetSpeed(struct xEntMotion * motion /* r0 */, float speed /* f0 */) {}

// Range: 0x800C84B4 -> 0x800C84E8
void xEntMotionReverse(struct xEntMotion * motion /* r0 */) {}

// Range: 0x800C84E8 -> 0x800C8500
void xEntSplineReverse(struct xEntMotion * motion /* r0 */) {}


