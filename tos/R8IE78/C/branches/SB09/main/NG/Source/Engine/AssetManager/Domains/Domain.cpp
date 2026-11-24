/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Domains\Domain.cpp
*/
static class MemCB_ParcelTOC memCB_ParcelTOC; // size: 0x4, address: 0x8077429C
static class MemCB_ParcelDATA memCB_parcelDATA; // size: 0x4, address: 0x807742A0
static class MemCB_ParcelLoadAndParse memCB_parcelParsing; // size: 0x4, address: 0x807742A4
// Range: 0x801AD0A0 -> 0x801AD0FC
void * Domains::Domain::Domain(class Domain * this /* r31 */) {
}
// Range: 0x801AD100 -> 0x801AD180
void * Domains::Domain::~Domain(class Domain * this /* r29 */) {
}
// Range: 0x801AD180 -> 0x801AD18C
int Domains::Domain::GetAssetCount() {
}
// signature: Domains::Domain::GetAssetIDFromList(int)
// Range: 0x801AD190 -> 0x801AD1D0
unsigned long long Domains::Domain::GetAssetIDFromList() {
    // Local variables
    class BlockAllocatorArray & uidArray; // r0
}
// Range: 0x801AD1D0 -> 0x801AD258
void * Domains::DomainPriv::DomainPriv(class DomainPriv * this /* r30 */) {
    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Ux>;
}
// Range: 0x801AD440 -> 0x801AD494
void * Domains::DomainPriv::~DomainPriv(class DomainPriv * this /* r30 */) {
}
// signature: Domains::DomainPriv::Init(const char *, unsigned int, Domains::Domain *)
// Range: 0x801AD4A0 -> 0x801AD500
void Domains::DomainPriv::Init(class DomainPriv * this /* r29 */, unsigned int domRefMask /* r30 */, class Domain * parent /* r31 */) {
}
// signature: Domains::DomainPriv::StartLoad(unsigned short)
// Range: 0x801AD500 -> 0x801AD618
void Domains::DomainPriv::StartLoad(class DomainPriv * this /* r25 */) {
    // Local variables
    unsigned short langList[3]; // r1+0x8
    class Activity * activity; // r0

    {
        // Range: 0x801AD524 -> 0x801AD5D8
        // Local variables
        int i; // r27

        {
            // Range: 0x801AD524 -> 0x801AD5D8
            // Local variables
            class Activity * activity; // r0

            {
                // Range: 0x801AD568 -> 0x801AD570
                // Local variables
                class ActLoadMemFastParcel * almfp; // r0
            }
            {
                // Range: 0x801AD584 -> 0x801AD590
                // Local variables
                class ActLoadParcel * alp; // r0
            }
            {
                // Range: 0x801AD598 -> 0x801AD5D8
                // Local variables
                int j; // r26

                {
                    // Range: 0x801AD598 -> 0x801AD5D8
                    // Local variables
                    class Activity * activity; // r0

                    {
                        // Range: 0x801AD5A8 -> 0x801AD5B4
                        // Local variables
                        class ActLoadTextureParcel * altp; // r0
                    }
                }
            }
        }
    }
}
// Range: 0x801AD620 -> 0x801AD694
void Domains::DomainPriv::StartUnload(class DomainPriv * this /* r31 */) {
    {
        // Range: 0x801AD63C -> 0x801AD654
        // Local variables
        class Activity * activity; // r0
    }
    {
        // Range: 0x801AD654 -> 0x801AD674
        // Local variables
        class Activity * activity; // r0
    }
}
// Range: 0x801AD6A0 -> 0x801AD708
void Domains::DomainPriv::HandOffToWorld(class DomainPriv * this /* r31 */) {
    {
        // Range: 0x801AD6A8 -> 0x801AD6C8
        // Local variables
        class Activity * activity; // r0
    }
    {
        // Range: 0x801AD6C8 -> 0x801AD6E8
        // Local variables
        class Activity * activity; // r0
    }
}
// signature: Domains::DomainPriv::CreateActivity(Domains::enActType)
// Range: 0x801AD710 -> 0x801AD8D0
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
// Range: 0x801AD8D0 -> 0x801AD924
void Domains::DomainPriv::DestroyActivity(class Activity * activity /* r31 */) {
}
// Range: 0x801AD930 -> 0x801AD96C
void Domains::DomainPriv::QueueActivity(class DomainPriv * this /* r30 */, class Activity * activity /* r31 */) {
}
// signature: Domains::DomainPriv::AbortActivity(Domains::Activity *)
// Range: 0x801AD970 -> 0x801ADA3C
void Domains::DomainPriv::AbortActivity(class DomainPriv * this /* r29 */) {
}
// Range: 0x801ADA40 -> 0x801ADA90
void Domains::DomainPriv::MakeActivityQue(class DomainPriv * this /* r31 */) {
}
// Range: 0x801ADA90 -> 0x801ADAE4
void Domains::DomainPriv::KillActivityQue(class DomainPriv * this /* r31 */) {
}
// Range: 0x801ADAF0 -> 0x801ADBC4
void Domains::DomainPriv::ProcActivityQue(class DomainPriv * this /* r28 */) {
    // Local variables
    bool isDone; // r0

    {
        // Range: 0x801ADB04 -> 0x801ADBA8
        // Local variables
        class Activity * activity; // r29
    }
}
// Range: 0x801ADBD0 -> 0x801ADC5C
void Domains::DomainPriv::KillUIDArray(class DomainPriv * this /* r29 */) {
}
// Range: 0x801ADC60 -> 0x801ADD0C
void Domains::DomainPriv::AddUIDItem(class DomainPriv * this /* r31 */, class EntityHandleBase * handle /* r28 */) {
}
// Range: 0x801AE240 -> 0x801AE304
void Domains::ActCheckpoint::Execute(class DomainPriv * domain /* r31 */) {
}
// Range: 0x801AE310 -> 0x801AE390
void Domains::ActLoadParcel::Prepare(class ActLoadParcel * this /* r28 */, class DomainPriv * dom /* r29 */) {
    // References
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x801AE390 -> 0x801AE3D0
void Domains::ActLoadParcel::Finish(class DomainPriv * dom /* r31 */) {
    // References
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x801AE3D0 -> 0x801AE544
void Domains::ActLoadParcel::Execute(class ActLoadParcel * this /* r30 */, class DomainPriv * domain /* r31 */) {
    {
        // Range: 0x801AE3E8 -> 0x801AE428
        // Local variables
        enum enStatus isCon; // r0
    }
    {
        // Range: 0x801AE428 -> 0x801AE4C0
        // Local variables
        int allocAlign; // r4
        int numSectorsToRead; // r29
        int amtToRead; // r3
    }
    {
        // Range: 0x801AE4C0 -> 0x801AE4E4
        // Local variables
        enum enStatus isRead; // r0
    }
    {
        // Range: 0x801AE50C -> 0x801AE530
        // Local variables
        enum enStatus isDiscon; // r0
    }

    // References
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
}
// signature: Domains::FindMetaBlock(const HEStructs::MetaRecord *, const int, const char *)
// Range: 0x801AE550 -> 0x801AE5DC
class MetaRecord * Domains::FindMetaBlock() {
    // Local variables
    class MetaRecord * metaResult; // r11
    class MetaRecord * metaRec; // r3

    {
        // Range: 0x801AE554 -> 0x801AE5D4
        // Local variables
        int i; // r12
    }
}
// Range: 0x801AE5E0 -> 0x801AE660
void Domains::ActLoadParcel::ParseAndSlice(class ActLoadParcel * this /* r29 */, class DomainPriv * domain /* r30 */) {
    // Local variables
    int numMetaRec; // r1+0x8
    class MetaRecord * firstMetaRec; // r0
    class MetaRecord * sliceMetaBlock; // r0
    class ParcelSliceMeta * parcelSliceMeta; // r31
    int tocCount; // r0
}
// signature: Domains::ActLoadParcel::GetTOCCount(const Domains::ParcelSliceMeta *)
// Range: 0x801AE660 -> 0x801AE694
int Domains::ActLoadParcel::GetTOCCount() {
    // Local variables
    int tocCount; // r3
    class MetaParcelSlicesEntry * sliceEntry; // r4
    int numSlices; // r0

    {
        // Range: 0x801AE678 -> 0x801AE690
        // Local variables
        int i; // r0
    }
}
// Range: 0x801AE6A0 -> 0x801AE89C
void Domains::ActLoadParcel::SliceAndDice(class ActLoadParcel * this /* r17 */, class DomainPriv * domain /* r18 */, class MemHandle * * origMemHandle /* r19 */, class ParcelSliceMeta * parcelSliceMeta /* r20 */) {
    // Local variables
    char * baseOffsetAddr; // r26
    class MetaParcelSlicesEntry * sliceEntry; // r25
    int numSlices; // r24
    int idxDATASlice; // r23
    class MemHandle * * sliceList; // r22
    class MemHandle * origRemain; // r1+0x8

    {
        // Range: 0x801AE6F0 -> 0x801AE7C8
        // Local variables
        int i; // r21

        {
            // Range: 0x801AE6F0 -> 0x801AE7C8
            // Local variables
            class MemHandle * currMemSlice; // r4
            class MemCallbacks * useTheseMemCB; // r5
        }
    }
    {
        // Range: 0x801AE7CC -> 0x801AE848
        // Local variables
        int i; // r25

        {
            // Range: 0x801AE7D4 -> 0x801AE848
            // Local variables
            class ParcelTOCRef * parcelTOCRef; // r0
        }
    }

    // References
    // -> static class MemCB_ParcelTOC memCB_ParcelTOC;
    // -> static class MemCB_ParcelDATA memCB_parcelDATA;
}
// signature: Domains::ActLoadParcel::SliceDATABlock(Domains::DomainPriv *, Domains::ParcelTOCRef *, Domains::MemHandle **, long)
// Range: 0x801AE8A0 -> 0x801AE9DC
void Domains::ActLoadParcel::SliceDATABlock(class ActLoadParcel * this /* r24 */, class DomainPriv * domain /* r25 */, class MemHandle * * blockHandle /* r26 */, long baseOffset /* r27 */) {
    // Local variables
    class MemCallbacks * blobMemCB; // r31
    class TOCEntry * entry; // r30
    int blobCount; // r29
    class MemHandle * origRemain; // r1+0x8

    {
        // Range: 0x801AE8CC -> 0x801AE9A4
        // Local variables
        int i; // r28

        {
            // Range: 0x801AE8CC -> 0x801AE9A4
            // Local variables
            class BlobAddArg addArg; // r1+0xC
            class BlobCustomAlloc * customAlloc; // r0
            class MemHandle * currMemSlice; // r0
            int sliceAmount; // r4
        }
    }

    // References
    // -> static class MemHandle nullHandle;
    // -> static class BlobMemCB blobMemCB;
}
// Range: 0x801AE9E0 -> 0x801AEA30
void Domains::ActLoadParcel::MakePackTOCArray(class ActLoadParcel * this /* r30 */, int numTOC /* r31 */) {
}
// Range: 0x801AEA30 -> 0x801AEAC8
void Domains::ActLoadParcel::KillPackTOCArray(class ActLoadParcel * this /* r28 */) {
    {
        // Range: 0x801AEA50 -> 0x801AEA90
        // Local variables
        int i; // r29

        {
            // Range: 0x801AEA50 -> 0x801AEA90
            // Local variables
            class MemHandle * memHandle; // r3
        }
    }
}
// signature: Domains::ActLoadParcel::InsertPackTOC(Domains::MemHandle *)
// Range: 0x801AEAD0 -> 0x801AEAF0
void Domains::ActLoadParcel::InsertPackTOC() {
}
// signature: Domains::ActLoadParcel::GetNthPackTOC(int)
// Range: 0x801AEAF0 -> 0x801AEB08
class ParcelTOCRef * Domains::ActLoadParcel::GetNthPackTOC() {
}
// Range: 0x801AEB10 -> 0x801AEB98
void Domains::ActLoadTextureParcel::Prepare(class ActLoadTextureParcel * this /* r28 */, class DomainPriv * dom /* r29 */) {
    // References
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x801C1EA0 -> 0x801C1F14
void Domains::MemFastAlloc::Allocate(class MemFastAlloc * this /* r28 */, void * data /* r29 */, int size /* r30 */) {
}
// Range: 0x801C1E40 -> 0x801C1E94
void Domains::MemFastAlloc::Release(class MemFastAlloc * this /* r31 */) {
}
// Range: 0x801AEBA0 -> 0x801AEC28
void Domains::ActLoadMemFastParcel::Prepare(class ActLoadMemFastParcel * this /* r28 */, class DomainPriv * dom /* r29 */) {
    // References
    // -> static class LSPoolModule lsPoolMod;
}
// Range: 0x801AEC30 -> 0x801AEC80
class BlobCustomAlloc * Domains::ActLoadMemFastParcel::CreateCustomAlloc() {
    // References
    // -> struct {} __vt__Q27Domains12MemFastAlloc;
}
// signature: Domains::ActRegisterEnts::Init(Domains::DomainPriv *)
// Range: 0x801AEC80 -> 0x801AECDC
void Domains::ActRegisterEnts::Init(class ActRegisterEnts * this /* r31 */) {
}
// signature: Domains::ActRegisterEnts::Execute(Domains::DomainPriv *)
// Range: 0x801AED80 -> 0x801AEEE0
void Domains::ActRegisterEnts::Execute(class ActRegisterEnts * this /* r31 */) {
    // References
    // -> double secondsPerTick;
}
// Range: 0x801AEFA0 -> 0x801AF064
void Domains::ActUnloadAll::Init(class ActUnloadAll * this /* r30 */, class DomainPriv * domain /* r31 */) {
    {
        // Range: 0x801AEFE0 -> 0x801AF050
        // Local variables
        class Iterator it_buidEnd; // r1+0x18
        class Iterator it_buidStart; // r1+0x24

        {
            // Range: 0x801AF004 -> 0x801AF03C
            // Local variables
            class EntityHandleBase * goodie; // r0
        }
    }
}
// Range: 0x801AF1A0 -> 0x801AF368
void Domains::ActUnloadAll::Execute(class ActUnloadAll * this /* r30 */, class DomainPriv * domain /* r31 */) {
    // Local variables
    class Iterator it_buidStart; // r1+0x44
    class Iterator it_buidEnd; // r1+0x38

    {
        // Range: 0x801AF200 -> 0x801AF280
        // Local variables
        bool stillActive; // r29

        {
            // Range: 0x801AF20C -> 0x801AF264
            // Local variables
            class EntityHandleBase * handle; // r0
        }
    }
    {
        // Range: 0x801AF280 -> 0x801AF348
        // Local variables
        char * packfileName; // r0

        {
            // Range: 0x801AF28C -> 0x801AF320
            // Local variables
            class EntityHandleBase * handle; // r0
        }
    }

    // References
    // -> static class MSTQueryModule mstQueryMod;
    // -> double secondsPerTick;
}
