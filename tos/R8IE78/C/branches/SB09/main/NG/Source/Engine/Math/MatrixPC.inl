/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\MatrixPC.inl
*/
// signature: Math::Matrix43::operator=(const Math::Matrix43 &)
// Range: 0x800075D0 -> 0x80007610
class Matrix43 & Math::Matrix43::operator=() {
    {
        // Range: 0x800075D4 -> 0x8000760C
        // Local variables
        int i; // r0
    }
}
// Range: 0x8000B3D0 -> 0x8000B628
class Quaternion Math::Matrix33::GetQuaternion(class Matrix33 * this /* r25 */) const {
    // References
    // -> class Vector4 vec4OneW;
    // -> int next[3];
}
// signature: Math::Matrix43::MakeQuaternion(const Math::Quaternion &)
// Range: 0x8000B6C0 -> 0x8000B780
void Math::Matrix43::MakeQuaternion(class Matrix43 * this /* r31 */) {
    // References
    // -> class Vector4 vec4Zero;
}
// signature: Math::Mul(Math::Matrix33 &, const Math::Matrix33 &, const Math::Matrix33 &)
// Range: 0x800077D0 -> 0x80007938
void Math::Mul() {
}
// signature: Math::Mul(Math::Matrix43 &, const Math::Matrix43 &, const Math::Matrix43 &)
// Range: 0x8020CF80 -> 0x8020CF90
void Math::Mul(class Matrix43 & o /* r0 */) {
}
// signature: Math::Mul(Math::Vector &, const Math::Vector &, const Math::Matrix43 &)
// Range: 0x8020BFD0 -> 0x8020BFE0
void Math::Mul(class Vector & o /* r0 */) {
}
// Range: 0x801E9A90 -> 0x801E9B38
void Math::Mul(class Vector & o /* r29 */, class Matrix33 & a /* r30 */, class Vector & b /* r31 */) {
}
// Range: 0x80188C00 -> 0x80188CBC
void Math::Mul(class Vector4 & o /* r29 */, class Matrix43 & a /* r30 */, class Vector & b /* r31 */) {
    // References
    // -> class Vector4 vec4OneW;
}
// Range: 0x800076E0 -> 0x80007748
void Math::Transpose(class Matrix33 & o /* r30 */, class Matrix33 & a /* r31 */) {
}
