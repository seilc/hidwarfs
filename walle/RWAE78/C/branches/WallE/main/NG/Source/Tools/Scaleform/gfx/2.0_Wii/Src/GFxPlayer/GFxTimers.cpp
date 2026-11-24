/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTimers.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805A2930 -> 0x805A3B88
*/
// Range: 0x805A2930 -> 0x805A2E40
bool GASIntervalTimer::Invoke(class GASIntervalTimer * this /* r26 */, class GFxMovieRoot * proot /* r27 */, float frameTime /* f30 */) {
    // Local variables
    float currentTime; // f31
    bool retval; // r24

    {
        // Range: 0x805A297C -> 0x805A2DC8
        // Local variables
        class GASEnvironment * penv; // r28
        class GASObjectInterface * thisPtr; // r29
        class GASFunctionRef function; // r1+0x40

        {
            // Range: 0x805A2B74 -> 0x805A2BEC
            // Local variables
            class GASValue methodVal; // r1+0x30
        }
        {
            // Range: 0x805A2C00 -> 0x805A2D6C
            // Local variables
            int nArgs; // r27
            class GASValue result; // r1+0x20

            {
                // Range: 0x805A2CB8 -> 0x805A2CBC
                // Local variables
                int i; // r24
            }
        }
        {
            // Range: 0x805A2D94 -> 0x805A2DC8
            // Local variables
            float interval; // f0
        }
    }

    // References
    // -> struct {} __vt__9GASFnCall;
}
// signature: GASIntervalTimer::GetNextInterval(float, float) const
// Range: 0x805A2E40 -> 0x805A2F00
float GASIntervalTimer::GetNextInterval() const {
    // Local variables
    int interval; // r5
}
// Range: 0x805A2F00 -> 0x805A2F0C
void GASIntervalTimer::Clear() {
}
// Range: 0x805A2F10 -> 0x805A3620
void GASIntervalTimer::SetInterval(class GASFnCall & fn /* r26 */) {
    // Local variables
    class GASIntervalTimer * timer; // r28
    int nextArg; // reg65535
    class GFxMovieRoot * proot; // r23
    int id; // r0

    {
        // Range: 0x805A33C4 -> 0x805A3574
        // Local variables
        int i; // r27
    }
}
// Range: 0x805A3620 -> 0x805A36D8
void GASIntervalTimer::ClearInterval(class GASFnCall & fn /* r30 */) {
    // Local variables
    class GFxMovieRoot * proot; // r31
    double x; // f0
}
// Range: 0x805A36E0 -> 0x805A3AC8
void GASIntervalTimer::SetTimeout(class GASFnCall & fn /* r26 */) {
    // Local variables
    class GFxMovieRoot * proot; // r23
    int id; // r0

    {
        // Range: 0x805A3864 -> 0x805A3A1C
        // Local variables
        int i; // r27
    }
}
// Range: 0x805A3AD0 -> 0x805A3B88
void GASIntervalTimer::ClearTimeout(class GASFnCall & fn /* r30 */) {
}
