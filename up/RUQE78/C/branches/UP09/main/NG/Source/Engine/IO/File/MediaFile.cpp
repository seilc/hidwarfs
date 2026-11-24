/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\File\MediaFile.cpp
*/
// Range: 0x80311C9C -> 0x80311CB0
void IO::MediaFile::Reset() {
}
// signature: IO::MediaFile::OpenAsync(const char *, int, IO::enMediaTarget, IO::MediaObject::enPriority)
// Range: 0x80311CB0 -> 0x80311E28
bool IO::MediaFile::OpenAsync(class MediaFile * this /* r26 */, char * name /* r27 */, int modeFlags /* r28 */, enum enPriority priority /* r29 */) {
    // References
    // -> static class MediaModule mediamod;
}
// Range: 0x80311E78 -> 0x80311F54
bool IO::MediaFile::CloseAsync(class MediaFile * this /* r31 */) {
}
// Range: 0x80311F54 -> 0x80312050
bool IO::MediaFile::ReadAsync(class MediaFile * this /* r28 */, char * buffer /* r29 */, int numBytes /* r31 */) {
}
// Range: 0x80312050 -> 0x8031214C
bool IO::MediaFile::SeekAsync(class MediaFile * this /* r28 */, enum enSeekOrigin seekTo /* r29 */, int seekOffset /* r31 */) {
}
// signature: IO::MediaFile::GetReadSize(int)
// Range: 0x8031214C -> 0x80312158
int IO::MediaFile::GetReadSize() {
}
