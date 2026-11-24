/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Domains\Domain.cpp
*/
static class MemCB_ParcelTOC memCB_ParcelTOC; // size: 0x4, address: 0x80845B1C
static class MemCB_ParcelDATA memCB_parcelDATA; // size: 0x4, address: 0x80845B20
static class MemCB_ParcelLoadAndParse memCB_parcelParsing; // size: 0x4, address: 0x80845B24
// Range: 0x802CE070 -> 0x802CE07C
int Domains::Domain::GetAssetCount() {
}
// signature: Domains::Domain::GetAssetIDFromList(int)
// Range: 0x802CE07C -> 0x802CE0F4
unsigned long long Domains::Domain::GetAssetIDFromList() {
    // Local variables
    class BlockAllocatorArray & uidArray; // r0
}
// signature: Domains::DomainPriv::StartLoad(unsigned short)
// Range: 0x802CE1AC -> 0x802CE2E4
void Domains::DomainPriv::StartLoad(class DomainPriv * this /* r31 */) {
    // Local variables
    unsigned short langList[3]; // r1+0x8
    class Activity * activity; // r0

    {
        // Range: 0x802CE1D0 -> 0x802CE288
        // Local variables
        int i; // r27

        {
            // Range: 0x802CE1D0 -> 0x802CE288
            // Local variables
            class Activity * activity; // r26

            {
                // Range: 0x802CE204 -> 0x802CE214
                // Local variables
                class ActLoadMemFastParcel * almfp; // r0
            }
            {
                // Range: 0x802CE220 -> 0x802CE250
                // Local variables
                int j; // r25

                {
                    // Range: 0x802CE220 -> 0x802CE250
                    // Local variables
                    class Activity * activity; // r26

                    {
                        // Range: 0x802CE224 -> 0x802CE244
                        // Local variables
                        class ActLoadTextureParcel * altp; // r0
                    }
                }
            }
            {
                // Range: 0x802CE26C -> 0x802CE27C
                // Local variables
                class ActLoadParcel * alp; // r0
            }
        }
    }
}
// signature: Domains::DomainPriv::CreateActivity(Domains::enActType)
// Range: 0x802CE2E4 -> 0x802CE4AC
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
// Range: 0x802CE4AC -> 0x802CE5C0
void Domains::DomainPriv::AbortActivity(class DomainPriv * this /* r27 */) {
}
// Range: 0x802CF110 -> 0x802CF1D4
void Domains::ActCheckpoint::Execute(class DomainPriv * domain /* r31 */) {
}
// Range: 0x802CF1EC -> 0x802CF334
void Domains::ActLoadParcel::Prepare(class ActLoadParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x802CF334 -> 0x802CF530
void Domains::ActLoadParcel::Finish(class DomainPriv * dom /* r29 */) {
    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x802CF534 -> 0x802CFA0C
void Domains::ActLoadParcel::Execute(class ActLoadParcel * this /* r20 */, class DomainPriv * domain /* r21 */) {
    {
        // Range: 0x802CF54C -> 0x802CF5B0
        // Local variables
        enum enStatus isCon; // r0
    }
    {
        // Range: 0x802CF5B0 -> 0x802CF674
        // Local variables
        int allocAlign; // r5
        int numSectorsToRead; // r22
        int amtToRead; // r4
    }
    {
        // Range: 0x802CF674 -> 0x802CF6BC
        // Local variables
        enum enStatus isRead; // r0
    }
    {
        // Range: 0x802CF9B0 -> 0x802CF9F8
        // Local variables
        enum enStatus isDiscon; // r0
    }

    // References
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Domains::ActLoadParcel::SliceAndDice(Domains::DomainPriv *, Domains::MemHandle **, const Domains::ParcelSliceMeta *)
// Range: 0x802CFA0C -> 0x802CFEBC
void Domains::ActLoadParcel::SliceAndDice(class ActLoadParcel * this /* r27 */, class DomainPriv * domain /* r28 */, class MemHandle * * origMemHandle /* r1+0x8 */) {
    // Local variables
    char * baseOffsetAddr; // r0
    class MetaParcelSlicesEntry * sliceEntry; // r31
    int numSlices; // r30
    class MemHandle * origRemain; // r1+0x10

    {
        // Range: 0x802CFA14 -> 0x802CFD64
        // Local variables
        int i; // r29

        {
            // Range: 0x802CFA14 -> 0x802CFD64
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
// Range: 0x802CFEBC -> 0x802D021C
void Domains::ActLoadParcel::SliceDATABlock(class ActLoadParcel * this /* r15 */, class DomainPriv * domain /* r16 */, class MemHandle * * blockHandle /* r17 */, long baseOffset /* r18 */) {
    // Local variables
    class MemCallbacks * blobMemCB; // r23
    class TOCEntry * entry; // r22
    int blobCount; // r21
    class MemHandle * origRemain; // r1+0x8

    {
        // Range: 0x802CFECC -> 0x802D00C8
        // Local variables
        int i; // r20

        {
            // Range: 0x802CFECC -> 0x802D00C8
            // Local variables
            class BlobAddArg addArg; // r1+0xC
            class BlobCustomAlloc * customAlloc; // r0
            class MemHandle * currMemSlice; // r19
            int sliceAmount; // r5
        }
    }

    // References
    // -> static class BlobMemCB blobMemCB;
    // -> static class MemHandle nullHandle;
    // -> static class DynaMemModule dynaMemMod;
}
// Range: 0x802D0220 -> 0x802D0374
void Domains::ActLoadTextureParcel::Prepare(class ActLoadTextureParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x802E62E8 -> 0x802E6354
void Domains::MemFastAlloc::Allocate(class MemFastAlloc * this /* r29 */, void * data /* r30 */, int size /* r31 */) {
}
// Range: 0x802E628C -> 0x802E62E8
void Domains::MemFastAlloc::Release(class MemFastAlloc * this /* r31 */) {
}
// Range: 0x802D0374 -> 0x802D04C8
void Domains::ActLoadMemFastParcel::Prepare(class ActLoadMemFastParcel * this /* r30 */, class DomainPriv * dom /* r31 */) {
    // References
    // -> struct {} __vt__Q26Loader10OurQueryCB;
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x802D04C8 -> 0x802D0518
class BlobCustomAlloc * Domains::ActLoadMemFastParcel::CreateCustomAlloc() {
    // References
    // -> struct {} __vt__Q27Domains12MemFastAlloc;
}
// signature: Domains::ActRegisterEnts::Init(Domains::DomainPriv *)
// Range: 0x802D0518 -> 0x802D0584
void Domains::ActRegisterEnts::Init() {
}
// signature: Domains::ActRegisterEnts::Execute(Domains::DomainPriv *)
// Range: 0x802D0584 -> 0x802D0874
void Domains::ActRegisterEnts::Execute(class ActRegisterEnts * this /* r28 */) {
    // References
    // -> double secondsPerTick;
}
// signature: Domains::ActUnloadAll::Init(Domains::DomainPriv *)
// Range: 0x802D0874 -> 0x802D0B24
void Domains::ActUnloadAll::Init(class ActUnloadAll * this /* r31 */) {
    {
        // Range: 0x802D090C -> 0x802D0B04
        // Local variables
        class Iterator it_buidEnd; // r1+0x14
        class Iterator it_buidStart; // r1+0x20

        {
            // Range: 0x802D0A00 -> 0x802D0A00
            // Local variables
            class EntityHandleBase * goodie; // r28
        }
    }
}
// Range: 0x802D0B24 -> 0x802D11E0
void Domains::ActUnloadAll::Execute(class ActUnloadAll * this /* r27 */, class DomainPriv * domain /* r28 */) {
    // Local variables
    class Iterator it_buidStart; // r1+0x4C
    class Iterator it_buidEnd; // r1+0x40

    {
        // Range: 0x802D0C44 -> 0x802D0D60
        // Local variables
        bool stillActive; // r31

        {
            // Range: 0x802D0C50 -> 0x802D0C64
            // Local variables
            class EntityHandleBase * handle; // r0
        }
    }
    {
        // Range: 0x802D0D60 -> 0x802D11C0
        // Local variables
        char * packfileName; // r24

        {
            // Range: 0x802D0D6C -> 0x802D0D80
            // Local variables
            class EntityHandleBase * handle; // r23
        }
    }

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
    // -> static class MSTQueryModule mstQueryMod;
    // -> double secondsPerTick;
}
