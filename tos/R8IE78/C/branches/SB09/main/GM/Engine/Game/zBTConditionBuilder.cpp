/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTConditionBuilder.cpp
*/
class zBTConditionTrue gConditionTrue; // size: 0xC, address: 0x80731250
class zBTConditionFalse gConditionFalse; // size: 0xC, address: 0x8073125C
// signature: zBTConditionBuilder::Build(int, Sext::ConditionBase *) const
// Range: 0x80082790 -> 0x80083228
class zBTCondition * zBTConditionBuilder::Build(class zBTConditionBuilder * this /* r30 */, class ConditionBase * asset /* r31 */) const {
    // Local variables
    class zBTCondition * condition; // r29

    // References
    // -> class zBTConditionFalse gConditionFalse;
    // -> class zBTConditionTrue gConditionTrue;
}
// Range: 0x80084F20 -> 0x80085014
void zBTConditionBuilder::Destroy(class zBTCondition * condition /* r31 */) const {
    // References
    // -> class Factory factory;
}
