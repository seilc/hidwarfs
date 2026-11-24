/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSearchMapCreatorNavMesh.cpp
*/
// Range: 0x801A92A0 -> 0x801A92A8
unsigned int zSearchMapCreatorNavMesh::GetSourceAssetType() const {
}
// Range: 0x801A92B0 -> 0x801A92F4
int zSearchMapCreatorNavMesh::GetItemCount() const {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801A9630 -> 0x801A9680
void * zSearchMapCreatorNavMesh_CreateMapCB::~zSearchMapCreatorNavMesh_CreateMapCB(class zSearchMapCreatorNavMesh_CreateMapCB * this /* r30 */) {
}
// Range: 0x801A9300 -> 0x801A9630
void zSearchMapCreatorNavMesh::Create(class zSearchMapCreatorNavMesh * this /* r30 */, int index /* r15 */, unsigned long long & sourceID /* r31 */) {
    // Local variables
    class zSearchMapCreatorNavMesh_CreateMapCB cbdata; // r1+0x20

    {
        // Range: 0x801A93BC -> 0x801A95E8
        // Local variables
        int nodeID; // r16

        {
            // Range: 0x801A93BC -> 0x801A95E8
            // Local variables
            class zSearchMapNode * node; // r15

            {
                // Range: 0x801A93BC -> 0x801A93BC
                // Local variables
                int i; // r5
            }
            {
                // Range: 0x801A9568 -> 0x801A95E8
                // Local variables
                int linkID; // r3
                int rec; // r0
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x801A96A0 -> 0x801A96A8
unsigned int zSearchMapCreatorNavMeshGroup::GetSourceAssetType() const {
}
// Range: 0x801A99B0 -> 0x801A9A14
void * ConnectionFinder::~ConnectionFinder(class ConnectionFinder * this /* r30 */) {
}
// Range: 0x801A96B0 -> 0x801A99A4
void zSearchMapCreatorNavMeshGroup::Create(class zSearchMapCreatorNavMeshGroup * this /* r23 */, int index /* r22 */, unsigned long long & sourceID /* r24 */) {
    // Local variables
    class ConnectionFinder connFinder; // r1+0x20

    {
        // Range: 0x801A986C -> 0x801A995C
        // Local variables
        int i; // r25

        {
            // Range: 0x801A986C -> 0x801A995C
            // Local variables
            int currLink; // r0
            class zSearchMapNode * node; // r27

            {
                // Range: 0x801A9880 -> 0x801A98D0
                // Local variables
                int j; // r4
            }
            {
                // Range: 0x801A98E8 -> 0x801A995C
                // Local variables
                int j; // r7
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
