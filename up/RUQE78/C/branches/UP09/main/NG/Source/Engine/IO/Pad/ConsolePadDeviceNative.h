/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\IO\Pad\ConsolePadDeviceNative.h
*/
// signature: IO::PadNative::TransformButtons<unsigned long, int>(int &, float *, const unsigned long *, const int *, const IO::ConsoleButtonBinding *, int, int, int)
// Range: 0x8030FF48 -> 0x80310164
void IO::PadNative::TransformButtons<unsigned long, int>() {
    {
        // Range: 0x8030FF4C -> 0x80310154
        // Local variables
        int i; // r0

        {
            // Range: 0x8030FF4C -> 0x80310154
            // Local variables
            int press; // r31

            {
                // Range: 0x8030FF4C -> 0x80310154
                // Local variables
                float diff; // f0
                float scale; // f3
            }
        }
    }
}
// signature: IO::PadNative::TransformButtons<unsigned long, float>(int &, float *, const unsigned long *, const float *, const IO::ConsoleButtonBinding *, int, float, float)
// Range: 0x80310164 -> 0x80310370
void IO::PadNative::TransformButtons<unsigned long, float>() {
    {
        // Range: 0x80310170 -> 0x80310368
        // Local variables
        int i; // r0

        {
            // Range: 0x80310174 -> 0x80310368
            // Local variables
            float press; // f7

            {
                // Range: 0x80310180 -> 0x80310368
                // Local variables
                float diff; // f7
                float scale; // f0
            }
        }
    }
}
// signature: IO::PadNative::TransformSticks<float>(IO::PadStick *, const IO::PadNative::StickSourceVectorTemplate<float> *, int, float, float, float, float, float)
// Range: 0x80310370 -> 0x803105A0
void IO::PadNative::TransformSticks<float>(int stickCount /* r26 */, float stickCenter /* f28 */, float stickMax /* f29 */) {
    {
        // Range: 0x803103D8 -> 0x803103D8
        // Local variables
        int i; // r27

        {
            // Range: 0x803103D8 -> 0x803103D8
            // Local variables
            float len; // f0
            float mag2; // f1
            float ty; // f22
            float tx; // f23
        }
    }

    // References
    // -> class Vector2 vec2Zero;
}
