/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCNG.h
*/
struct {} __vt__Q25World76NPCNGEntity<Q24Sext10AnimViewer,1538195659,4294967292,1233191684,4294967292>; // size: 0x60, address: 0x806FF9F8
struct {} __vt__Q25World65NPCNGEntity<Q24Sext3Eve,1195444,4294967292,1233191692,4294967292>; // size: 0x60, address: 0x806FFA58
struct {} __vt__Q25World76NPCNGEntity<Q24Sext10AxiomHuman,3635334321,4294967292,1233191696,4294967292>; // size: 0x60, address: 0x806FFAB8
struct {} __vt__Q25World72NPCNGEntity<Q24Sext7Charger,2281628538,4294967292,1233191700,4294967292>; // size: 0x60, address: 0x806FFB18
struct {} __vt__Q25World71NPCNGEntity<Q24Sext6Puppet,2016572344,4294967292,1233191712,4294967292>; // size: 0x60, address: 0x806FFB78
struct {} __vt__Q25World72NPCNGEntity<Q24Sext7Steward,3829201948,4294967292,1233191716,4294967292>; // size: 0x60, address: 0x806FFBD8
struct {} __vt__Q25World80NPCNGEntity<Q24Sext14TrapProjectile,2203609314,4294967292,1233191704,4294967292>; // size: 0x60, address: 0x806FFC38
struct {} __vt__Q25World70NPCNGEntity<Q24Sext6Mowbot,490718550,4294967292,1233191720,4294967292>; // size: 0x60, address: 0x806FFC98
struct {} __vt__Q25World79NPCNGEntity<Q24Sext13DetectorHuman,3658887007,4294967292,1233191708,4294967292>; // size: 0x60, address: 0x806FFCF8
static float defaultCullingDistance; // size: 0x4, address: 0x806CDED4
static float defaultCullingDistance; // size: 0x4, address: 0x806CDED8
static int TRI_SEARCH_FILO_SIZE; // size: 0x4, address: 0x806CDEDC
static float ealry_cut_frames; // size: 0x4, address: 0x806CDEE0
static bool useTurnSpring; // size: 0x1, address: 0x806CDEE4
static float minAngle; // size: 0x4, address: 0x806CDEE8
static float maxAngle; // size: 0x4, address: 0x806CDEEC
static bool useTurnSpring; // size: 0x1, address: 0x806CDEF0
static float threshold2; // size: 0x4, address: 0x806CDEF4
static float offsetUp; // size: 0x4, address: 0x806CDEF8
static int MAX_ITERATION; // size: 0x4, address: 0x806CDEFC
static float DISTANCE_THRESHOLD; // size: 0x4, address: 0x806CDF00
static float maxAvoidAngle; // size: 0x4, address: 0x806CDF04
static float avoidAngleTolerance; // size: 0x4, address: 0x806CDF08
static float maxAvoidAngle; // size: 0x4, address: 0x806CDF0C
static float avoidAngleTolerance; // size: 0x4, address: 0x806CDF10
static float MAX_SEARCH_DISTANCE; // size: 0x4, address: 0x806CDF14
static float MAX_SEARCH_DISTANCE; // size: 0x4, address: 0x806CDF18
static float minAllowedVelocity; // size: 0x4, address: 0x806CDF1C
static float rotationPerSecond; // size: 0x4, address: 0x806CDF20
static float triggerDist2; // size: 0x4, address: 0x806CDF24
static float shrinkIt; // size: 0x4, address: 0x806CDF28
static float FMV_TIME; // size: 0x4, address: 0x806CDF2C
static int BUF_SIZE; // size: 0x4, address: 0x806CDF30
static int force_draw_black; // size: 0x4, address: 0x806CDF34
static int MAX_VIEWS; // size: 0x4, address: 0x806CDF38
static int MAX_RENDERABLES; // size: 0x4, address: 0x806CDF3C
static int MAX_LIGHTS; // size: 0x4, address: 0x806CDF40
static float near2; // size: 0x4, address: 0x806CDF44
static float far2; // size: 0x4, address: 0x806CDF48
static int collector_size; // size: 0x4, address: 0x806CDF4C
static int TRI_SEARCH_FILO_SIZE; // size: 0x4, address: 0x806CDF50
static float CheckDist2; // size: 0x4, address: 0x806CDF54
static float Y_FUDGE_FACTOR; // size: 0x4, address: 0x806CDF58
static int num_choice; // size: 0x4, address: 0x806CDF5C
static int displayPresses; // size: 0x4, address: 0x806CDF60
static int allElseMask; // size: 0x4, address: 0x806CDF64
static unsigned int FULL_FILE_NAME_SIZE; // size: 0x4, address: 0x806CDF68
// Range: 0x80157CC0 -> 0x801582A4
void World::NPCNGEntity<Sext::DetectorHuman, 3658887007, 4294967292, 1233191708, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x801583E0 -> 0x801589C4
void World::NPCNGEntity<Sext::Mowbot, 490718550, 4294967292, 1233191720, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80158B00 -> 0x801590E4
void World::NPCNGEntity<Sext::TrapProjectile, 2203609314, 4294967292, 1233191704, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80159220 -> 0x80159804
void World::NPCNGEntity<Sext::Steward, 3829201948, 4294967292, 1233191716, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x80159940 -> 0x80159F24
void World::NPCNGEntity<Sext::Puppet, 2016572344, 4294967292, 1233191712, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8015A060 -> 0x8015A644
void World::NPCNGEntity<Sext::Charger, 2281628538, 4294967292, 1233191700, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8015A780 -> 0x8015AD64
void World::NPCNGEntity<Sext::AxiomHuman, 3635334321, 4294967292, 1233191696, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8015AEA0 -> 0x8015B484
void World::NPCNGEntity<Sext::Eve, 1195444, 4294967292, 1233191692, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x8015B5C0 -> 0x8015BBA4
void World::NPCNGEntity<Sext::AnimViewer, 1538195659, 4294967292, 1233191684, 4294967292>::UpdateRender(class NPCNGEntity * this /* r24 */) {
    // Local variables
    class xMat4x3 * renderMat; // r23
    class xMat4x3 scaledMat; // r1+0x88
    class xMat4x3 modifiedRenderMat; // r1+0x48
    class Matrix43 ngRenderMat; // r1+0x18

    // References
    // -> class Renderable3DTransform g_identity;
}
// signature: World::NPCNGEntity<Sext::DetectorHuman, 3658887007, 4294967292, 1233191708, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x801582B0 -> 0x80158308
void World::NPCNGEntity<Sext::DetectorHuman, 3658887007, 4294967292, 1233191708, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::Mowbot, 490718550, 4294967292, 1233191720, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x801589D0 -> 0x80158A28
void World::NPCNGEntity<Sext::Mowbot, 490718550, 4294967292, 1233191720, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::TrapProjectile, 2203609314, 4294967292, 1233191704, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x801590F0 -> 0x80159148
void World::NPCNGEntity<Sext::TrapProjectile, 2203609314, 4294967292, 1233191704, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::Steward, 3829201948, 4294967292, 1233191716, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x80159810 -> 0x80159868
void World::NPCNGEntity<Sext::Steward, 3829201948, 4294967292, 1233191716, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::Puppet, 2016572344, 4294967292, 1233191712, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x80159F30 -> 0x80159F88
void World::NPCNGEntity<Sext::Puppet, 2016572344, 4294967292, 1233191712, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::Charger, 2281628538, 4294967292, 1233191700, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x8015A650 -> 0x8015A6A8
void World::NPCNGEntity<Sext::Charger, 2281628538, 4294967292, 1233191700, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::AxiomHuman, 3635334321, 4294967292, 1233191696, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x8015AD70 -> 0x8015ADC8
void World::NPCNGEntity<Sext::AxiomHuman, 3635334321, 4294967292, 1233191696, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::Eve, 1195444, 4294967292, 1233191692, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x8015B490 -> 0x8015B4E8
void World::NPCNGEntity<Sext::Eve, 1195444, 4294967292, 1233191692, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// signature: World::NPCNGEntity<Sext::AnimViewer, 1538195659, 4294967292, 1233191684, 4294967292>::RegisterContext(World::xOGEntityContext *)
// Range: 0x8015BBB0 -> 0x8015BC08
void World::NPCNGEntity<Sext::AnimViewer, 1538195659, 4294967292, 1233191684, 4294967292>::RegisterContext(class NPCNGEntity * this /* r31 */) {
}
// Range: 0x80158310 -> 0x801583D8
void World::NPCNGEntity<Sext::DetectorHuman, 3658887007, 4294967292, 1233191708, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80158A30 -> 0x80158AF8
void World::NPCNGEntity<Sext::Mowbot, 490718550, 4294967292, 1233191720, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80159150 -> 0x80159218
void World::NPCNGEntity<Sext::TrapProjectile, 2203609314, 4294967292, 1233191704, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80159870 -> 0x80159938
void World::NPCNGEntity<Sext::Steward, 3829201948, 4294967292, 1233191716, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80159F90 -> 0x8015A058
void World::NPCNGEntity<Sext::Puppet, 2016572344, 4294967292, 1233191712, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8015A6B0 -> 0x8015A778
void World::NPCNGEntity<Sext::Charger, 2281628538, 4294967292, 1233191700, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8015ADD0 -> 0x8015AE98
void World::NPCNGEntity<Sext::AxiomHuman, 3635334321, 4294967292, 1233191696, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8015B4F0 -> 0x8015B5B8
void World::NPCNGEntity<Sext::Eve, 1195444, 4294967292, 1233191692, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8015BC10 -> 0x8015BCD8
void World::NPCNGEntity<Sext::AnimViewer, 1538195659, 4294967292, 1233191684, 4294967292>::UnregisterContext(class NPCNGEntity * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
