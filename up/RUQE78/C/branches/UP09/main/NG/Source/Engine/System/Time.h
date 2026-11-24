/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\Time.h
*/
// signature: System::Time::operator-(const System::Time &) const
// Range: 0x80073810 -> 0x80073840
class Time System::Time::operator-() const {
    // Local variables
    class Time result; // r1+0x8
}
// Range: 0x80052450 -> 0x8005248C
float System::Time::GetSeconds(class Time * this /* r4 */) const {
    // References
    // -> double secondsPerTick;
}
// Range: 0x8030FF0C -> 0x8030FF48
float System::Time::GetMilliseconds(class Time * this /* r4 */) const {
    // References
    // -> double millisecondsPerTick;
}
// Range: 0x80052490 -> 0x800524B8
class Time System::GetBaseTime() {
}
// Range: 0x802944B0 -> 0x80294508
class Time System::GetStartupTime() {
    // References
    // -> long long startupTicks;
}
