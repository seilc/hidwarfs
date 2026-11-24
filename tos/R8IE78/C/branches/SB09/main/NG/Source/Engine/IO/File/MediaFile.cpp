/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\File\MediaFile.cpp
*/
// Range: 0x801E1330 -> 0x801E1344
void IO::MediaFile::Reset() {
}
// Range: 0x801E1350 -> 0x801E1410
bool IO::MediaFile::OpenAsync(class MediaFile * this /* r26 */, char * name /* r27 */, int modeFlags /* r28 */, enum enMediaTarget tgtDevice /* r30 */, enum enPriority priority /* r29 */) {
    // Local variables
    class MediaCmd * cmd; // r30
}
// Range: 0x801E1460 -> 0x801E14B4
bool IO::MediaFile::CloseAsync() {
    // Local variables
    class MediaCmd * cmd; // r0
}
// Range: 0x801E14C0 -> 0x801E1524
bool IO::MediaFile::ReadAsync(char * buffer /* r29 */, int numBytes /* r30 */) {
    // Local variables
    class MediaCmd * cmd; // r0
}
// Range: 0x801E1530 -> 0x801E1594
bool IO::MediaFile::SeekAsync(enum enSeekOrigin seekTo /* r29 */, int seekOffset /* r30 */) {
    // Local variables
    class MediaCmd * cmd; // r0
}
// Range: 0x801E15A0 -> 0x801E15A8
int IO::MediaFile::GetSize() {
}
// signature: IO::MediaFile::GetReadSize(int)
// Range: 0x801E15B0 -> 0x801E15BC
int IO::MediaFile::GetReadSize() {
}
