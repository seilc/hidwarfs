/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Util\Sort.cpp
*/
// signature: Util::QuickSortInt(void *, int, int, int)
// Range: 0x80361E60 -> 0x80361E88
void Util::QuickSortInt() {
}
// signature: Util::QuickSortUint64(void *, int, int, int)
// Range: 0x803624C4 -> 0x803624EC
void Util::QuickSortUint64() {
}
// signature: Util::QuickSortPointer(void *, int, int, int)
// Range: 0x8036291C -> 0x80362944
void Util::QuickSortPointer() {
}
// signature: Util::@unnamed@WAD02_cpp@::RelativeSortRecur(Util::StackPoolArray<Util::@unnamed@WAD02_cpp@::RelativeNode> &, int, int, const int *const *, int *, int &)
// Range: 0x80362944 -> 0x80362A78
static bool Util::@unnamed@WAD02_cpp@::RelativeSortRecur(class StackPoolArray & nodes /* r24 */, int depth /* r25 */, int * * after /* r26 */, int * error /* r30 */, int & errorIndex /* r31 */) {
    // Local variables
    int * childIter; // r28

    {
        // Range: 0x8036296C -> 0x80362A5C
        // Local variables
        int childDepth; // r27
    }
}
// Range: 0x80362A78 -> 0x80362E5C
bool Util::RelativeSort(int * out /* r28 */, int num /* r29 */, int * * after /* r30 */, int * error /* r31 */) {
    // Local variables
    class StackPoolArray nodes; // r1+0x10

    {
        // Range: 0x80362ABC -> 0x80362ABC
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x80362C48 -> 0x80362CC8
        // Local variables
        int i; // r27

        {
            // Range: 0x80362C48 -> 0x80362CC8
            // Local variables
            int errorIndex; // r1+0xC
        }
    }
    {
        // Range: 0x80362CF0 -> 0x80362CF0
        // Local variables
        int i; // r3
    }

    // References
    // -> static class ThreadLocalStorage threadLocal;
}
