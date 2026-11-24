/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNeoDrive.cpp
*/
class BlockAllocatorArray neoDriveList; // size: 0x20, address: 0x807530F8
// Range: 0x800D65E0 -> 0x800D6638
void * zNeoDrivenLink::zNeoDrivenLink(class zNeoDrivenLink * this /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800D6640 -> 0x800D6690
void zNeoDrivenLink::Init() {
    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D6810 -> 0x800D6834
void zNeoDrivenLink::Reset() {
}
// Range: 0x800D6840 -> 0x800D68C0
void zNeoDrivenLink::ProcessMoves(float dt /* f31 */) {
    {
        // Range: 0x800D6858 -> 0x800D68A8
        // Local variables
        int x; // r29
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// signature: zNeoDrivenLink::OldestSibling(zNeoDrivenLink *)
// Range: 0x800D6900 -> 0x800D6924
class zNeoDrivenLink * zNeoDrivenLink::OldestSibling() {
    // Local variables
    class zNeoDrivenLink * newLink; // r3
}
// Range: 0x800D6930 -> 0x800D6A68
void zNeoDrivenLink::MOVE(class zNeoDrivenLink * set /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x800D6960 -> 0x800D6A04
        // Local variables
        bool yaw; // r29
        bool rotate; // r30
    }
}
// Range: 0x800D6A70 -> 0x800D6BB8
void zNeoDrivenLink::Moved(class xOGEntity * drivenObject /* r28 */, bool origin /* r29 */) {
    {
        // Range: 0x800D6AE4 -> 0x800D6BA4
        // Local variables
        int x; // r30

        {
            // Range: 0x800D6AF0 -> 0x800D6B58
            // Local variables
            int x; // r29
        }
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D6BC0 -> 0x800D7340
void zNeoDrivenLink::AddChild(class xOGEntity * parent /* r27 */, class xOGEntity * child /* r28 */, class xMat4x3 * relMat /* r29 */, unsigned int flags /* r30 */, float givenYaw /* f31 */, int newBone /* r24 */) {
    // Local variables
    bool calcLastMat; // r0
    class zNeoDrivenLink temp; // r1+0x10
    float yawDiff; // f0
    int spot; // r31
    class zNeoDrivenLink * tempLink; // r25

    {
        // Range: 0x800D6BDC -> 0x800D6C78
        // Local variables
        class xOGEntity * * memberList; // r1+0x8
        unsigned int memberCount; // r1+0xC

        {
            // Range: 0x800D6C10 -> 0x800D6C74
            // Local variables
            unsigned int i; // r25

            {
                // Range: 0x800D6C10 -> 0x800D6C74
                // Local variables
                class xOGEntity * ent; // r26
            }
        }
    }
    {
        // Range: 0x800D6CBC -> 0x800D6D24
        // Local variables
        int x; // r31
    }
    {
        // Range: 0x800D7044 -> 0x800D72A4
        // Local variables
        int z; // r30
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D7340 -> 0x800D7434
void zNeoDrivenLink::SetParentDriverLink(class xOGEntity * parent /* r30 */, class zNeoDrivenLink * link /* r31 */) {
}
// Range: 0x800D7440 -> 0x800D74EC
int zNeoDrivenLink::openSpot(class xOGEntity * passenger /* r28 */) {
    {
        // Range: 0x800D7450 -> 0x800D7494
        // Local variables
        int x; // r29
    }
    {
        // Range: 0x800D7494 -> 0x800D74D4
        // Local variables
        int x; // r29
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D74F0 -> 0x800D755C
int zNeoDrivenLink::findPassenger(class xOGEntity * passenger /* r28 */) {
    {
        // Range: 0x800D7500 -> 0x800D7544
        // Local variables
        int x; // r29
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D7560 -> 0x800D77F0
void zNeoDrivenLink::RemoveChild(class xOGEntity * child /* r29 */) {
    {
        // Range: 0x800D757C -> 0x800D77DC
        // Local variables
        int x; // r31

        {
            // Range: 0x800D7718 -> 0x800D7760
            // Local variables
            class zNeoDrivenLink * tempLink; // r4
        }
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D77F0 -> 0x800D7880
void zNeoDrivenLink::Clear() {
    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D7880 -> 0x800D7978
void zNeoDrivenLink::DriveStatus(class xOGEntity * child /* r27 */, bool status /* r30 */) {
    {
        // Range: 0x800D78A0 -> 0x800D7964
        // Local variables
        int x; // r28
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
// Range: 0x800D7980 -> 0x800D7A70
void zNeoDrivenLink::DriveReset(class xOGEntity * child /* r27 */) {
    {
        // Range: 0x800D799C -> 0x800D7A5C
        // Local variables
        int x; // r28
    }

    // References
    // -> class BlockAllocatorArray neoDriveList;
}
