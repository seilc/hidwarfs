/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Builders\SkinBuilderWii.cpp
*/
// signature: SkinIdentityPos::Transform(Graphics::SkinOutputPosition *, const void *, const Graphics::SkinSection *, int)
// Range: 0x8030A568 -> 0x8030A6B4
void SkinIdentityPos::Transform(void * ivertPos /* r29 */, class SkinSection * sections /* r30 */, int sectionCount /* r31 */) {
    // Local variables
    void * wgPipe; // r0
    float posX; // f0
    float posY; // f1
    float posZ; // f2
    int sect; // r5
    class WII_P * cur1; // reg65535
    class WII_WP * curN; // reg65535

    {
        // Range: 0x8030A5C8 -> 0x8030A628
        // Local variables
        int secsize; // r4

        {
            // Range: 0x8030A5EC -> 0x8030A5F8
            // Local variables
            int idx; // r0

            {
                // Range: 0x8030A5EC -> 0x8030A5EC
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x8030A5F8 -> 0x8030A5F8
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
    {
        // Range: 0x8030A628 -> 0x8030A670
        // Local variables
        int secsize; // r6

        {
            // Range: 0x8030A640 -> 0x8030A64C
            // Local variables
            int idx; // r0

            {
                // Range: 0x8030A640 -> 0x8030A640
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x8030A64C -> 0x8030A64C
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
}
// signature: SkinIdentityPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Graphics::SkinSection *, int)
// Range: 0x8030A6B4 -> 0x8030A858
void SkinIdentityPosNorm::Transform(void * ivertPos /* r29 */, class SkinSection * sections /* r30 */, int sectionCount /* r31 */) {
    // Local variables
    void * wgPipe; // r0
    float posX; // f0
    float posY; // f1
    float posZ; // f2
    float normX; // f3
    float normY; // f4
    float normZ; // f5
    int sect; // r5
    class WII_PN * cur1; // reg65535
    class WII_WPN * curN; // reg65535

    {
        // Range: 0x8030A714 -> 0x8030A7A0
        // Local variables
        int secsize; // r4

        {
            // Range: 0x8030A738 -> 0x8030A788
            // Local variables
            int idx; // r0

            {
                // Range: 0x8030A738 -> 0x8030A738
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x8030A744 -> 0x8030A744
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x8030A750 -> 0x8030A750
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x8030A750 -> 0x8030A750
                // Local variables
                float work3; // f2
                float work2; // f0
                float work1; // f1
                float work0; // f0
            }
        }
    }
    {
        // Range: 0x8030A7A0 -> 0x8030A814
        // Local variables
        int secsize; // r6

        {
            // Range: 0x8030A7B8 -> 0x8030A808
            // Local variables
            int idx; // r0

            {
                // Range: 0x8030A7B8 -> 0x8030A7B8
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x8030A7C4 -> 0x8030A7C4
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x8030A7D0 -> 0x8030A7D0
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x8030A7D0 -> 0x8030A7D0
                // Local variables
                float work3; // f2
                float work2; // f0
                float work1; // f1
                float work0; // f0
            }
        }
    }
}
// signature: SkinIdentityPosNormTan::Transform(Graphics::SkinOutputPosNormTan *, const void *, const Graphics::SkinSection *, int)
// Range: 0x8030A858 -> 0x8030ABE4
void SkinIdentityPosNormTan::Transform() {
    // Local variables
    int sect; // r9
    class PC_PNT * cur1; // r4
    class PC_WPNT * curN; // r4

    {
        // Range: 0x8030A868 -> 0x8030AA1C
        // Local variables
        int secsize; // r8

        {
            // Range: 0x8030A88C -> 0x8030A968
            // Local variables
            int idx; // r0
        }
    }
    {
        // Range: 0x8030AA1C -> 0x8030ABB8
        // Local variables
        int secsize; // r10

        {
            // Range: 0x8030AA34 -> 0x8030AB10
            // Local variables
            int idx; // r0
        }
    }
}
// signature: SkinPos::Transform(Graphics::SkinOutputPosition *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x8030ABE4 -> 0x8030B904
void SkinPos::Transform(class SkinOutputPosition * overtPos /* r27 */, void * ivertPos /* r28 */, class Matrix43 * skinMat /* r29 */, class SkinSection * sections /* r30 */, int sectionCount /* r31 */) {
    // Local variables
    class SkinOutputPosition * overtPosEnd; // r7
    void * wgPipe; // r0
    float matX0; // f0
    float matX1; // f1
    float matX2; // f2
    float matX3; // f3
    float matY0; // f3
    float matY1; // f0
    float matY2; // f4
    float matY3; // f5
    float matZ0; // f1
    float matZ1; // f3
    float matZ2; // f5
    float matZ3; // f6
    float iPosX; // f7
    float iPosY; // f8
    float iPosZ; // f9
    float oPosX; // f10
    float oPosY; // f11
    float oPosZ; // f12
    float vecWorkX; // f13
    float vecWorkY; // f31
    float vecWorkZ; // f6
    float weight; // f30
    int sect; // r4
    class WII_P * cur1; // reg65535
    class WII_WP * curN; // reg65535

    {
        // Range: 0x8030AC7C -> 0x8030ADAC
        // Local variables
        unsigned int index1; // r5
        unsigned int index0; // r0

        {
            // Range: 0x8030ACAC -> 0x8030ACAC
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030ACC0 -> 0x8030ACC0
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030AD14 -> 0x8030AD14
            // Local variables
            float work3; // f30
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x8030ADA8 -> 0x8030ADA8
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x8030ADF4 -> 0x8030B038
        // Local variables
        unsigned int indexB; // r8
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r5

        {
            // Range: 0x8030AE1C -> 0x8030AE1C
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030AE38 -> 0x8030AE38
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030AE44 -> 0x8030AE44
            // Local variables
            float * src; // r8
        }
        {
            // Range: 0x8030AE98 -> 0x8030AE98
            // Local variables
            float work3; // f29
            float work2; // f31
            float work1; // f13
            float work0; // f12
            float * src1; // r8
            float * src0; // r9
        }
        {
            // Range: 0x8030AF40 -> 0x8030AF40
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030AF4C -> 0x8030AF4C
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030AFA0 -> 0x8030AFA0
            // Local variables
            float work3; // f27
            float work2; // f28
            float work1; // f29
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x8030B038 -> 0x8030B038
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x8030B08C -> 0x8030B3D8
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x8030B0B4 -> 0x8030B0B4
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030B0D0 -> 0x8030B0D0
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B0DC -> 0x8030B0DC
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B130 -> 0x8030B130
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8030B1D8 -> 0x8030B1D8
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B1E4 -> 0x8030B1E4
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B238 -> 0x8030B238
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8030B2E0 -> 0x8030B2E0
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B2EC -> 0x8030B2EC
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B340 -> 0x8030B340
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x8030B3D8 -> 0x8030B3D8
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x8030B42C -> 0x8030B880
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x8030B454 -> 0x8030B454
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030B470 -> 0x8030B470
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B47C -> 0x8030B47C
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B4D0 -> 0x8030B4D0
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8030B578 -> 0x8030B578
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B584 -> 0x8030B584
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B5D8 -> 0x8030B5D8
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8030B680 -> 0x8030B680
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B68C -> 0x8030B68C
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B6E0 -> 0x8030B6E0
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8030B788 -> 0x8030B788
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030B794 -> 0x8030B794
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8030B7E8 -> 0x8030B7E8
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x8030B880 -> 0x8030B880
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
}
// signature: SkinPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x8030B904 -> 0x8030CBF0
void SkinPosNorm::Transform(class SkinOutputPosNorm * overtPos /* r27 */, void * ivertPos /* r28 */, class Matrix43 * skinMat /* r29 */, class SkinSection * sections /* r30 */, int sectionCount /* r31 */) {
    // Local variables
    class SkinOutputPosNorm * overtPosEnd; // r6
    void * wgPipe; // r0
    float matX0; // f1
    float matX1; // f2
    float matX2; // f3
    float matX3; // f4
    float matY0; // f5
    float matY1; // f6
    float matY2; // f4
    float matY3; // f7
    float matZ0; // f7
    float matZ1; // f1
    float matZ2; // f2
    float matZ3; // f8
    float iPosX; // f9
    float iPosY; // f10
    float iPosZ; // f11
    float iNormX; // f12
    float iNormY; // f13
    float iNormZ; // f31
    float oPosX; // f30
    float oPosY; // f29
    float oPosZ; // f28
    float oNormX; // f27
    float oNormY; // f26
    float oNormZ; // f25
    float vecWorkX; // f24
    float vecWorkY; // f23
    float vecWorkZ; // f8
    float weight; // f22
    int sect; // r4
    class WII_PN * cur1; // reg65535
    class WII_WPN * curN; // reg65535

    {
        // Range: 0x8030B9CC -> 0x8030BBC0
        // Local variables
        unsigned int index1; // r6
        unsigned int index0; // r0

        {
            // Range: 0x8030B9CC -> 0x8030B9CC
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030B9CC -> 0x8030B9CC
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x8030B9CC -> 0x8030B9CC
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030B9CC -> 0x8030B9CC
            // Local variables
            float work3; // f21
            float work2; // f24
            float work1; // f23
            float work0; // f22
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8030B9CC -> 0x8030B9CC
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8030BB6C -> 0x8030BB6C
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8030BB6C -> 0x8030BB6C
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x8030BBF4 -> 0x8030BF78
        // Local variables
        unsigned int indexB; // r8
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r6

        {
            // Range: 0x8030BC18 -> 0x8030BC18
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030BC24 -> 0x8030BC24
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x8030BC40 -> 0x8030BC40
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030BC4C -> 0x8030BC4C
            // Local variables
            float * src; // r8
        }
        {
            // Range: 0x8030BCDC -> 0x8030BCDC
            // Local variables
            float work3; // f20
            float work2; // f24
            float work1; // f23
            float work0; // f21
            float * src1; // r8
            float * src0; // r9
        }
        {
            // Range: 0x8030BDB4 -> 0x8030BDB4
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030BDC0 -> 0x8030BDC0
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030BE50 -> 0x8030BE50
            // Local variables
            float work3; // f18
            float work2; // f19
            float work1; // f21
            float work0; // f20
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8030BF20 -> 0x8030BF20
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8030BF24 -> 0x8030BF24
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8030BF24 -> 0x8030BF24
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x8030BFAC -> 0x8030C4A4
        // Local variables
        unsigned int indexB; // r6
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x8030BFD0 -> 0x8030BFD0
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030BFDC -> 0x8030BFDC
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x8030BFF8 -> 0x8030BFF8
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C004 -> 0x8030C004
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C094 -> 0x8030C094
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8030C16C -> 0x8030C16C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C178 -> 0x8030C178
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C208 -> 0x8030C208
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8030C2E0 -> 0x8030C2E0
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C2EC -> 0x8030C2EC
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C37C -> 0x8030C37C
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8030C44C -> 0x8030C44C
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8030C450 -> 0x8030C450
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8030C450 -> 0x8030C450
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x8030C4D8 -> 0x8030CB44
        // Local variables
        unsigned int indexB; // r6
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x8030C504 -> 0x8030C504
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8030C510 -> 0x8030C510
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x8030C524 -> 0x8030C524
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C530 -> 0x8030C530
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C5C0 -> 0x8030C5C0
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8030C698 -> 0x8030C698
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C6A4 -> 0x8030C6A4
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C734 -> 0x8030C734
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8030C80C -> 0x8030C80C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C818 -> 0x8030C818
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030C8A8 -> 0x8030C8A8
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8030C980 -> 0x8030C980
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8030C98C -> 0x8030C98C
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8030CA1C -> 0x8030CA1C
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8030CAEC -> 0x8030CAEC
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8030CAF0 -> 0x8030CAF0
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8030CAF0 -> 0x8030CAF0
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
}
