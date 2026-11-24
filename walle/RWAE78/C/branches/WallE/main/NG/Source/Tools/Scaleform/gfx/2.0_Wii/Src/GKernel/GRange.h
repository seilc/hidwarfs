/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStyledText.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GRange.h
*/
// Range: 0x8057D2C0 -> 0x8057D508
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::Iterator::InsertBefore(class GRangeData & range /* r27 */) {
}
// Range: 0x8057D070 -> 0x8057D2B8
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::Iterator::InsertAfter(class GRangeData & range /* r27 */) {
}
// Range: 0x8057CF00 -> 0x8057D064
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::Iterator::Remove() {
}
// signature: GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::FindNearestRangeIndex(long) const
// Range: 0x8057CD40 -> 0x8057CEFC
unsigned long GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::FindNearestRangeIndex() const {
    // Local variables
    unsigned long lower; // r0
    unsigned long upper; // r5
    unsigned long lowest; // r6

    {
        // Range: 0x8057CD64 -> 0x8057CDEC
        // Local variables
        unsigned long middle; // r11
    }
}
// signature: GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::GetIteratorByNearestIndex(long)
// Range: 0x8057CCC0 -> 0x8057CD40
class Iterator GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::GetIteratorByNearestIndex(class GRangeDataArray * this /* r31 */) {
}
// signature: GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::GetIteratorByNearestIndex(long) const
// Range: 0x805787E0 -> 0x80578860
class ConstIterator GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::GetIteratorByNearestIndex(class GRangeDataArray * this /* r31 */) const {
}
// Range: 0x80578FC0 -> 0x805797AC
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::SetRange(class GRangeData & range /* r30 */) {
    {
        // Range: 0x80578FD8 -> 0x8057977C
        // Local variables
        class Iterator nextIt; // r1+0x10
        class Iterator firstRangeIt; // r1+0x18
        class Iterator insertionPoint; // r1+0x20
        class Iterator it; // r1+0x28

        {
            // Range: 0x80579148 -> 0x8057927C
            // Local variables
            class GRangeData r; // r1+0x30
        }
    }
}
// Range: 0x80578E70 -> 0x80578FC0
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::ExpandRange(long startPos /* r30 */, unsigned long length /* r31 */) {
    {
        // Range: 0x80578E8C -> 0x80578FA8
        // Local variables
        class Iterator it; // r1+0x8
    }
}
// Range: 0x80578860 -> 0x80578E6C
void GRangeDataArray<GPtr<GFxTextFormat>, std::garray<GRangeData<GPtr<GFxTextFormat>>>>::RemoveRange(long startPos /* r29 */, unsigned long length /* r30 */) {
    {
        // Range: 0x80578880 -> 0x80578E28
        // Local variables
        class GRangeData range; // r1+0x18
        class Iterator removalPoint; // r1+0x8
        class Iterator it; // r1+0x10
    }
}
