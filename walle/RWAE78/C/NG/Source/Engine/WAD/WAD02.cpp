/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802821AC -> 0x802C5AEC
*/
extern class hkSingletonInitNode * hkSingletonInitList; // size: 0x4
extern void (* hkSystemFree)(void * p); // size: 0x4
extern void * (* hkSystemMalloc)(int size, int align); // size: 0x4
extern int __float_nan[65536]; // size: 0x0
// total size: 0x4
class DomainDirMemCB : public MemCallbacks {};
// total size: 0x38
class Directory {
    // Members
    class MAPHeader header; // offset 0x0, size 0x20
    class MAPEntry firstEntry; // offset 0x20, size 0x18
};
// total size: 0x20
class MAPHeader {
    // Members
    int numEntry; // offset 0x0, size 0x4
    int mapVersion; // offset 0x4, size 0x4
    int stringTableStart; // offset 0x8, size 0x4
    int stringTableSize; // offset 0xC, size 0x4
    char reserved[16]; // offset 0x10, size 0x10
};
// total size: 0x18
class MAPEntry {
    // Members
    unsigned long long domainUID; // offset 0x0, size 0x8
    class Pointer32 domainPath; // offset 0x8, size 0x4
    class Pointer32 packFileName; // offset 0xC, size 0x4
    char reserved[8]; // offset 0x10, size 0x8
};
// total size: 0x8
class Batcher {
    // Members
    class Command * cmd; // offset 0x0, size 0x4
    class Batcher * next; // offset 0x4, size 0x4
};
// total size: 0x8
class Command {
    // Members
    int size; // offset 0x0, size 0x4
    void (* cb)(class Command * cmd); // offset 0x4, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Node * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class TempNodeRef * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class TempNodeRef {
    // Members
    class Node * node; // offset 0x0, size 0x4
    void (* detachCB)(class Node * node); // offset 0x4, size 0x4
};
// total size: 0x98
class SceneGraphModule : public Module {};
// total size: 0xC
class StackPoolArray : public PoolArray {};
// total size: 0xA8
class LFDeviceModule : public Module {
    // Members
    class LFDeviceFactory factory; // offset 0x98, size 0x10
};
// total size: 0x10
class LFDeviceFactory : public FileDeviceFactory {};
// total size: 0xC
class LFDevice : public FileDevice {
    // Members
    class FileHandleData * handle; // offset 0x4, size 0x4
    class LFDeviceFactory * owner; // offset 0x8, size 0x4
};
// total size: 0x48
class FileHandleData : public DVDFileInfo {
    // Members
    int curPos; // offset 0x3C, size 0x4
    int lastResult; // offset 0x40, size 0x4
    bool done; // offset 0x44, size 0x1
    bool abandoned; // offset 0x45, size 0x1
};
// total size: 0x98
class MathModule : public Module {};
// total size: 0x1C
class MallocDebugWrapper {
    // Members
    class CriticalSection memMutex; // offset 0x0, size 0x18
    enum PhysicalMemoryPool pool; // offset 0x18, size 0x4
};
enum PhysicalMemoryPool {
    PHYS_MEM_MAIN = 0,
    PHYS_MEM_SECONDARY = 1,
    PHYS_MEM_HEAP_DEF = 1,
};
// total size: 0x34
class PoolManager {
    // Members
    unsigned char * fixedBuffer[4]; // offset 0x0, size 0x10
    unsigned char * debugBuffer[4]; // offset 0x10, size 0x10
    class FixedAllocator * falloc[4]; // offset 0x20, size 0x10
    class MemTracker * memTracker; // offset 0x30, size 0x4
};
// total size: 0x98
class AllocModule : public Module {};
// total size: 0x4
class ThreadLocalStorage : private ThreadLocalStorageBase {};
// total size: 0x4
class ThreadLocalStorageBase {
    // Members
    int userIndex; // offset 0x0, size 0x4
};
// total size: 0x8
class ThreadLocalStorageTable {
    // Members
    int userCount; // offset 0x0, size 0x4
    bool created; // offset 0x4, size 0x1
};
// total size: 0x10
class DeptLookup {
    // Members
    enum DeptTag deptID; // offset 0x0, size 0x4
    char * deptNameString; // offset 0x4, size 0x4
    int maxMem; // offset 0x8, size 0x4
    unsigned int throwAssert; // offset 0xC, size 0x4
};
enum DeptTag {
    DeptTag_Anim = 0,
    DeptTag_Art = 1,
    DeptTag_Design = 2,
    DeptTag_Prog = 3,
    DeptTag_Other = 4,
    DeptTag_NumDepts = 5,
};
// total size: 0xC
class TagLookup {
    // Members
    enum eMemMgrTag tagID; // offset 0x0, size 0x4
    enum DeptTag deptID; // offset 0x4, size 0x4
    char * tagNameString; // offset 0x8, size 0x4
};
// total size: 0x98
class PhysicsModule : public Module {};
// total size: 0x14
class hkTestEntry {
    // Members
    int (* m_func)(); // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
    char * m_category; // offset 0x8, size 0x4
    char * m_path; // offset 0xC, size 0x4
    class hkTestEntry * m_next; // offset 0x10, size 0x4
};
// total size: 0x10
class hkTypeInfo {
    // Members
    char * m_typeName; // offset 0x0, size 0x4
    void (* m_finishLoadedObjectFunction)(void *); // offset 0x4, size 0x4
    void (* m_cleanupLoadedObjectFunction)(void *); // offset 0x8, size 0x4
    void * m_vtable; // offset 0xC, size 0x4
};
// total size: 0x30
class hkClass {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class hkClass * m_parent; // offset 0x4, size 0x4
    int m_objectSize; // offset 0x8, size 0x4
    int m_numImplementedInterfaces; // offset 0xC, size 0x4
    class hkClassEnum * m_declaredEnums; // offset 0x10, size 0x4
    int m_numDeclaredEnums; // offset 0x14, size 0x4
    class hkClassMember * m_declaredMembers; // offset 0x18, size 0x4
    int m_numDeclaredMembers; // offset 0x1C, size 0x4
    void * m_defaults; // offset 0x20, size 0x4
    class hkCustomAttributes * m_attributes; // offset 0x24, size 0x4
    class hkFlags m_flags; // offset 0x28, size 0x4
    int m_describedVersion; // offset 0x2C, size 0x4
};
// total size: 0x14
class hkClassEnum {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class Item * m_items; // offset 0x4, size 0x4
    int m_numItems; // offset 0x8, size 0x4
    class hkCustomAttributes * m_attributes; // offset 0xC, size 0x4
    class hkFlags m_flags; // offset 0x10, size 0x4
};
// total size: 0x8
class Item {
    // Members
    int m_value; // offset 0x0, size 0x4
    char * m_name; // offset 0x4, size 0x4
};
// total size: 0x8
class hkCustomAttributes {
    // Members
    class Attribute * m_attributes; // offset 0x0, size 0x4
    int m_numAttributes; // offset 0x4, size 0x4
};
// total size: 0xC
class Attribute {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class hkVariant m_value; // offset 0x4, size 0x8
};
// total size: 0x8
class hkVariant {
    // Members
    void * m_object; // offset 0x0, size 0x4
    class hkClass * m_class; // offset 0x4, size 0x4
};
// total size: 0x4
class hkFlags {
    // Members
    unsigned int m_storage; // offset 0x0, size 0x4
};
// total size: 0x18
class hkClassMember {
    // Members
    char * m_name; // offset 0x0, size 0x4
    class hkClass * m_class; // offset 0x4, size 0x4
    class hkClassEnum * m_enum; // offset 0x8, size 0x4
    class hkEnum m_type; // offset 0xC, size 0x1
    class hkEnum m_subtype; // offset 0xD, size 0x1
    short m_cArraySize; // offset 0xE, size 0x2
    class hkFlags m_flags; // offset 0x10, size 0x2
    unsigned short m_offset; // offset 0x12, size 0x2
    class hkCustomAttributes * m_attributes; // offset 0x14, size 0x4
};
// total size: 0x1
class hkEnum {
    // Members
    unsigned char m_storage; // offset 0x0, size 0x1
};
// total size: 0x2
class hkFlags {
    // Members
    unsigned short m_storage; // offset 0x0, size 0x2
};
// total size: 0x10
class Updater {
    // Members
    char * fromVersion; // offset 0x0, size 0x4
    char * toVersion; // offset 0x4, size 0x4
    class UpdateDescription * desc; // offset 0x8, size 0x4
    enum hkResult (* optionalCustomFunction)(class hkArray * loadedObjects, class hkObjectUpdateTracker * tracker); // offset 0xC, size 0x4
};
// total size: 0x10
class UpdateDescription {
    // Members
    class ClassRename * m_renames; // offset 0x0, size 0x4
    class ClassAction * m_actions; // offset 0x4, size 0x4
    class hkClassNameRegistry * m_newClassRegistry; // offset 0x8, size 0x4
    class UpdateDescription * m_next; // offset 0xC, size 0x4
};
// total size: 0x8
class ClassRename {
    // Members
    char * oldName; // offset 0x0, size 0x4
    char * newName; // offset 0x4, size 0x4
};
// total size: 0x14
class ClassAction {
    // Members
    unsigned int oldSignature; // offset 0x0, size 0x4
    unsigned int newSignature; // offset 0x4, size 0x4
    int versionFlags; // offset 0x8, size 0x4
    char * oldClassName; // offset 0xC, size 0x4
    void (* versionFunc)(class hkVariant * obj, class hkVariant * newObj, class hkObjectUpdateTracker * tracker); // offset 0x10, size 0x4
};
// total size: 0x8
class hkObjectUpdateTracker : public hkReferencedObject {};
// total size: 0x8
class hkClassNameRegistry : public hkReferencedObject {};
enum hkResult {
    HK_SUCCESS = 0,
    HK_FAILURE = 1,
};
// total size: 0xC
class hkArray {
    // Members
    class hkVariant * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x18
class hkStaticClassNameRegistry : public hkClassNameRegistry {
    // Members
    char * m_name; // offset 0x8, size 0x4
    class hkClass * * m_classes; // offset 0xC, size 0x4
    int m_classVersion; // offset 0x10, size 0x4
    int m_ready; // offset 0x14, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkVector4 * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x18
class hkGeometry {
    // Members
    class hkArray m_vertices; // offset 0x0, size 0xC
    class hkArray m_triangles; // offset 0xC, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class Triangle * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class Triangle {
    // Members
    int m_a; // offset 0x0, size 0x4
    int m_b; // offset 0x4, size 0x4
    int m_c; // offset 0x8, size 0x4
};
// total size: 0xC
class hkStridedVertices {
    // Members
    float * m_vertices; // offset 0x0, size 0x4
    int m_numVertices; // offset 0x4, size 0x4
    int m_striding; // offset 0x8, size 0x4
};
// total size: 0x100
class hkpGroupFilter : public hkpCollisionFilter {
    // Members
    int m_nextFreeSystemGroup; // offset 0x30, size 0x4
    unsigned int m_collisionLookupTable[32]; // offset 0x34, size 0x80
    class hkVector4 m_pad256[4]; // offset 0xC0, size 0x40
};
// total size: 0x1
class SimWorldSentry {};
// total size: 0x10
class HavokChunkHeader {
    // Members
    int tag; // offset 0x0, size 0x4
    int dataSize; // offset 0x4, size 0x4
    int collFilter; // offset 0x8, size 0x4
    class hkpShape * pBodyShape; // offset 0xC, size 0x4
};
// total size: 0x88
class hkBinaryPackfileReader : public hkPackfileReader {
    // Members
    class BinaryPackfileData * m_packfileData; // offset 0x18, size 0x4
    class hkPackfileHeader * m_header; // offset 0x1C, size 0x4
    class hkPackfileSectionHeader * m_sections; // offset 0x20, size 0x4
    class hkInplaceArray m_sectionData; // offset 0x24, size 0x4C
    int m_streamOffset; // offset 0x70, size 0x4
    class hkArray * m_loadedObjects; // offset 0x74, size 0x4
    class hkPackfileObjectUpdateTracker * m_tracker; // offset 0x78, size 0x4
    class hkArray m_classes; // offset 0x7C, size 0xC
};
// total size: 0x18
class hkPackfileReader : public hkReferencedObject {
    // Members
    class hkPointerMap m_updateFlagFromClass; // offset 0x8, size 0xC
    char * m_contentsVersion; // offset 0x14, size 0x4
};
// total size: 0xC
class hkPointerMap {
    // Members
    class hkPointerMapBase m_map; // offset 0x0, size 0xC
};
// total size: 0x4C
class BinaryPackfileData : public hkPackfileData {};
// total size: 0x4C
class hkPackfileData : public hkResource {
    // Members
    char * m_name; // offset 0x8, size 0x4
    int m_hasEverTrackedObjects; // offset 0xC, size 0x4
    class hkPointerMap m_trackedObjects; // offset 0x10, size 0xC
    class hkArray m_memory; // offset 0x1C, size 0xC
    class hkArray m_chunks; // offset 0x28, size 0xC
    class hkArray m_exports; // offset 0x34, size 0xC
    class hkArray m_imports; // offset 0x40, size 0xC
};
// total size: 0x8
class hkResource : public hkReferencedObject {};
// total size: 0xC
class hkArray {
    // Members
    void * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Chunk * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class Chunk {
    // Members
    void * pointer; // offset 0x0, size 0x4
    int numBytes; // offset 0x4, size 0x4
    enum HK_MEMORY_CLASS memClass; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Export * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class Export {
    // Members
    char * name; // offset 0x0, size 0x4
    void * data; // offset 0x4, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Import * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class Import {
    // Members
    char * name; // offset 0x0, size 0x4
    void * * location; // offset 0x4, size 0x4
};
// total size: 0x40
class hkPackfileHeader {
    // Members
    int m_magic[2]; // offset 0x0, size 0x8
    int m_userTag; // offset 0x8, size 0x4
    int m_fileVersion; // offset 0xC, size 0x4
    unsigned char m_layoutRules[4]; // offset 0x10, size 0x4
    int m_numSections; // offset 0x14, size 0x4
    int m_contentsSectionIndex; // offset 0x18, size 0x4
    int m_contentsSectionOffset; // offset 0x1C, size 0x4
    int m_contentsClassNameSectionIndex; // offset 0x20, size 0x4
    int m_contentsClassNameSectionOffset; // offset 0x24, size 0x4
    char m_contentsVersion[16]; // offset 0x28, size 0x10
    int m_pad[2]; // offset 0x38, size 0x8
};
// total size: 0x30
class hkPackfileSectionHeader {
    // Members
    char m_sectionTag[19]; // offset 0x0, size 0x13
    char m_nullByte; // offset 0x13, size 0x1
    int m_absoluteDataStart; // offset 0x14, size 0x4
    int m_localFixupsOffset; // offset 0x18, size 0x4
    int m_globalFixupsOffset; // offset 0x1C, size 0x4
    int m_virtualFixupsOffset; // offset 0x20, size 0x4
    int m_exportsOffset; // offset 0x24, size 0x4
    int m_importsOffset; // offset 0x28, size 0x4
    int m_endOffset; // offset 0x2C, size 0x4
};
// total size: 0x4C
class hkInplaceArray : public hkArray {
    // Members
    void * m_storage[16]; // offset 0xC, size 0x40
};
// total size: 0x38
class hkPackfileObjectUpdateTracker : public hkObjectUpdateTracker {
    // Members
    class hkPackfileData * m_packfileData; // offset 0x8, size 0x4
    class hkPointerMultiMap m_pointers; // offset 0xC, size 0x1C
    class hkPointerMap m_finish; // offset 0x28, size 0xC
    void * m_topLevelObject; // offset 0x34, size 0x4
};
// total size: 0x1C
class hkPointerMultiMap {
    // Members
    class hkArray m_valueChain; // offset 0x0, size 0xC
    class hkPointerMap m_indexMap; // offset 0xC, size 0xC
    int m_freeChainStart; // offset 0x18, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class Value * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x8
class Value {
    // Members
    void * value; // offset 0x0, size 0x4
    int next; // offset 0x4, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class hkClass * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x1B0
class TrianglePointCollector : public hkpAllCdPointCollector {
    // Members
    class hkArray m_triangles; // offset 0x1A0, size 0xC
};
// total size: 0x98
class HavokModule : public Module {};
// total size: 0x30
class hkpCdPoint {
    // Members
    class hkContactPoint m_contact; // offset 0x0, size 0x20
    class hkpCdBody * m_cdBodyA; // offset 0x20, size 0x4
    class hkpCdBody * m_cdBodyB; // offset 0x24, size 0x4
};
// total size: 0x60
class hkpTriangleShape : public hkpConvexShape {
    // Members
    unsigned short m_weldingInfo; // offset 0x14, size 0x2
    class hkEnum m_weldingType; // offset 0x16, size 0x1
    unsigned char m_isExtruded; // offset 0x17, size 0x1
    class hkVector4 m_vertexA; // offset 0x20, size 0x10
    class hkVector4 m_vertexB; // offset 0x30, size 0x10
    class hkVector4 m_vertexC; // offset 0x40, size 0x10
    class hkVector4 m_extrusion; // offset 0x50, size 0x10
};
// total size: 0xC
class hkSingletonInitNode {
    // Members
    class hkReferencedObject * (* m_func)(); // offset 0x0, size 0x4
    class hkSingletonInitNode * m_next; // offset 0x4, size 0x4
    void * * m_value; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class ScaledShape * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x20
class ScaledShape {
    // Members
    class hkpShape * m_shape; // offset 0x0, size 0x4
    class hkVector4 m_scale; // offset 0x10, size 0x10
};
// total size: 0x30
class hkStopwatch {
    // Members
    unsigned long long m_ticks_at_start; // offset 0x0, size 0x8
    unsigned long long m_ticks_total; // offset 0x8, size 0x8
    unsigned long long m_ticks_at_split; // offset 0x10, size 0x8
    unsigned long long m_split_total; // offset 0x18, size 0x8
    class hkBool m_running_flag; // offset 0x20, size 0x1
    int m_num_timings; // offset 0x24, size 0x4
    char * m_name; // offset 0x28, size 0x4
};
// total size: 0x0
class Dummy {};
// total size: 0x8
class hkpSingleShapeContainer : public hkpShapeContainer {
    // Members
    class hkpShape * m_childShape; // offset 0x4, size 0x4
};
// total size: 0x4
class hkpShapeContainer {};
// total size: 0x40
class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
    // Members
    class hkpSingleShapeContainer m_child; // offset 0x30, size 0x8
    int m_childSize; // offset 0x38, size 0x4
};
// total size: 0x30
class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
    // Members
    class hkpMoppCode * m_code; // offset 0x10, size 0x4
    unsigned char * m_moppData; // offset 0x14, size 0x4
    unsigned int m_moppDataSize; // offset 0x18, size 0x4
    class hkVector4 m_codeInfoCopy; // offset 0x20, size 0x10
};
// total size: 0x10
class hkpBvTreeShape : public hkpShape {};
// total size: 0x30
class hkpMoppCode : public hkReferencedObject {
    // Members
    class CodeInfo m_info; // offset 0x10, size 0x10
    class hkArray m_data; // offset 0x20, size 0xC
    class hkEnum m_buildType; // offset 0x2C, size 0x1
};
// total size: 0x10
class CodeInfo {
    // Members
    class hkVector4 m_offset; // offset 0x0, size 0x10
};
// total size: 0x1
class hkEnum {
    // Members
    signed char m_storage; // offset 0x0, size 0x1
};
// total size: 0xE0
class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
    // Members
    class hkArray m_meshstorage; // offset 0xC0, size 0xC
    class hkArray m_shapestorage; // offset 0xCC, size 0xC
};
// total size: 0xC0
class hkpExtendedMeshShape : public hkpShapeCollection {
    // Members
    int m_numBitsForSubpartIndex; // offset 0x18, size 0x4
    class hkVector4 m_scaling; // offset 0x20, size 0x10
    class hkVector4 m_aabbHalfExtents; // offset 0x30, size 0x10
    class hkVector4 m_aabbCenter; // offset 0x40, size 0x10
    class TrianglesSubpart * m_trianglesSubparts; // offset 0x50, size 0x4
    int m_numTrianglesSubparts; // offset 0x54, size 0x4
    class ShapesSubpart * m_shapesSubparts; // offset 0x58, size 0x4
    int m_numShapesSubparts; // offset 0x5C, size 0x4
    class hkArray m_weldingInfo; // offset 0x60, size 0xC
    class hkEnum m_weldingType; // offset 0x6C, size 0x1
    class TrianglesSubpart m_embeddedTrianglesSubpart; // offset 0x70, size 0x40
    float m_triangleRadius; // offset 0xB0, size 0x4
    int m_pad16[3]; // offset 0xB4, size 0xC
};
// total size: 0x18
class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
    // Members
    class hkBool m_disableWelding; // offset 0x14, size 0x1
};
// total size: 0x40
class TrianglesSubpart : public Subpart {
    // Members
    int m_numTriangleShapes; // offset 0x10, size 0x4
    float * m_vertexBase; // offset 0x14, size 0x4
    int m_vertexStriding; // offset 0x18, size 0x4
    int m_numVertices; // offset 0x1C, size 0x4
    class hkVector4 m_extrusion; // offset 0x20, size 0x10
    void * m_indexBase; // offset 0x30, size 0x4
    int m_indexStriding; // offset 0x34, size 0x4
    class hkEnum m_stridingType; // offset 0x38, size 0x1
    signed char m_flipAlternateTriangles; // offset 0x39, size 0x1
    int m_triangleOffset; // offset 0x3C, size 0x4
};
// total size: 0x10
class Subpart {
    // Members
    class hkEnum m_type; // offset 0x0, size 0x1
    class hkEnum m_materialIndexStridingType; // offset 0x1, size 0x1
    short m_materialStriding; // offset 0x2, size 0x2
    void * m_materialIndexBase; // offset 0x4, size 0x4
    unsigned short m_materialIndexStriding; // offset 0x8, size 0x2
    unsigned short m_numMaterials; // offset 0xA, size 0x2
    class hkpMeshMaterial * m_materialBase; // offset 0xC, size 0x4
};
// total size: 0x4
class hkpMeshMaterial {
    // Members
    unsigned int m_filterInfo; // offset 0x0, size 0x4
};
// total size: 0x40
class ShapesSubpart : public Subpart {
    // Members
    class hkpConvexShape * * m_childShapes; // offset 0x10, size 0x4
    int m_numChildShapes; // offset 0x14, size 0x4
    class hkBool m_offsetSet; // offset 0x18, size 0x1
    class hkBool m_rotationSet; // offset 0x19, size 0x1
    class hkQuaternion m_rotation; // offset 0x20, size 0x10
    class hkVector4 m_translation; // offset 0x30, size 0x10
};
// total size: 0xC
class hkArray {
    // Members
    unsigned short * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class MeshSubpartStorage * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x50
class MeshSubpartStorage : public hkReferencedObject {
    // Members
    class hkArray m_vertices; // offset 0x8, size 0xC
    class hkArray m_indices16; // offset 0x14, size 0xC
    class hkArray m_indices32; // offset 0x20, size 0xC
    class hkArray m_materialIndices; // offset 0x2C, size 0xC
    class hkArray m_materials; // offset 0x38, size 0xC
    class hkArray m_materialIndices16; // offset 0x44, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class ShapeSubpartStorage * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x38
class ShapeSubpartStorage : public hkReferencedObject {
    // Members
    class hkArray m_shapes; // offset 0x8, size 0xC
    class hkArray m_materialIndices; // offset 0x14, size 0xC
    class hkArray m_materials; // offset 0x20, size 0xC
    class hkArray m_materialIndices16; // offset 0x2C, size 0xC
};
// total size: 0xC
class hkArray {
    // Members
    class hkpConvexShape * * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class hkpMoppCompilerInput {
    // Members
    class hkVector4 m_absoluteFitToleranceOfAxisAlignedTriangles; // offset 0x0, size 0x10
    float m_relativeFitToleranceOfInternalNodes; // offset 0x10, size 0x4
    float m_absoluteFitToleranceOfInternalNodes; // offset 0x14, size 0x4
    float m_absoluteFitToleranceOfTriangles; // offset 0x18, size 0x4
    class hkBool m_useShapeKeys; // offset 0x1C, size 0x1
    class hkBool m_enablePrimitiveSplitting; // offset 0x1D, size 0x1
    class hkBool m_enableChunkSubdivision; // offset 0x1E, size 0x1
    class hkBool m_enableInterleavedBuilding; // offset 0x1F, size 0x1
    class hkBool m_cachePrimitiveExtents; // offset 0x20, size 0x1
};
// total size: 0x60
class hkpConvexVerticesShape : public hkpConvexShape {
    // Members
    class hkVector4 m_aabbHalfExtents; // offset 0x20, size 0x10
    class hkVector4 m_aabbCenter; // offset 0x30, size 0x10
    class hkArray m_rotatedVertices; // offset 0x40, size 0xC
    int m_numVertices; // offset 0x4C, size 0x4
    class hkArray m_planeEquations; // offset 0x50, size 0xC
    class hkpConvexVerticesConnectivity * m_connectivity; // offset 0x5C, size 0x4
};
// total size: 0xC
class hkArray {
    // Members
    class FourVectors * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x30
class FourVectors {
    // Members
    class hkVector4 m_x; // offset 0x0, size 0x10
    class hkVector4 m_y; // offset 0x10, size 0x10
    class hkVector4 m_z; // offset 0x20, size 0x10
};
// total size: 0x20
class hkpConvexVerticesConnectivity : public hkReferencedObject {
    // Members
    class hkArray m_vertexIndices; // offset 0x8, size 0xC
    class hkArray m_numVerticesPerFace; // offset 0x14, size 0xC
};
// total size: 0x70
class hkpListShape : public hkpShapeCollection {
    // Members
    class hkArray m_childInfo; // offset 0x18, size 0xC
    class hkVector4 m_aabbHalfExtents; // offset 0x30, size 0x10
    class hkVector4 m_aabbCenter; // offset 0x40, size 0x10
    unsigned int m_enabledChildren[8]; // offset 0x50, size 0x20
};
// total size: 0xC
class hkArray {
    // Members
    class ChildInfo * m_data; // offset 0x0, size 0x4
    int m_size; // offset 0x4, size 0x4
    int m_capacityAndFlags; // offset 0x8, size 0x4
};
// total size: 0x10
class ChildInfo {
    // Members
    class hkpShape * m_shape; // offset 0x0, size 0x4
    unsigned int m_collisionFilterInfo; // offset 0x4, size 0x4
    int m_shapeSize; // offset 0x8, size 0x4
    int m_numChildShapes; // offset 0xC, size 0x4
};
// total size: 0x60
class hkpConvexTransformShape : public hkpConvexShape {
    // Members
    class hkpSingleShapeContainer m_childShape; // offset 0x14, size 0x8
    int m_childShapeSize; // offset 0x1C, size 0x4
    class hkTransform m_transform; // offset 0x20, size 0x40
};
// total size: 0xB0
class hkpHingeConstraintData : public hkpConstraintData {
    // Members
    class Atoms m_atoms; // offset 0x10, size 0xA0
};
// total size: 0xA0
class Atoms {
    // Members
    class hkpSetLocalTransformsConstraintAtom m_transforms; // offset 0x0, size 0x90
    class hkp2dAngConstraintAtom m_2dAng; // offset 0x90, size 0x4
    class hkpBallSocketConstraintAtom m_ballSocket; // offset 0x94, size 0x2
};
// total size: 0x4
class hkp2dAngConstraintAtom : public hkpConstraintAtom {
    // Members
    unsigned char m_freeRotationAxis; // offset 0x2, size 0x1
};
// total size: 0x14
class GImageInfoBase : public GRefCountBase, public ChangeHandler {};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x4
class ChangeHandler {};
// total size: 0x18
class GFxImageCreateInfo {
    // Members
    enum InputType Type; // offset 0x0, size 0x4
    enum ResourceUse Use; // offset 0x4, size 0x4
    char * pExportName; // offset 0x8, size 0x4
    class @class __anon; // offset 0xC, size 0x4
    class GImage * pImage; // offset 0xC, size 0x4
    class GFxImageFileInfo * pFileInfo; // offset 0xC, size 0x4
    class GFxFileOpener * pFileOpener; // offset 0x10, size 0x4
    class GFxRenderConfig * pRenderConfig; // offset 0x14, size 0x4
};
enum InputType {
    Input_None = 0,
    Input_Image = 1,
    Input_File = 2,
};
enum ResourceUse {
    Use_None = 0,
    Use_Bitmap = 1,
    Use_Gradient = 2,
    Use_FontTexture = 3,
    Use_TypeCode_Mask = 255,
};
// total size: 0x4
class @class {
    // Members
    class GImage * pImage; // offset 0x0, size 0x4
    class GFxImageFileInfo * pFileInfo; // offset 0x0, size 0x4
};
// total size: 0x38
class GImage : public GRefCountBase, public GImageBase {};
// total size: 0x28
class GImageBase {
    // Members
    enum ImageFormat Format; // offset 0x0, size 0x4
    unsigned long Width; // offset 0x4, size 0x4
    unsigned long Height; // offset 0x8, size 0x4
    unsigned long Pitch; // offset 0xC, size 0x4
    unsigned char * pData; // offset 0x10, size 0x4
    unsigned int DataSize; // offset 0x14, size 0x4
    unsigned int MipMapCount; // offset 0x18, size 0x4
    class garray ColorMap; // offset 0x1C, size 0xC
};
enum ImageFormat {
    Image_None = 0,
    Image_ARGB_8888 = 1,
    Image_RGB_888 = 2,
    Image_L_8 = 8,
    Image_A_8 = 9,
    Image_DXT1 = 10,
    Image_DXT3 = 11,
    Image_DXT5 = 12,
    Image_P_8 = 100,
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GColor * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class GColor {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class Rgb32 Channels; // offset 0x0, size 0x4
    unsigned long Raw; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class Rgb32 Channels; // offset 0x0, size 0x4
    unsigned long Raw; // offset 0x0, size 0x4
};
// total size: 0x4
class Rgb32 {
    // Members
    unsigned char Alpha; // offset 0x0, size 0x1
    unsigned char Red; // offset 0x1, size 0x1
    unsigned char Green; // offset 0x2, size 0x1
    unsigned char Blue; // offset 0x3, size 0x1
};
// total size: 0x28
class GFxImageFileInfo : public GFxResourceFileInfo {
    // Members
    unsigned short TargetWidth; // offset 0x1C, size 0x2
    unsigned short TargetHeight; // offset 0x1E, size 0x2
    enum ResourceUse Use; // offset 0x20, size 0x4
    class GFxString ExportName; // offset 0x24, size 0x4
};
// total size: 0x1C
class GFxResourceFileInfo : public GRefCountBase {
    // Members
    enum FileFormatType Format; // offset 0x10, size 0x4
    class GFxExporterInfo * pExporterInfo; // offset 0x14, size 0x4
    class GFxString FileName; // offset 0x18, size 0x4
};
enum FileFormatType {
    File_Unopened = 0,
    File_Unknown = 1,
    File_SWF = 2,
    File_GFX = 3,
    File_JPEG = 10,
    File_PNG = 11,
    File_GIF = 12,
    File_TGA = 13,
    File_DDS = 14,
    File_HDR = 15,
    File_BMP = 16,
    File_DIB = 17,
    File_PFM = 18,
    File_TIFF = 19,
    File_NextAvail = 20,
    File_Original = 65535,
};
// total size: 0x14
class GFxExporterInfo {
    // Members
    enum FileFormatType Format; // offset 0x0, size 0x4
    char * pPrefix; // offset 0x4, size 0x4
    char * pSWFName; // offset 0x8, size 0x4
    unsigned short Version; // offset 0xC, size 0x2
    unsigned int ExportFlags; // offset 0x10, size 0x4
};
// total size: 0x4
class GFxString {
    // Members
    class DataDesc * pData; // offset 0x0, size 0x4
};
// total size: 0x10
class DataDesc {
    // Members
    unsigned long Size; // offset 0x0, size 0x4
    unsigned long BuffSize; // offset 0x4, size 0x4
    long RefCount; // offset 0x8, size 0x4
    char Data[1]; // offset 0xC, size 0x1
};
// total size: 0x2C
class GFxRenderConfig : public GFxState {
    // Members
    class GPtr pRenderer; // offset 0x14, size 0x4
    float MaxCurvePixelError; // offset 0x18, size 0x4
    unsigned long RenderFlags; // offset 0x1C, size 0x4
    float StrokerAAWidth; // offset 0x20, size 0x4
    unsigned long RendererCapBits; // offset 0x24, size 0x4
    unsigned long RendererVtxFmts; // offset 0x28, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GRenderer * pObject; // offset 0x0, size 0x4
};
// total size: 0x24
class GTextureWii : public GTextureImplNode {};
// total size: 0x24
class GTextureImplNode : public GTexture, public GRendererNode {
    // Members
    void * UserHandle; // offset 0x18, size 0x4
    bool HandlerArrayFlag; // offset 0x1C, size 0x1
    class @class __anon; // offset 0x20, size 0x4
    class ChangeHandler * pHandler; // offset 0x20, size 0x4
    class garray * pHandlerArray; // offset 0x20, size 0x4
};
// total size: 0x10
class GTexture : public GRefCountBase {};
// total size: 0x8
class GRendererNode {
    // Members
    class @class __anon; // offset 0x0, size 0x4
    class GRendererNode * pPrev; // offset 0x0, size 0x4
    class GRendererNode * pLast; // offset 0x0, size 0x4
    class @class __anon; // offset 0x4, size 0x4
    class GRendererNode * pNext; // offset 0x4, size 0x4
    class GRendererNode * pFirst; // offset 0x4, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class GRendererNode * pPrev; // offset 0x0, size 0x4
    class GRendererNode * pLast; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class GRendererNode * pNext; // offset 0x0, size 0x4
    class GRendererNode * pFirst; // offset 0x0, size 0x4
};
// total size: 0x4
class @class {
    // Members
    class ChangeHandler * pHandler; // offset 0x0, size 0x4
    class garray * pHandlerArray; // offset 0x0, size 0x4
};
// total size: 0xC
class garray_base {
    // Members
    class ChangeHandler * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GImageInfoBase * pObject; // offset 0x0, size 0x4
};
// total size: 0x24
class GImageInfo : public GImageInfoBaseImpl {
    // Members
    class GPtr pImage; // offset 0x18, size 0x4
    unsigned int TargetWidth; // offset 0x1C, size 0x4
    unsigned int TargetHeight; // offset 0x20, size 0x4
};
// total size: 0x18
class GImageInfoBaseImpl : public GImageInfoBase {
    // Members
    class GPtr pTexture; // offset 0x14, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GTexture * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GImage * pObject; // offset 0x0, size 0x4
};
// total size: 0x28
class GSFMemoryFile : public GFile {
    // Members
    char * filename; // offset 0x10, size 0x4
    void * filemem; // offset 0x14, size 0x4
    int fileIndex; // offset 0x18, size 0x4
    int fileSize; // offset 0x1C, size 0x4
    int headerSize; // offset 0x20, size 0x4
    bool valid : 1; // offset 0x24, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x24, size 0x4, bit offset 1
};
// total size: 0x10
class GFile : public GRefCountBase, public GFileConstants {};
// total size: 0x1
class GFileConstants {};
// total size: 0x4
class MemCB_ScaleformAllocMemory : public MemCallbacks {};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontCacheManager * pObject; // offset 0x0, size 0x4
};
// total size: 0x4C
class GFxFontCacheManager : public GFxState {
    // Members
    class TextureConfig CacheTextureConfig; // offset 0x14, size 0x1C
    bool DynamicCacheEnabled; // offset 0x30, size 0x1
    float MaxRasterScale; // offset 0x34, size 0x4
    unsigned int SteadyCount; // offset 0x38, size 0x4
    unsigned int MaxVectorCacheSize; // offset 0x3C, size 0x4
    float FauxItalicAngle; // offset 0x40, size 0x4
    float FauxBoldRatio; // offset 0x44, size 0x4
    class GFxFontCacheManagerImpl * pCache; // offset 0x48, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxFontLib * pObject; // offset 0x0, size 0x4
};
// total size: 0x18
class GFxFontLib : public GFxState {
    // Members
    class GFxFontLibImpl * pImpl; // offset 0x14, size 0x4
};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class ScaleformListener * value; // offset 0x8, size 0x4
};
// total size: 0x4
class ScaleformListener {};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class ViewNode * value; // offset 0x8, size 0x4
};
// total size: 0xB0
class ViewNode {
    // Members
    class GPtr pMovieUpd; // offset 0x0, size 0x4
    class ScaleformOGAsset * curOGAsset; // offset 0x4, size 0x4
    class PoolList * pendingEvents; // offset 0x8, size 0x4
    class PoolList pendingEventsList; // offset 0xC, size 0x1C
    class PoolList sfCallbacks; // offset 0x28, size 0x1C
    class StaticStackAllocator memAllocator; // offset 0x44, size 0xC
    float health; // offset 0x50, size 0x4
    int top; // offset 0x54, size 0x4
    int left; // offset 0x58, size 0x4
    int width; // offset 0x5C, size 0x4
    int height; // offset 0x60, size 0x4
    float stickPos[8]; // offset 0x64, size 0x20
    float mouseArray[8]; // offset 0x84, size 0x20
    bool destroyed : 1; // offset 0xA4, size 0x1, bit offset 0
    bool refreshViewport : 1; // offset 0xA4, size 0x1, bit offset 1
    bool refreshNextFrame : 1; // offset 0xA4, size 0x1, bit offset 2
    bool renderMovie : 1; // offset 0xA4, size 0x1, bit offset 3
    bool checkHealth : 1; // offset 0xA4, size 0x1, bit offset 4
    bool healthChanged : 1; // offset 0xA4, size 0x1, bit offset 5
    bool checkStick : 1; // offset 0xA4, size 0x1, bit offset 6
    bool checkMultiplayerIRMouse : 1; // offset 0xA4, size 0x1, bit offset 7
    bool paused : 1; // offset 0xA5, size 0x1, bit offset 0
    bool pauseCaughtUp : 1; // offset 0xA5, size 0x1, bit offset 1
    bool loaded : 1; // offset 0xA5, size 0x1, bit offset 2
    bool cleared : 1; // offset 0xA5, size 0x1, bit offset 3
    bool persist : 1; // offset 0xA5, size 0x1, bit offset 4
    bool loadPage : 1; // offset 0xA5, size 0x1, bit offset 5
    unsigned int viewnum : 18; // offset 0xA4, size 0x4, bit offset 14
    unsigned int lastTick; // offset 0xA8, size 0x4
    unsigned int ticks; // offset 0xAC, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieView * pObject; // offset 0x0, size 0x4
};
// total size: 0x14
class GFxMovieView : public GFxMovie, public GFxSharedState {};
// total size: 0x10
class GFxMovie : public GRefCountBase {};
// total size: 0x1C
class PoolList : public PoolListBase {};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class TextureNode * value; // offset 0x8, size 0x4
};
// total size: 0x20
class TextureNode {
    // Members
    class Texture * texPtr; // offset 0x0, size 0x4
    class EntityHandle * texHandle; // offset 0x4, size 0x4
    unsigned long long uid; // offset 0x8, size 0x8
    char * pFilename; // offset 0x10, size 0x4
    int width; // offset 0x14, size 0x4
    int height; // offset 0x18, size 0x4
    bool loaded : 1; // offset 0x1C, size 0x1, bit offset 0
    int refCount : 31; // offset 0x1C, size 0x4, bit offset 1
};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class MovieNode * value; // offset 0x8, size 0x4
};
// total size: 0x18
class MovieNode {
    // Members
    class ScaleformBlobEntity * curNGEntity; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    class GFxMovieDef * data; // offset 0x8, size 0x4
    char * filename; // offset 0xC, size 0x4
    char assetFont; // offset 0x10, size 0x1
    bool loaded : 1; // offset 0x11, size 0x1, bit offset 0
    unsigned int pad : 31; // offset 0x14, size 0x4, bit offset 0
};
// total size: 0x10
class GFxMovieDef : public GFxResource, public GFxSharedState {};
// total size: 0xC
class GFxResource : public GNewOverrideBase {
    // Members
    class GAtomicInt RefCount; // offset 0x0, size 0x4
    class GFxResourceLibBase * pLib; // offset 0x4, size 0x4
};
// total size: 0x4
class GAtomicInt : public GAtomicValueBase {};
// total size: 0x4
class GAtomicValueBase {
    // Members
    long Value; // offset 0x0, size 0x4
};
enum eSFPlayerState {
    eState_Stopped = 0,
    eState_Started = 1,
    eState_Unloading = 2,
};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class SFEventNode * value; // offset 0x8, size 0x4
};
// total size: 0x10
class SFEventNode {
    // Members
    enum eSFEventType e; // offset 0x0, size 0x4
    class GFxValue * arg; // offset 0x4, size 0x4
    unsigned int numArgs; // offset 0x8, size 0x4
    char * str; // offset 0xC, size 0x4
};
// total size: 0x10
class GFxValue {
    // Members
    enum ValueType Type; // offset 0x0, size 0x4
    class ValueUnion Value; // offset 0x8, size 0x8
};
enum ValueType {
    VT_Undefined = 0,
    VT_Null = 1,
    VT_Boolean = 2,
    VT_Number = 3,
    VT_String = 4,
    VT_StringW = 5,
    VT_ConvertBit = 16,
    VT_ConvertBoolean = 18,
    VT_ConvertNumber = 19,
    VT_ConvertString = 20,
    VT_ConvertStringW = 21,
};
// total size: 0x8
class ValueUnion {
    // Members
    double NValue; // offset 0x0, size 0x8
    bool BValue; // offset 0x0, size 0x1
    char * pString; // offset 0x0, size 0x4
    wchar_t * pStringW; // offset 0x0, size 0x4
};
// total size: 0x4
class Iterator : public ConstIterator {};
// total size: 0x4
class ConstIterator {
    // Members
    class NodeHeader * node; // offset 0x0, size 0x4
};
// total size: 0xC
class NodeType : public NodeHeader {
    // Members
    class SFCallbackNode * value; // offset 0x8, size 0x4
};
// total size: 0x8
class SFCallbackNode {
    // Members
    char * pcommand; // offset 0x0, size 0x4
    char * parg; // offset 0x4, size 0x4
};
// total size: 0x14
class GFxMouseEvent : public GFxEvent {
    // Members
    int x; // offset 0x4, size 0x4
    int y; // offset 0x8, size 0x4
    float ScrollDelta; // offset 0xC, size 0x4
    unsigned int Button; // offset 0x10, size 0x4
};
// total size: 0x4
class GFxEvent {
    // Members
    enum EventType Type; // offset 0x0, size 0x4
};
enum EventType {
    None = 0,
    MouseMove = 1,
    MouseDown = 2,
    MouseUp = 3,
    MouseWheel = 4,
    KeyDown = 5,
    KeyUp = 6,
    SceneResize = 7,
    SetFocus = 8,
    KillFocus = 9,
    DoShowMouse = 10,
    DoHideMouse = 11,
    DoSetMouseCursor = 12,
    CharEvent = 13,
};
// total size: 0x10
class GFxWStringBuffer {
    // Members
    wchar_t * pText; // offset 0x0, size 0x4
    unsigned long Length; // offset 0x4, size 0x4
    class ReserveHeader Reserved; // offset 0x8, size 0x8
};
// total size: 0x8
class ReserveHeader {
    // Members
    wchar_t * pBuffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
};
// total size: 0xB0
class SFRenderModule : public Module, public ScaleformListener {
    // Members
    class ScreenRenderTarget * target; // offset 0x9C, size 0x4
    class ViewNode * pMovie; // offset 0xA0, size 0x4
    class Coordinator * coordinator; // offset 0xA4, size 0x4
    bool firstFrame; // offset 0xA8, size 0x1
    enum eSFPlayerState curState; // offset 0xAC, size 0x4
};
// total size: 0xB4
class SFUpdateModule : public Module, public ScaleformListener {
    // Members
    class Coordinator * coordinator; // offset 0x9C, size 0x4
    class CustomCommandHandler * handler; // offset 0xA0, size 0x4
    class ViewNode * pMovie; // offset 0xA4, size 0x4
    enum eSFPlayerState curState; // offset 0xA8, size 0x4
    bool firstFrame; // offset 0xAC, size 0x1
    bool stopped; // offset 0xAD, size 0x1
    char levelName[5]; // offset 0xAE, size 0x5
};
enum EventType {
    Event_DataChange = 0,
    Event_DataLost = 1,
    Event_RendererReleased = 2,
};
// total size: 0x8
class CachedData {
    // Members
    class GRenderer * pRenderer; // offset 0x0, size 0x4
    void * hData; // offset 0x4, size 0x4
};
// total size: 0x8
class CacheProvider {
    // Members
    class CachedData * pData; // offset 0x0, size 0x4
    bool DiscardSharedData; // offset 0x4, size 0x1
};
// total size: 0x4
class EventHandler {};
// total size: 0x10
class BlendModeDesc {
    // Members
    enum _GXBlendMode BlendOp; // offset 0x0, size 0x4
    enum _GXBlendFactor SrcFactor; // offset 0x4, size 0x4
    enum _GXBlendFactor DestFactor; // offset 0x8, size 0x4
    enum _GXLogicOp BlendLogicalOp; // offset 0xC, size 0x4
};
enum _GXBlendMode {
    GX_BM_NONE = 0,
    GX_BM_BLEND = 1,
    GX_BM_LOGIC = 2,
    GX_BM_SUBTRACT = 3,
    GX_MAX_BLENDMODE = 4,
};
enum _GXLogicOp {
    GX_LO_CLEAR = 0,
    GX_LO_AND = 1,
    GX_LO_REVAND = 2,
    GX_LO_COPY = 3,
    GX_LO_INVAND = 4,
    GX_LO_NOOP = 5,
    GX_LO_XOR = 6,
    GX_LO_OR = 7,
    GX_LO_NOR = 8,
    GX_LO_EQUIV = 9,
    GX_LO_INV = 10,
    GX_LO_REVOR = 11,
    GX_LO_INVCOPY = 12,
    GX_LO_INVOR = 13,
    GX_LO_NAND = 14,
    GX_LO_SET = 15,
};
// total size: 0x88
class GTextureWiiImpl : public GTextureWii {
    // Members
    class GRendererWiiImpl * pRenderer; // offset 0x24, size 0x4
    int Width; // offset 0x28, size 0x4
    int Height; // offset 0x2C, size 0x4
    void * pTexData; // offset 0x30, size 0x4
    void * pAlphaTexData; // offset 0x34, size 0x4
    int TexWidth; // offset 0x38, size 0x4
    int TexHeight; // offset 0x3C, size 0x4
    int TexSize; // offset 0x40, size 0x4
    class _GXTexObj Tex; // offset 0x44, size 0x20
    class _GXTexObj AlphaTex; // offset 0x64, size 0x20
    bool IsAlpha; // offset 0x84, size 0x1
    bool IsTransparent; // offset 0x85, size 0x1
};
// total size: 0x300
class GRendererWiiImpl : public GRendererWii {
    // Members
    bool EnableAntialias; // offset 0x10, size 0x1
    bool ModeSet; // offset 0x11, size 0x1
    int RenderMode; // offset 0x14, size 0x4
    class GViewport Viewport; // offset 0x18, size 0x34
    class GRendererNode Textures; // offset 0x4C, size 0x8
    class GMatrix2D UserMatrix; // offset 0x54, size 0x18
    class GMatrix2D CurrentMatrix; // offset 0x6C, size 0x18
    class Cxform CurrentCxform; // offset 0x84, size 0x20
    class GMatrix2D ViewportMatrix; // offset 0xA4, size 0x18
    class GMatrix2D ViewportMatrix2; // offset 0xBC, size 0x18
    class Stats RenderStats; // offset 0xD4, size 0xC
    void * pIndexData; // offset 0xE0, size 0x4
    void * pVertexData; // offset 0xE4, size 0x4
    int IndexBufferSize; // offset 0xE8, size 0x4
    int VertexBufferSize; // offset 0xEC, size 0x4
    enum VertexFormat VertexFmt; // offset 0xF0, size 0x4
    int IndexFmt; // offset 0xF4, size 0x4
    int StencilCounter; // offset 0xF8, size 0x4
    int DrawingMasks; // offset 0xFC, size 0x4
    enum BlendType BlendMode; // offset 0x100, size 0x4
    class garray BlendModeStack; // offset 0x104, size 0xC
    class CacheNode CacheList; // offset 0x110, size 0x1
    class _GXRenderModeObj * pRmode; // offset 0x114, size 0x4
    unsigned char * AlphaBuffer; // offset 0x118, size 0x4
    class _GXTexObj AlphaTexture; // offset 0x11C, size 0x20
    unsigned int AlphaTexWidth; // offset 0x13C, size 0x4
    unsigned int AlphaTexHeight; // offset 0x140, size 0x4
    class GFxFillStyle CurrentStyles[3]; // offset 0x144, size 0x1BC
};
// total size: 0x34
class GViewport {
    // Members
    int BufferWidth; // offset 0x0, size 0x4
    int BufferHeight; // offset 0x4, size 0x4
    int Left; // offset 0x8, size 0x4
    int Top; // offset 0xC, size 0x4
    int Width; // offset 0x10, size 0x4
    int Height; // offset 0x14, size 0x4
    int ScissorLeft; // offset 0x18, size 0x4
    int ScissorTop; // offset 0x1C, size 0x4
    int ScissorWidth; // offset 0x20, size 0x4
    int ScissorHeight; // offset 0x24, size 0x4
    float Scale; // offset 0x28, size 0x4
    float AspectRatio; // offset 0x2C, size 0x4
    unsigned int Flags; // offset 0x30, size 0x4
};
// total size: 0x20
class Cxform {
    // Members
    float M_[4][2]; // offset 0x0, size 0x20
};
// total size: 0xC
class Stats {
    // Members
    unsigned int Triangles; // offset 0x0, size 0x4
    unsigned int Lines; // offset 0x4, size 0x4
    unsigned int Primitives; // offset 0x8, size 0x4
};
enum VertexFormat {
    Vertex_None = 0,
    Vertex_XY16i = 1,
    Vertex_XY32f = 2,
    Vertex_XY16iC32 = 3,
    Vertex_XY16iCF32 = 4,
    Vertex_XYUVUV32fCF32 = 5,
    Vertex_XY32fCF32 = 6,
    Vertex_XYUV32fCF32 = 7,
};
enum BlendType {
    Blend_None = 0,
    Blend_Normal = 1,
    Blend_Layer = 2,
    Blend_Multiply = 3,
    Blend_Screen = 4,
    Blend_Lighten = 5,
    Blend_Darken = 6,
    Blend_Difference = 7,
    Blend_Add = 8,
    Blend_Subtract = 9,
    Blend_Invert = 10,
    Blend_Alpha = 11,
    Blend_Erase = 12,
    Blend_Overlay = 13,
    Blend_HardLight = 14,
};
// total size: 0xC
class garray_base {
    // Members
    enum BlendType * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x1
class CacheNode : public GNewOverrideBase {};
// total size: 0x94
class GFxFillStyle {
    // Members
    enum FillMode Mode; // offset 0x0, size 0x4
    enum GouraudFillType GouraudType; // offset 0x4, size 0x4
    class GColor Color; // offset 0x8, size 0x4
    class FillTexture Fill; // offset 0xC, size 0x24
    class FillTexture Fill2; // offset 0x30, size 0x24
    class Cxform BitmapColorTransform; // offset 0x54, size 0x20
    bool HasNonzeroAdditiveCxform; // offset 0x74, size 0x1
    class GMatrix2D BitmapMatrix; // offset 0x78, size 0x18
    bool HasNonzeroBitmapAdditiveColor; // offset 0x90, size 0x1
};
enum FillMode {
    FM_None = 0,
    FM_Color = 1,
    FM_Bitmap = 2,
    FM_Gouraud = 3,
    FM_BitmapText = 4,
};
enum GouraudFillType {
    GFill_Color = 0,
    GFill_1Texture = 1,
    GFill_1TextureColor = 2,
    GFill_2Texture = 3,
    GFill_2TextureColor = 4,
    GFill_3Texture = 5,
};
// total size: 0x24
class FillTexture {
    // Members
    class GTexture * pTexture; // offset 0x0, size 0x4
    class GMatrix2D TextureMatrix; // offset 0x4, size 0x18
    enum BitmapWrapMode WrapMode; // offset 0x1C, size 0x4
    enum BitmapSampleMode SampleMode; // offset 0x20, size 0x4
};
enum BitmapWrapMode {
    Wrap_Repeat = 0,
    Wrap_Clamp = 1,
};
enum BitmapSampleMode {
    Sample_Point = 0,
    Sample_Linear = 1,
};
enum _GXTexFmt {
    GX_TF_I4 = 0,
    GX_TF_I8 = 1,
    GX_TF_IA4 = 2,
    GX_TF_IA8 = 3,
    GX_TF_RGB565 = 4,
    GX_TF_RGB5A3 = 5,
    GX_TF_RGBA8 = 6,
    GX_TF_CMPR = 14,
    GX_CTF_R4 = 32,
    GX_CTF_RA4 = 34,
    GX_CTF_RA8 = 35,
    GX_CTF_YUVA8 = 38,
    GX_CTF_A8 = 39,
    GX_CTF_R8 = 40,
    GX_CTF_G8 = 41,
    GX_CTF_B8 = 42,
    GX_CTF_RG8 = 43,
    GX_CTF_GB8 = 44,
    GX_TF_Z8 = 17,
    GX_TF_Z16 = 19,
    GX_TF_Z24X8 = 22,
    GX_CTF_Z4 = 48,
    GX_CTF_Z8M = 57,
    GX_CTF_Z8L = 58,
    GX_CTF_Z16L = 60,
    GX_TF_A8 = 39,
};
// total size: 0x18
class UpdateRect {
    // Members
    class GPoint dest; // offset 0x0, size 0x8
    class GRect src; // offset 0x8, size 0x10
};
// total size: 0x8
class GPoint {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
};
// total size: 0x10
class GRect {
    // Members
    int Left; // offset 0x0, size 0x4
    int Top; // offset 0x4, size 0x4
    int Right; // offset 0x8, size 0x4
    int Bottom; // offset 0xC, size 0x4
};
// total size: 0x98
class CoreTaskingModule : public Module {};
// total size: 0x8
class CoreJob : public Job {
    // Members
    void (* processCB)(class CoreJobProcessor * proc, class CoreQueueRef * qr, class CoreJob * job); // offset 0x0, size 0x4
    enum JobType type; // offset 0x4, size 0x4
};
// total size: 0x1
class Job {};
// total size: 0xB8
class CoreJobProcessor : public JobProcessor {
    // Members
    class PoolArray slots; // offset 0x4, size 0xC
    class CriticalSection jobAccessCS; // offset 0x10, size 0x18
    class SyncEvent addJobEvent; // offset 0x28, size 0x24
    class SyncEvent completeJobEvent; // offset 0x4C, size 0x24
    int nextQueueIndex; // offset 0x70, size 0x4
    class PriorityLevel levels[4]; // offset 0x74, size 0x40
    bool done; // offset 0xB4, size 0x1
};
// total size: 0x4
class JobProcessor {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Slot * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x4C
class Slot : public Runnable {
    // Members
    class CoreJobProcessor * owner; // offset 0x4, size 0x4
    int slotIndex; // offset 0x8, size 0x4
    class Thread thread; // offset 0xC, size 0x40
};
// total size: 0x10
class PriorityLevel {
    // Members
    class PoolArray queues; // offset 0x0, size 0xC
    int nextQueueIndex; // offset 0xC, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class CoreQueueRef * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x28
class CoreQueueRef {
    // Members
    class CoreJobQueue * queue; // offset 0x0, size 0x4
    int frequency; // offset 0x4, size 0x4
    int iter; // offset 0x8, size 0x4
    unsigned int jobNumber; // offset 0xC, size 0x4
    unsigned int completeNumber; // offset 0x10, size 0x4
    class CoreJobPendingRef * pendingJobs; // offset 0x14, size 0x4
    int pendingJobsSize; // offset 0x18, size 0x4
    class CoreJobBarrier * barrier; // offset 0x1C, size 0x4
    class CoreJobCompleteFence * completeFenceHead; // offset 0x20, size 0x4
    class CoreJobCompleteFence * completeFenceTail; // offset 0x24, size 0x4
};
// total size: 0x14
class CoreJobQueue : public JobQueue {
    // Members
    class CoreJobProcessor * owner; // offset 0x0, size 0x4
    class CircularQueue queue; // offset 0x4, size 0x10
};
// total size: 0x1
class JobQueue {};
// total size: 0x10
class CircularQueue {
    // Members
    unsigned int start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int mask; // offset 0x8, size 0x4
    class CoreJob * * pool; // offset 0xC, size 0x4
};
// total size: 0x8
class CoreJobPendingRef {
    // Members
    unsigned int number; // offset 0x0, size 0x4
    class CoreJob * job; // offset 0x4, size 0x4
};
// total size: 0x8
class CoreJobBarrier : public CoreJob {};
// total size: 0x3C
class CoreJobCompleteFence : public CoreJob {
    // Members
    bool passed; // offset 0x8, size 0x1
    class SyncEvent event; // offset 0xC, size 0x24
    class CoreJobCompleteFence * prev; // offset 0x30, size 0x4
    class CoreJobCompleteFence * next; // offset 0x34, size 0x4
    unsigned int completeNumber; // offset 0x38, size 0x4
};
enum JobType {
    JOB_TYPE_EXECUTABLE = 0,
    JOB_TYPE_START_FENCE = 1,
    JOB_TYPE_COMPLETE_FENCE = 2,
    JOB_TYPE_COMPLETE_BARRIER = 3,
    JOB_TYPE_SIGNAL_BARRIER = 4,
    MAX_JOB_TYPE = 5,
};
enum ThreadPriority {
    TP_INVALID = 4294967295,
    TP_IDLE = 0,
    TP_LOWEST = 1,
    TP_BELOW_NORMAL = 2,
    TP_NORMAL = 3,
    TP_ABOVE_NORMAL = 4,
    TP_HIGHEST = 5,
    TP_REALTIME = 6,
    MAX_TP = 7,
};
// total size: 0x98
class GameWindowModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class Module * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x20
class EventBinding {
    // Members
    class PoolArray modules; // offset 0x0, size 0xC
    class PoolArray moduleHookLists; // offset 0xC, size 0xC
    class NodeList tailHookList; // offset 0x18, size 0x8
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class NodeList * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class NodeList : public NodeListBase {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ModuleReference * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x1C
class ModuleReference {
    // Members
    class Module * id; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
    class EventSet events; // offset 0x8, size 0x10
    int relationIndex; // offset 0x18, size 0x4
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ModuleRelationList * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class ModuleRelationList {
    // Members
    int index; // offset 0x0, size 0x4
    class ModuleRelationNode * relations; // offset 0x4, size 0x4
};
// total size: 0x8
class ModuleRelationNode {
    // Members
    int index; // offset 0x0, size 0x4
    class ModuleRelationNode * next; // offset 0x4, size 0x4
};
// total size: 0x14
class StackPoolAllocator : public PoolAllocator {};
// total size: 0x14
class PoolAllocator : public PoolAllocatorBase {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    int * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0xC
class BlockHeader {
    // Members
    int dataOffset; // offset 0x0, size 0x4
    int sizeSender; // offset 0x4, size 0x4
    int sizeActual; // offset 0x8, size 0x4
};
enum WiiDVDError {
    WiiDVD_Ready = 0,
    WiiDVD_NoDisk = 1,
    WiiDVD_WrongDisk = 2,
    WiiDVD_RetryError = 3,
    WiiDVD_Busy = 4,
};
// total size: 0x98
class HomeMenuModule : public Module {
    // Members
    bool isAllowed; // offset 0x95, size 0x1
};
// total size: 0x40
class HBMDataInfo {
    // Members
    void * layoutBuf; // offset 0x0, size 0x4
    void * spkSeBuf; // offset 0x4, size 0x4
    void * msgBuf; // offset 0x8, size 0x4
    void * configBuf; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    int (* sound_callback)(int evt, int num); // offset 0x14, size 0x4
    int backFlag; // offset 0x18, size 0x4
    int region; // offset 0x1C, size 0x4
    int cursor; // offset 0x20, size 0x4
    int messageFlag; // offset 0x24, size 0x4
    unsigned long configBufSize; // offset 0x28, size 0x4
    unsigned long memSize; // offset 0x2C, size 0x4
    float frameDelta; // offset 0x30, size 0x4
    class Vec2 adjust; // offset 0x34, size 0x8
    class MEMAllocator * pAllocator; // offset 0x3C, size 0x4
};
// total size: 0x10
class MEMAllocator {
    // Members
    class MEMAllocatorFunc * pFunc; // offset 0x0, size 0x4
    void * pHeap; // offset 0x4, size 0x4
    unsigned long heapParam1; // offset 0x8, size 0x4
    unsigned long heapParam2; // offset 0xC, size 0x4
};
// total size: 0x8
class MEMAllocatorFunc {
    // Members
    void * (* pfAlloc)(class MEMAllocator * pAllocator, unsigned long size); // offset 0x0, size 0x4
    void (* pfFree)(class MEMAllocator * pAllocator, void * memBlock); // offset 0x4, size 0x4
};
// total size: 0x40
class HBMControllerData {
    // Members
    class HBMKPadData wiiCon[4]; // offset 0x0, size 0x40
};
// total size: 0x10
class HBMKPadData {
    // Members
    class KPADStatus * kpad; // offset 0x0, size 0x4
    class Vec2 pos; // offset 0x4, size 0x8
    unsigned long use_devtype; // offset 0xC, size 0x4
};
// total size: 0x98
class TaskingModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class JobProcessor * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class TimeModule : public Module {};
// total size: 0xB4
class TestSuite : public Module {
    // Members
    class PoolList testList; // offset 0x98, size 0x1C
};
// total size: 0x18
class FontAssetSchema : public Schema {};
// total size: 0x18
class FontSchema : public Schema {};
// total size: 0x2C
class FontAssetBlobEntity : public BlobEntity {
    // Members
    class Glyph * glyph; // offset 0x10, size 0x4
    class GlyphUV * glyphUV; // offset 0x14, size 0x4
    unsigned int glyphSize; // offset 0x18, size 0x4
    unsigned short * glyphMap; // offset 0x1C, size 0x4
    int glyphMapSize; // offset 0x20, size 0x4
    float fontHeight; // offset 0x24, size 0x4
    float maxAscent; // offset 0x28, size 0x4
};
// total size: 0xC
class Glyph {
    // Members
    short offset; // offset 0x0, size 0x2
    short width; // offset 0x2, size 0x2
    short advance; // offset 0x4, size 0x2
    short height; // offset 0x6, size 0x2
    short base; // offset 0x8, size 0x2
    short pad; // offset 0xA, size 0x2
};
// total size: 0x10
class GlyphUV {
    // Members
    float u0; // offset 0x0, size 0x4
    float v0; // offset 0x4, size 0x4
    float u1; // offset 0x8, size 0x4
    float v1; // offset 0xC, size 0x4
};
// total size: 0xBC
class FontModule : public Module {
    // Members
    unsigned short paramColorMul; // offset 0x96, size 0x2
    unsigned short paramSampDiffuse; // offset 0x98, size 0x2
    class RenderMode renderMode; // offset 0x9C, size 0x1C
    class EntityHandle * immediatePrototypeHandle; // offset 0xB8, size 0x4
};
// total size: 0x20
class Line {
    // Members
    char * first; // offset 0x0, size 0x4
    char * last; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float xScale; // offset 0x10, size 0x4
    float yScale; // offset 0x14, size 0x4
    float xSpace; // offset 0x18, size 0x4
    float slant; // offset 0x1C, size 0x4
};
// total size: 0x24
class TextureFont : public Font {};
// total size: 0x34
class Batch {
    // Members
    class Rect clipRect; // offset 0x0, size 0x10
    class ColorF color; // offset 0x10, size 0x10
    unsigned char brightness; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    float z; // offset 0x24, size 0x4
    int charTotal; // offset 0x28, size 0x4
    class Line * lines; // offset 0x2C, size 0x4
    int linesSize; // offset 0x30, size 0x4
};
// total size: 0x18
class StringsAssetSchema : public Schema {};
// total size: 0x18
class StringsAssetBlobEntity : public BlobEntity {
    // Members
    class StringsBlobAsset * asset; // offset 0x10, size 0x4
    int assetSize; // offset 0x14, size 0x4
};
// total size: 0x1
class StringsBlobAsset : public Asset {
    // Members
    unsigned char data[1]; // offset 0x0, size 0x1
};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class RelativeNode * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x8
class RelativeNode {
    // Members
    int depth; // offset 0x0, size 0x4
    int index; // offset 0x4, size 0x4
};
// total size: 0x98
class UtilModule : public Module {};
// total size: 0x98
class CinematicModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class ICinematicElement * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class EntityModule : public Module {};
// total size: 0x98
class WorldModule : public Module {};
// total size: 0xC
class PoolArray {
    // Members
    int size; // offset 0x0, size 0x4
    class EntityHandleBase * * pool; // offset 0x4, size 0x4
    int poolSize; // offset 0x8, size 0x4
};
// total size: 0x98
class GlobalsModule : public Module {};
// total size: 0x9C4
class RandomTwist {
    // Members
    class SeedType seed; // offset 0x0, size 0x9C4
};
// total size: 0x9C4
class SeedType {
    // Members
    int index; // offset 0x0, size 0x4
    unsigned int v[624]; // offset 0x4, size 0x9C0
};
enum DisplayStatus {
    DisplayStatus_Ok = 0,
    DisplayStatus_NoModeSet = 1,
    DisplayStatus_Unavailable = 2,
    DisplayStatus_NeedsReset = 3,
};
enum SubmitMaskMode {
    Mask_Clear = 0,
    Mask_Increment = 1,
    Mask_Decrement = 2,
};
// total size: 0x24
class BitmapDesc {
    // Members
    class GRect Coords; // offset 0x0, size 0x10
    class GRect TextureCoords; // offset 0x10, size 0x10
    class GColor Color; // offset 0x20, size 0x4
};
// total size: 0x10
class GRect {
    // Members
    float Left; // offset 0x0, size 0x4
    float Top; // offset 0x4, size 0x4
    float Right; // offset 0x8, size 0x4
    float Bottom; // offset 0xC, size 0x4
};
enum _GXVtxFmt {
    GX_VTXFMT0 = 0,
    GX_VTXFMT1 = 1,
    GX_VTXFMT2 = 2,
    GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4,
    GX_VTXFMT5 = 5,
    GX_VTXFMT6 = 6,
    GX_VTXFMT7 = 7,
    GX_MAX_VTXFMT = 8,
};
// total size: 0x40
class GAllocatorStats {
    // Members
    unsigned int AllocCount; // offset 0x0, size 0x4
    unsigned int FreeCount; // offset 0x4, size 0x4
    unsigned int ReallocCount; // offset 0x8, size 0x4
    unsigned long long AllocSize; // offset 0x10, size 0x8
    unsigned long long FreeSize; // offset 0x18, size 0x8
    unsigned long long AllocSizeUsed; // offset 0x20, size 0x8
    unsigned long long FreeSizeUsed; // offset 0x28, size 0x8
    unsigned long long StaticAllocSize; // offset 0x30, size 0x8
    unsigned long long StaticAllocSizeUsed; // offset 0x38, size 0x8
};
// total size: 0x3C
class GTextureMemoryFile : public GSFMemoryFile {
    // Members
    unsigned char headerInfo[18]; // offset 0x28, size 0x12
};
