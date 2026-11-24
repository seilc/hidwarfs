/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNeoDrive.cpp
*/
class BlockAllocatorArray neoDriveList; // size: 0x20, address: 0x80822AA0
// Range: 0x80196C40 -> 0x80196DD0
void * zNeoDrivenLink::zNeoDrivenLink() {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80196DD0 -> 0x80196F60
void zNeoDrivenLink::Init() {
    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80196F60 -> 0x80197164
void zNeoDrivenLink::Reset() {
    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80197170 -> 0x801972C4
void zNeoDrivenLink::ProcessMoves(float dt /* f31 */) {
    {
        // Range: 0x8019718C -> 0x80197298
        // Local variables
        int x; // r31
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80197340 -> 0x80197688
void zNeoDrivenLink::MOVE(class zNeoDrivenLink * set /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80197378 -> 0x80197438
        // Local variables
        bool yaw; // r28
        bool rotate; // r29
    }
}
// Range: 0x80197690 -> 0x80197A1C
void zNeoDrivenLink::Moved(class xOGEntity * drivenObject /* r31 */, bool origin /* r30 */) {
    {
        // Range: 0x80197708 -> 0x80197A04
        {
            // Range: 0x80197718 -> 0x8019786C
            // Local variables
            int x; // r3
        }
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80197A20 -> 0x80197FB8
void zNeoDrivenLink::AddChild(class xOGEntity * parent /* r28 */, class xOGEntity * child /* r29 */, class xMat4x3 * relMat /* r30 */, unsigned int flags /* r27 */, float givenYaw /* f31 */) {
    // Local variables
    bool calcLastMat; // r0
    class zNeoDrivenLink temp; // r1+0x8
    float yawDiff; // f0
    int spot; // r31
    class zNeoDrivenLink * tempLink; // r25

    {
        // Range: 0x80197A84 -> 0x80197AD8
        // Local variables
        int x; // r25
    }
    {
        // Range: 0x80197CC0 -> 0x80197EC8
        // Local variables
        int z; // r30
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80198320 -> 0x8019841C
void zNeoDrivenLink::SetParentDriverLink(class xOGEntity * parent /* r30 */, class zNeoDrivenLink * link /* r31 */) {
}
// signature: zNeoDrivenLink::openSpot(World::xOGEntity *)
// Range: 0x80198420 -> 0x80198554
int zNeoDrivenLink::openSpot() {
    {
        // Range: 0x80198424 -> 0x801984B0
        // Local variables
        int x; // r10
    }
    {
        // Range: 0x801984C4 -> 0x80198540
        // Local variables
        int x; // r3
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80198560 -> 0x80198F04
void zNeoDrivenLink::RemoveChild(class xOGEntity * child /* r28 */) {
    {
        // Range: 0x80198580 -> 0x80198EE0
        // Local variables
        int x; // r29

        {
            // Range: 0x80198584 -> 0x80198D58
            // Local variables
            class zNeoDrivenLink * tempLink; // r3
        }
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x80198F10 -> 0x80198FB8
void zNeoDrivenLink::Clear() {
    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// signature: zNeoDrivenLink::DriveStatus(World::xOGEntity *, bool)
// Range: 0x80198FC0 -> 0x80199234
void zNeoDrivenLink::DriveStatus(class xOGEntity * child /* r0 */) {
    {
        // Range: 0x80198FD0 -> 0x80199224
        // Local variables
        int x; // r5
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// signature: zNeoDrivenLink::DriveReset(World::xOGEntity *)
// Range: 0x80199240 -> 0x801994D4
void zNeoDrivenLink::DriveReset() {
    {
        // Range: 0x80199260 -> 0x801994B4
        // Local variables
        int x; // r31
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x801994E0 -> 0x801996C8
void zNeoDrivenLink::CheckForCircularLink() {
    {
        // Range: 0x801994E4 -> 0x801996B8
        // Local variables
        int i; // r10

        {
            // Range: 0x801994E4 -> 0x801996B8
            // Local variables
            class zNeoDrivenLink * pFast; // r3
        }
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
