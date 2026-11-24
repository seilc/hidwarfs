/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Movie.cpp
*/
class CircularQueue movieQueue; // size: 0x10, address: 0x807FF338
class MovieData movieArray[8]; // size: 0x220, address: 0x807FF348
// Range: 0x80255C70 -> 0x80255D9C
void Graphics::RenderMovie(void (* cb)(class MovieData * data) /* r24 */, char * movieName /* r31 */, bool fullScreen /* r25 */, bool skippable /* r26 */, class D3DRECT * rect /* r27 */, class D3DRECT * dstRect /* r28 */, int startFrameSmall /* r29 */, void * hBink /* r30 */) {
    // Local variables
    class MovieData * mData; // r31

    // References
    // -> class MovieData movieArray[8];
    // -> class CircularQueue movieQueue;
}
// Range: 0x80255D9C -> 0x80255DC4
bool Graphics::HasMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x80255DC4 -> 0x80255DE4
bool Graphics::IsMovieFullScreen() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x80255DE4 -> 0x80255E00
class MovieData * Graphics::GetMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// signature: Graphics::GetMovieStartCountdown(Graphics::MovieData *)
// Range: 0x80255E00 -> 0x80255E08
int Graphics::GetMovieStartCountdown() {
}
// signature: Graphics::DoMovieStartCountdown(Graphics::MovieData *)
// Range: 0x80255E08 -> 0x80255E28
void Graphics::DoMovieStartCountdown() {
}
// Range: 0x80255E3C -> 0x80255E74
class MovieData * Graphics::PopMovie() {
    // Local variables
    class MovieData * mData; // r0

    // References
    // -> class CircularQueue movieQueue;
}
