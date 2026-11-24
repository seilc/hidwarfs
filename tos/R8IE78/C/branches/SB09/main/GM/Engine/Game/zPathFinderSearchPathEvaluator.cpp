/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPathFinderSearchPathEvaluator.cpp
*/
// Range: 0x801A7470 -> 0x801A7498
void * zPathFinderSearchPathEvaluator::zPathFinderSearchPathEvaluator() {
}
// Range: 0x801A74A0 -> 0x801A751C
void zPathFinderSearchPathEvaluator::Cleanup(class zPathFinderSearchPathEvaluator * this /* r29 */) {
    {
        // Range: 0x801A74B4 -> 0x801A74F4
        // Local variables
        int i; // r30
    }
}
// Range: 0x801A7520 -> 0x801A75F4
bool zPathFinderSearchPathEvaluator::Walkable(class xVec3 * start /* r29 */, class xVec3 * end /* r30 */, float boundRadius /* f30 */, class zWallNet * wn /* r31 */) {
    // Local variables
    class zWallNetCollis collis; // r1+0x34
    class xVec3 dir; // r1+0x14
    float distance; // f31
    class zWallNetPositionXZ wallNetStart; // r1+0x20
    bool intersect; // r0
}
// Range: 0x801A7600 -> 0x801A7BF0
void zPathFinderSearchPathEvaluator::ProccessWallNetPath(class zPathFinderSearchPathEvaluator * this /* r20 */, class xVec3 * source /* r21 */, class xVec3 * dest /* r22 */, float boundRadius /* f28 */, class zSearchPath * p /* r23 */) {
    // Local variables
    class zWallNet * wn; // r24
    class Step tempSteps[65]; // r1+0xC4
    class xVec3 enterPoint; // r1+0x5C
    bool skip[65]; // r1+0x80
    class xVec3 basePos; // r1+0x20
    int realStepsCount; // r9

    {
        // Range: 0x801A7638 -> 0x801A7A24
        // Local variables
        class zSearchMapNode * toNode; // r7

        {
            // Range: 0x801A7638 -> 0x801A7688
            // Local variables
            int edgeIndex; // r8
            class zWallNetTriConx * wnConx; // r0

            {
                // Range: 0x801A7638 -> 0x801A7638
                // Local variables
                int i; // r9
            }
            {
                // Range: 0x801A7638 -> 0x801A7660
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
            // Range: 0x801A7688 -> 0x801A7A24
            // Local variables
            bool fromStartToEnd; // r0
            int tri1; // r0
            class xVec3 linkPos[2]; // r1+0x68
            class zNavLink * navLink; // r0
        }
    }
    {
        // Range: 0x801A7A70 -> 0x801A7B24
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x801A7B3C -> 0x801A7BAC
        // Local variables
        int i; // r10
    }
}
// signature: zPathFinderSearchPathEvaluator::ProccessWallNetGroupPath(const xVec3 *, const xVec3 *, float, const zSearchPath *)
// Range: 0x801A7BF0 -> 0x801A7F34
void zPathFinderSearchPathEvaluator::ProccessWallNetGroupPath(class zPathFinderSearchPathEvaluator * this /* r20 */, class xVec3 * dest /* r21 */, class zSearchPath * p /* r22 */) {
    // Local variables
    class zWallNetGroup * wng; // r27
    bool lastLinkSkipped; // r26

    {
        // Range: 0x801A7C14 -> 0x801A7EC4
        // Local variables
        bool fromStartToEnd; // r23
        int theirs; // r25
        int ours; // r5
        class xVec3 linkPos[2]; // r1+0x8
        class zNavLink * navLink; // r24
        class zWallNet * fromWn; // r25
        class zSearchMapNode * toNode; // r18
    }
}
// signature: zPathFinderSearchPathEvaluator::ProccessPath(const xVec3 *, const xVec3 *, float, const zSearchPath *)
// Range: 0x801A82B0 -> 0x801A830C
void zPathFinderSearchPathEvaluator::ProccessPath() {
}
// signature: zPathFinderSearchPathEvaluator::SetNewPath(const xVec3 *, const xVec3 *, float, const zSearchPath *)
// Range: 0x801A8310 -> 0x801A8338
void zPathFinderSearchPathEvaluator::SetNewPath() {
}
// Range: 0x801A8340 -> 0x801A84F0
enum ePathEvalResult zPathFinderSearchPathEvaluator::EvaluatePath(class zPathFinderSearchPathEvaluator * this /* r28 */, class xVec3 * currPos /* r29 */, class xVec3 * currGoal /* r30 */, enum eNavLinkActionCode * actionCode /* r31 */) {
    // Local variables
    int nextStep; // r4
}
