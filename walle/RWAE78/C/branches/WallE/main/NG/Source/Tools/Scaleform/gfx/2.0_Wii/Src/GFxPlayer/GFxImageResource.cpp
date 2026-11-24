/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxImageResource.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804DE480 -> 0x804DE8E0
*/
// total size: 0x4
class GFxImageFileKeyInterface : public KeyInterface {};
// total size: 0x1C
class GFxImageFileInfoKeyData : public GRefCountBase {
    // Members
    class GPtr pFileOpener; // offset 0x10, size 0x4
    class GPtr pImageCreator; // offset 0x14, size 0x4
    class GPtr pFileInfo; // offset 0x18, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
// total size: 0x4
class GPtr {
    // Members
    class GFxImageFileInfo * pObject; // offset 0x0, size 0x4
};
static class GFxImageFileKeyInterface GFxImageFileKeyInterface_Instance; // size: 0x4, address: 0x808DEBE8
// Range: 0x804DE8D0 -> 0x804DE8E0
static void __sinit_\GFxImageResource_cpp() {
    // References
    // -> static class GFxImageFileKeyInterface GFxImageFileKeyInterface_Instance;
    // -> struct {} __vt__24GFxImageFileKeyInterface;
}
// signature: GFxImageFileKeyInterface::AddRef(void *)
// Range: 0x804DE4C0 -> 0x804DE4D4
void GFxImageFileKeyInterface::AddRef() {
    // Local variables
    class GFxImageFileInfoKeyData * pdata; // r0
}
// signature: GFxImageFileKeyInterface::Release(void *)
// Range: 0x804DE4E0 -> 0x804DE4F8
void GFxImageFileKeyInterface::Release() {
    // Local variables
    class GFxImageFileInfoKeyData * pdata; // r3
}
// signature: GFxImageFileKeyInterface::GetKeyType(void *) const
// Range: 0x804DE500 -> 0x804DE508
enum KeyType GFxImageFileKeyInterface::GetKeyType() const {
}
// Range: 0x804DE510 -> 0x804DE590
unsigned long GFxImageFileKeyInterface::GetHashCode(void * hdata /* r29 */) const {
    // Local variables
    class GFxImageFileInfoKeyData * pdata; // r0
}
// signature: GFxImageFileKeyInterface::KeyEquals(void *, const GFxResourceKey &)
// Range: 0x804DE590 -> 0x804DE62C
bool GFxImageFileKeyInterface::KeyEquals() {
    // Local variables
    class GFxImageFileInfoKeyData * pthisData; // r0
    class GFxImageFileInfoKeyData * potherData; // r6
}
// signature: GFxImageFileKeyInterface::GetFileURL(void *) const
// Range: 0x804DE630 -> 0x804DE640
char * GFxImageFileKeyInterface::GetFileURL() const {
}
// Range: 0x804DE640 -> 0x804DE7F0
class GFxResourceKey GFxImageResource::CreateImageFileKey(class GFxImageFileInfo * pfileInfo /* r27 */, class GFxFileOpener * pfileOpener /* r28 */, class GFxImageCreator * pimageCreator /* r29 */) {
    // References
    // -> static class GFxImageFileKeyInterface GFxImageFileKeyInterface_Instance;
    // -> struct {} __vt__23GFxImageFileInfoKeyData;
}
