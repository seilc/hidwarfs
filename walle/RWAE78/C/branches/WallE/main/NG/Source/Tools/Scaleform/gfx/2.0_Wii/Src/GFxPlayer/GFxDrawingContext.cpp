/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxDrawingContext.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804AEFF0 -> 0x804B01A8
*/
enum GFxFillType {
    GFxFill_Solid = 0,
    GFxFill_LinearGradient = 16,
    GFxFill_RadialGradient = 18,
    GFxFill_FocalPointGradient = 19,
    GFxFill_TiledSmoothImage = 64,
    GFxFill_ClippedSmoothImage = 65,
    GFxFill_TiledImage = 66,
    GFxFill_ClippedImage = 67,
    GFxFill_Gradient_TestBit = 16,
    GFxFill_Image_TestBit = 64,
};
struct {} __vt__17GFxDrawingContext; // size: 0xC, address: 0x80737288
// Range: 0x804AEFF0 -> 0x804AF06C
void * GFxDrawingContext::GFxDrawingContext(class GFxDrawingContext * this /* r31 */) {
    // References
    // -> struct {} __vt__17GFxDrawingContext;
}
// Range: 0x804AF1E0 -> 0x804AF254
void GFxDrawingContext::Clear(class GFxDrawingContext * this /* r30 */) {
}
// Range: 0x804AF260 -> 0x804AF270
void GFxDrawingContext::SetNoLine() {
}
// Range: 0x804AF270 -> 0x804AF280
void GFxDrawingContext::SetNoFill() {
}
// signature: GFxDrawingContext::SetLineStyle(float, unsigned int, bool, GFxLineStyle::LineStyle, GFxLineStyle::LineStyle, GFxLineStyle::LineStyle, float)
// Range: 0x804AF280 -> 0x804AF4B4
void GFxDrawingContext::SetLineStyle(class GFxDrawingContext * this /* r28 */) {
}
// Range: 0x804AF4C0 -> 0x804AF6C0
class GFxFillStyle * GFxDrawingContext::SetNewFill(class GFxDrawingContext * this /* r28 */) {
}
// Range: 0x804AF6C0 -> 0x804AF8B8
class GFxFillStyle * GFxDrawingContext::CreateLineComplexFill(class GFxDrawingContext * this /* r28 */) {
}
// Range: 0x804AF8C0 -> 0x804AFAAC
void GFxDrawingContext::SetFill(class GFxDrawingContext * this /* r28 */, unsigned int rgba /* r26 */) {
}
// Range: 0x804AFAB0 -> 0x804AFCD0
void GFxDrawingContext::SetBitmapFill(class GFxDrawingContext * this /* r25 */, enum GFxFillType fillType /* r26 */, class GFxImageResource * pimageRes /* r27 */, class GMatrix2D & mtx /* r28 */) {
}
// Range: 0x804AFCD0 -> 0x804AFCE0
void GFxDrawingContext::ResetFill() {
}
// signature: GFxDrawingContext::MoveTo(float, float)
// Range: 0x804AFCE0 -> 0x804AFD20
void GFxDrawingContext::MoveTo() {
}
// signature: GFxDrawingContext::LineTo(float, float)
// Range: 0x804AFD20 -> 0x804AFD70
void GFxDrawingContext::LineTo(class GFxDrawingContext * this /* r31 */) {
}
// signature: GFxDrawingContext::CurveTo(float, float, float, float)
// Range: 0x804AFD70 -> 0x804AFDD8
void GFxDrawingContext::CurveTo(class GFxDrawingContext * this /* r31 */) {
}
// Range: 0x804AFDE0 -> 0x804AFEF0
bool GFxDrawingContext::AcquirePath(class GFxDrawingContext * this /* r29 */, bool newShapeFlag /* r30 */) {
}
// Range: 0x804AFF00 -> 0x804AFF4C
void GFxDrawingContext::AddPath() {
}
// Range: 0x804AFF50 -> 0x804AFF98
void GFxDrawingContext::ComputeBound(class GFxDrawingContext * this /* r30 */, class GRect * pRect /* r31 */) const {
}
// Range: 0x804AFFA0 -> 0x804B0080
void GFxDrawingContext::Display(class GFxDrawingContext * this /* r26 */, class GFxDisplayContext & context /* r27 */, class GMatrix2D & mat /* r28 */, class Cxform & cx /* r29 */, enum BlendType blend /* r30 */, bool edgeAADisabled /* r31 */) {
    {
        // Range: 0x804B0000 -> 0x804B0048
        // Local variables
        class GRect bounds; // r1+0x8
    }
}
// Range: 0x804B0080 -> 0x804B00F4
bool GFxDrawingContext::PointTestLocal(class GFxDrawingContext * this /* r28 */, class GPoint & pt /* r29 */, bool testShape /* r30 */, class GFxPointTestCacheProvider * pcache /* r31 */) const {
}
