/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPathFinderSearchPathEvaluator.cpp
*/
// Range: 0x802BF950 -> 0x802C0168
void zPathFinderSearchPathEvaluator::ProccessWallNetPath(class zPathFinderSearchPathEvaluator * this /* r31 */, class xVec3 * source /* r17 */, class xVec3 * dest /* r18 */, class zSearchPath * p /* r19 */) {
    // Local variables
    class zWallNet * wn; // r20
    class Step tempSteps[65]; // r1+0xC4
    class xVec3 enterPoint; // r1+0x5C
    bool skip[65]; // r1+0x80
    class xVec3 basePos; // r1+0x20
    int realStepsCount; // r8

    {
        // Range: 0x802BF9A0 -> 0x802BFE9C
        // Local variables
        class zSearchMapNode * toNode; // r5

        {
            // Range: 0x802BF9A0 -> 0x802BFA00
            // Local variables
            int edgeIndex; // r9
            class zWallNetTriConx * wnConx; // r8

            {
                // Range: 0x802BF9A0 -> 0x802BF9A0
                // Local variables
                int i; // r0
            }
            {
                // Range: 0x802BF9A0 -> 0x802BFA00
                // Local variables
                float t; // f1
                float dot; // f0
                class xVec3 toEnter; // r1+0x2C
                float edgeLength; // f0
                class xVec3 exitEdgeDir; // r1+0x38
                class xVec3 exitV2; // r1+0x44
                class xVec3 exitV1; // r1+0x50
            }
        }
        {
            // Range: 0x802BFA00 -> 0x802BFE9C
            // Local variables
            bool fromStartToEnd; // r0
            int tri1; // r0
            class xVec3 linkPos[2]; // r1+0x68
            class zNavLink * navLink; // r0
        }
    }
    {
        // Range: 0x802BFEB0 -> 0x802C0078
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x802C00A0 -> 0x802C00FC
        // Local variables
        int i; // r9
    }
}
// signature: zPathFinderSearchPathEvaluator::ProccessWallNetGroupPath(const xVec3 *, const xVec3 *, const zSearchPath *)
// Range: 0x802C0170 -> 0x802C0500
void zPathFinderSearchPathEvaluator::ProccessWallNetGroupPath(class zPathFinderSearchPathEvaluator * this /* r20 */, class xVec3 * dest /* r21 */, class zSearchPath * p /* r22 */) {
    // Local variables
    class zWallNetGroup * wng; // r26
    bool lastLinkSkipped; // r25

    {
        // Range: 0x802C01A8 -> 0x802C046C
        // Local variables
        bool fromStartToEnd; // r4
        int theirs; // r0
        int ours; // r8
        class xVec3 linkPos[2]; // r1+0x8
        class zNavLink * navLink; // r23
        class zWallNet * fromWn; // r24
        class zSearchMapNode * toNode; // r18
    }
}
// Range: 0x802C0500 -> 0x802C06D0
enum ePathEvalResult zPathFinderSearchPathEvaluator::EvaluatePath(class zPathFinderSearchPathEvaluator * this /* r28 */, class xVec3 * currPos /* r29 */, class xVec3 * currGoal /* r30 */, enum eNavLinkActionCode * actionCode /* r31 */) {
    // Local variables
    int nextStep; // r4
}
