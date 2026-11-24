/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Util\Sort.cpp
*/
// signature: Util::QuickSortInt(void *, int, int, int)
// Range: 0x802BA52C -> 0x802BA554
void Util::QuickSortInt() {
}
// signature: Util::QuickSortUint64(void *, int, int, int)
// Range: 0x802BA810 -> 0x802BA838
void Util::QuickSortUint64() {
}
// signature: Util::QuickSortPointer(void *, int, int, int)
// Range: 0x802BAC68 -> 0x802BAC90
void Util::QuickSortPointer() {
}
// signature: Util::@unnamed@WAD02_cpp@::RelativeSortRecur(Util::StackPoolArray<Util::@unnamed@WAD02_cpp@::RelativeNode> &, int, int, const int *const *, int *, int &)
// Range: 0x802BAF4C -> 0x802BB080
static bool Util::@unnamed@WAD02_cpp@::RelativeSortRecur(class StackPoolArray * nodes /* r24 */, int depth /* r25 */, int * * after /* r26 */, int * error /* r30 */, int * errorIndex /* r31 */) {
    // Local variables
    int * childIter; // r28

    {
        // Range: 0x802BAF74 -> 0x802BB064
        // Local variables
        int childDepth; // r27
    }
}
// Range: 0x802BB080 -> 0x802BB464
bool Util::RelativeSort(int * out /* r28 */, int num /* r29 */, int * * after /* r30 */, int * error /* r31 */) {
    // Local variables
    class StackPoolArray nodes; // r1+0x10

    {
        // Range: 0x802BB0C4 -> 0x802BB0C4
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x802BB250 -> 0x802BB2D0
        // Local variables
        int i; // r27

        {
            // Range: 0x802BB250 -> 0x802BB2D0
            // Local variables
            int errorIndex; // r1+0xC
        }
    }
    {
        // Range: 0x802BB2F8 -> 0x802BB2F8
        // Local variables
        int i; // r3
    }

    // References
    // -> static class ThreadLocalStorage threadLocal;
}
