/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Util\Sort.cpp
*/
// signature: Util::@unnamed@WAD02_cpp@::SortUintFunctor::operator()(const void *, const void *) const
// Range: 0x80204A90 -> 0x80204ABC
static int Util::@unnamed@WAD02_cpp@::SortUintFunctor::operator()() const {
    // Local variables
    unsigned int uint1; // r3
    unsigned int uint2; // r0
}
// signature: Util::@unnamed@WAD02_cpp@::SortUint64Functor::operator()(const void *, const void *) const
// Range: 0x80204DA0 -> 0x80204DF4
static int Util::@unnamed@WAD02_cpp@::SortUint64Functor::operator()() const {
    // Local variables
    unsigned long long uint1; // r4:r5
    unsigned long long uint2; // r6:r7
}
// signature: Util::QuickSortInt(void *, int, int, int)
// Range: 0x80204520 -> 0x802047A8
void Util::QuickSortInt() {
}
// signature: Util::QuickSortUint(void *, int, int, int)
// Range: 0x802047B0 -> 0x80204A8C
void Util::QuickSortUint(int width /* r24 */) {
}
// signature: Util::QuickSortUint64(void *, int, int, int)
// Range: 0x80204AC0 -> 0x80204D9C
void Util::QuickSortUint64(int width /* r24 */) {
}
// signature: Util::@unnamed@WAD02_cpp@::RelativeSortRecur(Util::StackPoolArray<Util::@unnamed@WAD02_cpp@::RelativeNode> &, int, int, const int *const *, int *, int &)
// Range: 0x80204E00 -> 0x80204F34
static bool Util::@unnamed@WAD02_cpp@::RelativeSortRecur(class StackPoolArray & nodes /* r24 */, int depth /* r25 */, int * * after /* r26 */, int * error /* r30 */, int & errorIndex /* r31 */) {
    // Local variables
    int * childIter; // r28

    {
        // Range: 0x80204E28 -> 0x80204F18
        // Local variables
        int childDepth; // r27
    }
}
// Range: 0x80204F40 -> 0x80205078
bool Util::RelativeSort(int * out /* r31 */, int num /* r26 */, int * * after /* r27 */, int * error /* r28 */) {
    // Local variables
    class StackPoolArray nodes; // r1+0xC

    {
        // Range: 0x80204F6C -> 0x80204FAC
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80204FAC -> 0x80205010
        // Local variables
        int i; // r29

        {
            // Range: 0x80204FAC -> 0x80205010
            // Local variables
            int errorIndex; // r1+0x8
        }
    }
    {
        // Range: 0x80205024 -> 0x80205054
        // Local variables
        int i; // r0
    }
}
