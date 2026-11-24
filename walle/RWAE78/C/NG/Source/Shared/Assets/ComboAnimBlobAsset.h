/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Shared\Assets\ComboAnimBlobAsset.h
*/
// signature: World::RefQuat3_DecompressStride4(float *, const short *)
// Range: 0x8007C4E0 -> 0x8007C688
void World::RefQuat3_DecompressStride4(float * out /* r31 */) {
    // Local variables
    int bit0; // r30
    int bit1; // r29
    int bit2; // r28
    float in0; // f28
    float in1; // f27
    float in2; // f26
    float in3; // f0
}
// signature: World::RefQuat_Lerp(float *, const float *, const float *, float, bool)
// Range: 0x8007C690 -> 0x8007C914
void World::RefQuat_Lerp(float * o /* r28 */, float * a /* r29 */, float * b /* r30 */, float t /* f31 */) {
    // Local variables
    float asph; // f8
    float bsph; // f9
    float one_sintheta; // f28
    float theta; // f0
    float abdot; // f2
    float bsphmul; // f30

    {
        // Range: 0x8007C72C -> 0x8007C838
        // Local variables
        float magsqr; // f28
        float invmag; // r31
    }
}
// signature: World::ComboAnimBlobAssetV2::SegmentHeader::RefEval(unsigned int, float, float *, float *, float *, unsigned short, int, int)
// Range: 0x80079640 -> 0x8007C4D8
void World::ComboAnimBlobAssetV2::SegmentHeader::RefEval(class SegmentHeader * this /* r15 */, float frameF /* f31 */, float * outRot /* r16 */, float * outScale /* r17 */, float * outTran /* r18 */, int vec3stride /* r19 */, int ogEvalFlags /* r1+0x8 */) {
    // Local variables
    bool doNlerp; // r25
    short * rotConstQuats; // r28
    float * scaleConstVecs; // r9
    float * tranConstVecs; // r11
    unsigned short * frameTimes; // r11
    unsigned short * tableOfContents; // r24
    unsigned short * outIndicesU16; // r23
    unsigned char * outIndicesU8; // r22
    unsigned short * keyData; // r21
    int frameIdx; // r7
    int outIndex; // r4

    {
        // Range: 0x800798A4 -> 0x800798D8
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80079A80 -> 0x80079B88
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x80079BC8 -> 0x80079BCC
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80079CCC -> 0x80079E58
        // Local variables
        int i; // r20

        {
            // Range: 0x80079CCC -> 0x80079E58
            // Local variables
            class QuatInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x80079E98 -> 0x8007A2EC
        // Local variables
        class QuatSingleKey * key; // r0
    }
    {
        // Range: 0x8007A2FC -> 0x8007A300
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007A454 -> 0x8007A454
        // Local variables
        int i; // r14

        {
            // Range: 0x8007A454 -> 0x8007A454
            // Local variables
            class QuatSingleKey * key; // r0
        }
    }
    {
        // Range: 0x8007A964 -> 0x8007A990
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x8007AA78 -> 0x8007AAA4
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x8007AAE8 -> 0x8007AAEC
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007ABEC -> 0x8007ADF4
        // Local variables
        int i; // r7

        {
            // Range: 0x8007ABEC -> 0x8007ADF4
            // Local variables
            class VecInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x8007AF9C -> 0x8007B0CC
        // Local variables
        class VecSingleKey * key; // r0
    }
    {
        // Range: 0x8007B0E4 -> 0x8007B0E8
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007B23C -> 0x8007B27C
        // Local variables
        int i; // r3

        {
            // Range: 0x8007B23C -> 0x8007B27C
            // Local variables
            class VecSingleKey * key; // r0
        }
    }
    {
        // Range: 0x8007B3AC -> 0x8007B46C
        // Local variables
        class VecRawKey * key; // r0
    }
    {
        // Range: 0x8007B484 -> 0x8007B488
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007B5DC -> 0x8007B614
        // Local variables
        int i; // r6

        {
            // Range: 0x8007B5DC -> 0x8007B614
            // Local variables
            class VecRawKey * key; // r0
        }
    }
    {
        // Range: 0x8007B758 -> 0x8007B788
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x8007B860 -> 0x8007B88C
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x8007B8C8 -> 0x8007B8CC
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007B9CC -> 0x8007BBD4
        // Local variables
        int i; // r7

        {
            // Range: 0x8007B9CC -> 0x8007BBD4
            // Local variables
            class VecInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x8007BD7C -> 0x8007BEA4
        // Local variables
        class VecSingleKey * key; // r0
    }
    {
        // Range: 0x8007BEB4 -> 0x8007BEB8
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007C00C -> 0x8007C04C
        // Local variables
        int i; // r3

        {
            // Range: 0x8007C00C -> 0x8007C04C
            // Local variables
            class VecSingleKey * key; // r0
        }
    }
    {
        // Range: 0x8007C17C -> 0x8007C234
        // Local variables
        class VecRawKey * key; // r0
    }
    {
        // Range: 0x8007C244 -> 0x8007C248
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x8007C374 -> 0x8007C3AC
        // Local variables
        int i; // r6

        {
            // Range: 0x8007C374 -> 0x8007C3AC
            // Local variables
            class VecRawKey * key; // r0
        }
    }
}
// signature: World::ComboAnimBlobAssetV2::RefEvalJoints(float, float *, float *, float *, int, int) const
// Range: 0x8024B94C -> 0x8024BAA4
void World::ComboAnimBlobAssetV2::RefEvalJoints(class ComboAnimBlobAssetV2 * this /* r26 */, float * outRot /* r27 */, float * outScale /* r28 */, float * outTran /* r29 */, int vec3stride /* r30 */, int ogEvalFlags /* r31 */) const {
    // Local variables
    float frameF; // f31
    unsigned int frameU; // r3
    unsigned int segI; // r5
    unsigned int numJ; // r4
}
// signature: World::ComboAnimBlobAssetV2::RefEvalVisibility(float, unsigned int) const
// Range: 0x8024B7F4 -> 0x8024B8DC
unsigned char World::ComboAnimBlobAssetV2::RefEvalVisibility(class ComboAnimBlobAssetV2 * this /* r30 */, unsigned int index /* r31 */) const {
    // Local variables
    float frameF; // f1
    unsigned int frameU; // r3
    unsigned int visIndex; // r4
}
