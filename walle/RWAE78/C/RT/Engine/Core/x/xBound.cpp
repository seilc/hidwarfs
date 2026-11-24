/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xBound.cpp
*/
// signature: xBoundUpdate(xBound *)
// Range: 0x800183D0 -> 0x800184F0
void xBoundUpdate() {
}
// signature: xBoundGetBox(xBox &, const xBound *)
// Range: 0x80018560 -> 0x8001887C
void xBoundGetBox() {
    {
        // Range: 0x800185EC -> 0x80018630
        // Local variables
        class xSphere * o; // r0
    }
    {
        // Range: 0x800187D0 -> 0x80018814
        // Local variables
        class xCylinder * c; // r0
    }
}
// Range: 0x80018880 -> 0x80018ACC
void xBoundGetSphere(class xSphere * o /* r30 */, class xBound * bound /* r31 */) {
    {
        // Range: 0x80018998 -> 0x80018A9C
        // Local variables
        float r2; // f29
        class xVec3 v; // r1+0x14
        class xMat4x3 * mat; // r3
    }
}
// Range: 0x80018AD0 -> 0x80018F60
void xBoundBoxFromNGModel(class xBound * bound /* r30 */, class xModelInstance * model /* r28 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r5

    {
        // Range: 0x80018B48 -> 0x80018BEC
        // Local variables
        class xVec3 upper; // r1+0x68
        class xVec3 lower; // r1+0x74
    }
    {
        // Range: 0x80018BF0 -> 0x80018C88
        // Local variables
        class xVec3 upper; // r1+0x50
        class xVec3 lower; // r1+0x5C
    }
    {
        // Range: 0x80018C90 -> 0x80018EA4
        // Local variables
        unsigned int numberOfRenderables; // r29

        {
            // Range: 0x80018C9C -> 0x80018D3C
            // Local variables
            class xVec3 upper; // r1+0x38
            class xVec3 lower; // r1+0x44
        }
        {
            // Range: 0x80018D3C -> 0x80018EA4
            // Local variables
            class xVec3 upperOG; // r1+0x20
            class xVec3 lowerOG; // r1+0x2C
            class Vector * upper; // r0
            class Vector * lower; // r0
            class BroadBound mergedBound; // r1+0x80

            {
                // Range: 0x80018D48 -> 0x80018E24
                // Local variables
                unsigned int i; // r0
            }
        }
    }
    {
        // Range: 0x80018EA4 -> 0x80018F40
        // Local variables
        class xVec3 upper; // r1+0x8
        class xVec3 lower; // r1+0x14
    }
}
// Range: 0x80018F70 -> 0x8001935C
void xBoundSphereFromNGModel(class xBound * bound /* r30 */, class xModelInstance * model /* r28 */) {
    // Local variables
    class ModelPrototypeEntity * proto; // r5

    {
        // Range: 0x80019000 -> 0x80019044
        // Local variables
        class xVec3 center; // r1+0x44
    }
    {
        // Range: 0x80019048 -> 0x800190EC
        // Local variables
        float radius; // f0
        float r2; // f29
        class xVec3 center; // r1+0x38
    }
    {
        // Range: 0x800190F4 -> 0x800192E8
        // Local variables
        unsigned int numberOfRenderables; // r29

        {
            // Range: 0x80019100 -> 0x80019140
            // Local variables
            class xVec3 center; // r1+0x2C
        }
        {
            // Range: 0x80019140 -> 0x800192E8
            // Local variables
            float r; // f0
            class xVec3 extent; // r1+0x14
            class xVec3 center; // r1+0x20
            class Vector * upper; // r0
            class Vector * lower; // r0
            class BroadBound mergedBound; // r1+0x50

            {
                // Range: 0x8001914C -> 0x8001922C
                // Local variables
                unsigned int i; // r0
            }
        }
    }
    {
        // Range: 0x800192E8 -> 0x80019324
        // Local variables
        class xVec3 center; // r1+0x8
    }
}
// signature: xBoundGetCenter(const xBound *, xVec3 *)
// Range: 0x80019430 -> 0x800194AC
void xBoundGetCenter() {
}
