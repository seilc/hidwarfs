/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\View.cpp
*/
// Range: 0x801D5030 -> 0x801D5068
void Graphics::View::Create(class View * this /* r31 */) {
}
// Range: 0x801D5070 -> 0x801D50B4
void Graphics::View::SetViewport(class Viewport * viewport /* r31 */) {
    // References
    // -> class Viewport * activeViewport;
}
// signature: Graphics::ScreenView::Start(Graphics::Scene &, Graphics::RenderTarget *)
// Range: 0x801D50C0 -> 0x801D50D8
void Graphics::ScreenView::Start() {
}
// Range: 0x801D50E0 -> 0x801D519C
void Graphics::ScreenView::Finish(class ScreenView * this /* r26 */) {
    {
        // Range: 0x801D5108 -> 0x801D5178
        // Local variables
        int size; // r28

        {
            // Range: 0x801D5124 -> 0x801D5178
            // Local variables
            int i; // r27

            {
                // Range: 0x801D5124 -> 0x801D5178
                // Local variables
                class MovieData * movieData; // r3
            }
        }
    }

    // References
    // -> class Viewport * activeViewport;
    // -> class CircularQueue movieQueue;
}
