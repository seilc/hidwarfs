/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Domains\Domain.cpp
*/
static class MemCB_ParcelTOC memCB_ParcelTOC; // size: 0x4, address: 0x807FDCE0
static class MemCB_ParcelDATA memCB_parcelDATA; // size: 0x4, address: 0x807FDCE4
static class MemCB_ParcelLoadAndParse memCB_parcelParsing; // size: 0x4, address: 0x807FDCE8
// Range: 0x8022E218 -> 0x8022E224
int Domains::Domain::GetAssetCount() {
}
// signature: Domains::Domain::GetAssetIDFromList(int)
// Range: 0x8022E224 -> 0x8022E29C
unsigned long long Domains::Domain::GetAssetIDFromList() {
    // Local variables
    class BlockAllocatorArray * uidArray; // r0
}
// signature: Domains::DomainPriv::StartLoad(unsigned short)
// Range: 0x8022E354 -> 0x8022E48C
void Domains::DomainPriv::StartLoad(class DomainPriv * this /* r31 */) {
    // Local variables
    unsigned short langList[3]; // r1+0x8
    class Activity * activity; // r0

    {
        // Range: 0x8022E378 -> 0x8022E430
        // Local variables
        int i; // r27

        {
            // Range: 0x8022E378 -> 0x8022E430
            // Local variables
            class Activity * activity; // r26

            {
                // Range: 0x8022E3AC -> 0x8022E3BC
                // Local variables
                class ActLoadMemFastParcel * almfp; // r0
            }
            {
                // Range: 0x8022E3C8 -> 0x8022E3F8
                // Local variables
                int j; // r25

                {
                    // Range: 0x8022E3C8 -> 0x8022E3F8
                    // Local variables
                    class Activity * activity; // r26

                    {
                        // Range: 0x8022E3CC -> 0x8022E3EC
                        // Local variables
                        class ActLoadTextureParcel * altp; // r0
                    }
                }
            }
            {
                // Range: 0x8022E414 -> 0x8022E424
                // Local variables
                class ActLoadParcel * alp; // r0
            }
        }
    }
}
// signature: Domains::DomainPriv::CreateActivity(Domains::enActType)
// Range: 0x8022E48C -> 0x8022E654
class Activity * Domains::DomainPriv::CreateActivity(class DomainPriv * this /* r30 */) {
    // Local variables
    class Activity * activity; // r31

    // References
    // -> struct {} __vt__Q27Domains12ActUnloadAll;
    // -> struct {} __vt__Q27Domains15ActRegisterEnts;
    // -> struct {} __vt__Q27Domains20ActLoadMemFastParcel;
    // -> struct {} __vt__Q27Domains20ActLoadTextureParcel;
    // -> struct {} __vt__Q27Domains13ActLoadParcel;
    // -> struct {} __vt__Q27Domains13ActCheckpoint;
}
// signature: Domains::DomainPriv::AbortActivity(Domains::Activity *)
// Range: 0x8022E654 -> 0x8022E768
void Domains::DomainPriv::AbortActivity(class DomainPriv * this /* r27 */) {
}
// Range: 0x8022E780 -> 0x8022E844
void Domains::ActCheckpoint::Execute(class DomainPriv * domain /* r31 */) {
}
// Range: 0x8022E84C -> 0x8022E854
bool Domains::ActCheckpoint::IsDone() {
}
// signature: Domains::@unnamed@WAD00_cpp@::MemCB_ParcelTOC::Relocating(Domains::MemHandle *)
// Range: 0x8022E894 -> 0x8022E8A4
static void Domains::@unnamed@WAD00_cpp@::MemCB_ParcelTOC::Relocating() {
}
// signature: Domains::@unnamed@WAD00_cpp@::MemCB_ParcelDATA::Relocating(Domains::MemHandle *)
// Range: 0x8024F5A8 -> 0x8024F5B8
static void Domains::@unnamed@WAD00_cpp@::MemCB_ParcelDATA::Relocating() {
}
// Range: 0x8022E8E4 -> 0x8022EA2C
void Domains::ActLoadParcel::Prepare(class ActLoadParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x8022EA2C -> 0x8022EBD8
void Domains::ActLoadParcel::Finish(class DomainPriv * dom /* r29 */) {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static class LSPoolModule lsPoolMod;
}
// signature: Domains::MemCB_ParcelLoadAndParse::Relocating(Domains::MemHandle *)
// Range: 0x8024F598 -> 0x8024F5A8
void Domains::MemCB_ParcelLoadAndParse::Relocating() {
}
// Range: 0x8022EC18 -> 0x8022F0F0
void Domains::ActLoadParcel::Execute(class ActLoadParcel * this /* r20 */, class DomainPriv * domain /* r21 */) {
    {
        // Range: 0x8022EC30 -> 0x8022EC94
        // Local variables
        enum enStatus isCon; // r0
    }
    {
        // Range: 0x8022EC94 -> 0x8022ED58
        // Local variables
        int allocAlign; // r5
        int numSectorsToRead; // r22
        int amtToRead; // r4
    }
    {
        // Range: 0x8022ED58 -> 0x8022EDA0
        // Local variables
        enum enStatus isRead; // r0
    }
    {
        // Range: 0x8022F094 -> 0x8022F0DC
        // Local variables
        enum enStatus isDiscon; // r0
    }

    // References
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Domains::ActLoadParcel::SliceAndDice(Domains::DomainPriv *, Domains::MemHandle **, const Domains::ParcelSliceMeta *)
// Range: 0x8022F0F0 -> 0x8022F5A0
void Domains::ActLoadParcel::SliceAndDice(class ActLoadParcel * this /* r27 */, class DomainPriv * domain /* r28 */, class MemHandle * * origMemHandle /* r1+0x8 */) {
    // Local variables
    char * baseOffsetAddr; // r0
    class MetaParcelSlicesEntry * sliceEntry; // r31
    int numSlices; // r30
    class MemHandle * origRemain; // r1+0x10

    {
        // Range: 0x8022F0F8 -> 0x8022F448
        // Local variables
        int i; // r29

        {
            // Range: 0x8022F0F8 -> 0x8022F448
            // Local variables
            class MemHandle * currMemSlice; // r1+0xC
            class MemCallbacks * useTheseMemCB; // r0
        }
    }

    // References
    // -> static class MemCB_ParcelDATA memCB_parcelDATA;
    // -> static class MemCB_ParcelTOC memCB_ParcelTOC;
    // -> static class MemHandle nullHandle;
    // -> static class DynaMemModule dynaMemMod;
}
// signature: Domains::ActLoadParcel::SliceDATABlock(Domains::DomainPriv *, Domains::ParcelTOCRef *, Domains::MemHandle **, long)
// Range: 0x8022F5A0 -> 0x8022F910
void Domains::ActLoadParcel::SliceDATABlock(class ActLoadParcel * this /* r15 */, class DomainPriv * domain /* r16 */, class MemHandle * * blockHandle /* r14 */, long baseOffset /* r17 */) {
    // Local variables
    class MemCallbacks * blobMemCB; // r22
    class TOCEntry * entry; // r21
    int blobCount; // r20
    class MemHandle * origRemain; // r1+0x8

    {
        // Range: 0x8022F5B8 -> 0x8022F7BC
        // Local variables
        int i; // r19

        {
            // Range: 0x8022F5B8 -> 0x8022F7BC
            // Local variables
            class BlobAddArg addArg; // r1+0x10
            class BlobCustomAlloc * customAlloc; // r0
            class MemHandle * currMemSlice; // r18
            int sliceAmount; // r5
        }
    }

    // References
    // -> static class BlobMemCB blobMemCB;
    // -> static class MemHandle nullHandle;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class BlobloidModule blobloidMod;
}
// Range: 0x8022F918 -> 0x8022FA6C
void Domains::ActLoadTextureParcel::Prepare(class ActLoadTextureParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x8024E518 -> 0x8024E584
void Domains::MemFastAlloc::Allocate(class MemFastAlloc * this /* r29 */, void * data /* r30 */, int size /* r31 */) {
}
// Range: 0x8024E4BC -> 0x8024E518
void Domains::MemFastAlloc::Release(class MemFastAlloc * this /* r31 */) {
}
// Range: 0x8024E4B4 -> 0x8024E4BC
char * Domains::MemFastAlloc::Data() const {
}
// Range: 0x8022FA6C -> 0x8022FBC0
void Domains::ActLoadMemFastParcel::Prepare(class ActLoadMemFastParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x8022FBC0 -> 0x8022FC10
class BlobCustomAlloc * Domains::ActLoadMemFastParcel::CreateCustomAlloc() {
    // References
    // -> struct {} __vt__Q27Domains12MemFastAlloc;
}
// signature: Domains::ActRegisterEnts::Init(Domains::DomainPriv *)
// Range: 0x8022FC10 -> 0x8022FCA0
void Domains::ActRegisterEnts::Init() {
}
// Range: 0x8022FD20 -> 0x80230254
void Domains::ActRegisterEnts::Execute(class ActRegisterEnts * this /* r24 */, class DomainPriv * domain /* r26 */) {
    // Local variables
    class Iterator it_buidEnd; // r1+0x48

    // References
    // -> double secondsPerTick;
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: Domains::ActUnloadAll::Init(Domains::DomainPriv *)
// Range: 0x802303D4 -> 0x8023085C
void Domains::ActUnloadAll::Init(class ActUnloadAll * this /* r27 */) {
    {
        // Range: 0x80230460 -> 0x80230848
        // Local variables
        class Iterator it_buidEnd; // r1+0x24
        class Iterator it_buidStart; // r1+0x30
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// Range: 0x8023085C -> 0x80230A50
void Domains::ActUnloadAll::Execute(class ActUnloadAll * this /* r27 */, class DomainPriv * domain /* r28 */) {
    // Local variables
    class Time startTime; // r1+0x28
    class ScadMgr * scadMgr; // r31
    class Iterator it_buidStart; // r1+0x3C
    class Iterator it_buidEnd; // r1+0x30

    {
        // Range: 0x802308B8 -> 0x80230958
        // Local variables
        bool stillActive; // r30

        {
            // Range: 0x802308C4 -> 0x80230920
            // Local variables
            class Goodie * goodie; // r29
        }
    }
    {
        // Range: 0x80230958 -> 0x80230A30
        // Local variables
        class TableManager * tableMgr; // r0
        char * packfileName; // r29
        class BlobGlob * blobGlob; // r29

        {
            // Range: 0x80230968 -> 0x802309F0
            // Local variables
            class Time timeSpent; // r1+0x20
            class Goodie * goodie; // r0
        }
    }
}
