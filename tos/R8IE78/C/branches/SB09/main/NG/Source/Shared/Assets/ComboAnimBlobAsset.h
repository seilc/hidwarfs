/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Shared\Assets\ComboAnimBlobAsset.h
*/
// signature: World::RefQuat3_Decompress(float *, const short *)
// Range: 0x8004D410 -> 0x8004D534
void World::RefQuat3_Decompress(float * out /* r31 */) {
    // Local variables
    int bit0; // r29
    int bit1; // r28
    float in0; // f31
    float in1; // f30
    float in2; // f29
    float in3; // f1
}
// signature: World::RefQuat_Lerp(float *, const float *, const float *, float, bool)
// Range: 0x8004D540 -> 0x8004D784
void World::RefQuat_Lerp(float * o /* r29 */, float * a /* r30 */, float * b /* r31 */, float t /* f31 */) {
    // Local variables
    float asph; // f8
    float bsph; // f9
    float one_sintheta; // f28
    float theta; // f0
    float abdot; // f2
    float bsphmul; // f30

    {
        // Range: 0x8004D5D4 -> 0x8004D6AC
        // Local variables
        float magsqr; // f1
        float invmag; // f0
    }
}
// signature: World::ComboAnimBlobAssetV2::VecInterleaveKey::RefLerp(float **, float)
// Range: 0x8004D790 -> 0x8004DAAC
void World::ComboAnimBlobAssetV2::VecInterleaveKey::RefLerp() {
    // Local variables
    float lerp; // f1
    float ilerp; // f2
}
// signature: World::ComboAnimBlobAssetV2::VecSingleKey::RefLerp(float *, float)
// Range: 0x8004DAB0 -> 0x8004DBC8
void World::ComboAnimBlobAssetV2::VecSingleKey::RefLerp() {
    // Local variables
    float lerp; // f5
    float ilerp; // f4
}
// signature: World::ComboAnimBlobAssetV2::VecRawKey::RefLerp(float *, float)
// Range: 0x8004DBD0 -> 0x8004DC74
void World::ComboAnimBlobAssetV2::VecRawKey::RefLerp() {
    // Local variables
    float lerp; // f4
    float ilerp; // f3
}
// Range: 0x800A0C80 -> 0x800A0CAC
unsigned int World::ComboAnimBlobAssetV2::GetAnPhStride() const {
    // Local variables
    unsigned int str; // r4
}
// signature: World::ComboAnimBlobAssetV2::GetOffsets(const float *&, const unsigned int *&, const unsigned int *&) const
// Range: 0x8004D1B0 -> 0x8004D228
void World::ComboAnimBlobAssetV2::GetOffsets() const {
}
// signature: World::ComboAnimBlobAssetV2::RefEvalJoints(float, float *, float *, float *, int) const
// Range: 0x801BFE30 -> 0x801C0B7C
void World::ComboAnimBlobAssetV2::RefEvalJoints(class ComboAnimBlobAssetV2 * this /* r14 */, float * outRot /* r15 */, float * outScale /* r16 */, float * outTran /* r17 */, int vec3stride /* r19 */) const {
    // Local variables
    float frameF; // f31
    unsigned int frameU; // r0
    unsigned int segI; // r5
    unsigned int numJ; // r4
    class SegmentHeader * segHdr; // r18

    // References
    // -> float g_wiiQuatPermuteLookup[8];
}
// signature: World::ComboAnimBlobAssetV2::RefEvalVisibility(float, unsigned int, unsigned char &) const
// Range: 0x801BFC80 -> 0x801BFDA0
unsigned char World::ComboAnimBlobAssetV2::RefEvalVisibility(class ComboAnimBlobAssetV2 * this /* r29 */, unsigned int vis /* r30 */, unsigned char & partIndex /* r31 */) const {
    // Local variables
    float frameF; // f1
    unsigned int frameU; // r3
    float * anPhData; // r0
    unsigned int * visPartIndices; // r3
    unsigned int * visFlags; // r5
    unsigned int visIndex; // r7
}
// signature: World::ComboAnimBlobAssetV2::RefEvalAnimationPhysics(float, float *, float *, float *) const
// Range: 0x800A0890 -> 0x800A0C74
void World::ComboAnimBlobAssetV2::RefEvalAnimationPhysics(class ComboAnimBlobAssetV2 * this /* r28 */, float * trans /* r29 */, float * heading /* r30 */, float * quat /* r31 */) const {
    // Local variables
    unsigned int frameNum; // r27
    unsigned int frameNxt; // r26
    float frameFrac; // f30
    float frameFracCompl; // f31
    float * anPhData; // r25
    unsigned int stride; // r0
    float * anData; // r5
    float * anDataNxt; // r6

    {
        // Range: 0x800A09EC -> 0x800A0A54
        // Local variables
        float hdngnxt; // f3
        float hdng; // f2
    }
    {
        // Range: 0x800A0A54 -> 0x800A0C3C
        // Local variables
        float nxtQuat[4]; // r1+0x8
        float frmQuat[4]; // r1+0x18
    }
}
// signature: World::ComboAnimBlobAssetV2::RefEvalMorphWeights(float, float *) const
// Range: 0x8004D230 -> 0x8004D404
void World::ComboAnimBlobAssetV2::RefEvalMorphWeights(class ComboAnimBlobAssetV2 * this /* r29 */, float * weights /* r30 */) const {
    // Local variables
    float frameF; // f31
    unsigned int frameU; // r31
    float frameFrac; // f31
    float frameFracCompl; // f30
    unsigned char * morphIndices; // r5
    unsigned char * morphWeights; // r6
    unsigned char * data0; // r0
    unsigned char * data1; // r0

    {
        // Range: 0x8004D2E4 -> 0x8004D320
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x8004D338 -> 0x8004D3DC
        // Local variables
        int i; // r8

        {
            // Range: 0x8004D338 -> 0x8004D3DC
            // Local variables
            float weight1; // f0
            float weight0; // f2
        }
    }
}
