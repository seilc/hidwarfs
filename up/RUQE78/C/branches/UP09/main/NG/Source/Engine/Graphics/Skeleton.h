/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Skeleton.h
*/
// signature: Graphics::Skeleton::Flatten(Math::Matrix43 *, Math::Matrix33 *, int, int, const unsigned char *, const Math::Vector *, const Math::Quaternion *, const Math::Vector *)
// Range: 0x80301594 -> 0x80301864
void Graphics::Skeleton::Flatten(class Matrix43 * out /* r29 */, class Matrix33 * descaleOut /* r30 */, class Vector * scale /* r31 */) {
    {
        // Range: 0x803015C0 -> 0x80301728
        // Local variables
        int end; // r18
        int i; // r19

        {
            // Range: 0x803015C0 -> 0x80301728
            // Local variables
            int parent; // r20
            class Matrix43 descaleMat; // r1+0x138
            class Matrix43 mat; // r1+0x168

            {
                // Range: 0x8030164C -> 0x803016F8
                // Local variables
                class Vector outTran; // r1+0x68
                class Matrix43 descaleOutParent; // r1+0xD8
                class Matrix43 outParent; // r1+0x108
            }
        }
    }
    {
        // Range: 0x80301744 -> 0x80301840
        // Local variables
        int end; // r19
        int i; // r18

        {
            // Range: 0x80301744 -> 0x80301840
            // Local variables
            int parent; // r20
            class Matrix43 mat; // r1+0xA8

            {
                // Range: 0x803017A4 -> 0x80301820
                // Local variables
                class Vector outTran; // r1+0x58
                class Matrix43 outParent; // r1+0x78
            }
        }
    }
}
// signature: Graphics::Skeleton::Flatten(Math::Matrix43 *, int, int, const unsigned char *, const Math::Vector *, const Math::Quaternion *)
// Range: 0x80301A44 -> 0x80301CD4
void Graphics::Skeleton::Flatten(class Matrix43 * out /* r23 */) {
    {
        // Range: 0x80301A78 -> 0x80301A80
        // Local variables
        int end; // r24
        int i; // r25

        {
            // Range: 0x80301A78 -> 0x80301A80
            // Local variables
            int parent; // r0
            class Matrix43 mat; // r1+0x38
        }
    }

    // References
    // -> static class Matrix43 _matIdentity;
    // -> class Vector4 vec4Zero;
}
