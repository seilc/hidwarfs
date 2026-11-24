/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Movie.cpp
*/
class CircularQueue movieQueue; // size: 0x10, address: 0x80846780
class MovieData movieArray[8]; // size: 0x240, address: 0x80846790
class MovieData * movieQueuePool[8]; // size: 0x20, address: 0x808469D0
static int hasPlayedMovie[32]; // size: 0x80, address: 0x808469F0
// signature: Graphics::RenderMovie(Graphics::movieEndCode (*)(Graphics::MovieData *), const char *, bool, Graphics::movieSkippable, D3DRECT *, D3DRECT *, int, void *, bool (*)())
// Range: 0x802ECE70 -> 0x802ED020
void Graphics::RenderMovie(char * movieName /* r22 */, bool fullScreen /* r23 */, enum movieSkippable skippable /* r24 */, class D3DRECT * rect /* r25 */, class D3DRECT * dstRect /* r31 */, int startFrameSmall /* r30 */, void * hBink /* r26 */, bool (* delayCB)() /* r27 */) {
    // Local variables
    class MovieData * mData; // r28

    {
        // Range: 0x802ECF68 -> 0x802ECFD8
        // Local variables
        int movieNumber; // r0
        char movieNumberStr[4]; // r1+0x8
    }

    // References
    // -> static int hasPlayedMovie[32];
    // -> class MovieData movieArray[8];
    // -> class MovieData * movieQueuePool[8];
    // -> class CircularQueue movieQueue;
}
// Range: 0x802ED020 -> 0x802ED094
void Graphics::ClearMovieQueue() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x802ED094 -> 0x802ED0BC
bool Graphics::HasMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x802ED0BC -> 0x802ED0DC
bool Graphics::IsMovieFullScreen() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x802ED0DC -> 0x802ED0F8
class MovieData * Graphics::GetMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// signature: Graphics::DoMovieStartCountdown(Graphics::MovieData *)
// Range: 0x802ED0F8 -> 0x802ED118
void Graphics::DoMovieStartCountdown() {
}
// Range: 0x802ED118 -> 0x802ED184
class MovieData * Graphics::PopMovie() {
    {
        // Range: 0x802ED124 -> 0x802ED17C
        // Local variables
        class MovieData * mData; // r0
    }

    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x802ED184 -> 0x802ED210
void Graphics::ResetFirstTimeMovieStatus() {
    {
        // Range: 0x802ED188 -> 0x802ED20C
        // Local variables
        int i; // r0
    }

    // References
    // -> static int hasPlayedMovie[32];
}
