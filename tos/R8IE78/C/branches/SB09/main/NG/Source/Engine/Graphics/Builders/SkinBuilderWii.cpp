/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Builders\SkinBuilderWii.cpp
*/
// signature: SkinIdentityPos::Transform(Graphics::SkinOutputPosition *, const void *, const Graphics::SkinSection *, int)
// Range: 0x801D9B40 -> 0x801D9C80
void SkinIdentityPos::Transform(void * ivertPos /* r28 */, class SkinSection * sections /* r29 */, int sectionCount /* r30 */) {
    // Local variables
    void * wgPipe; // r0
    float posX; // f0
    float posY; // f1
    float posZ; // f2
    int sect; // r5
    class WII_P * cur1; // reg65535
    class WII_WP * curN; // reg65535

    {
        // Range: 0x801D9B98 -> 0x801D9BF4
        // Local variables
        int secsize; // r3

        {
            // Range: 0x801D9BBC -> 0x801D9BE8
            // Local variables
            int idx; // r0

            {
                // Range: 0x801D9BBC -> 0x801D9BBC
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x801D9BCC -> 0x801D9BCC
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
    {
        // Range: 0x801D9BF4 -> 0x801D9C58
        // Local variables
        int secsize; // r4

        {
            // Range: 0x801D9C0C -> 0x801D9C58
            // Local variables
            int idx; // r0

            {
                // Range: 0x801D9C0C -> 0x801D9C0C
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x801D9C1C -> 0x801D9C1C
                // Local variables
                float work2; // f1
                float work1; // f0
                float work0; // f3
            }
        }
    }
}
// signature: SkinIdentityPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Graphics::SkinSection *, int)
// Range: 0x801D9C80 -> 0x801D9E18
void SkinIdentityPosNorm::Transform(void * ivertPos /* r28 */, class SkinSection * sections /* r29 */, int sectionCount /* r30 */) {
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
        // Range: 0x801D9CD8 -> 0x801D9D60
        // Local variables
        int secsize; // r3

        {
            // Range: 0x801D9CFC -> 0x801D9D54
            // Local variables
            int idx; // r0

            {
                // Range: 0x801D9CFC -> 0x801D9CFC
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x801D9D08 -> 0x801D9D08
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x801D9D14 -> 0x801D9D14
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x801D9D14 -> 0x801D9D14
                // Local variables
                float work3; // f2
                float work2; // f0
                float work1; // f1
                float work0; // f0
            }
        }
    }
    {
        // Range: 0x801D9D60 -> 0x801D9DF0
        // Local variables
        int secsize; // r4

        {
            // Range: 0x801D9D78 -> 0x801D9DF0
            // Local variables
            int idx; // r0

            {
                // Range: 0x801D9D78 -> 0x801D9D78
                // Local variables
                short * srcZ; // r0
                short * srcY; // r0
            }
            {
                // Range: 0x801D9D84 -> 0x801D9D84
                // Local variables
                signed char * srcZ; // r0
                signed char * srcY; // r0
                signed char * srcX; // r0
            }
            {
                // Range: 0x801D9D90 -> 0x801D9D90
                // Local variables
                float work2; // f7
                float work0; // f6
            }
            {
                // Range: 0x801D9D90 -> 0x801D9D90
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
// Range: 0x801D9E20 -> 0x801D9F9C
void SkinIdentityPosNormTan::Transform() {
    // Local variables
    int sect; // r9
    class PC_PNT * cur1; // r4
    class PC_WPNT * curN; // r4

    {
        // Range: 0x801D9E30 -> 0x801D9ED8
        // Local variables
        int secsize; // r0

        {
            // Range: 0x801D9E4C -> 0x801D9ECC
            // Local variables
            int idx; // r0
        }
    }
    {
        // Range: 0x801D9ED8 -> 0x801D9F88
        // Local variables
        int secsize; // r0

        {
            // Range: 0x801D9EE8 -> 0x801D9F88
            // Local variables
            int idx; // r0
        }
    }
}
// signature: SkinPos::Transform(Graphics::SkinOutputPosition *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x801D9FA0 -> 0x801DACBC
void SkinPos::Transform(class SkinOutputPosition * overtPos /* r26 */, void * ivertPos /* r27 */, class Matrix43 * skinMat /* r28 */, class SkinSection * sections /* r29 */, int sectionCount /* r30 */) {
    // Local variables
    class SkinOutputPosition * overtPosEnd; // r9
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
    int sect; // r3
    class WII_P * cur1; // reg65535
    class WII_WP * curN; // reg65535

    {
        // Range: 0x801DA044 -> 0x801DA190
        // Local variables
        unsigned int index1; // r9
        unsigned int index0; // r4

        {
            // Range: 0x801DA070 -> 0x801DA070
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DA084 -> 0x801DA084
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA0D8 -> 0x801DA0D8
            // Local variables
            float work3; // f30
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r4
            float * src0; // r10
        }
        {
            // Range: 0x801DA16C -> 0x801DA16C
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x801DA1B8 -> 0x801DA424
        // Local variables
        unsigned int indexB; // r11
        unsigned int indexA; // r4
        unsigned int index1; // r10
        unsigned int index0; // r9

        {
            // Range: 0x801DA1DC -> 0x801DA1DC
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DA1F8 -> 0x801DA1F8
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA204 -> 0x801DA204
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA258 -> 0x801DA258
            // Local variables
            float work3; // f29
            float work2; // f31
            float work1; // f13
            float work0; // f12
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DA300 -> 0x801DA300
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA30C -> 0x801DA30C
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA360 -> 0x801DA360
            // Local variables
            float work3; // f27
            float work2; // f28
            float work1; // f29
            float work0; // f6
            float * src1; // r4
            float * src0; // r10
        }
        {
            // Range: 0x801DA408 -> 0x801DA408
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x801DA44C -> 0x801DA7C0
        // Local variables
        unsigned int indexB; // r9
        unsigned int indexA; // r4
        unsigned int index1; // r11
        unsigned int index0; // r10

        {
            // Range: 0x801DA470 -> 0x801DA470
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DA48C -> 0x801DA48C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA498 -> 0x801DA498
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA4EC -> 0x801DA4EC
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DA594 -> 0x801DA594
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA5A0 -> 0x801DA5A0
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA5F4 -> 0x801DA5F4
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DA69C -> 0x801DA69C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA6A8 -> 0x801DA6A8
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA6FC -> 0x801DA6FC
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r4
            float * src0; // r10
        }
        {
            // Range: 0x801DA7A4 -> 0x801DA7A4
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
    {
        // Range: 0x801DA7E8 -> 0x801DAC64
        // Local variables
        unsigned int indexB; // r9
        unsigned int indexA; // r4
        unsigned int index1; // r11
        unsigned int index0; // r10

        {
            // Range: 0x801DA80C -> 0x801DA80C
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DA828 -> 0x801DA828
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA834 -> 0x801DA834
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA888 -> 0x801DA888
            // Local variables
            float work3; // f27
            float work2; // f13
            float work1; // f12
            float work0; // f6
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DA930 -> 0x801DA930
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DA93C -> 0x801DA93C
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DA990 -> 0x801DA990
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DAA38 -> 0x801DAA38
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DAA44 -> 0x801DAA44
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DAA98 -> 0x801DAA98
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r4
            float * src0; // r12
        }
        {
            // Range: 0x801DAB40 -> 0x801DAB40
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DAB4C -> 0x801DAB4C
            // Local variables
            float * src; // r4
        }
        {
            // Range: 0x801DABA0 -> 0x801DABA0
            // Local variables
            float work3; // f29
            float work2; // f28
            float work1; // f27
            float work0; // f6
            float * src1; // r4
            float * src0; // r10
        }
        {
            // Range: 0x801DAC48 -> 0x801DAC48
            // Local variables
            float work2; // f0
            float work1; // f1
            float work0; // f0
        }
    }
}
// signature: SkinPosNorm::Transform(Graphics::SkinOutputPosNorm *, const void *, const Math::Matrix43 *, const Math::Matrix33 *, const Graphics::SkinSection *, int)
// Range: 0x801DACC0 -> 0x801DBFA8
void SkinPosNorm::Transform(class SkinOutputPosNorm * overtPos /* r26 */, void * ivertPos /* r27 */, class Matrix43 * skinMat /* r28 */, class SkinSection * sections /* r29 */, int sectionCount /* r30 */) {
    // Local variables
    class SkinOutputPosNorm * overtPosEnd; // r5
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
    int sect; // r3
    class WII_PN * cur1; // reg65535
    class WII_WPN * curN; // reg65535

    {
        // Range: 0x801DAD84 -> 0x801DAF84
        // Local variables
        unsigned int index1; // r5
        unsigned int index0; // r0

        {
            // Range: 0x801DAD84 -> 0x801DAD84
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DAD84 -> 0x801DAD84
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x801DAD84 -> 0x801DAD84
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DAD84 -> 0x801DAD84
            // Local variables
            float work3; // f21
            float work2; // f24
            float work1; // f23
            float work0; // f22
            float * src1; // r5
            float * src0; // r6
        }
        {
            // Range: 0x801DAD84 -> 0x801DAD84
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x801DAF24 -> 0x801DAF24
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x801DAF24 -> 0x801DAF24
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x801DAFAC -> 0x801DB33C
        // Local variables
        unsigned int indexB; // r7
        unsigned int indexA; // r0
        unsigned int index1; // r6
        unsigned int index0; // r5

        {
            // Range: 0x801DAFD0 -> 0x801DAFD0
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DAFDC -> 0x801DAFDC
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x801DAFF8 -> 0x801DAFF8
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB004 -> 0x801DB004
            // Local variables
            float * src; // r7
        }
        {
            // Range: 0x801DB094 -> 0x801DB094
            // Local variables
            float work3; // f20
            float work2; // f24
            float work1; // f23
            float work0; // f21
            float * src1; // r7
            float * src0; // r8
        }
        {
            // Range: 0x801DB16C -> 0x801DB16C
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB178 -> 0x801DB178
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DB208 -> 0x801DB208
            // Local variables
            float work3; // f18
            float work2; // f19
            float work1; // f21
            float work0; // f20
            float * src1; // r5
            float * src0; // r6
        }
        {
            // Range: 0x801DB2D8 -> 0x801DB2D8
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x801DB2DC -> 0x801DB2DC
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x801DB2DC -> 0x801DB2DC
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x801DB364 -> 0x801DB868
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r6

        {
            // Range: 0x801DB388 -> 0x801DB388
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DB394 -> 0x801DB394
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x801DB3B0 -> 0x801DB3B0
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB3BC -> 0x801DB3BC
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DB44C -> 0x801DB44C
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r8
        }
        {
            // Range: 0x801DB524 -> 0x801DB524
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB530 -> 0x801DB530
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DB5C0 -> 0x801DB5C0
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r8
        }
        {
            // Range: 0x801DB698 -> 0x801DB698
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB6A4 -> 0x801DB6A4
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DB734 -> 0x801DB734
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r6
        }
        {
            // Range: 0x801DB804 -> 0x801DB804
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x801DB808 -> 0x801DB808
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x801DB808 -> 0x801DB808
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
    {
        // Range: 0x801DB890 -> 0x801DBF08
        // Local variables
        unsigned int indexB; // r5
        unsigned int indexA; // r0
        unsigned int index1; // r7
        unsigned int index0; // r6

        {
            // Range: 0x801DB8BC -> 0x801DB8BC
            // Local variables
            short * srcZ; // r0
            short * srcY; // r0
        }
        {
            // Range: 0x801DB8C8 -> 0x801DB8C8
            // Local variables
            signed char * srcZ; // r0
            signed char * srcY; // r0
            signed char * srcX; // r0
        }
        {
            // Range: 0x801DB8DC -> 0x801DB8DC
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DB8E8 -> 0x801DB8E8
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DB978 -> 0x801DB978
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r8
        }
        {
            // Range: 0x801DBA50 -> 0x801DBA50
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DBA5C -> 0x801DBA5C
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DBAEC -> 0x801DBAEC
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r8
        }
        {
            // Range: 0x801DBBC4 -> 0x801DBBC4
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DBBD0 -> 0x801DBBD0
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DBC60 -> 0x801DBC60
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r8
        }
        {
            // Range: 0x801DBD38 -> 0x801DBD38
            // Local variables
            unsigned int * src; // r0
        }
        {
            // Range: 0x801DBD44 -> 0x801DBD44
            // Local variables
            float * src; // r5
        }
        {
            // Range: 0x801DBDD4 -> 0x801DBDD4
            // Local variables
            float work3; // f21
            float work2; // f20
            float work1; // f19
            float work0; // f18
            float * src1; // r5
            float * src0; // r6
        }
        {
            // Range: 0x801DBEA4 -> 0x801DBEA4
            // Local variables
            float normScale; // f0
            float lenSqr; // f1
            float lenRecip; // f1
        }
        {
            // Range: 0x801DBEA8 -> 0x801DBEA8
            // Local variables
            float work2; // f1
            float work0; // f2
        }
        {
            // Range: 0x801DBEA8 -> 0x801DBEA8
            // Local variables
            float work3; // f3
            float work2; // f1
            float work1; // f2
            float work0; // f1
        }
    }
}
