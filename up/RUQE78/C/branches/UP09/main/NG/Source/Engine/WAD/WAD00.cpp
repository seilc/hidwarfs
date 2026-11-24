/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CCAF8 -> 0x802E6888
*/
extern class hkClass hkpPhysicsDataClass; // size: 0x30
// total size: 0x14
class ConfigManager {
    // Members
    class DLList iniFileList; // offset 0x0, size 0xC
    class HINGEConfig hingeConfig; // offset 0xC, size 0x8
};
// total size: 0xC
class DLList {
    // Members
    class INIFile * head; // offset 0x0, size 0x4
    class INIFile * tail; // offset 0x4, size 0x4
    class INIFile * tailPrev; // offset 0x8, size 0x4
};
// total size: 0x54
class INIFile : public DLNode {
    // Members
    char iniName[64]; // offset 0x8, size 0x40
    class DLList sectionList; // offset 0x48, size 0xC
};
// total size: 0x8
class DLNode {
    // Members
    class INIFile * next; // offset 0x0, size 0x4
    class INIFile * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class DLList {
    // Members
    class INISection * head; // offset 0x0, size 0x4
    class INISection * tail; // offset 0x4, size 0x4
    class INISection * tailPrev; // offset 0x8, size 0x4
};
// total size: 0x1C
class INISection : public DLNode {
    // Members
    unsigned int nameHash; // offset 0x8, size 0x4
    char * name; // offset 0xC, size 0x4
    class DLList entryList; // offset 0x10, size 0xC
};
// total size: 0x8
class DLNode {
    // Members
    class INISection * next; // offset 0x0, size 0x4
    class INISection * prev; // offset 0x4, size 0x4
};
// total size: 0xC
class DLList {
    // Members
    class INIEntry * head; // offset 0x0, size 0x4
    class INIEntry * tail; // offset 0x4, size 0x4
    class INIEntry * tailPrev; // offset 0x8, size 0x4
};
// total size: 0x14
class INIEntry : public DLNode {
    // Members
    unsigned int keyHash; // offset 0x8, size 0x4
    char * keyString; // offset 0xC, size 0x4
    char * valueString; // offset 0x10, size 0x4
};
// total size: 0x8
class DLNode {
    // Members
    class INIEntry * next; // offset 0x0, size 0x4
    class INIEntry * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class HINGEConfig {
    // Members
    class MemHandle * cfgMemHandle; // offset 0x0, size 0x4
    int cfgMemSize; // offset 0x4, size 0x4
};
// total size: 0x4
class MemCB_INIData : public MemCallbacks {};
// total size: 0x4
class MemCallbacks {};
// total size: 0x4
class MemCB_HingeConfig : public MemCallbacks {};
// total size: 0x10
class ParseState {
    // Members
    class INISection * currSection; // offset 0x0, size 0x4
    char * currLineBeg; // offset 0x4, size 0x4
    char * currLineEnd; // offset 0x8, size 0x4
    char * lastByteEOF; // offset 0xC, size 0x4
};
// total size: 0x4
class BlobMemCB : public MemCallbacks {};
// total size: 0x14
class BlobAddArg {
    // Members
    int wmlTypeID; // offset 0x0, size 0x4
    int blobSize; // offset 0x4, size 0x4
    class MemHandle * blobHandle; // offset 0x8, size 0x4
    unsigned char subType; // offset 0xC, size 0x1
    unsigned char blobFlags; // offset 0xD, size 0x1
    unsigned short langID; // offset 0xE, size 0x2
    class BlobCustomAlloc * customAlloc; // offset 0x10, size 0x4
};
// total size: 0xD8
class DomainPriv {
    // Members
    class Domain * parentDom; // offset 0x0, size 0x4
    char domainName[128]; // offset 0x4, size 0x80
    class LoadStream * loadStream; // offset 0x84, size 0x4
    class PoolList activityQueue; // offset 0x88, size 0x1C
    class BlockAllocatorArray myUIDsArray; // offset 0xA4, size 0x20
    class EmbeddedTreeAVL myHandleTree; // offset 0xC4, size 0x8
    int UidProcessIdx; // offset 0xCC, size 0x4
    unsigned int refMask; // offset 0xD0, size 0x4
    unsigned short currLangID; // offset 0xD4, size 0x2
};
// total size: 0x208
class LoadStream {
    // Members
    class MediaFile mediaFile; // offset 0x0, size 0x68
    class LSWorker worker; // offset 0x68, size 0x50
    int baseOffset; // offset 0xB8, size 0x4
    int sectorSize; // offset 0xBC, size 0x4
    class TableEntry myTableEntry; // offset 0xC0, size 0x40
    enum enMediaTarget myMediaTarget; // offset 0x100, size 0x4
    char myPackfileName[256]; // offset 0x104, size 0x100
    class MemHandle * myMetaDataMem; // offset 0x204, size 0x4
};
// total size: 0x68
class MediaFile : public MediaObject {
    // Members
    class FileData fileData; // offset 0x58, size 0x8
    class MediaCallback * callbacks; // offset 0x60, size 0x4
    class MediaHandler * handler; // offset 0x64, size 0x4
};
// total size: 0x58
class MediaObject {
    // Members
    class MediaError error; // offset 0x0, size 0x4
    class MediaData * mediaData; // offset 0x4, size 0x4
    enum enOpStatus opStatus; // offset 0x8, size 0x4
    class Notify notice; // offset 0xC, size 0x4
    class SyncEvent waitState; // offset 0x10, size 0x24
    class CriticalSection critStatus; // offset 0x34, size 0x20
    bool haveWaitState; // offset 0x54, size 0x1
};
// total size: 0x4
class MediaError {
    // Members
    enum enErrorCode errCode; // offset 0x0, size 0x4
};
enum enErrorCode {
    ERR_NONE = 0,
    ERR_OPEN_FAIL = 1,
    ERR_CLOSE_FAIL = 2,
    ERR_READ_FAIL = 3,
    ERR_WRITE_FAIL = 4,
    ERR_SEEK_FAIL = 5,
    ERR_WISH_THERE_WAS_MORE_INFO_DONT_YOU = 6,
    ERR_NOMORE = 7,
};
// total size: 0x1
class MediaData {};
enum enOpStatus {
    STATUS_READY = 0,
    STATUS_BUSY = 1,
    STATUS_ERROR = 2,
    STATUS_NOMORE = 3,
};
// total size: 0x4
class Notify {
    // Members
    class MediaObject * mo; // offset 0x0, size 0x4
};
// total size: 0x8
class FileData {
    // Members
    int size; // offset 0x0, size 0x4
    int offset; // offset 0x4, size 0x4
};
// total size: 0x4
class MediaCallback {};
// total size: 0x50
class LSWorker {
    // Members
    enum enStatus status; // offset 0x0, size 0x4
    enum enWorkState workState; // offset 0x4, size 0x4
    bool isError; // offset 0x8, size 0x1
    class ConnectInfo connectInfo; // offset 0xC, size 0x30
    class TransferInfo transferInfo; // offset 0x3C, size 0x10
    class DisconnectInfo disconnectInfo; // offset 0x4C, size 0x4
};
enum enStatus {
    STATUS_ERROR = 0,
    STATUS_READY = 1,
    STATUS_WORKING = 2,
};
enum enWorkState {
    WORK_STATE_UNSPECIFIED = 0,
    WORK_STATE_CONNECT = 1,
    WORK_STATE_TRANSFER = 2,
    WORK_STATE_DISCONNECT = 3,
};
// total size: 0x30
class ConnectInfo {
    // Members
    enum enStage stage; // offset 0x0, size 0x4
    class SectionKey sectionKey; // offset 0x4, size 0x18
    class OurQueryCB ourQuery; // offset 0x1C, size 0x10
    enum enPriority readPriority; // offset 0x2C, size 0x4
};
enum enStage {
    STAGE_BLANK = 0,
    STAGE_QUERY_FOR_PACKFILE = 1,
    STAGE_QUERY_FOR_PACKFILE_WAIT = 2,
    STAGE_PF_FILEOPEN = 3,
    STAGE_PF_FILEOPEN_WAIT = 4,
    STAGE_PF_FILESEEK = 5,
    STAGE_PF_FILESEEK_WAIT = 6,
    STAGE_ERROR = 7,
    STAGE_DONE = 8,
};
// total size: 0x18
class SectionKey {
    // Members
    int sectionTypeID; // offset 0x0, size 0x4
    char * sectionName; // offset 0x4, size 0x4
    unsigned short packLangID; // offset 0x8, size 0x2
    int userKey; // offset 0xC, size 0x4
    enum enParcelType parcelType; // offset 0x10, size 0x4
    char * fromDomainName; // offset 0x14, size 0x4
};
enum enParcelType {
    PARCEL_TYPE_UNDEFINED = 0,
    PARCEL_TYPE_EXCLUSIVE = 1,
    PARCEL_TYPE_SHARED = 2,
    PARCEL_TYPE_FROMDOMAIN = 3,
};
// total size: 0x10
class OurQueryCB : public QueryAnswerCB {
    // Members
    class LoadStream * loadStream; // offset 0x4, size 0x4
    class ConnectInfo * connectInfo; // offset 0x8, size 0x4
    enum enError errorStatus; // offset 0xC, size 0x4
};
// total size: 0x4
class QueryAnswerCB : public LoadErrorCB {};
// total size: 0x4
class LoadErrorCB {};
enum enError {
    LOADERROR_NONE = 0,
    LOADERROR_UNKNOWN = 1,
    LOADERROR_FILE_NOT_FOUND = 2,
    LOADERROR_READING_FILE = 3,
    LOADERROR_CLOSING_FILE = 4,
    LOADERROR_READING_HEADER = 5,
    LOADERROR_NO_MASTER_TABLE = 6,
    LOADERROR_READING_MASTER_TABLE = 7,
    LOADERROR_NO_MASTER_ENTRY = 8,
    LOADERROR_NO_SECTION_TABLE = 9,
    LOADERROR_READING_SECTION_TABLE = 10,
    LOADERROR_NO_SECTION_ENTRY = 11,
};
enum enPriority {
    PRIORITY_NORMAL = 0,
    PRIORITY_STREAM = 1,
    PRIORITY_NOMORE = 2,
};
// total size: 0x10
class TransferInfo {
    // Members
    enum enStage stage; // offset 0x0, size 0x4
    char * destBuffer; // offset 0x4, size 0x4
    int startSector; // offset 0x8, size 0x4
    int numSectors; // offset 0xC, size 0x4
};
enum enStage {
    STAGE_BLANK = 0,
    STAGE_SEEK = 1,
    STAGE_SEEK_WAIT = 2,
    STAGE_TRANSFER = 3,
    STAGE_TRANSFER_WAIT = 4,
    STAGE_DONE = 5,
};
// total size: 0x4
class DisconnectInfo {
    // Members
    enum enStage stage; // offset 0x0, size 0x4
};
enum enStage {
    STAGE_BLANK = 0,
    STAGE_PF_CLOSE = 1,
    STAGE_PF_CLOSE_WAIT = 2,
    STAGE_DONE = 3,
};
// total size: 0x40
class TableEntry {
    // Members
    int sectionType; // offset 0x0, size 0x4
    unsigned short packLangID; // offset 0x4, size 0x2
    unsigned char parcelType; // offset 0x6, size 0x1
    char pad; // offset 0x7, size 0x1
    int userKey; // offset 0x8, size 0x4
    unsigned int nameHash; // offset 0xC, size 0x4
    class Pointer32 namePtr; // offset 0x10, size 0x4
    unsigned int fromNameHash; // offset 0x14, size 0x4
    class Pointer32 fromNamePtr; // offset 0x18, size 0x4
    int startSector; // offset 0x1C, size 0x4
    int sizeOnDisk; // offset 0x20, size 0x4
    int sizeInMem; // offset 0x24, size 0x4
    int memoryAlignment; // offset 0x28, size 0x4
    int attributeFlags; // offset 0x2C, size 0x4
    class Pointer32 externName; // offset 0x30, size 0x4
    int metaBlockCount; // offset 0x34, size 0x4
    class Pointer32 metaRecord; // offset 0x38, size 0x4
    char reserved[4]; // offset 0x3C, size 0x4
};
// total size: 0x4
class Pointer32 {
    // Members
    unsigned int _p; // offset 0x0, size 0x4
};
enum enMediaTarget {
    MEDIA_TGT_CDROM = 0,
    MEDIA_TGT_DVDROM = 1,
    MEDIA_TGT_HDLOCAL = 2,
    MEDIA_TGT_UNCFILE = 3,
    MEDIA_TGT_HDREMOTE = 4,
    MEDIA_TGT_NETBYTESTREAM = 5,
    MEDIA_TGT_HIDE = 6,
    MEDIA_NOMORE = 7,
};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0x20
class BlockAllocatorArray {
    // Members
    int blockSize; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
    class Block * blockPool; // offset 0xC, size 0x4
    class Block * backBlock; // offset 0x10, size 0x4
    int blockCount; // offset 0x14, size 0x4
    enum GlobalHeapEnum heap; // offset 0x18, size 0x4
    enum eMemMgrTag memTag; // offset 0x1C, size 0x4
};
// total size: 0x10
class Block {
    // Members
    unsigned long long * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
// total size: 0x8
class EmbeddedTreeAVL {
    // Members
    class CmpHolder cmp; // offset 0x0, size 0x4
    class EntityHandleBase * m_root; // offset 0x4, size 0x4
};
// total size: 0x4
class CmpHolder : public DomainHandleCmp {
    // Members
    unsigned long size; // offset 0x0, size 0x4
};
// total size: 0x1
class DomainHandleCmp {};
// total size: 0x8
class Activity {
    // Members
    bool justBorn; // offset 0x0, size 0x1
};
// total size: 0x24
class ActLoadMemFastParcel : public ActLoadParcel {};
// total size: 0x24
class ActLoadParcel : public Activity {
    // Members
    enum enStage stage; // offset 0x8, size 0x4
    class MemHandle * memDomData; // offset 0xC, size 0x4
    unsigned short parcelLangID; // offset 0x10, size 0x2
    int parcelUserKey; // offset 0x14, size 0x4
    class MemHandle * * tocHandles; // offset 0x18, size 0x4
    int tocArraySize; // offset 0x1C, size 0x4
    int tocCount; // offset 0x20, size 0x4
};
enum enStage {
    CONNECTING = 0,
    DOM_DATA_LOAD = 1,
    DOM_DATA_LOAD_WAIT = 2,
    DOM_DATA_PARSE = 3,
    DISCONNECTING = 4,
    COMPLETE = 5,
};
// total size: 0x24
class ActLoadTextureParcel : public ActLoadParcel {};
// total size: 0x4
class MemCB_ParcelTOC : public MemCallbacks {};
// total size: 0x4
class MemCB_ParcelDATA : public MemCallbacks {};
// total size: 0x4
class MemCB_ParcelLoadAndParse : public MemCallbacks {};
// total size: 0x8
class MetaRecord {
    // Members
    char metaType[4]; // offset 0x0, size 0x4
    int metaSize; // offset 0x4, size 0x4
};
// total size: 0x10
class MetaParcelSlicesEntry {
    // Members
    int sliceType; // offset 0x0, size 0x4
    int sliceStart; // offset 0x4, size 0x4
    int sliceSize; // offset 0x8, size 0x4
    int sliceAlign; // offset 0xC, size 0x4
};
// total size: 0x20
class TOCEntry {
    // Members
    int elementSize; // offset 0x0, size 0x4
    int elementOffset; // offset 0x4, size 0x4
    int blobSize; // offset 0x8, size 0x4
    int blobAlign; // offset 0xC, size 0x4
    unsigned long long uidSelf; // offset 0x10, size 0x8
    int wmlTypeID; // offset 0x18, size 0x4
    short subType; // offset 0x1C, size 0x2
    short blobFlags; // offset 0x1E, size 0x2
};
// total size: 0xF4
class ActRegisterEnts : public Activity {
    // Members
    enum enStage stage; // offset 0x8, size 0x4
    class Iterator it_handle; // offset 0xC, size 0xE8
};
enum enStage {
    START = 0,
    WORKING = 1,
    PROCESSING = 2,
    FINISH = 3,
};
// total size: 0xE8
class Iterator {
    // Members
    class EmbeddedTreeAVL * owner; // offset 0x0, size 0x4
    class FixedKeyArray itpath; // offset 0x4, size 0xE4
};
// total size: 0xE4
class FixedKeyArray {
    // Members
    int count; // offset 0x0, size 0x4
    class EntityHandleBase * data[56]; // offset 0x4, size 0xE0
};
// total size: 0x18
class ActUnloadAll : public Activity {
    // Members
    enum enStage stage; // offset 0x8, size 0x4
    class Iterator it_buid; // offset 0xC, size 0xC
};
enum enStage {
    START = 0,
    DEACTIVATING = 1,
    DEACTIVATE_FINISHING = 2,
    RELEASING_MEMORY = 3,
    COMPLETE = 4,
};
// total size: 0xC
class Iterator : public ConstIterator {};
// total size: 0xC
class ConstIterator {
    // Members
    unsigned long long * it; // offset 0x0, size 0x4
    class Block * block; // offset 0x4, size 0x4
    class BlockAllocatorArray * owner; // offset 0x8, size 0x4
};
// total size: 0xA0
class DomainModule : public Module {
    // Members
    class DomainMgr * domainMgr; // offset 0x98, size 0x4
    bool firstUpdate; // offset 0x9C, size 0x1
};
// total size: 0x20
class DomainMgr {
    // Members
    class PoolList domainList; // offset 0x0, size 0x1C
    unsigned int refMaskUsed; // offset 0x1C, size 0x4
};
// total size: 0x9C
class BootStrapModule : public Module {
    // Members
    class BootStrapper * bootStrapper; // offset 0x98, size 0x4
};
// total size: 0x2E4
class BootStrapper {
    // Members
    bool bootStrapFailure; // offset 0x0, size 0x1
    class PoolList drudgeQueue; // offset 0x4, size 0x1C
    class DrudgeBootINI drudgeBootINI; // offset 0x20, size 0x12C
    class DrudgeDomDir drudgeDomDir; // offset 0x14C, size 0x12C
    bool workFileInUse; // offset 0x278, size 0x1
    class MediaFile workFile; // offset 0x27C, size 0x68
};
// total size: 0x12C
class DrudgeBootINI : public DrudgeBase {
    // Members
    class WholeFile loadWhole; // offset 0x10, size 0x11C
};
// total size: 0x10
class DrudgeBase {
    // Members
    bool justBorn; // offset 0x0, size 0x1
    class DrudgeLoadErrorCB errorCB; // offset 0x4, size 0x8
};
// total size: 0x8
class DrudgeLoadErrorCB : public LoadErrorCB {
    // Members
    enum enError errorStatus; // offset 0x4, size 0x4
};
// total size: 0x11C
class WholeFile {
    // Members
    enum enLoadStage loadStage; // offset 0x0, size 0x4
    class MediaFile * loadFile; // offset 0x4, size 0x4
    int fileSize; // offset 0x8, size 0x4
    class LoadErrorCB * errorCB; // offset 0xC, size 0x4
    char fileName[256]; // offset 0x10, size 0x100
    class MemHandle * memHandle; // offset 0x110, size 0x4
    enum enVolIdx useMemVolume; // offset 0x114, size 0x4
    class MemCallbacks * useMemCB; // offset 0x118, size 0x4
};
enum enLoadStage {
    STANDBY = 0,
    OPEN = 1,
    OPEN_WAIT = 2,
    READ = 3,
    READ_WAIT = 4,
    CLOSE = 5,
    CLOSE_WAIT = 6,
    ENDED = 7,
    ENDED_WAIT = 8,
};
enum enVolIdx {
    MEMVOL_IDX_MAIN = 0,
    MEMVOL_IDX_WORK = 1,
    MEMVOL_IDX_TRACK = 2,
    MEMVOL_IDX_NOMORE = 3,
};
// total size: 0x12C
class DrudgeDomDir : public DrudgeBase {
    // Members
    class WholeFile loadWhole; // offset 0x10, size 0x11C
};
// total size: 0x4
class LoadMemOwner : public MemOwner {};
// total size: 0x128
class ExtractMastST {
    // Members
    enum enLoadStage loadStage; // offset 0x0, size 0x4
    class MediaFile * loadFile; // offset 0x4, size 0x4
    class LoadErrorCB * errorCB; // offset 0x8, size 0x4
    class PFInfo pfInfo; // offset 0xC, size 0x10C
    enum enVolIdx useMemVolume; // offset 0x118, size 0x4
    class MemCallbacks * useMemCB; // offset 0x11C, size 0x4
    class MemHandle * finfHandle; // offset 0x120, size 0x4
    class MemHandle * memHandle; // offset 0x124, size 0x4
};
enum enLoadStage {
    STANDBY = 0,
    OPEN = 1,
    OPEN_WAIT = 2,
    READ_FILEINFO = 3,
    READ_FILEINFO_WAIT = 4,
    MAKE_ROOM_FOR_TABLE = 5,
    MAKE_ROOM_FOR_TABLE_WAIT = 6,
    SEEK_MST = 7,
    SEEK_MST_WAIT = 8,
    READ_MST = 9,
    READ_MST_WAIT = 10,
    CLOSE = 11,
    CLOSE_WAIT = 12,
    ENDED = 13,
    ENDED_WAIT = 14,
};
// total size: 0x10C
class PFInfo {
    // Members
    char packfileName[256]; // offset 0x0, size 0x100
    int sectorSize; // offset 0x100, size 0x4
    int tableSize; // offset 0x104, size 0x4
    int tableStart; // offset 0x108, size 0x4
};
// total size: 0x12C
class ExtractNormST {
    // Members
    enum enLoadStage loadStage; // offset 0x0, size 0x4
    class MediaFile * loadFile; // offset 0x4, size 0x4
    class LoadErrorCB * errorCB; // offset 0x8, size 0x4
    int tableSize; // offset 0xC, size 0x4
    int tableOffset; // offset 0x10, size 0x4
    class PFInfo pfInfo; // offset 0x14, size 0x10C
    enum enVolIdx useMemVolume; // offset 0x120, size 0x4
    class MemCallbacks * useMemCB; // offset 0x124, size 0x4
    class MemHandle * memHandle; // offset 0x128, size 0x4
};
enum enLoadStage {
    STANDBY = 0,
    OPEN = 1,
    OPEN_WAIT = 2,
    MAKE_ROOM_FOR_TABLE = 3,
    MAKE_ROOM_FOR_TABLE_WAIT = 4,
    SEEK_TABLE = 5,
    SEEK_TABLE_WAIT = 6,
    READ_TABLE = 7,
    READ_TABLE_WAIT = 8,
    CLOSE = 9,
    CLOSE_WAIT = 10,
    ENDED = 11,
    ENDED_WAIT = 12,
};
// total size: 0x160
class MSTQueryModule : public Module {
    // Members
    class TableManager tableManager; // offset 0x98, size 0x20
    class DomainDirMgr domainDirMgr; // offset 0xB8, size 0x4
    class PoolList queryList; // offset 0xBC, size 0x1C
    class PoolList loadQueue; // offset 0xD8, size 0x1C
    bool workFileInUse; // offset 0xF4, size 0x1
    class MediaFile workFile; // offset 0xF8, size 0x68
};
// total size: 0x20
class TableManager {
    // Members
    class PoolList tableList; // offset 0x0, size 0x1C
    int spaceNeeded; // offset 0x1C, size 0x4
};
// total size: 0x118
class TableTrack {
    // Members
    enum enTableType tableType; // offset 0x0, size 0x4
    class TableTrack * parentTable; // offset 0x4, size 0x4
    bool loadLocked; // offset 0x8, size 0x1
    int sectorSize; // offset 0xC, size 0x4
    char tableName[256]; // offset 0x10, size 0x100
    unsigned int tableNameHash; // offset 0x110, size 0x4
    class MemHandle * tableMem; // offset 0x114, size 0x4
};
enum enTableType {
    TYPE_MASTER = 0,
    TYPE_DOMAIN = 1,
};
// total size: 0x20
class QueryData {
    // Members
    class QueryAnswerCB * userAnswerCB; // offset 0x0, size 0x4
    class SectionKey * userSectionKey; // offset 0x4, size 0x4
    class QueryResults queryResults; // offset 0x8, size 0x14
    enum enStatus status; // offset 0x1C, size 0x4
};
// total size: 0x14
class QueryResults {
    // Members
    class TableEntry * tableEntry; // offset 0x0, size 0x4
    class TableTrack * tableContext; // offset 0x4, size 0x4
    enum enMediaTarget onMediaTarget; // offset 0x8, size 0x4
    char * packfileName; // offset 0xC, size 0x4
    int sectorSize; // offset 0x10, size 0x4
};
enum enStatus {
    STATUS_READY = 0,
    STATUS_LOADING_MST = 1,
    STATUS_LOADING_DST = 2,
    STATUS_DONE = 3,
};
// total size: 0x348
class MSTLoadItem {
    // Members
    enum enStatus status; // offset 0x0, size 0x4
    bool loadingMaster; // offset 0x4, size 0x1
    class LoadErrorCB * errorCB; // offset 0x8, size 0x4
    class TableTrack * parentTrack; // offset 0xC, size 0x4
    char tableName[256]; // offset 0x10, size 0x100
    char packfileName[256]; // offset 0x110, size 0x100
    int tableOffset; // offset 0x210, size 0x4
    int tableSize; // offset 0x214, size 0x4
    int pfSectorSize; // offset 0x218, size 0x4
    class @class __anon; // offset 0x21C, size 0x12C
    class ExtractMastST extractMast; // offset 0x21C, size 0x128
    class ExtractNormST extractNorm; // offset 0x21C, size 0x12C
};
enum enStatus {
    BEGIN = 0,
    UPDATE = 1,
    FINISH = 2,
    DONE = 3,
};
// total size: 0x12C
class @class {
    // Members
    class ExtractMastST extractMast; // offset 0x0, size 0x128
    class ExtractNormST extractNorm; // offset 0x0, size 0x12C
};
// total size: 0xB4
class LSPoolModule : public Module {
    // Members
    class PoolList streamList; // offset 0x98, size 0x1C
};
// total size: 0x4
class MemCB_MetaRecord : public MemCallbacks {};
// total size: 0x4
class MemCB_SectTable : public MemCallbacks {};
// total size: 0x4
class Iterator : public ConstIterator {};
// total size: 0x4
class ConstIterator {
    // Members
    class NodeHeader * node; // offset 0x0, size 0x4
};
// total size: 0x9C
class DynaMemModule : public Module {
    // Members
    class DynaMemMgr * memMgr; // offset 0x98, size 0x4
};
// total size: 0x12C
class DynaMemMgr {
    // Members
    class MemVolume memVolume[3]; // offset 0x0, size 0x12C
};
// total size: 0xC
class MemVolProps {
    // Members
    int sizeTotal; // offset 0x0, size 0x4
    int maxAllocs; // offset 0x4, size 0x4
    int maxHandle; // offset 0x8, size 0x4
};
// total size: 0x4
class MemOwnerUnclaimed : public MemOwner {};
// total size: 0x44
class MemCallbackList {
    // Members
    class MemCallbacks * memCBList[16]; // offset 0x0, size 0x40
    int numCallbacks; // offset 0x40, size 0x4
};
// total size: 0x4
class MemCB_BorrowedMemory : public MemCallbacks {};
// total size: 0xA0
class CoordinatorModule : public Module {
    // Members
    class Supervisor * supervisor; // offset 0x98, size 0x4
    class Coordinator * coordinator; // offset 0x9C, size 0x4
};
// total size: 0x1
class Supervisor {
    // Members
    bool testDataLoaded; // offset 0x0, size 0x1
};
// total size: 0x20
class Coordinator {
    // Members
    class PoolList loadSetList; // offset 0x0, size 0x1C
    unsigned short langID; // offset 0x1C, size 0x2
};
// total size: 0x98
class BasicColorModule : public Module {};
// total size: 0xC
class XFColor_s {
    // Members
    unsigned long Y; // offset 0x0, size 0x4
    unsigned long Cb; // offset 0x4, size 0x4
    unsigned long Cr; // offset 0x8, size 0x4
};
// total size: 0x10
class MapFileData {
    // Members
    char * mapFilename; // offset 0x0, size 0x4
    unsigned int mapFuncCount; // offset 0x4, size 0x4
    char * mapFuncStrings; // offset 0x8, size 0x4
    class MapFuncEntry * mapFuncList; // offset 0xC, size 0x4
};
// total size: 0x10
class MapFuncEntry {
    // Members
    unsigned long long address; // offset 0x0, size 0x8
    char * name; // offset 0x8, size 0x4
};
// total size: 0xA8
class ExceptionHandler : public Module {
    // Members
    bool active; // offset 0x95, size 0x1
    class MapFileData mapFileData; // offset 0x98, size 0x10
};
// total size: 0x8
class FormatterLookUpEntry {
    // Members
    int key; // offset 0x0, size 0x4
    class Formatter * objectPointer; // offset 0x4, size 0x4
};
// total size: 0x48
class EntityHandle : public EntityHandleBase {};
// total size: 0x10C
class Basic3DEntity : public SpatialEntity {
    // Members
    class Scene * scene; // offset 0x1C, size 0x4
    class Matrix43 startMat; // offset 0x20, size 0x30
    class Vector hackScale; // offset 0x50, size 0x10
    int memSize; // offset 0x60, size 0x4
    class Basic3DEntity * owner; // offset 0x64, size 0x4
    unsigned int movingColor; // offset 0x68, size 0x4
    bool hackVisible; // offset 0x6C, size 0x1
    class ModelInstanceArticle modelArt; // offset 0x70, size 0x9C
};
// total size: 0x1C
class SpatialEntity : public Entity {};
// total size: 0xA0
class Basic3D {
    // Members
    class EventTranslatorAsset translator; // offset 0x0, size 0x18
    class Matrix43POD transform; // offset 0x20, size 0x30
    class ModelInstanceAsset model; // offset 0x50, size 0x40
    unsigned int hackVisible; // offset 0x90, size 0x4
};
// total size: 0x18
class EventTranslatorAsset {
    // Members
    unsigned short impulseCount; // offset 0x0, size 0x2
    unsigned short noticeCount; // offset 0x2, size 0x2
    unsigned short actionCount; // offset 0x4, size 0x2
    unsigned short targetCount; // offset 0x6, size 0x2
    class Pointer32 impulses; // offset 0x8, size 0x4
    class Pointer32 notices; // offset 0xC, size 0x4
    class Pointer32 actions; // offset 0x10, size 0x4
    class Pointer32 targets; // offset 0x14, size 0x4
};
// total size: 0x10
class Clip {
    // Members
    class __parts__ parts; // offset 0x0, size 0x8
    class uid camera; // offset 0x8, size 0x8
};
// total size: 0x8
class __parts__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x14
class QuadMinCache {
    // Members
    float s; // offset 0x0, size 0x4
    float disSqr; // offset 0x4, size 0x4
    class Vector3 point; // offset 0x8, size 0xC
};
// total size: 0x24
class EffectAsset {
    // Members
    class MaterialParamFormatTableAsset paramFormats[3]; // offset 0x0, size 0x18
    unsigned char techCount; // offset 0x18, size 0x1
    unsigned char lodCount; // offset 0x19, size 0x1
    unsigned short featureCount; // offset 0x1A, size 0x2
    unsigned short passCount; // offset 0x1C, size 0x2
    unsigned short shaderCount; // offset 0x1E, size 0x2
    unsigned short effectFlags; // offset 0x20, size 0x2
};
// total size: 0x8
class MaterialParamFormatTableAsset {
    // Members
    class Pointer32 entries; // offset 0x0, size 0x4
    unsigned char count; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short dataSize; // offset 0x6, size 0x2
};
// total size: 0xC
class Technique {
    // Members
    class Pointer32 name; // offset 0x0, size 0x4
    class RenderStageEntry stages[4]; // offset 0x4, size 0x4
    unsigned char lodMax; // offset 0x8, size 0x1
    unsigned char renderStageFlags; // offset 0x9, size 0x1
    unsigned char pad[2]; // offset 0xA, size 0x2
};
// total size: 0x1
class RenderStageEntry {
    // Members
    unsigned char lodIndex; // offset 0x0, size 0x1
};
// total size: 0x4
class LOD {
    // Members
    unsigned short featureIndex; // offset 0x0, size 0x2
    unsigned short featureCount; // offset 0x2, size 0x2
};
// total size: 0x8
class Feature {
    // Members
    unsigned short passIndex; // offset 0x0, size 0x2
    unsigned char passCount; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int featureFlags; // offset 0x4, size 0x4
};
// total size: 0x2
class Pass {
    // Members
    unsigned short shaderIndex; // offset 0x0, size 0x2
};
// total size: 0xC
class MaterialParamFormat {
    // Members
    class Pointer32 id; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char rows; // offset 0x5, size 0x1
    unsigned char cols; // offset 0x6, size 0x1
    unsigned char count; // offset 0x7, size 0x1
    unsigned short size; // offset 0x8, size 0x2
    unsigned short offset; // offset 0xA, size 0x2
};
// total size: 0x94
class EffectEntity : public Entity {
    // Members
    int memSize; // offset 0x1C, size 0x4
    class Effect effect; // offset 0x20, size 0x74
};
// total size: 0x28
class ShaderEntity : public Entity {
    // Members
    class EntityHandle * vertexCode; // offset 0x1C, size 0x4
    class EntityHandle * pixelCode; // offset 0x20, size 0x4
    class EntityHandle * vertexDecl; // offset 0x24, size 0x4
};
// total size: 0x0
class EntityHandle {};
// total size: 0x3C
class RenderModeEntity : public Entity {
    // Members
    int memSize; // offset 0x1C, size 0x4
    class RenderMode renderMode; // offset 0x20, size 0x1C
};
// total size: 0x28
class BuilderInfo {
    // Members
    int size; // offset 0x0, size 0x4
    class MaterialEntity * materialEnt; // offset 0x4, size 0x4
    class RenderAttrib viewAttrib; // offset 0x8, size 0x1
    class ParamData * geomParamData; // offset 0xC, size 0x4
    class ParamData * rendParamData; // offset 0x10, size 0x4
    enum PrimitiveType primType; // offset 0x14, size 0x4
    class CreateInfo geomParamCreateInfo; // offset 0x18, size 0x8
    class CreateInfo rendParamCreateInfo; // offset 0x20, size 0x8
};
// total size: 0x60
class GeometryAsset {
    // Members
    class Vector4 boundSphere; // offset 0x0, size 0x10
    class BoundAABB boundAABB; // offset 0x10, size 0x18
    unsigned long long materialID; // offset 0x28, size 0x8
    class ViewAttrib viewAttrib; // offset 0x30, size 0x1
    unsigned char flags; // offset 0x31, size 0x1
    unsigned char pad[2]; // offset 0x32, size 0x2
    unsigned short vertexCount; // offset 0x34, size 0x2
    unsigned char prim; // offset 0x36, size 0x1
    unsigned char geomParamCount; // offset 0x37, size 0x1
    unsigned char rendParamCount; // offset 0x38, size 0x1
    unsigned char streamCount; // offset 0x39, size 0x1
    unsigned short streamMapBufferCount; // offset 0x3A, size 0x2
    class Pointer32 geomParams; // offset 0x3C, size 0x4
    class Pointer32 rendParams; // offset 0x40, size 0x4
    class Pointer32 streams; // offset 0x44, size 0x4
    class Pointer32 streamMapBuffer; // offset 0x48, size 0x4
    unsigned int sectorLight; // offset 0x4C, size 0x4
    class Pointer32 collKDTree; // offset 0x50, size 0x4
    unsigned short lodCount; // offset 0x54, size 0x2
    unsigned short batchCount; // offset 0x56, size 0x2
    class Pointer32 lods; // offset 0x58, size 0x4
    class Pointer32 batches; // offset 0x5C, size 0x4
};
// total size: 0x18
class BoundAABB {
    // Members
    class Vector3 lower; // offset 0x0, size 0xC
    class Vector3 upper; // offset 0xC, size 0xC
};
// total size: 0x1
class ViewAttrib {
    // Members
    unsigned char spaceFilter; // offset 0x0, size 0x1
};
// total size: 0x24
class BuilderData {
    // Members
    int streamCount; // offset 0x0, size 0x4
    int indexLODCount; // offset 0x4, size 0x4
    class MaterialEntity * materialEnt; // offset 0x8, size 0x4
    class BlobRef * streamBlobs; // offset 0xC, size 0x4
    class BlobRef * indexLODBlobs; // offset 0x10, size 0x4
    class ParamCargo geomParamCargo; // offset 0x14, size 0x8
    class ParamCargo rendParamCargo; // offset 0x1C, size 0x8
};
// total size: 0x14
class BlobRef {
    // Members
    class EntityHandle * blob; // offset 0x0, size 0x4
    class BlobOwner owner; // offset 0x4, size 0x10
};
// total size: 0x10
class BlobOwner : public Owner {
    // Members
    class EntityHandleBase * res; // offset 0xC, size 0x4
};
// total size: 0x18
class IndexLOD {
    // Members
    unsigned long long indexBufferID; // offset 0x0, size 0x8
    unsigned short indexCount; // offset 0x8, size 0x2
    unsigned short primCount; // offset 0xA, size 0x2
    unsigned short triCount; // offset 0xC, size 0x2
    unsigned short vertCount; // offset 0xE, size 0x2
    float lodDist; // offset 0x10, size 0x4
    unsigned char skinSectStart; // offset 0x14, size 0x1
    unsigned char skinSectCount; // offset 0x15, size 0x1
    unsigned short pad; // offset 0x16, size 0x2
};
// total size: 0x10
class VertexStream {
    // Members
    unsigned long long vertexBufferID; // offset 0x0, size 0x8
    unsigned char stride; // offset 0x8, size 0x1
    unsigned char pad[7]; // offset 0x9, size 0x7
};
// total size: 0x40
class GlobalFX {
    // Members
    class uid HDRImmediateModel; // offset 0x0, size 0x8
    class uid DepthOfFieldImmediateModel; // offset 0x8, size 0x8
    class uid MotionBlurImmediateModel; // offset 0x10, size 0x8
    class uid PostProcessImmediateModel; // offset 0x18, size 0x8
    class uid OutlineImmediateModel; // offset 0x20, size 0x8
    class uid ShadowReceiveImmediateModel; // offset 0x28, size 0x8
    class uid DecalImmediateModel; // offset 0x30, size 0x8
    class uid DoF_HDR_BlurImmediateModel; // offset 0x38, size 0x8
};
// total size: 0x20
class ImmediateGeometryAsset {
    // Members
    unsigned long long materialID; // offset 0x0, size 0x8
    unsigned char geomParamCount; // offset 0x8, size 0x1
    unsigned char rendParamCount; // offset 0x9, size 0x1
    unsigned short streamMapBufferCount; // offset 0xA, size 0x2
    unsigned int vertexDeclHash; // offset 0xC, size 0x4
    unsigned int pad2; // offset 0x10, size 0x4
    class Pointer32 geomParams; // offset 0x14, size 0x4
    class Pointer32 rendParams; // offset 0x18, size 0x4
    class Pointer32 streamMapBuffer; // offset 0x1C, size 0x4
};
// total size: 0x14
class CreateInfo {
    // Members
    int memSize; // offset 0x0, size 0x4
    int memAlign; // offset 0x4, size 0x4
    class ImmediatePrototypeEntity * protoEnt; // offset 0x8, size 0x4
    int allParamCargoBufferSize; // offset 0xC, size 0x4
    int allParamDataBufferSize; // offset 0x10, size 0x4
};
// total size: 0x8
class RenderableSettings {
    // Members
    unsigned char rendParamCount; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    class Pointer32 rendParams; // offset 0x4, size 0x4
};
// total size: 0x8
class MaterialParam {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char debugIndex; // offset 0x1, size 0x1
    unsigned short elementCount; // offset 0x2, size 0x2
    class @class __anon; // offset 0x4, size 0x4
    class Pointer32 p; // offset 0x4, size 0x4
    class Pointer32 f; // offset 0x4, size 0x4
    class Pointer32 i; // offset 0x4, size 0x4
    class Pointer32 b; // offset 0x4, size 0x4
    class Pointer32 samp; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class Pointer32 p; // offset 0x0, size 0x4
    class Pointer32 f; // offset 0x0, size 0x4
    class Pointer32 i; // offset 0x0, size 0x4
    class Pointer32 b; // offset 0x0, size 0x4
    class Pointer32 samp; // offset 0x0, size 0x4
};
// total size: 0x2
class ImmediatePrototypeAsset {
    // Members
    unsigned short geomCount; // offset 0x0, size 0x2
};
// total size: 0x90
class LightKitAsset {
    // Members
    unsigned long long lookupTex; // offset 0x0, size 0x8
    class FloatColorRGB ambientColor; // offset 0x8, size 0xC
    class DirLight dir[5]; // offset 0x14, size 0x78
    unsigned int pad; // offset 0x8C, size 0x4
};
// total size: 0xC
class FloatColorRGB {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
};
// total size: 0x18
class DirLight {
    // Members
    class FloatColorRGB color; // offset 0x0, size 0xC
    class Rotation3 orientation; // offset 0xC, size 0xC
};
// total size: 0xC
class Rotation3 {
    // Members
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x18
class MaterialAsset {
    // Members
    unsigned long long effectID; // offset 0x0, size 0x8
    unsigned long long renderModeID; // offset 0x8, size 0x8
    float depthBias; // offset 0x10, size 0x4
    unsigned char materialParamCount; // offset 0x14, size 0x1
    unsigned char pad; // offset 0x15, size 0x1
    unsigned short materialFlags; // offset 0x16, size 0x2
};
// total size: 0x10
class PackCustomizerInfo {
    // Members
    unsigned long long instanceParamKey; // offset 0x0, size 0x8
    unsigned long long customizerUID; // offset 0x8, size 0x8
};
// total size: 0x58
class ModelPrototypeAsset {
    // Members
    unsigned short geomCount; // offset 0x0, size 0x2
    unsigned short rendCount; // offset 0x2, size 0x2
    unsigned short childTransformCount; // offset 0x4, size 0x2
    unsigned short refModelInstanceCount; // offset 0x6, size 0x2
    unsigned short modelPartCount; // offset 0x8, size 0x2
    unsigned char segmentedModel; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    unsigned short lightMask; // offset 0xC, size 0x2
    unsigned char sectorPointCount; // offset 0xE, size 0x1
    unsigned char sectorSpotCount; // offset 0xF, size 0x1
    unsigned int instanceParamCount; // offset 0x10, size 0x4
    unsigned int shadowColor; // offset 0x14, size 0x4
    float shadowMaxDepth; // offset 0x18, size 0x4
    float shadowStartDepth; // offset 0x1C, size 0x4
    unsigned int shadowMinBlur; // offset 0x20, size 0x4
    unsigned int shadowMaxBlur; // offset 0x24, size 0x4
    unsigned long long skeletonID; // offset 0x28, size 0x8
    unsigned long long collmeshID; // offset 0x30, size 0x8
    unsigned long long shadowTextureID; // offset 0x38, size 0x8
    float shadowTextureLength; // offset 0x40, size 0x4
    float shadowTextureWidth; // offset 0x44, size 0x4
    float shadowCalculatedLength; // offset 0x48, size 0x4
    float shadowCalculatedWidth; // offset 0x4C, size 0x4
    float shadowTextureOffsetX; // offset 0x50, size 0x4
    float shadowTextureOffsetZ; // offset 0x54, size 0x4
};
// total size: 0x10
class SamplerParamData {
    // Members
    unsigned long long textureID; // offset 0x0, size 0x8
    unsigned int wad; // offset 0x8, size 0x4
    float mipmaplodbias; // offset 0xC, size 0x4
};
// total size: 0x30
class Matrix43IdentityType : public Matrix43 {};
// total size: 0x60
class UVMovementInstanceData : public RenderCustomizerData {
    // Members
    class Matrix43 uvMatrix; // offset 0x4, size 0x30
    class Vector2 scale; // offset 0x34, size 0x8
    class Vector2 scalePerSec; // offset 0x3C, size 0x8
    float rotation; // offset 0x44, size 0x4
    float rotationPerSec; // offset 0x48, size 0x4
    class Vector2 translation; // offset 0x4C, size 0x8
    class Vector2 translationPerSec; // offset 0x54, size 0x8
    float * rows; // offset 0x5C, size 0x4
};
// total size: 0x14
class ShadowSimpleParams {
    // Members
    float textureLength; // offset 0x0, size 0x4
    float textureWidth; // offset 0x4, size 0x4
    float textureOffsetX; // offset 0x8, size 0x4
    float textureOffsetZ; // offset 0xC, size 0x4
    unsigned int shadowColor; // offset 0x10, size 0x4
};
// total size: 0x8
class MIAPoolConfig {
    // Members
    int count; // offset 0x0, size 0x4
    int memSize; // offset 0x4, size 0x4
};
// total size: 0x18
class MIALinkedList {
    // Members
    class ListEntry * entryList; // offset 0x0, size 0x4
    char * buf; // offset 0x4, size 0x4
    int itemCount; // offset 0x8, size 0x4
    int itemSize; // offset 0xC, size 0x4
    class ListEntry * availEntries; // offset 0x10, size 0x4
    class ListEntry * unusedList; // offset 0x14, size 0x4
};
// total size: 0x8
class ListEntry {
    // Members
    char * item; // offset 0x0, size 0x4
    class ListEntry * next; // offset 0x4, size 0x4
};
// total size: 0x18
class MIALinkedList {
    // Members
    class ListEntry * entryList; // offset 0x0, size 0x4
    class ModelInstanceArticle * buf; // offset 0x4, size 0x4
    int itemCount; // offset 0x8, size 0x4
    int itemSize; // offset 0xC, size 0x4
    class ListEntry * availEntries; // offset 0x10, size 0x4
    class ListEntry * unusedList; // offset 0x14, size 0x4
};
// total size: 0x8
class ListEntry {
    // Members
    class ModelInstanceArticle * item; // offset 0x0, size 0x4
    class ListEntry * next; // offset 0x4, size 0x4
};
// total size: 0x1
class ModelInstanceArticlePool {};
// total size: 0x28
class DTRMovieEntity : public RenderCustomizerBaseEntity {
    // Members
    int targetWidth; // offset 0x20, size 0x4
    int targetHeight; // offset 0x24, size 0x4
};
// total size: 0x20
class DTRFrontBufferEntity : public RenderCustomizerBaseEntity {};
// total size: 0x28
class UVMovementSettings : public CustomizerUVBase {
    // Members
    float InitialDegree; // offset 0x0, size 0x4
    float DegreePerSec; // offset 0x4, size 0x4
    class UVSet InitialScale; // offset 0x8, size 0x8
    class UVSet ScalePerSec; // offset 0x10, size 0x8
    class UVSet InitialTranslate; // offset 0x18, size 0x8
    class UVSet TranslatePerSec; // offset 0x20, size 0x8
};
// total size: 0x8
class UVSet {
    // Members
    float U; // offset 0x0, size 0x4
    float V; // offset 0x4, size 0x4
};
// total size: 0x14
class TextureAnimationSettings : public CustomizerUVBase {
    // Members
    unsigned int TextureRows; // offset 0x0, size 0x4
    unsigned int TextureColumns; // offset 0x4, size 0x4
    float TextureAnimationRateMultiplier; // offset 0x8, size 0x4
    class __TextureFrameTable__ TextureFrameTable; // offset 0xC, size 0x8
};
// total size: 0x8
class __TextureFrameTable__ {
    // Members
    unsigned int count; // offset 0x0, size 0x4
    class Pointer32 data; // offset 0x4, size 0x4
};
// total size: 0x20
class DTRMovieSettings : public CustomizerUVBase {
    // Members
    class Pointer32 MovieName; // offset 0x0, size 0x4
    unsigned int FirstMip; // offset 0x4, size 0x4
    unsigned int LastMip; // offset 0x8, size 0x4
    class uid TargetTexture; // offset 0x10, size 0x8
    bool Alpha; // offset 0x18, size 0x1
    bool Preload; // offset 0x19, size 0x1
};
// total size: 0x10
class DTRFrontBufferSettings : public CustomizerUVBase {
    // Members
    class uid TargetTexture; // offset 0x0, size 0x8
    class uid TargetObject; // offset 0x8, size 0x8
};
// total size: 0x20
class TextureAnimationInstanceData : public RenderCustomizerData {
    // Members
    float * rows; // offset 0x4, size 0x4
    class Vector2 translation; // offset 0x8, size 0x8
    unsigned int currentTextureFrameTableIndex; // offset 0x10, size 0x4
    unsigned int currentTextureIndex; // offset 0x14, size 0x4
    float currentTime; // offset 0x18, size 0x4
    float timeToDisplay; // offset 0x1C, size 0x4
};
// total size: 0x4
class RenderModeAsset {
    // Members
    signed char spaceLayer; // offset 0x0, size 0x1
    signed char sortOrder; // offset 0x1, size 0x1
    unsigned char renderStateCount; // offset 0x2, size 0x1
    unsigned char pad[1]; // offset 0x3, size 0x1
};
// total size: 0xFC
class SkinBuilder : public Builder {
    // Members
    class Effect * effect; // offset 0x10, size 0x4
    class Material * material; // offset 0x14, size 0x4
    class ParamData * paramData; // offset 0x18, size 0x4
    class GeometryContext * * shaderContextList; // offset 0x1C, size 0x4
    enum PrimitiveType primType; // offset 0x20, size 0x4
    int vertexCount; // offset 0x24, size 0x4
    class IndexLOD indexLods[2]; // offset 0x28, size 0x48
    int indexLodCount; // offset 0x70, size 0x4
    class FixedVertexBuffer * staticVertexBuffers; // offset 0x74, size 0x4
    int vertexBufferCount; // offset 0x78, size 0x4
    class BroadBound bbound; // offset 0x7C, size 0x20
    class Vector4 boundSphere; // offset 0x9C, size 0x10
    float offDist; // offset 0xAC, size 0x4
    float vertLodDist; // offset 0xB0, size 0x4
    unsigned int geomFlags; // offset 0xB4, size 0x4
    class RenderAttrib viewAttrib; // offset 0xB8, size 0x1
    int * staticVertexBufferSizes; // offset 0xBC, size 0x4
    int staticVertexBufferCount; // offset 0xC0, size 0x4
    int * indexBufferSizes; // offset 0xC4, size 0x4
    int jointCount; // offset 0xC8, size 0x4
    class Vector4 * animBoundSphereData; // offset 0xCC, size 0x4
    unsigned char * animBoundBoneIndexData; // offset 0xD0, size 0x4
    unsigned char animBoundDataCount; // offset 0xD4, size 0x1
    void * posInput; // offset 0xD8, size 0x4
    int posInputSize; // offset 0xDC, size 0x4
    unsigned char * bufferMap; // offset 0xE0, size 0x4
    class SkinSection * sections; // offset 0xE4, size 0x4
    short sectionCount; // offset 0xE8, size 0x2
    signed char dynConfig; // offset 0xEA, size 0x1
    unsigned short wiiPaletteCount; // offset 0xEC, size 0x2
    class WiiSkinPalette * wiiPaletteList; // offset 0xF0, size 0x4
    class MorphData * morphData; // offset 0xF4, size 0x4
    unsigned int morphCount; // offset 0xF8, size 0x4
};
// total size: 0x24
class IndexLOD {
    // Members
    class FixedIndexBuffer indexBuffer; // offset 0x0, size 0x14
    int primCount; // offset 0x14, size 0x4
    int triCount; // offset 0x18, size 0x4
    int indexCount; // offset 0x1C, size 0x4
    int lodVertCount; // offset 0x20, size 0x4
};
// total size: 0x4
class SkinSection {
    // Members
    unsigned short size; // offset 0x0, size 0x2
    unsigned char influenceCount; // offset 0x2, size 0x1
    class @class __anon; // offset 0x3, size 0x1
    unsigned char userdata; // offset 0x3, size 0x1
    unsigned char wiiGQRPosScale; // offset 0x3, size 0x1
};
// total size: 0x1
class @class {
    // Members
    unsigned char userdata; // offset 0x0, size 0x1
    unsigned char wiiGQRPosScale; // offset 0x0, size 0x1
};
// total size: 0x8
class WiiSkinPalette {
    // Members
    unsigned short displayListSize; // offset 0x0, size 0x2
    unsigned short matCount; // offset 0x2, size 0x2
    class Pointer32 matList; // offset 0x4, size 0x4
};
// total size: 0x10
class MorphData {
    // Members
    unsigned int runCount; // offset 0x0, size 0x4
    class Pointer32 runList; // offset 0x4, size 0x4
    class Pointer32 data; // offset 0x8, size 0x4
    float posScale; // offset 0xC, size 0x4
};
// total size: 0x90
class SkinGeometryAsset : public GeometryAsset {
    // Members
    unsigned char skinFlags; // offset 0x60, size 0x1
    unsigned char jointCount; // offset 0x61, size 0x1
    unsigned char influenceSectionCount; // offset 0x62, size 0x1
    unsigned char staticStreamCount; // offset 0x63, size 0x1
    class Pointer32 influenceSections; // offset 0x64, size 0x4
    class Pointer32 staticStreamMap; // offset 0x68, size 0x4
    class Pointer32 skinBufferMap; // offset 0x6C, size 0x4
    class Pointer32 animBoundBoneIndexData; // offset 0x70, size 0x4
    class Pointer32 animBoundSphereData; // offset 0x74, size 0x4
    signed char dynStreamMap[4]; // offset 0x78, size 0x4
    signed char dynConfig; // offset 0x7C, size 0x1
    unsigned char animBoundDataCount; // offset 0x7D, size 0x1
    unsigned short wiiPaletteCount; // offset 0x7E, size 0x2
    class Pointer32 wiiPaletteList; // offset 0x80, size 0x4
    unsigned int morphCount; // offset 0x84, size 0x4
    class Pointer32 morphList; // offset 0x88, size 0x4
};
// total size: 0x140
class SkinGeometryEntity : public GeometryEntity {
    // Members
    int memSize; // offset 0x1C, size 0x4
    class BuilderData builderData; // offset 0x20, size 0x24
    class SkinBuilder builder; // offset 0x44, size 0xFC
};
// total size: 0x1C
class GeometryEntity : public Entity {};
// total size: 0x60
class StaticGeometryAsset : public GeometryAsset {};
// total size: 0x12C
class StaticGeometryEntity : public GeometryEntity {
    // Members
    int memSize; // offset 0x1C, size 0x4
    class BuilderData builderData; // offset 0x20, size 0x24
    class StaticBuilder builder; // offset 0x44, size 0xE8
};
// total size: 0x10
class TextureResourceAsset : public TextureResourceAssetBase {};
// total size: 0x10
class TextureResourceAssetBase {
    // Members
    unsigned long long imageBlobID; // offset 0x0, size 0x8
    signed char tileX; // offset 0x8, size 0x1
    signed char tileY; // offset 0x9, size 0x1
    signed char tileZ; // offset 0xA, size 0x1
    signed char pad; // offset 0xB, size 0x1
    float alphaScale; // offset 0xC, size 0x4
};
// total size: 0x18
class VertexDecl : public Node {
    // Members
    class Stream streams[8]; // offset 0xB, size 0x8
    int streamCount; // offset 0x14, size 0x4
};
// total size: 0x1
class Stream {
    // Members
    unsigned char stride; // offset 0x0, size 0x1
};
// total size: 0x2
class VertexDeclAsset {
    // Members
    unsigned char channelCount; // offset 0x0, size 0x1
    unsigned char streamCount; // offset 0x1, size 0x1
};
// total size: 0x38
class VertexDeclEntity : public Entity {
    // Members
    class VertexDecl vertexDecl; // offset 0x1C, size 0x18
    int streamCount; // offset 0x34, size 0x4
};
// total size: 0x38
class UpdateStruct {
    // Members
    class Vector3 xform; // offset 0x0, size 0xC
    class Quaternion quat; // offset 0xC, size 0x10
    float yfov; // offset 0x1C, size 0x4
    bool dofEnabled; // offset 0x20, size 0x1
    float dofBlurAmt; // offset 0x24, size 0x4
    float dofNearPt; // offset 0x28, size 0x4
    float dofNearFalloff; // offset 0x2C, size 0x4
    float dofFarPt; // offset 0x30, size 0x4
    float dofFarFalloff; // offset 0x34, size 0x4
};
// total size: 0x18
class hkpPhysicsData : public hkReferencedObject {
    // Members
    class hkpWorldCinfo * m_worldCinfo; // offset 0x8, size 0x4
    class hkArray m_systems; // offset 0xC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpPhysicsSystem * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x1
class RawBlobAsset : public Asset {
    // Members
    unsigned char data[1]; // offset 0x0, size 0x1
};
// total size: 0x2C
class RawBlobEntity : public BlobEntity {
    // Members
    class RawBlobAsset * asset; // offset 0x1C, size 0x4
    int assetSize; // offset 0x20, size 0x4
    class Owner * owners; // offset 0x24, size 0x4
    bool deferDestroy; // offset 0x28, size 0x1
};
// total size: 0xC
class SkeletonBlobAsset {
    // Members
    unsigned char evalCount; // offset 0x0, size 0x1
    unsigned char groupCount; // offset 0x1, size 0x1
    unsigned char skinCount; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned short skinJointTotal; // offset 0x4, size 0x2
    unsigned short totalTransformCount; // offset 0x6, size 0x2
    unsigned int morphWeightTotal; // offset 0x8, size 0x4
};
// total size: 0x4
class EvaluatorInfo {
    // Members
    unsigned char transformCount; // offset 0x0, size 0x1
    unsigned char tranChannel; // offset 0x1, size 0x1
    unsigned char quatChannel; // offset 0x2, size 0x1
    unsigned char scaleChannel; // offset 0x3, size 0x1
};
// total size: 0x4
class GroupNode {
    // Members
    unsigned short evalIndex; // offset 0x0, size 0x2
    short parent; // offset 0x2, size 0x2
};
// total size: 0x20
class SkinCluster {
    // Members
    class Pointer32 parentIndices; // offset 0x0, size 0x4
    class Pointer32 sections; // offset 0x4, size 0x4
    class Pointer32 invBindMat; // offset 0x8, size 0x4
    class Pointer32 descaleInvBindMat; // offset 0xC, size 0x4
    class Pointer32 geomIndices; // offset 0x10, size 0x4
    class Pointer32 wiiVBoneList; // offset 0x14, size 0x4
    unsigned short geomCount; // offset 0x18, size 0x2
    unsigned char sectionCount; // offset 0x1A, size 0x1
    unsigned char jointCount; // offset 0x1B, size 0x1
    unsigned short jointStart; // offset 0x1C, size 0x2
    unsigned short wiiVBoneCount; // offset 0x1E, size 0x2
};
// total size: 0x8
class StateOpTable {
    // Members
    void * states; // offset 0x0, size 0x4
    int stateSize; // offset 0x4, size 0x4
};
// total size: 0x48
class GenericShaderAsset : public ShaderAsset {
    // Members
    class StateOpTableAsset shaderOps; // offset 0x18, size 0x8
    class StateOpTableAsset materialOps; // offset 0x20, size 0x8
    class StateOpTableAsset geomOps; // offset 0x28, size 0x8
    class StateOpTableAsset rendOps; // offset 0x30, size 0x8
    class MaterialParamFormatTableAsset shaderParamFormats; // offset 0x38, size 0x8
    int featureFlags; // offset 0x40, size 0x4
    unsigned int flags; // offset 0x44, size 0x4
};
// total size: 0x18
class ShaderAsset {
    // Members
    unsigned long long vertexCodeID; // offset 0x0, size 0x8
    unsigned long long pixelCodeID; // offset 0x8, size 0x8
    unsigned long long vertexDeclID; // offset 0x10, size 0x8
};
// total size: 0x8
class StateOpTableAsset {
    // Members
    class Pointer32 states; // offset 0x0, size 0x4
    int stateSize; // offset 0x4, size 0x4
};
// total size: 0xA8
class GenericShaderEntity : public ShaderEntity {
    // Members
    int memSize; // offset 0x28, size 0x4
    class ParamCargo paramCargo; // offset 0x2C, size 0x8
    class GenericShader shader; // offset 0x38, size 0x70
};
// total size: 0x70
class GenericShader : public Shader {
    // Members
    unsigned long long id; // offset 0x18, size 0x8
    class StateOpTable shaderOps; // offset 0x20, size 0x8
    class StateOpTable geomOps; // offset 0x28, size 0x8
    class StateOpTable materialOps; // offset 0x30, size 0x8
    class StateOpTable rendOps; // offset 0x38, size 0x8
    unsigned short * shaderParamOffsets; // offset 0x40, size 0x4
    int shaderParamCount; // offset 0x44, size 0x4
    void * shaderParams; // offset 0x48, size 0x4
    class RenderMode defaultRenderMode; // offset 0x4C, size 0x1C
    unsigned int flags; // offset 0x68, size 0x4
};
// total size: 0xC
class MemFastAlloc : public BlobCustomAlloc {
    // Members
    char * data; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
};
// total size: 0xC
class LightKitManager {
    // Members
    class LightKitData * head; // offset 0x0, size 0x4
    class LightKitData * tail; // offset 0x4, size 0x4
    unsigned char count; // offset 0x8, size 0x1
};
// total size: 0x3C
class BuildBuffer {
    // Members
    unsigned char * vertexMems[2]; // offset 0x0, size 0x8
    unsigned short * indexMems[2]; // offset 0x8, size 0x8
    int vertexMaxSize; // offset 0x10, size 0x4
    int indexMaxCount; // offset 0x14, size 0x4
    int initFlags; // offset 0x18, size 0x4
    class BufferStruct current; // offset 0x1C, size 0x20
};
// total size: 0x20
class BufferStruct {
    // Members
    int active; // offset 0x0, size 0x4
    int buf; // offset 0x4, size 0x4
    unsigned char * vertexMem; // offset 0x8, size 0x4
    unsigned short * indexMem; // offset 0xC, size 0x4
    int vertexSize; // offset 0x10, size 0x4
    int indexCount; // offset 0x14, size 0x4
    int vertexSizeUpload; // offset 0x18, size 0x4
    int indexCountUpload; // offset 0x1C, size 0x4
};
