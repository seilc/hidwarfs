/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Shared\Assets\ComboAnimBlobAsset.h
*/
// signature: World::ComboAnimBlobAssetV2::SegmentHeader::RefEval(unsigned int, float, float *, float *, float *, unsigned short, int)
// Range: 0x800926B0 -> 0x800943F8
void World::ComboAnimBlobAssetV2::SegmentHeader::RefEval(class SegmentHeader * this /* r18 */, float frameF /* f31 */, float * outRot /* r14 */, float * outScale /* r19 */, float * outTran /* r20 */, int vec3stride /* r21 */) {
    // Local variables
    bool doNlerp; // r26
    short * rotConstQuats; // r6
    float * scaleConstVecs; // r1+0x90
    float * tranConstVecs; // r1+0x8C
    unsigned short * frameTimes; // r10
    unsigned short * tableOfContents; // r25
    unsigned short * outIndicesU16; // r24
    unsigned char * outIndicesU8; // r23
    unsigned short * keyData; // r22
    int frameIdx; // r8
    int outIndex; // r0
    float * outOffsets[4]; // r1+0x28

    {
        // Range: 0x80092854 -> 0x800928A0
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x800928CC -> 0x800929C8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x800929F8 -> 0x800930D4
        // Local variables
        int i; // r1+0x88

        {
            // Range: 0x800929F8 -> 0x800930D4
            // Local variables
            class QuatInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x800930F4 -> 0x800934F4
        // Local variables
        int i; // r28

        {
            // Range: 0x800930F4 -> 0x800934F4
            // Local variables
            class QuatSingleKey * key; // r0
        }
    }
    {
        // Range: 0x80093510 -> 0x80093540
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80093570 -> 0x8009359C
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x800935E4 -> 0x80093820
        // Local variables
        int i; // r3

        {
            // Range: 0x800935E4 -> 0x80093820
            // Local variables
            class VecInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x800939B8 -> 0x800939F4
        // Local variables
        int i; // r3

        {
            // Range: 0x800939B8 -> 0x800939F4
            // Local variables
            class VecSingleKey * key; // r0
        }
    }
    {
        // Range: 0x80093AF8 -> 0x80093B2C
        // Local variables
        int i; // r6

        {
            // Range: 0x80093AF8 -> 0x80093B2C
            // Local variables
            class VecRawKey * key; // r0
        }
    }
    {
        // Range: 0x80093C40 -> 0x80093C4C
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80093C68 -> 0x80093C74
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80093C90 -> 0x80093C9C
        // Local variables
        int i; // r3
    }
    {
        // Range: 0x80093CB8 -> 0x80093CE8
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80093D18 -> 0x80093D44
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80093D8C -> 0x80093FC8
        // Local variables
        int i; // r3

        {
            // Range: 0x80093D8C -> 0x80093FC8
            // Local variables
            class VecInterleaveKey * key; // r0
        }
    }
    {
        // Range: 0x80094160 -> 0x8009419C
        // Local variables
        int i; // r3

        {
            // Range: 0x80094160 -> 0x8009419C
            // Local variables
            class VecSingleKey * key; // r0
        }
    }
    {
        // Range: 0x800942A0 -> 0x800942D4
        // Local variables
        int i; // r6

        {
            // Range: 0x800942A0 -> 0x800942D4
            // Local variables
            class VecRawKey * key; // r0
        }
    }

    // References
    // -> float g_wiiQuatPermuteLookup[8];
}
// signature: World::ComboAnimBlobAssetV2::RefEvalJoints(float, float *, float *, float *, int) const
// Range: 0x802E50EC -> 0x802E523C
void World::ComboAnimBlobAssetV2::RefEvalJoints(class ComboAnimBlobAssetV2 * this /* r27 */, float * outRot /* r28 */, float * outScale /* r29 */, float * outTran /* r30 */, int vec3stride /* r31 */) const {
    // Local variables
    float frameF; // f31
    unsigned int frameU; // r3
    unsigned int segI; // r5
    unsigned int numJ; // r4
}
// signature: World::ComboAnimBlobAssetV2::RefEvalVisibility(float, unsigned int, unsigned char &) const
// Range: 0x802E4F8C -> 0x802E50B4
unsigned char World::ComboAnimBlobAssetV2::RefEvalVisibility(class ComboAnimBlobAssetV2 * this /* r29 */, unsigned int vis /* r30 */, unsigned char & partIndex /* r31 */) const {
    // Local variables
    float frameF; // f1
    unsigned int frameU; // r3
    float * anPhData; // r0
    unsigned int * visPartIndices; // r3
    unsigned int * visFlags; // r5
    unsigned int visIndex; // r7
}
