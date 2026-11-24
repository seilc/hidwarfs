/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Util\ScreenShot.cpp
*/
char * frameDumpFilePrefix; // size: 0x4, address: 0x8084AD08
unsigned int frameDumpSeqNum; // size: 0x4, address: 0x8084AD0C
char frameDumpFileName[45]; // size: 0x2D, address: 0x8084AD10
bool frameDumpInProgress; // size: 0x1, address: 0x8084AD3D
float frameDumpFPS; // size: 0x4, address: 0x8084AD40
int frameDumpDelay; // size: 0x4, address: 0x8084AD44
class DeferFrameDumpEnd deferFrameDumpEnd; // size: 0x1, address: 0x8084AD48
// Range: 0x8030EE28 -> 0x8030EE48
char * Graphics::frameDumpGetNextFileName() {
    // References
    // -> char frameDumpFileName[45];
    // -> bool frameDumpInProgress;
}
// Range: 0x8030EE48 -> 0x8030EE54
float Graphics::frameDumpGetFPS() {
    // References
    // -> float frameDumpFPS;
}
// Range: 0x8030EE54 -> 0x8030EE64
void Graphics::DeferFrameDumpEnd::frameDumpEndDefered() {
    // References
    // -> bool frameDumpInProgress;
}
