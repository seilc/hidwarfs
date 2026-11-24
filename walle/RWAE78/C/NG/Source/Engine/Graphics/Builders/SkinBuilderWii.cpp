/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Builders\SkinBuilderWii.cpp
*/
// signature: SkinIdentityPos::Transform(Graphics::SkinOutputPosition *, const void *, const Graphics::SkinSection *, int)
// Range: 0x802784B4 -> 0x80278600
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
        // Range: 0x80278514 -> 0x80278574
        // Local variables
        int secsize; // r4

        {
            // Range: 0x80278538 -> 0x80278544
            // Local variables
            int idx; // r0

            {
                // Range: 0x80278538 -> 0x80278538
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x80278544 -> 0x80278544
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
    {
        // Range: 0x80278574 -> 0x802785BC
        // Local variables
        int secsize; // r6

        {
            // Range: 0x8027858C -> 0x80278598
            // Local variables
            int idx; // r0

            {
                // Range: 0x8027858C -> 0x8027858C
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x80278598 -> 0x80278598
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
}
// signature: SkinIdentityPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Graphics::SkinSection *, int)
// Range: 0x80278600 -> 0x802787A4
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
        // Range: 0x80278660 -> 0x802786EC
        // Local variables
        int secsize; // r4

        {
            // Range: 0x80278684 -> 0x802786D4
            // Local variables
            int idx; // r0

            {
                // Range: 0x80278684 -> 0x80278684
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x80278690 -> 0x80278690
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x8027869C -> 0x8027869C
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x8027869C -> 0x8027869C
                // Local variables
                float work3; // f2
                float work2; // f0
                float work1; // f1
                float work0; // f0
            }
        }
    }
    {
        // Range: 0x802786EC -> 0x80278760
        // Local variables
        int secsize; // r6

        {
            // Range: 0x80278704 -> 0x80278754
            // Local variables
            int idx; // r0

            {
                // Range: 0x80278704 -> 0x80278704
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x80278710 -> 0x80278710
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x8027871C -> 0x8027871C
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x8027871C -> 0x8027871C
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
// Range: 0x802787A4 -> 0x80278B30
void SkinIdentityPosNormTan::Transform() {
    // Local variables
    int sect; // r9
    class PC_PNT * cur1; // r4
    class PC_WPNT * curN; // r4

    {
        // Range: 0x802787B4 -> 0x80278968
        // Local variables
        int secsize; // r8

        {
            // Range: 0x802787D8 -> 0x802788B4
            // Local variables
            int idx; // r0
        }
    }
    {
        // Range: 0x80278968 -> 0x80278B04
        // Local variables
        int secsize; // r10

        {
            // Range: 0x80278980 -> 0x80278A5C
            // Local variables
            int idx; // r0
        }
    }
}
// signature: SkinPos::Transform(Graphics::SkinOutputPosition *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x80278B30 -> 0x80279850
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
        // Range: 0x80278BC8 -> 0x80278CF8
        // Local variables
        unsigned int index1; // r5
        unsigned int index0; // r0

        {
            // Range: 0x80278BF8 -> 0x80278BF8
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x80278C0C -> 0x80278C0C
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x80278C60 -> 0x80278C60
            // Local variables
            float work3; // f30
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x80278CF4 -> 0x80278CF4
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x80278D40 -> 0x80278F84
        // Local variables
        unsigned int indexB; // r8
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r5

        {
            // Range: 0x80278D68 -> 0x80278D68
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x80278D84 -> 0x80278D84
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80278D90 -> 0x80278D90
            // Local variables
            float * src; // r8
        }
        {
            // Range: 0x80278DE4 -> 0x80278DE4
            // Local variables
            float work3; // f29
            float work2; // f31
            float work1; // f13
            float work0; // f12
            float * src1; // r8
            float * src0; // r9
        }
        {
            // Range: 0x80278E8C -> 0x80278E8C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80278E98 -> 0x80278E98
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x80278EEC -> 0x80278EEC
            // Local variables
            float work3; // f27
            float work2; // f28
            float work1; // f29
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x80278F84 -> 0x80278F84
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x80278FD8 -> 0x80279324
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x80279000 -> 0x80279000
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8027901C -> 0x8027901C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279028 -> 0x80279028
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8027907C -> 0x8027907C
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x80279124 -> 0x80279124
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279130 -> 0x80279130
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x80279184 -> 0x80279184
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x8027922C -> 0x8027922C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279238 -> 0x80279238
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8027928C -> 0x8027928C
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x80279324 -> 0x80279324
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x80279378 -> 0x802797CC
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x802793A0 -> 0x802793A0
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x802793BC -> 0x802793BC
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x802793C8 -> 0x802793C8
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8027941C -> 0x8027941C
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x802794C4 -> 0x802794C4
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x802794D0 -> 0x802794D0
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x80279524 -> 0x80279524
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x802795CC -> 0x802795CC
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x802795D8 -> 0x802795D8
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x8027962C -> 0x8027962C
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r9
        }
        {
            // Range: 0x802796D4 -> 0x802796D4
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x802796E0 -> 0x802796E0
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x80279734 -> 0x80279734
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r5
            float * src0; // r7
        }
        {
            // Range: 0x802797CC -> 0x802797CC
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
}
// signature: SkinPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x80279850 -> 0x8027AB3C
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
        // Range: 0x80279918 -> 0x80279B0C
        // Local variables
        unsigned int index1; // r6
        unsigned int index0; // r0

        {
            // Range: 0x80279918 -> 0x80279918
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x80279918 -> 0x80279918
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x80279918 -> 0x80279918
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x80279918 -> 0x80279918
            // Local variables
            float work3; // f21
            float work2; // f24
            float work1; // f23
            float work0; // f22
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x80279918 -> 0x80279918
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x80279AB8 -> 0x80279AB8
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x80279AB8 -> 0x80279AB8
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x80279B40 -> 0x80279EC4
        // Local variables
        unsigned int indexB; // r8
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r6

        {
            // Range: 0x80279B64 -> 0x80279B64
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x80279B70 -> 0x80279B70
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x80279B8C -> 0x80279B8C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279B98 -> 0x80279B98
            // Local variables
            float * src; // r8
        }
        {
            // Range: 0x80279C28 -> 0x80279C28
            // Local variables
            float work3; // f20
            float work2; // f24
            float work1; // f23
            float work0; // f21
            float * src1; // r8
            float * src0; // r9
        }
        {
            // Range: 0x80279D00 -> 0x80279D00
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279D0C -> 0x80279D0C
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x80279D9C -> 0x80279D9C
            // Local variables
            float work3; // f18
            float work2; // f19
            float work1; // f21
            float work0; // f20
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x80279E6C -> 0x80279E6C
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x80279E70 -> 0x80279E70
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x80279E70 -> 0x80279E70
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x80279EF8 -> 0x8027A3F0
        // Local variables
        unsigned int indexB; // r6
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x80279F1C -> 0x80279F1C
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x80279F28 -> 0x80279F28
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x80279F44 -> 0x80279F44
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x80279F50 -> 0x80279F50
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x80279FE0 -> 0x80279FE0
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8027A0B8 -> 0x8027A0B8
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A0C4 -> 0x8027A0C4
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A154 -> 0x8027A154
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8027A22C -> 0x8027A22C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A238 -> 0x8027A238
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A2C8 -> 0x8027A2C8
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8027A398 -> 0x8027A398
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8027A39C -> 0x8027A39C
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8027A39C -> 0x8027A39C
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x8027A424 -> 0x8027AA90
        // Local variables
        unsigned int indexB; // r6
        unsigned int indexA; // r0
        unsigned int index1; // r8
        unsigned int index0; // r7

        {
            // Range: 0x8027A450 -> 0x8027A450
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x8027A45C -> 0x8027A45C
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x8027A470 -> 0x8027A470
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A47C -> 0x8027A47C
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A50C -> 0x8027A50C
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8027A5E4 -> 0x8027A5E4
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A5F0 -> 0x8027A5F0
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A680 -> 0x8027A680
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8027A758 -> 0x8027A758
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A764 -> 0x8027A764
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A7F4 -> 0x8027A7F4
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r9
        }
        {
            // Range: 0x8027A8CC -> 0x8027A8CC
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x8027A8D8 -> 0x8027A8D8
            // Local variables
            float * src; // r6
        }
        {
            // Range: 0x8027A968 -> 0x8027A968
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r6
            float * src0; // r7
        }
        {
            // Range: 0x8027AA38 -> 0x8027AA38
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x8027AA3C -> 0x8027AA3C
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x8027AA3C -> 0x8027AA3C
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
}
