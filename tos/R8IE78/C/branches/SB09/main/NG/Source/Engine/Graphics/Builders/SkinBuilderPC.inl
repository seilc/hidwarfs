/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Builders\SkinBuilderPC.inl
*/
// signature: SkinPosNormTan::Transform(Graphics::SkinOutputPosNormTan *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x801DBFB0 -> 0x801DC9C0
void SkinPosNormTan::Transform(class SkinOutputPosNormTan * overtPos /* r25 */, class Matrix43 * skinMat /* r26 */, class SkinSection * sections /* r27 */, int sectionCount /* r28 */) {
    // Local variables
    class SkinOutputPosNormTan * overtPosEnd; // r31
    class Matrix43 * mat0; // r21
    class Matrix43 * mat1; // r21
    class Matrix43 * mat2; // r21
    class Matrix43 * mat3; // r20
    class Vector pos; // r1+0x1D8
    class Vector posTemp; // r1+0x1C8
    class Vector norm; // r1+0x1B8
    class Vector normTemp; // r1+0x1A8
    class Vector tanTemp; // r1+0x198
    class Vector4 tan; // r1+0x188
    int sect; // r30
    class PC_PNT * cur1; // reg65535
    class PC_WPNT * curN; // r29

    {
        // Range: 0x801DBFF4 -> 0x801DBFF4
        // Local variables
        unsigned char * skinMatU8; // r0

        {
            // Range: 0x801DBFF4 -> 0x801DBFF4
            // Local variables
            class Vector itan; // r1+0x158
            class Vector inorm; // r1+0x168
            class Vector ipos; // r1+0x178
        }
    }
    {
        // Range: 0x801DBFF4 -> 0x801DC380
        // Local variables
        class Vector itan; // r1+0x128
        class Vector inorm; // r1+0x138
        class Vector ipos; // r1+0x148
        float weight1; // f28
        float weight0; // f29
        unsigned int index; // r5
    }
    {
        // Range: 0x801DC3A0 -> 0x801DC62C
        // Local variables
        class Vector itan; // r1+0xF8
        class Vector inorm; // r1+0x108
        class Vector ipos; // r1+0x118
        float weight2; // f27
        float weight1; // f29
        float weight0; // f28
        unsigned int index; // r7
    }
    {
        // Range: 0x801DC64C -> 0x801DC964
        // Local variables
        class Vector itan; // r1+0xC8
        class Vector inorm; // r1+0xD8
        class Vector ipos; // r1+0xE8
        float weight3; // f26
        float weight2; // f29
        float weight1; // f28
        float weight0; // f27
        unsigned int index; // r8
    }
}
