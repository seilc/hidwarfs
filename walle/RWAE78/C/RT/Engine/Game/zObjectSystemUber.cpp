/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zObjectSystemUber.cpp
*/
int obj_systems_size; // size: 0x4, address: 0x807926BC
class zObjectGeneratorUber * obj_gen_systems[128]; // size: 0x200, address: 0x807926C0
class object_instance objStorage[256]; // size: 0x5800, address: 0x807928C0
class zQueue objPool; // size: 0x408, address: 0x807980C0
// Range: 0x801617F0 -> 0x80161888
class zObjectSystem * * zObjectSystemCreateAll() {
    // References
    // -> struct {} __vt__17zObjectSystemUber;
    // -> struct {} __vt__13zObjectSystem;
}
// Range: 0x80161890 -> 0x801618A0
void zObjectSystemsDestroy() {
    // References
    // -> int obj_systems_size;
}
// Range: 0x801618A0 -> 0x80161A50
void zObjectSystemsRender() {
    // Local variables
    float dt; // f31

    {
        // Range: 0x801618C0 -> 0x80161A20
        // Local variables
        int j; // r28
    }

    // References
    // -> class zQueue objPool;
    // -> class xGlobals * xglobals;
}
// Range: 0x80161A50 -> 0x80161D28
class zObjectGenerator * zObjectSystemUber::create_generator(class zObjectSystemUber * this /* r29 */, class object_generator * asset /* r30 */) {
    // References
    // -> class zObjectGeneratorUber * obj_gen_systems[128];
    // -> int obj_systems_size;
    // -> struct {} __vt__Q25World22UVMovementInstanceData;
    // -> struct {} __vt__20zObjectGeneratorUber;
}
// signature: zObjectSystemUber::destroy_generator(zObjectGenerator *)
// Range: 0x80161D40 -> 0x80161D54
void zObjectSystemUber::destroy_generator() {
}
// Range: 0x80161D60 -> 0x80161D64
void zObjectSystemUber::scene_enter() {
}
// Range: 0x80161D70 -> 0x80161D74
void zObjectSystemUber::scene_exit() {
}
// signature: zObjectSystemUber::update(float)
// Range: 0x80161D80 -> 0x80161D84
void zObjectSystemUber::update() {
}
// Range: 0x80161D90 -> 0x80161D98
int zObjectSystemUber::get_asset_size() const {
}
// signature: zObjectSystemUber::updateObjects(unsigned char *, int, float, void *)
// Range: 0x80161DA0 -> 0x80162844
int zObjectSystemUber::updateObjects(int count /* r16 */, float dt /* f14 */, void * context /* r17 */) {
    // Local variables
    class zObjectGeneratorUber * gen; // r0
    class UberStruct * uberAsset; // r30
    class BroadBound bounds; // r1+0x118
    class xVec3 accelDir; // r1+0x6C
    class zGradientCurve * speedCurve; // r29
    float speedMin; // r1+0x19C
    float speedMax; // r1+0x198
    class zGradientCurve * accelCurve; // r28
    float accelMin; // f26
    float accelMax; // r1+0x194
    class zGradientCurve * colorCurve; // r27
    class _xFColor * colorMin; // r0
    class _xFColor * colorMax; // r0
    class zGradientCurve * alphaCurve; // r26
    float alphaMin; // f25
    float alphaMax; // r1+0x190
    class zGradientCurve * widthCurve; // r25
    float widthMin; // f24
    float widthMax; // f23
    class zGradientCurve * heightCurve; // r24
    float heightMin; // f22
    float heightMax; // f21
    class zGradientCurve * depthCurve; // r23
    float depthMin; // f20
    float depthMax; // f19
    class zGradientCurve * omegaCurve; // r22
    float omegaMin; // f18
    float omegaMax; // r1+0x18C
    unsigned char animRows; // r21
    unsigned char animCols; // r20
    float fps; // r1+0x188
    class object_instance * p; // r19
    class object_instance * end; // r14
    bool drawOnly; // r15

    {
        // Range: 0x80161F5C -> 0x80161F5C
        // Local variables
        int i; // r15

        {
            // Range: 0x80161F5C -> 0x80161F5C
            // Local variables
            class xVec2 maxUV; // r1+0x30
            class xVec2 minUV; // r1+0x38
            float depth; // f0
            float height; // f18
            float width; // f17
        }
    }
    {
        // Range: 0x801620BC -> 0x80162788
        // Local variables
        int i; // r18

        {
            // Range: 0x801620BC -> 0x80162788
            // Local variables
            class UVMovementInstanceData * iD; // r1+0x8
            class xMat4x3 renderMat; // r1+0x138
            class xVec2 maxUV; // r1+0x20
            class xVec2 minUV; // r1+0x28
            float depth; // f0
            float height; // f15
            float width; // f16
            float alpha; // f17

            {
                // Range: 0x801620BC -> 0x801620D0
                // Local variables
                float accel; // f0
                float speed; // f0
                float t; // f16

                {
                    // Range: 0x801620BC -> 0x801620C0
                    // Local variables
                    class xVec3 dpos; // r1+0x60
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zObjectGeneratorUber::emit(int, const xMat4x3 *, xVec3 *, float, zObjectGeneratorSpawnPt *)
// Range: 0x80162910 -> 0x80162FFC
unsigned int zObjectGeneratorUber::emit(class zObjectGeneratorUber * this /* r27 */, class xMat4x3 * mat /* r28 */, class xVec3 * dLoc /* r29 */, float dLocScale /* f31 */, class zObjectGeneratorSpawnPt * owner /* r30 */) {
    // Local variables
    class object_instance * p; // r31

    {
        // Range: 0x80162DB8 -> 0x80162FC0
        // Local variables
        float lifeDelta; // f1
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zQueue objPool;
}
// Range: 0x80163040 -> 0x801630D4
void zObjectGeneratorUber::reset(class zObjectGeneratorUber * this /* r30 */, class zObjectGeneratorSpawnPt * spt /* r31 */) {
}
// Range: 0x801630E0 -> 0x80163138
void zObjectGeneratorUber::activate(class zObjectGeneratorUber * this /* r29 */, class zObjectGeneratorSpawnPt * spt /* r30 */, class xEnt * ent /* r31 */) {
}
// signature: zObjectGeneratorUber::deactivate(xEnt *)
// Range: 0x80163140 -> 0x80163174
void zObjectGeneratorUber::deactivate(class zObjectGeneratorUber * this /* r31 */) {
}
