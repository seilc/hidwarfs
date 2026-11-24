/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Configs\ConfigMgr.cpp
*/
static class ConfigManager * configManager; // size: 0x4, address: 0x807FDBC0
static char * defaultSectionName; // size: 0x4, address: 0x80706CB0
static class MemCB_INIData memCB_INIData; // size: 0x4, address: 0x807FDBC4
static class MemCB_HingeConfig memCB_HingeConfig; // size: 0x4, address: 0x807FDBC8
// Range: 0x8024EA58 -> 0x8024F534
static void __sinit_\WAD00_cpp() {
    // References
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World18UnknownThingSchema;
    // -> class UnknownThingSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World17BasicObjectSchema;
    // -> class BasicObjectSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19GenericShaderSchema;
    // -> class GenericShaderSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19ComboAnimBlobSchema;
    // -> class ComboAnimBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World18SkeletonBlobSchema;
    // -> class SkeletonBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19ScaleformBlobSchema;
    // -> class ScaleformBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World13RawBlobSchema;
    // -> class RawBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World23CollisionMeshBlobSchema;
    // -> class CollisionMeshBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19CinematicBlobSchema;
    // -> class CinematicBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19CameraFlyBlobSchema;
    // -> class CameraFlyBlobSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World16VertexDeclSchema;
    // -> class VertexDeclSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World13TriggerSchema;
    // -> class TriggerSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World21TextureResourceSchema;
    // -> class TextureResourceSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World20StaticGeometrySchema;
    // -> class StaticGeometrySchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World18SkinGeometrySchema;
    // -> class SkinGeometrySchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World16RenderModeSchema;
    // -> class RenderModeSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World20ModelPrototypeSchema;
    // -> class ModelPrototypeSchema schema;
    // -> class SchemaRegistrator dtrFrontBufferSchemaReg;
    // -> class SchemaRegistrator dtrMovieSchemaReg;
    // -> class SchemaRegistrator textureAnimationCustomizerSchemaReg;
    // -> class SchemaRegistrator uvCustomizerSchemaReg;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World26ModelInstanceArticleSchema;
    // -> struct {} __vt__Q25World14GlobalFXSchema;
    // -> struct {} __vt__Q25World20DTRFrontBufferSchema;
    // -> struct {} __vt__Q25World14DTRMovieSchema;
    // -> struct {} __vt__Q25World30TextureAnimationSettingsSchema;
    // -> struct {} __vt__Q25World24UVMovementSettingsSchema;
    // -> class GlobalFXSchema GlobalFXSchema;
    // -> class DTRFrontBufferSchema dtrFrontBufferSchema;
    // -> class DTRMovieSchema dtrMovieSchema;
    // -> class TextureAnimationSettingsSchema textureAnimationSettings;
    // -> class UVMovementSettingsSchema uvMovementSettings;
    // -> class ModelInstanceArticleSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World14MaterialSchema;
    // -> class MaterialSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World19LightKitSceneSchema;
    // -> class LightKitSceneSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World14LightKitSchema;
    // -> class LightKitSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World24ImmediatePrototypeSchema;
    // -> class ImmediatePrototypeSchema immProtoSchema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World30ImmediateInstanceArticleSchema;
    // -> class ImmediateInstanceArticleSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World23ImmediateGeometrySchema;
    // -> class ImmediateGeometrySchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World12EffectSchema;
    // -> class EffectSchema schema;
    // -> class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World10ClipSchema;
    // -> class ClipSchema schema;
    // -> static class SchemaRegistrator schemaReg;
    // -> struct {} __vt__Q25World13Basic3DSchema;
    // -> static class Basic3DSchema schema;
    // -> struct {} __vt__Q25World6Schema;
    // -> static class ModuleRegistrator colorModReg;
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@16BasicColorModule;
    // -> static class BasicColorModule bascolormod;
    // -> static class ModuleRegistrator scadMgrModReg;
    // -> struct {} __vt__Q28Overseer13ScadMgrModule;
    // -> static class ScadMgrModule scadMgrMod;
    // -> static class ModuleRegistrator coordinatorModreg;
    // -> struct {} __vt__Q28Overseer17CoordinatorModule;
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
    // -> static class CoordinatorModule coordinatorMod;
    // -> struct {} __vt__Q27Domains20MemCB_BorrowedMemory;
    // -> struct {} __vt__Q27Domains17MemOwnerUnclaimed;
    // -> static class MemCallbackList memCallbackList;
    // -> static class ModuleRegistrator dynaMemModReg;
    // -> struct {} __vt__Q27Domains13DynaMemModule;
    // -> static class MemCB_SectTable memCB_sectTable;
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemCB_MetaRecord memCB_MetaRec;
    // -> struct {} __vt__Q26Loader15MemCB_SectTable;
    // -> struct {} __vt__Q26Loader16MemCB_MetaRecord;
    // -> static class ModuleRegistrator lsPoolModReg;
    // -> struct {} __vt__Q26Loader12LSPoolModule;
    // -> static class LSPoolModule lsPoolMod;
    // -> static class ModuleRegistrator mstQueryModReg;
    // -> struct {} __vt__Q26Loader14MSTQueryModule;
    // -> static class LoadMemOwner loadMemOwner;
    // -> static class MSTQueryModule mstQueryMod;
    // -> struct {} __vt__Q26Loader12LoadMemOwner;
    // -> static class ModuleRegistrator bootStrapModreg;
    // -> struct {} __vt__Q26Loader15BootStrapModule;
    // -> static class BootStrapModule bootStrapMod;
    // -> static class ModuleRegistrator domainModReg;
    // -> struct {} __vt__Q27Domains12DomainModule;
    // -> static class MemCB_ParcelLoadAndParse memCB_parcelParsing;
    // -> static class MemCB_ParcelDATA memCB_parcelDATA;
    // -> static class MemCB_ParcelTOC memCB_ParcelTOC;
    // -> static class DomainModule domainMod;
    // -> static class BlobMemCB blobMemCB;
    // -> static struct {} __vt__Q37Domains19@unnamed@WAD00_cpp@15MemCB_ParcelTOC;
    // -> struct {} __vt__Q27Domains24MemCB_ParcelLoadAndParse;
    // -> static struct {} __vt__Q37Domains19@unnamed@WAD00_cpp@16MemCB_ParcelDATA;
    // -> struct {} __vt__Q27Domains9BlobMemCB;
    // -> static class ModuleRegistrator blobmodreg;
    // -> struct {} __vt__Q27Domains14BlobloidModule;
    // -> static class QuaternionFormatter quaternionFormatter;
    // -> static class MemCB_HingeConfig memCB_HingeConfig;
    // -> static class BlobloidModule blobloidMod;
    // -> static class MemCB_INIData memCB_INIData;
    // -> struct {} __vt__Q27Configs17MemCB_HingeConfig;
    // -> struct {} __vt__Q27Configs13MemCB_INIData;
    // -> struct {} __vt__Q25Debug19QuaternionFormatter;
    // -> static class Matrix43 _matIdentity;
    // -> static class Matrix43 _matZero;
}
// signature: Configs::MemCB_INIData::Relocating(Domains::MemHandle *)
// Range: 0x8022C7D0 -> 0x8022C7E0
void Configs::MemCB_INIData::Relocating() {
}
// signature: Configs::MemCB_HingeConfig::Relocating(Domains::MemHandle *)
// Range: 0x8022C7E0 -> 0x8022C7F0
void Configs::MemCB_HingeConfig::Relocating() {
}
// Range: 0x8022C7F0 -> 0x8022C868
char * Configs::ParseState::GetNextLine() {
    // Local variables
    char * nextLine; // r4
    char * lastByte; // r5
}
// signature: Configs::@unnamed@WAD00_cpp@::ChopToWordEnd(char *)
// Range: 0x8022C868 -> 0x8022C90C
static char * Configs::@unnamed@WAD00_cpp@::ChopToWordEnd() {
    {
        // Range: 0x8022C868 -> 0x8022C8A8
        // Local variables
        char * ptr; // r4
    }
    {
        // Range: 0x8022C8A8 -> 0x8022C908
        // Local variables
        char * ptr; // r6
    }

    // References
    // -> class __locale _current_locale;
}
// signature: Configs::INIFile::ProcessLine(Configs::ParseState *, char *)
// Range: 0x8022C90C -> 0x8022D028
void Configs::INIFile::ProcessLine(class INIFile * this /* r28 */, class ParseState * parseState /* r30 */) {
    {
        // Range: 0x8022CA80 -> 0x8022CCD0
        // Local variables
        char * ptrEndDef; // r5
        char * ptrSectName; // r29
    }
    {
        // Range: 0x8022CCD0 -> 0x8022D014
        // Local variables
        char * ptrValue; // r0
        char * ptrEquals; // r4
    }

    // References
    // -> class __locale _current_locale;
}
