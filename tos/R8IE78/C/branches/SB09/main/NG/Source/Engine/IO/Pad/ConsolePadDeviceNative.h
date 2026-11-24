/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\IO\Pad\ConsolePadDeviceNative.h
*/
unsigned int blockSize; // size: 0x4, address: 0x80693660
unsigned int blockSize; // size: 0x4, address: 0x80693664
// signature: IO::PadNative::GetFlag<unsigned short>(const unsigned short *, int)
// Range: 0x801DF1B0 -> 0x801DF1CC
int IO::PadNative::GetFlag<unsigned short>() {
}
// signature: IO::PadNative::GetFlag<unsigned long>(const unsigned long *, int)
// Range: 0x801DF450 -> 0x801DF46C
int IO::PadNative::GetFlag<unsigned long>() {
}
// Range: 0x801DEF00 -> 0x801DF1A8
void IO::PadNative::TransformButtons<unsigned short, float>(int & flags /* r22 */, float * pressure /* r23 */, unsigned short * srcFlags /* r24 */, float * srcPressure /* r25 */, class ConsoleButtonBinding * buttonMap /* r26 */, int buttonMapSize /* r27 */, float startValue /* f30 */, float endValue /* f31 */) {
    {
        // Range: 0x801DEF54 -> 0x801DF160
        // Local variables
        int i; // r28

        {
            // Range: 0x801DEF54 -> 0x801DF160
            // Local variables
            float press; // f1

            {
                // Range: 0x801DEF60 -> 0x801DF160
                // Local variables
                float diff; // f1
                float scale; // f0
            }
        }
    }
}
// Range: 0x801DF1D0 -> 0x801DF448
void IO::PadNative::TransformButtons<unsigned long, int>(int & flags /* r21 */, float * pressure /* r22 */, unsigned long * srcFlags /* r23 */, int * srcPressure /* r24 */, class ConsoleButtonBinding * buttonMap /* r25 */, int buttonMapSize /* r26 */, int startValue /* r27 */, int endValue /* r28 */) {
    {
        // Range: 0x801DF1FC -> 0x801DF418
        // Local variables
        int i; // r29

        {
            // Range: 0x801DF1FC -> 0x801DF418
            // Local variables
            int press; // r6

            {
                // Range: 0x801DF200 -> 0x801DF418
                // Local variables
                float diff; // f0
                float scale; // f2
            }
        }
    }
}
// Range: 0x801DF470 -> 0x801DF718
void IO::PadNative::TransformButtons<unsigned long, float>(int & flags /* r22 */, float * pressure /* r23 */, unsigned long * srcFlags /* r24 */, float * srcPressure /* r25 */, class ConsoleButtonBinding * buttonMap /* r26 */, int buttonMapSize /* r27 */, float startValue /* f30 */, float endValue /* f31 */) {
    {
        // Range: 0x801DF4C4 -> 0x801DF6D0
        // Local variables
        int i; // r28

        {
            // Range: 0x801DF4C4 -> 0x801DF6D0
            // Local variables
            float press; // f1

            {
                // Range: 0x801DF4D0 -> 0x801DF6D0
                // Local variables
                float diff; // f1
                float scale; // f0
            }
        }
    }
}
// signature: IO::PadNative::TransformSticks<float>(IO::PadStick *, const IO::PadNative::StickSourceVectorTemplate<float> *, int, float, float, float, float, float)
// Range: 0x801DF720 -> 0x801DF910
void IO::PadNative::TransformSticks<float>(class PadStick * stick /* r22 */, class StickSourceVectorTemplate * srcStick /* r23 */, int stickCount /* r24 */, float stickCenter /* f24 */, float stickMax /* f25 */, float stickDeadMin /* f26 */) {
    {
        // Range: 0x801DF778 -> 0x801DF8B8
        // Local variables
        int i; // r25

        {
            // Range: 0x801DF778 -> 0x801DF8B8
            // Local variables
            float len; // f0
            float mag2; // f1
            float ty; // f27
            float tx; // f29
        }
    }

    // References
    // -> class Vector2 vec2Zero;
}
