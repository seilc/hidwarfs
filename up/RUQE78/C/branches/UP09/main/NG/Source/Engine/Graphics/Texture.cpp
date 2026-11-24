/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Texture.cpp
*/
// signature: @unnamed@WAD01_cpp@::LoadTexture(_GXTexObj *, int *, int *, const void *, int, World::WiiTextureFileHeader **)
// Range: 0x80304A74 -> 0x80304B94
static int @unnamed@WAD01_cpp@::LoadTexture(class _GXTexObj * handle /* r24 */, int * width /* r31 */, int * height /* r25 */, class WiiTextureFileHeader * * header /* r26 */) {
    // Local variables
    class TPLPalette * tplFile; // r28
    class TPLDescriptor * tplDescriptor; // r0

    {
        // Range: 0x80304ABC -> 0x80304B6C
        // Local variables
        int i; // r27

        {
            // Range: 0x80304ABC -> 0x80304B6C
            // Local variables
            enum _GXAnisotropy max_aniso; // r1+0x14
            unsigned char do_edge_lod; // r1+0x10
            unsigned char bias_clamp; // r1+0x11
            float lod_bias; // r1+0x18
            float max_lod; // r1+0x1C
            float min_lod; // r1+0x20
            enum _GXTexFilter mag_filt; // r1+0x24
            enum _GXTexFilter min_filt; // r1+0x28
        }
    }
}
// signature: Graphics::Texture::AmendImageFromFileInMemory(const void *, int)
// Range: 0x80304B94 -> 0x80304BD8
void Graphics::Texture::AmendImageFromFileInMemory() {
}
// Range: 0x80304BD8 -> 0x80304C54
void Graphics::Texture::Create(class Texture * this /* r30 */, class _GXTexObj * tex /* r31 */) {
}
// Range: 0x80304C54 -> 0x80304C58
void Graphics::Texture::RenderAttach() {
}
// Range: 0x80304C58 -> 0x80304CB4
void Graphics::Texture::RenderDetach(class Texture * this /* r31 */) {
}
// signature: Graphics::Texture::SetImageFromFile(const char *)
// Range: 0x80304CB4 -> 0x80304CB8
void Graphics::Texture::SetImageFromFile() {
}
// Range: 0x80304CB8 -> 0x80304D44
void Graphics::Texture::SetImageFromFileInMemory(class Texture * this /* r29 */, void * data /* r30 */, int dataSize /* r31 */) {
}
