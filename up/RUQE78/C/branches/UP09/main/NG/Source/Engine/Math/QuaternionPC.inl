/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Math\QuaternionPC.inl
*/
class Vector4 vec4N1N1N1P1; // size: 0x10, address: 0x8084B7F0
// Range: 0x803208A0 -> 0x80320CC4
void Math::Quaternion::MakeEuler(class Quaternion * this /* r31 */, float yaw /* f27 */, float pitch /* f28 */, float roll /* f26 */) {
    // Local variables
    class Matrix33 mat; // r1+0x38

    // References
    // -> class Vector4 vec4OneW;
    // -> int next[3];
}
// signature: Math::Quaternion::MakeEuler(const Math::Vector &)
// Range: 0x80320CC4 -> 0x8032110C
void Math::Quaternion::MakeEuler(class Quaternion * this /* r31 */) {
    // Local variables
    class Matrix43 mat; // r1+0x38

    // References
    // -> class Vector4 vec4OneW;
    // -> int next[3];
    // -> class Vector4 vec4Zero;
}
// Range: 0x8032110C -> 0x803214F8
void Math::Slerp(class Quaternion & o /* r31 */, class Quaternion & a /* r29 */, class Quaternion & b /* r30 */, float t /* f30 */) {
    // Local variables
    float dot; // f0
    float fdot; // f2
    class Vector4 av; // r1+0x98
    float theta; // f29
    float st; // f0
    float ct; // f0
    class Vector4 c; // r1+0x88
}
