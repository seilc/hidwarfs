/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\iCameraNG.cpp
*/
// Range: 0x8000D560 -> 0x8000D638
void iCamera::UpdateMatrix(class iCamera * this /* r29 */) {
    // Local variables
    class Matrix43 ngMatrix; // r1+0x18

    {
        // Range: 0x8000D5D4 -> 0x8000D620
        // Local variables
        int numViewports; // r0
        class View * view; // r30

        {
            // Range: 0x8000D5F4 -> 0x8000D620
            // Local variables
            int i; // r29

            {
                // Range: 0x8000D5F4 -> 0x8000D620
                // Local variables
                class Viewport * viewport; // r0
            }
        }
    }
}
// signature: iCamera::SetViewport(Graphics::Viewport *)
// Range: 0x8000D6B0 -> 0x8000D6C4
void iCamera::SetViewport() {
}
// signature: iCamera::SetFOV(float)
// Range: 0x8000D6D0 -> 0x8000D7B0
void iCamera::SetFOV(class iCamera * this /* r29 */) {
    // Local variables
    float view_window; // f0
    float fAspectRatio; // f31
    float fovy; // f30

    {
        // Range: 0x8000D734 -> 0x8000D788
        // Local variables
        int numViewports; // r0
        class View * view; // r30

        {
            // Range: 0x8000D758 -> 0x8000D788
            // Local variables
            int i; // r29

            {
                // Range: 0x8000D758 -> 0x8000D788
                // Local variables
                class Viewport * viewport; // r0
            }
        }
    }
}
// signature: iCamera::SetMatrix(const xMat4x3 &)
// Range: 0x8000D7B0 -> 0x8000D7E8
void iCamera::SetMatrix(class iCamera * this /* r31 */) {
}
