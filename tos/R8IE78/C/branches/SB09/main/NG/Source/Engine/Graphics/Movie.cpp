/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Movie.cpp
*/
class CircularQueue movieQueue; // size: 0x10, address: 0x80774FA8
class MovieData movieArray[8]; // size: 0x280, address: 0x80774FB8
class MovieData * movieQueuePool[8]; // size: 0x20, address: 0x80775238
static int hasPlayedMovie[32]; // size: 0x80, address: 0x80775258
// signature: Graphics::RenderMovie(Graphics::movieEndCode (*)(Graphics::MovieData *), const char *, unsigned long long, bool, Graphics::movieSkippable, D3DRECT *, D3DRECT *, int, void *, bool (*)())
// Range: 0x801C83A0 -> 0x801C856C
void Graphics::RenderMovie(char * movieName /* r20 */, unsigned long long subtitlesID /* r22:r21 */, bool fullScreen /* r23 */, enum movieSkippable skippable /* r24 */, class D3DRECT * rect /* r25 */, class D3DRECT * dstRect /* r26 */, int startFrameSmall /* r27 */, void * hBink /* r28 */, bool (* delayCB)() /* r29 */) {
    // Local variables
    class MovieData * mData; // r30

    {
        // Range: 0x801C84AC -> 0x801C8530
        // Local variables
        int movieNumber; // r0
        char movieNumberStr[4]; // r1+0x8

        {
            // Range: 0x801C84AC -> 0x801C84D4
            // Local variables
            int i; // r6
        }
    }

    // References
    // -> static int hasPlayedMovie[32];
    // -> class MovieData movieArray[8];
    // -> class MovieData * movieQueuePool[8];
    // -> class CircularQueue movieQueue;
}
// Range: 0x801C8570 -> 0x801C85A0
void Graphics::ClearMovieQueue() {
}
// Range: 0x801C85A0 -> 0x801C85C8
bool Graphics::HasMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x801C85D0 -> 0x801C85F0
bool Graphics::IsMovieFullScreen() {
    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x801C85F0 -> 0x801C860C
class MovieData * Graphics::GetMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// signature: Graphics::GetMovie(int)
// Range: 0x801C8610 -> 0x801C8638
class MovieData * Graphics::GetMovie() {
    // References
    // -> class CircularQueue movieQueue;
}
// signature: Graphics::GetMovieStartCountdown(Graphics::MovieData *)
// Range: 0x801C8640 -> 0x801C8648
int Graphics::GetMovieStartCountdown() {
}
// signature: Graphics::DoMovieStartCountdown(Graphics::MovieData *)
// Range: 0x801C8650 -> 0x801C8670
void Graphics::DoMovieStartCountdown() {
}
// Range: 0x801C8670 -> 0x801C86D4
class MovieData * Graphics::PopMovie() {
    {
        // Range: 0x801C867C -> 0x801C86C0
        // Local variables
        class MovieData * mData; // r0
    }

    // References
    // -> class CircularQueue movieQueue;
}
// Range: 0x801C86E0 -> 0x801C8708
void Graphics::ResetFirstTimeMovieStatus() {
    {
        // Range: 0x801C86E0 -> 0x801C8704
        // Local variables
        int i; // r5
    }

    // References
    // -> static int hasPlayedMovie[32];
}
