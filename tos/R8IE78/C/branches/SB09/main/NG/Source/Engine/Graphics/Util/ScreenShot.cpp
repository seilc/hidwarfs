/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Util\ScreenShot.cpp
*/
char * frameDumpFilePrefix; // size: 0x4, address: 0x80779560
unsigned int frameDumpSeqNum; // size: 0x4, address: 0x80779564
char frameDumpFileName[45]; // size: 0x2D, address: 0x80779568
bool frameDumpInProgress; // size: 0x1, address: 0x80779595
float frameDumpFPS; // size: 0x4, address: 0x80779598
int frameDumpDelay; // size: 0x4, address: 0x8077959C
class DeferFrameDumpEnd deferFrameDumpEnd; // size: 0x1, address: 0x807795A0
// Range: 0x801DD2A0 -> 0x801DD2C0
char * Graphics::frameDumpGetNextFileName() {
    // References
    // -> char frameDumpFileName[45];
    // -> bool frameDumpInProgress;
}
// Range: 0x801DD2C0 -> 0x801DD2CC
float Graphics::frameDumpGetFPS() {
    // References
    // -> float frameDumpFPS;
}
