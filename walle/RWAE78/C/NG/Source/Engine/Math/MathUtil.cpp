/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Math\MathUtil.cpp
*/
int binomTriangle[528]; // size: 0x840, address: 0x808041B0
// Range: 0x8028BD70 -> 0x8028BF14
static void @unnamed@WAD02_cpp@::CreateBinomTriangle() {
    // Local variables
    int * row0; // reg65535
    int * row1; // r5

    {
        // Range: 0x8028BD88 -> 0x8028BEE8
        // Local variables
        int i; // r6

        {
            // Range: 0x8028BD88 -> 0x8028BEE8
            // Local variables
            int * col1; // r9
            int * col01; // r8
            int * col00; // r7
        }
    }

    // References
    // -> int binomTriangle[528];
}
// signature: Math::ConvertOBBToAABB(Math::Vector &, Math::Vector &, const Math::Vector &, const Math::Vector &, const Math::Matrix43 &)
// Range: 0x8028BF14 -> 0x8028C294
void Math::ConvertOBBToAABB(class Vector * lowerAABB /* r29 */, class Vector * upperAABB /* r30 */, class Matrix43 * matOBB /* r31 */) {
    // Local variables
    class Vector localCenter; // r1+0x128
    class Vector localHalfSize; // r1+0x118
    class Matrix33 amat; // r1+0x138
    class Vector worldHalfSize; // r1+0x108
    class Vector worldCenter; // r1+0xF8
}
