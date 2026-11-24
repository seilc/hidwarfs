/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\IO\MediaFile.cpp
*/
// Range: 0x8027EA3C -> 0x8027EA7C
void IO::MediaFile::Reset(class MediaFile * this /* r31 */) {
}
// signature: IO::MediaFile::OpenAsync(const char *, int, IO::enMediaTarget, IO::MediaObject::enPriority)
// Range: 0x8027EA88 -> 0x8027EBB0
bool IO::MediaFile::OpenAsync(class MediaFile * this /* r26 */, char * name /* r27 */, int modeFlags /* r28 */, enum enPriority priority /* r29 */) {
    // References
    // -> static class MediaModule mediamod;
}
// Range: 0x8027EC00 -> 0x8027EC8C
bool IO::MediaFile::CloseAsync(class MediaFile * this /* r31 */) {
}
// Range: 0x8027EC8C -> 0x8027ED38
bool IO::MediaFile::ReadAsync(class MediaFile * this /* r28 */, char * buffer /* r29 */, int numBytes /* r31 */) {
}
// Range: 0x8027ED38 -> 0x8027EDE4
bool IO::MediaFile::SeekAsync(class MediaFile * this /* r28 */, enum enSeekOrigin seekTo /* r29 */, int seekOffset /* r31 */) {
}
// Range: 0x8027EDE4 -> 0x8027EDEC
int IO::MediaFile::GetSize() {
}
// signature: IO::MediaFile::GetReadSize(int)
// Range: 0x8027EDEC -> 0x8027EDF8
int IO::MediaFile::GetReadSize() {
}
