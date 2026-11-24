/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTFactory.cpp
*/
class Factory factory; // size: 0x3C, address: 0x80731210
class FactoryMemTypeLeakCBRegisterer MemTypeCBRegBTFactory; // size: 0x1, address: 0x8073124C
// Range: 0x80081A70 -> 0x80081AC8
void zBTFactory::SceneInit() {
    // References
    // -> class Factory factory;
}
// Range: 0x80081AD0 -> 0x80081ADC
void zBTFactory::SceneExit() {
    // References
    // -> class Factory factory;
}
// signature: zBTFactory::Destroy(void *)
// Range: 0x80081AE0 -> 0x80081AF0
void zBTFactory::Destroy() {
    // References
    // -> class Factory factory;
}
// signature: zBTFactory::Allocate(unsigned int)
// Range: 0x80081AF0 -> 0x80081B04
void * zBTFactory::Allocate() {
    // References
    // -> class Factory factory;
}
