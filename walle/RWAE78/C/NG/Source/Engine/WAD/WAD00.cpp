/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022C698 -> 0x8024F9AC
*/
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
// total size: 0x9C
class BlobloidModule : public Module {
    // Members
    class BlobGlob * blobGlob; // offset 0x98, size 0x4
};
// total size: 0x1
class BlobGlob {};
// total size: 0x4
class BlobMemCB : public MemCallbacks {};
// total size: 0x20
class BlobAddArg {
    // Members
    unsigned long long blobUID; // offset 0x0, size 0x8
    int wmlTypeID; // offset 0x8, size 0x4
    int blobSize; // offset 0xC, size 0x4
    class MemHandle * blobHandle; // offset 0x10, size 0x4
    unsigned short blobFlags; // offset 0x14, size 0x2
    unsigned short langID; // offset 0x16, size 0x2
    class BlobCustomAlloc * customAlloc; // offset 0x18, size 0x4
};
// total size: 0xD0
class DomainPriv {
    // Members
    class Domain * parentDom; // offset 0x0, size 0x4
    char domainName[128]; // offset 0x4, size 0x80
    class LoadStream * loadStream; // offset 0x84, size 0x4
    class PoolList activityQueue; // offset 0x88, size 0x1C
    class BlockAllocatorArray myUIDsArray; // offset 0xA4, size 0x20
    int UidProcessIdx; // offset 0xC4, size 0x4
    unsigned int refMask; // offset 0xC8, size 0x4
    unsigned short currLangID; // offset 0xCC, size 0x2
};
// total size: 0x204
class LoadStream {
    // Members
    class MediaFile mediaFile; // offset 0x0, size 0x64
    class LSWorker worker; // offset 0x64, size 0x50
    int baseOffset; // offset 0xB4, size 0x4
    int sectorSize; // offset 0xB8, size 0x4
    class TableEntry myTableEntry; // offset 0xBC, size 0x40
    enum enMediaTarget myMediaTarget; // offset 0xFC, size 0x4
    char myPackfileName[256]; // offset 0x100, size 0x100
    class MemHandle * myMetaDataMem; // offset 0x200, size 0x4
};
// total size: 0x64
class MediaFile : public MediaObject {
    // Members
    class FileData fileData; // offset 0x50, size 0x8
    class OGCallbacks * ogCallbacks; // offset 0x58, size 0x4
    class MediaCallback * callbacks; // offset 0x5C, size 0x4
    class MediaHandler * handler; // offset 0x60, size 0x4
};
// total size: 0x50
class MediaObject {
    // Members
    class MediaError error; // offset 0x0, size 0x4
    class MediaData * mediaData; // offset 0x4, size 0x4
    enum enOpStatus opStatus; // offset 0x8, size 0x4
    class Notify notice; // offset 0xC, size 0x4
    class SyncEvent waitState; // offset 0x10, size 0x24
    class CriticalSection critStatus; // offset 0x34, size 0x18
    bool haveWaitState; // offset 0x4C, size 0x1
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
    class MyUIDs * pool; // offset 0x0, size 0x4
    class Block * next; // offset 0x4, size 0x4
    class Block * prev; // offset 0x8, size 0x4
    int idx; // offset 0xC, size 0x4
};
// total size: 0x8
class MyUIDs {
    // Members
    unsigned long long uidItem; // offset 0x0, size 0x8
};
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
    int blobFlags; // offset 0x1C, size 0x4
};
// total size: 0xC
class Iterator : public ConstIterator {};
// total size: 0xC
class ConstIterator {
    // Members
    class MyUIDs * it; // offset 0x0, size 0x4
    class Block * block; // offset 0x4, size 0x4
    class BlockAllocatorArray * owner; // offset 0x8, size 0x4
};
// total size: 0x18
class ActRegisterEnts : public Activity {
    // Members
    enum enStage stage; // offset 0x8, size 0x4
    class Iterator it_buid; // offset 0xC, size 0xC
};
enum enStage {
    START = 0,
    WORKING = 1,
    PROCESSING = 2,
    FINISH = 3,
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
// total size: 0x20
class TableManager {
    // Members
    class PoolList tableList; // offset 0x0, size 0x1C
    int spaceNeeded; // offset 0x1C, size 0x4
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
// total size: 0x2E0
class BootStrapper {
    // Members
    bool bootStrapFailure; // offset 0x0, size 0x1
    class PoolList drudgeQueue; // offset 0x4, size 0x1C
    class DrudgeBootINI drudgeBootINI; // offset 0x20, size 0x12C
    class DrudgeDomDir drudgeDomDir; // offset 0x14C, size 0x12C
    bool workFileInUse; // offset 0x278, size 0x1
    class MediaFile workFile; // offset 0x27C, size 0x64
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
// total size: 0x15C
class MSTQueryModule : public Module {
    // Members
    class TableManager tableManager; // offset 0x98, size 0x20
    class DomainDirMgr domainDirMgr; // offset 0xB8, size 0x4
    class PoolList queryList; // offset 0xBC, size 0x1C
    class PoolList loadQueue; // offset 0xD8, size 0x1C
    bool workFileInUse; // offset 0xF4, size 0x1
    class MediaFile workFile; // offset 0xF8, size 0x64
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
// total size: 0x9C
class ScadMgrModule : public Module {
    // Members
    class ScadMgr * scadMgr; // offset 0x98, size 0x4
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
// total size: 0xC
class __va_list_struct {
    // Members
    char gpr; // offset 0x0, size 0x1
    char fpr; // offset 0x1, size 0x1
    char reserved[2]; // offset 0x2, size 0x2
    char * input_arg_area; // offset 0x4, size 0x4
    char * reg_save_area; // offset 0x8, size 0x4
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
enum HIO2DeviceType {
    HIO2_DEVICE_INVALID = 4294967295,
    HIO2_DEVICE_EXI2USB_0 = 0,
    HIO2_DEVICE_EXI2USB_1 = 1,
    HIO2_DEVICE_MrEXI = 2,
};
// total size: 0x18
class Basic3DSchema : public Schema {};
// total size: 0x14
class EntityHandle : public EntityHandleBase {};
// total size: 0xF4
class Basic3DEntity : public SpatialEntity {
    // Members
    class Scene * scene; // offset 0x10, size 0x4
    class Matrix43 startMat; // offset 0x14, size 0x30
    class Vector hackScale; // offset 0x44, size 0x10
    int memSize; // offset 0x54, size 0x4
    class Basic3DEntity * owner; // offset 0x58, size 0x4
    unsigned int movingColor; // offset 0x5C, size 0x4
    bool hackVisible; // offset 0x60, size 0x1
    class ModelInstanceArticle modelArt; // offset 0x64, size 0x90
};
// total size: 0x10
class SpatialEntity : public Entity {};
// total size: 0xA0
class Basic3D {
    // Members
    class EventTranslatorAsset translator; // offset 0x0, size 0x18
    class Matrix43POD transform; // offset 0x20, size 0x30
    class ModelInstanceAsset model; // offset 0x50, size 0x40
    unsigned int hackVisible; // offset 0x90, size 0x4
    class PhysicsBody body; // offset 0x98, size 0x8
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
// total size: 0x8
class PhysicsBody {
    // Members
    class uid resource; // offset 0x0, size 0x8
};
// total size: 0x18
class ClipSchema : public Schema {};
// total size: 0x18
class EffectSchema : public Schema {};
// total size: 0x78
class EffectEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class Effect effect; // offset 0x14, size 0x64
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
// total size: 0x1C
class ShaderEntity : public Entity {
    // Members
    class EntityHandle * vertexCode; // offset 0x10, size 0x4
    class EntityHandle * pixelCode; // offset 0x14, size 0x4
    class EntityHandle * vertexDecl; // offset 0x18, size 0x4
};
// total size: 0x0
class EntityHandle {};
// total size: 0x30
class RenderModeEntity : public Entity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class RenderMode renderMode; // offset 0x14, size 0x1C
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
    class ViewAttrib viewAttrib; // offset 0x30, size 0x4
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
// total size: 0x4
class ViewAttrib {
    // Members
    unsigned char layer; // offset 0x0, size 0x1
    unsigned char stage; // offset 0x1, size 0x1
    unsigned char spaceFilter; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x30
class GlobalFXEntity : public Entity {
    // Members
    class ImmediatePrototypeEntity * HDRImmProtEnt; // offset 0x10, size 0x4
    class ImmediatePrototypeEntity * DoFImmProtEnt; // offset 0x14, size 0x4
    class ImmediatePrototypeEntity * MotionBlurImmProtEnt; // offset 0x18, size 0x4
    class ImmediatePrototypeEntity * PostProcessImmProtEnt; // offset 0x1C, size 0x4
    class ImmediatePrototypeEntity * ShadowReceiveImmProtEnt; // offset 0x20, size 0x4
    class ImmediatePrototypeEntity * DecalImmProtEnt; // offset 0x24, size 0x4
    class ImmediatePrototypeEntity * DoF_HDR_BlurImmProtEnt; // offset 0x28, size 0x4
    class GlobalFX * mAsset; // offset 0x2C, size 0x4
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
// total size: 0x8
class Command {
    // Members
    int size; // offset 0x0, size 0x4
    void (* cb)(class Command * cmd); // offset 0x4, size 0x4
};
// total size: 0x20
class AutoMemberCommandObject2 : public Command {
    // Members
    class GlobalFXEntity * inst; // offset 0x8, size 0x4
    class ImmediatePrototypeEntity * a1; // offset 0xC, size 0x4
    class ImmediatePrototypeEntity * a2; // offset 0x10, size 0x4
    void (GlobalFXEntity::* FuncPtr)(void * this, void * this, class ImmediatePrototypeEntity *, class ImmediatePrototypeEntity *); // offset 0x14, size 0x4
};
// total size: 0x18
class ImmediateGeometrySchema : public Schema {};
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
// total size: 0x18
class ImmediateInstanceArticleSchema : public ArticleSchema {};
// total size: 0x18
class ArticleSchema : public Schema {};
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
// total size: 0x18
class ImmediatePrototypeSchema : public Schema {};
// total size: 0x2
class ImmediatePrototypeAsset {
    // Members
    unsigned short geomCount; // offset 0x0, size 0x2
};
// total size: 0x18
class LightKitSchema : public Schema {};
// total size: 0x18
class LightKitSceneSchema : public Schema {};
// total size: 0x18
class MaterialSchema : public Schema {};
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
// total size: 0x18
class ModelInstanceArticleSchema : public ArticleSchema {};
// total size: 0x18
class UVMovementSettingsSchema : public RenderCustomizerSchema {};
// total size: 0x18
class RenderCustomizerSchema : public Schema {};
// total size: 0x18
class TextureAnimationSettingsSchema : public RenderCustomizerSchema {};
// total size: 0x18
class DTRMovieSchema : public RenderCustomizerSchema {};
// total size: 0x18
class DTRFrontBufferSchema : public RenderCustomizerSchema {};
// total size: 0x18
class GlobalFXSchema : public Schema {};
// total size: 0x38
class ModelPrototypeAsset {
    // Members
    unsigned short geomCount; // offset 0x0, size 0x2
    unsigned short rendCount; // offset 0x2, size 0x2
    unsigned short childTransformCount; // offset 0x4, size 0x2
    unsigned short refModelCount; // offset 0x6, size 0x2
    unsigned short modelPartCount; // offset 0x8, size 0x2
    unsigned short pad; // offset 0xA, size 0x2
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
// total size: 0x18
class ModelPrototypeSchema : public Schema {};
// total size: 0x10
class GeometryEntity : public Entity {};
// total size: 0x1C
class DTRMovieEntity : public RenderCustomizerBaseEntity {
    // Members
    class DTRMovieSettings * mAsset; // offset 0x10, size 0x4
    int targetWidth; // offset 0x14, size 0x4
    int targetHeight; // offset 0x18, size 0x4
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
// total size: 0x1
class CustomizerUVBase {};
// total size: 0x14
class DTRFrontBufferEntity : public RenderCustomizerBaseEntity {
    // Members
    class DTRFrontBufferSettings * mAsset; // offset 0x10, size 0x4
};
// total size: 0x10
class DTRFrontBufferSettings : public CustomizerUVBase {
    // Members
    class uid TargetTexture; // offset 0x0, size 0x8
    class uid TargetObject; // offset 0x8, size 0x8
};
// total size: 0x14
class UVMovementSettingsEntity : public RenderCustomizerBaseEntity {
    // Members
    class UVMovementSettings * mAsset; // offset 0x10, size 0x4
};
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
class TextureAnimationInstanceData : public RenderCustomizerData {
    // Members
    float * rows; // offset 0x4, size 0x4
    class Vector2 translation; // offset 0x8, size 0x8
    unsigned int currentTextureFrameTableIndex; // offset 0x10, size 0x4
    unsigned int currentTextureIndex; // offset 0x14, size 0x4
    float currentTime; // offset 0x18, size 0x4
    float timeToDisplay; // offset 0x1C, size 0x4
};
// total size: 0x18
class RenderModeSchema : public Schema {};
// total size: 0x4
class RenderModeAsset {
    // Members
    signed char spaceLayer; // offset 0x0, size 0x1
    signed char sortOrder; // offset 0x1, size 0x1
    unsigned char renderStateCount; // offset 0x2, size 0x1
    unsigned char pad[1]; // offset 0x3, size 0x1
};
// total size: 0x18
class SkinGeometrySchema : public GeometrySchema {};
// total size: 0x18
class GeometrySchema : public Schema {};
// total size: 0x80
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
    unsigned short pad; // offset 0x7E, size 0x2
};
// total size: 0xE4
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
    class RenderAttrib viewAttrib; // offset 0xB4, size 0x1
    int * staticVertexBufferSizes; // offset 0xB8, size 0x4
    int staticVertexBufferCount; // offset 0xBC, size 0x4
    int * indexBufferSizes; // offset 0xC0, size 0x4
    int jointCount; // offset 0xC4, size 0x4
    class Vector4 * animBoundSphereData; // offset 0xC8, size 0x4
    unsigned char * animBoundBoneIndexData; // offset 0xCC, size 0x4
    unsigned char animBoundDataCount; // offset 0xD0, size 0x1
    void * posInput; // offset 0xD4, size 0x4
    unsigned char * bufferMap; // offset 0xD8, size 0x4
    class SkinSection * sections; // offset 0xDC, size 0x4
    short sectionCount; // offset 0xE0, size 0x2
    signed char dynConfig; // offset 0xE2, size 0x1
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
// total size: 0x11C
class SkinGeometryEntity : public GeometryEntity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class BuilderData builderData; // offset 0x14, size 0x24
    class SkinBuilder builder; // offset 0x38, size 0xE4
};
// total size: 0x10
class VertexStream {
    // Members
    unsigned long long vertexBufferID; // offset 0x0, size 0x8
    unsigned char stride; // offset 0x8, size 0x1
    unsigned char pad[7]; // offset 0x9, size 0x7
};
// total size: 0x18
class StaticGeometrySchema : public GeometrySchema {};
// total size: 0x60
class StaticGeometryAsset : public GeometryAsset {};
// total size: 0x120
class StaticGeometryEntity : public GeometryEntity {
    // Members
    int memSize; // offset 0x10, size 0x4
    class BuilderData builderData; // offset 0x14, size 0x24
    class StaticBuilder builder; // offset 0x38, size 0xE8
};
// total size: 0x18
class TextureResourceSchema : public Schema {};
// total size: 0x10
class TextureResourceAssetBase {
    // Members
    unsigned long long imageBlobID; // offset 0x0, size 0x8
    signed char tileX; // offset 0x8, size 0x1
    signed char tileY; // offset 0x9, size 0x1
    signed char tileZ; // offset 0xA, size 0x1
    signed char pad[5]; // offset 0xB, size 0x5
};
// total size: 0x18
class TriggerSchema : public Schema {};
// total size: 0x5C
class TriggerEntity : public SpatialEntity {
    // Members
    class Matrix43 transform; // offset 0x10, size 0x30
    int memSize; // offset 0x40, size 0x4
    class TriggerEntity * owner; // offset 0x44, size 0x4
    unsigned int hackColor; // offset 0x48, size 0x4
    unsigned int hackColorInitial; // offset 0x4C, size 0x4
    int hackXLineCount; // offset 0x50, size 0x4
    int hackYLineCount; // offset 0x54, size 0x4
    int hackZLineCount; // offset 0x58, size 0x4
};
// total size: 0x50
class Trigger {
    // Members
    class Matrix43POD transform; // offset 0x0, size 0x30
    class EventTranslatorAsset translator; // offset 0x30, size 0x18
};
// total size: 0x18
class VertexDeclSchema : public Schema {};
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
// total size: 0x2C
class VertexDeclEntity : public Entity {
    // Members
    class VertexDecl vertexDecl; // offset 0x10, size 0x18
    int streamCount; // offset 0x28, size 0x4
};
// total size: 0x18
class CameraFlyBlobSchema : public Schema {};
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
class CinematicBlobSchema : public Schema {};
// total size: 0x18
class CollisionMeshBlobSchema : public Schema {};
// total size: 0x28
class CollisionMeshBlobAsset : public Asset {
    // Members
    int numVerts; // offset 0x0, size 0x4
    int numTris; // offset 0x4, size 0x4
    float aabbCenter[3]; // offset 0x8, size 0xC
    float aabbExtents[3]; // offset 0x14, size 0xC
    int numSurfIDs; // offset 0x20, size 0x4
    class Pointer32 surfaceIdList; // offset 0x24, size 0x4
};
// total size: 0x18
class RawBlobSchema : public Schema {};
// total size: 0x20
class RawBlobEntity : public BlobEntity {
    // Members
    class RawBlobAsset * asset; // offset 0x10, size 0x4
    int assetSize; // offset 0x14, size 0x4
    class Owner * owners; // offset 0x18, size 0x4
    bool deferDestroy; // offset 0x1C, size 0x1
};
// total size: 0x1
class RawBlobAsset : public Asset {
    // Members
    unsigned char data[1]; // offset 0x0, size 0x1
};
// total size: 0x18
class ScaleformBlobSchema : public Schema {};
// total size: 0x190
class Coordinator {
    // Members
    class PoolList pMovieDefs; // offset 0x0, size 0x1C
    class PoolList pTextures; // offset 0x1C, size 0x1C
    class PoolList pMovieViews; // offset 0x38, size 0x1C
    class PoolList listeners; // offset 0x54, size 0x1C
    class Iterator viewIterRend; // offset 0x70, size 0x4
    class Iterator viewTail; // offset 0x74, size 0x4
    class HeapAllocator mBlockAllocator; // offset 0x78, size 0x7C
    class ScaleformInternalEntity * sfIntEnt; // offset 0xF4, size 0x4
    class GFxLoader * mLoader; // offset 0xF8, size 0x4
    class GFxActionControl mActionControl; // offset 0xFC, size 0x18
    class GPtr pFileOpener; // offset 0x114, size 0x4
    class GPtr handler; // offset 0x118, size 0x4
    class GPtr strTranslator; // offset 0x11C, size 0x4
    class GPtr pFontMap; // offset 0x120, size 0x4
    class TextureConfig fontCacheConfig; // offset 0x124, size 0x1C
    class GMatrix2D mat; // offset 0x140, size 0x18
    class GPtr pRenderer; // offset 0x158, size 0x4
    class GPtr pRenderConfig; // offset 0x15C, size 0x4
    class GPtr pImageCreator; // offset 0x160, size 0x4
    int * pDevice; // offset 0x164, size 0x4
    void * * updULMovies; // offset 0x168, size 0x4
    void * * rendULMovies; // offset 0x16C, size 0x4
    char prevLangCode[5]; // offset 0x170, size 0x5
    unsigned int numUpdULMovies; // offset 0x178, size 0x4
    unsigned int numRendULMovies; // offset 0x17C, size 0x4
    unsigned int updArraySize; // offset 0x180, size 0x4
    unsigned int rendArraySize; // offset 0x184, size 0x4
    bool firstPlay : 1; // offset 0x188, size 0x1, bit offset 0
    bool texturesLoaded : 1; // offset 0x188, size 0x1, bit offset 1
    bool moviesStopped : 1; // offset 0x188, size 0x1, bit offset 2
    bool firstMovie : 1; // offset 0x188, size 0x1, bit offset 3
    bool standardDef : 1; // offset 0x188, size 0x1, bit offset 4
    bool sfEnabled : 1; // offset 0x188, size 0x1, bit offset 5
    unsigned int pad : 23; // offset 0x188, size 0x4, bit offset 6
};
// total size: 0x7C
class HeapAllocator : public GAllocator {
    // Members
    unsigned char * fixedBuffer[8]; // offset 0x4, size 0x20
    unsigned char * debugBuffer[8]; // offset 0x24, size 0x20
    class FixedAllocator * falloc[8]; // offset 0x44, size 0x20
    class MemTracker * memTracker; // offset 0x64, size 0x4
    enum GlobalHeapEnum mHeap; // offset 0x68, size 0x4
    enum eMemMgrTag mTag; // offset 0x6C, size 0x4
    bool mSpam; // offset 0x70, size 0x1
    class FixedAllocator * staticAllocator; // offset 0x74, size 0x4
    class MemHandle * staticAllocatorHandle; // offset 0x78, size 0x4
};
// total size: 0x4
class GAllocator {};
// total size: 0x30
class FixedAllocator {
    // Members
    class CriticalSection memMutex; // offset 0x0, size 0x18
    class FixedHeader * freeList; // offset 0x18, size 0x4
    bool selfDestruct; // offset 0x1C, size 0x1
    bool beThreadSafe; // offset 0x1D, size 0x1
    int numBlocks; // offset 0x20, size 0x4
    int blockSize; // offset 0x24, size 0x4
    unsigned char * bufferStart; // offset 0x28, size 0x4
    unsigned char * bufferEnd; // offset 0x2C, size 0x4
};
// total size: 0x4
class FixedHeader {
    // Members
    class FixedHeader * next; // offset 0x0, size 0x4
};
// total size: 0xA6C
class MemTracker {
    // Members
    int totalSize; // offset 0x0, size 0x4
    int sizePerTag[133]; // offset 0x4, size 0x214
    int sizePerDept[5]; // offset 0x218, size 0x14
    class File trckLog; // offset 0x22C, size 0x4
    unsigned int tagStack[8]; // offset 0x230, size 0x20
    char logFileName[2048]; // offset 0x250, size 0x800
    int topLine; // offset 0xA50, size 0x4
    class CriticalSection trackerMutex; // offset 0xA54, size 0x18
};
// total size: 0xC
class ScaleformInternalEntity : public Node {};
// total size: 0xC
class GFxLoader : public GFxSharedState {
    // Members
    class GFxLoaderImpl * pImpl; // offset 0x4, size 0x4
    class GFxResourceLib * pStrongResourceLib; // offset 0x8, size 0x4
};
// total size: 0x4
class GFxSharedState : public GFxFileConstants {};
// total size: 0x1
class GFxFileConstants {};
// total size: 0x18
class GFxResourceLib : public GRefCountBase {
    // Members
    class GFxResourceWeakLib * pWeakLib; // offset 0x10, size 0x4
    class ghash_set_uncached PinSet; // offset 0x14, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x10
class GRefCountBaseImpl {
    // Members
    int RefCount; // offset 0x0, size 0x4
    class GRefCountImpl * pRefCountImpl; // offset 0x4, size 0x4
    class GWeakPtrProxy * pWeakProxy; // offset 0x8, size 0x4
};
// total size: 0x8
class GRefCountImpl {
    // Members
    void (* pAddRef)(class GRefCountBaseImpl * pbase); // offset 0x0, size 0x4
    void (* pRelease)(class GRefCountBaseImpl * pbase, unsigned int flags); // offset 0x4, size 0x4
};
// total size: 0x8
class GWeakPtrProxy : public GNewOverrideBase {
    // Members
    int RefCount; // offset 0x0, size 0x4
    bool Alive; // offset 0x4, size 0x1
};
// total size: 0x1
class GNewOverrideBase {};
// total size: 0x1C
class GFxResourceWeakLib : public GFxResourceLibBase {
    // Members
    class GFxResourceLib * pStrongLib; // offset 0x10, size 0x4
    class GLock ResourceLock; // offset 0x14, size 0x1
    class ghash_set Resources; // offset 0x18, size 0x4
};
// total size: 0x10
class GFxResourceLibBase : public GRefCountBase {};
// total size: 0x1
class GLock {};
// total size: 0x4
class ghash_set {
    // Members
    class table * pTable; // offset 0x0, size 0x4
};
// total size: 0x4
class ghash_set_uncached : public ghash_set {};
// total size: 0x18
class GFxActionControl : public GFxState {
    // Members
    unsigned int ActionFlags; // offset 0x14, size 0x4
};
// total size: 0x14
class GFxState : public GRefCountBase {
    // Members
    enum StateType SType; // offset 0x10, size 0x4
};
enum StateType {
    State_None = 0,
    State_RenderConfig = 1,
    State_RenderStats = 2,
    State_Translator = 3,
    State_Log = 4,
    State_ImageLoader = 5,
    State_ActionControl = 6,
    State_UserEventHandler = 7,
    State_FSCommandHandler = 8,
    State_ExternalInterface = 9,
    State_FileOpener = 10,
    State_URLBuilder = 11,
    State_ImageCreator = 12,
    State_ParseControl = 13,
    State_ProgressHandler = 14,
    State_ImportVisitor = 15,
    State_FontPackParams = 16,
    State_FontCacheManager = 17,
    State_FontLib = 18,
    State_FontProvider = 19,
    State_FontMap = 20,
    State_GradientParams = 21,
    State_TaskManager = 22,
};
// total size: 0x4
class GPtr {
    // Members
    class FileOpener * pObject; // offset 0x0, size 0x4
};
// total size: 0x34
class FileOpener : public GFxFileOpener {
    // Members
    class PoolList fileList; // offset 0x14, size 0x1C
    bool mSpam; // offset 0x30, size 0x1
};
// total size: 0x14
class GFxFileOpener : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class CustomCommandHandler * pObject; // offset 0x0, size 0x4
};
// total size: 0x1C
class CustomCommandHandler : public GFxFSCommandHandler {
    // Members
    class Coordinator * coord; // offset 0x14, size 0x4
    bool isOn : 1; // offset 0x18, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x18, size 0x4, bit offset 1
};
// total size: 0x14
class GFxFSCommandHandler : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class CustomTranslator * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class CustomTranslator : public GFxTranslator {};
// total size: 0x14
class GFxTranslator : public GFxState {};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontMap * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxFontMap : public GFxState {
    // Members
    class GFxFontMapImpl * pImpl; // offset 0x14, size 0x4
};
// total size: 0x1C
class TextureConfig {
    // Members
    unsigned int TextureWidth; // offset 0x0, size 0x4
    unsigned int TextureHeight; // offset 0x4, size 0x4
    unsigned int MaxNumTextures; // offset 0x8, size 0x4
    unsigned int MaxSlotHeight; // offset 0xC, size 0x4
    unsigned int SlotPadding; // offset 0x10, size 0x4
    unsigned int TexUpdWidth; // offset 0x14, size 0x4
    unsigned int TexUpdHeight; // offset 0x18, size 0x4
};
// total size: 0x18
class GMatrix2D {
    // Members
    float M_[2][3]; // offset 0x0, size 0x18
};
// total size: 0x4
class GPtr {
    // Members
    class GRendererWii * pObject; // offset 0x0, size 0x4
};
// total size: 0x10
class GRendererWii : public GRenderer {};
// total size: 0x10
class GRenderer : public GRefCountBase {};
// total size: 0x4
class GPtr {
    // Members
    class GFxRenderConfig * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class CustomImageCreator * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class CustomImageCreator : public GFxImageCreator {};
// total size: 0x18
class GFxImageCreator : public GFxState {
    // Members
    bool KeepImageBindData; // offset 0x14, size 0x1
};
// total size: 0x18
class SkeletonBlobSchema : public Schema {};
// total size: 0x8
class SkeletonBlobAsset {
    // Members
    unsigned char evalCount; // offset 0x0, size 0x1
    unsigned char groupCount; // offset 0x1, size 0x1
    unsigned char skinCount; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned short skinJointTotal; // offset 0x4, size 0x2
    unsigned short totalTransformCount; // offset 0x6, size 0x2
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
// total size: 0x1C
class SkinCluster {
    // Members
    class Pointer32 parentIndices; // offset 0x0, size 0x4
    class Pointer32 sections; // offset 0x4, size 0x4
    class Pointer32 invBindMat; // offset 0x8, size 0x4
    class Pointer32 descaleInvBindMat; // offset 0xC, size 0x4
    class Pointer32 geomIndices; // offset 0x10, size 0x4
    int geomCount; // offset 0x14, size 0x4
    unsigned char sectionCount; // offset 0x18, size 0x1
    unsigned char jointCount; // offset 0x19, size 0x1
    unsigned short jointStart; // offset 0x1A, size 0x2
};
// total size: 0x18
class ComboAnimBlobSchema : public AnimBlobSchema {};
// total size: 0x18
class AnimBlobSchema : public Schema {};
// total size: 0x18
class GenericShaderSchema : public Schema {};
// total size: 0x8
class StateOpTable {
    // Members
    void * states; // offset 0x0, size 0x4
    int stateSize; // offset 0x4, size 0x4
};
// total size: 0x98
class GenericShaderEntity : public ShaderEntity {
    // Members
    int memSize; // offset 0x1C, size 0x4
    class ParamCargo paramCargo; // offset 0x20, size 0x8
    class GenericShader shader; // offset 0x28, size 0x70
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
// total size: 0x18
class BasicObjectSchema : public Schema {};
// total size: 0x18
class UnknownThingSchema : public Schema {};
// total size: 0xC
class MemFastAlloc : public BlobCustomAlloc {
    // Members
    char * data; // offset 0x4, size 0x4
    int size; // offset 0x8, size 0x4
};
// total size: 0x3C
class BuildBuffer {
    // Members
    unsigned char * vertexMems[2]; // offset 0x0, size 0x8
    unsigned short * indexMems[2]; // offset 0x8, size 0x8
    int vertexMaxSize; // offset 0x10, size 0x4
    int indexMaxCount; // offset 0x14, size 0x4
    int initFlags; // offset 0x18, size 0x4
    class @class current; // offset 0x1C, size 0x20
};
// total size: 0x20
class @class {
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
// total size: 0x6FC
class PostProcess : public Node {
    // Members
    class sViewport viewports[4]; // offset 0xC, size 0x50
    class GlobalFXEntity * globFXEnt; // offset 0x5C, size 0x4
    class TextureRenderTarget workTextures[8]; // offset 0x60, size 0x660
    class SamplerContext samplerContext; // offset 0x6C0, size 0x8
    class Renderable3D * PostProcessRenderable[4]; // offset 0x6C8, size 0x10
    class ShaderVec4 * avgSampleOffsets[4]; // offset 0x6D8, size 0x10
    class ShaderVec4 * avgSampleWeights[4]; // offset 0x6E8, size 0x10
    int viewportCount; // offset 0x6F8, size 0x4
};
// total size: 0x14
class sViewport {
    // Members
    class Viewport * viewport; // offset 0x0, size 0x4
    class ShaderVec4 rect; // offset 0x4, size 0x10
};
// total size: 0x10
class ShaderVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Schema * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
