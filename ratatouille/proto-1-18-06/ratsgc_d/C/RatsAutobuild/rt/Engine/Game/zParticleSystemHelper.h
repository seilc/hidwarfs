/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleSystemHelper.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023E510 -> 0x8023FA7C
*/
// Range: 0x8023E510 -> 0x8023E544
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E544 -> 0x8023E550
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E550 -> 0x8023E584
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E584 -> 0x8023E590
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E590 -> 0x8023E5C4
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E5C4 -> 0x8023E5D0
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E5D0 -> 0x8023E604
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E604 -> 0x8023E610
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E610 -> 0x8023E644
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E644 -> 0x8023E650
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E650 -> 0x8023E684
// this: r31
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x8023E684 -> 0x8023E690
// this: r3
void zParticleSystemHelper::Reset() {}

// Range: 0x8023E700 -> 0x8023E730
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023E7A0 -> 0x8023E7D0
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023E840 -> 0x8023E870
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023E8E0 -> 0x8023E910
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023E980 -> 0x8023E9B0
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023EA20 -> 0x8023EA50
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x8023EA50 -> 0x8023EB0C
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__263RegisterOnFirstEmitSystem<213zParticleUVStaticTile<3,3,183zParticleEmitterConeSurface<151zParticleColorWhiteFadeOut<120zParticleMoverLinearDecel<91zParticleRadiusConst<67zParticlePoolType<30ptank_pool__pos_color_size_uv2,13zParticleBase>>>>>>,17EnergyPulseSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023EB0C -> 0x8023EB34
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023EB34 -> 0x8023EC08
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__259zParticleSystemHelper<213zParticleUVStaticTile<3,3,183zParticleEmitterConeSurface<151zParticleColorWhiteFadeOut<120zParticleMoverLinearDecel<91zParticleRadiusConst<67zParticlePoolType<30ptank_pool__pos_color_size_uv2,13zParticleBase>>>>>>,17EnergyPulseSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023EC08 -> 0x8023ED34
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r1+0x8 */, int count /* r31 */, struct ptank_pool & base_pool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size_uv2 * pool; // r28
    union padded_particle * padded_particles; // r26
    int source_particle_index; // r27
    union padded_particle * cur_padded_particle; // r30
    class zParticleUVStaticTile * particle; // r29
    class zParticleUVStaticTile * last_particle; // r25
    struct RwSphere worldsph; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8023ED34 -> 0x8023EDF0
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__221RegisterOnFirstEmitSystem<176zParticleEmitterConeSurface<144zParticleColorWhiteOpaque<114zParticleMoverGravity<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,12RubbleSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023EDF0 -> 0x8023EE18
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023EE18 -> 0x8023EEEC
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__217zParticleSystemHelper<176zParticleEmitterConeSurface<144zParticleColorWhiteOpaque<114zParticleMoverGravity<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,12RubbleSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023EEEC -> 0x8023F018
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r1+0x8 */, int count /* r31 */, struct ptank_pool & base_pool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r28
    union padded_particle * padded_particles; // r26
    int source_particle_index; // r27
    union padded_particle * cur_padded_particle; // r30
    class zParticleEmitterConeSurface * particle; // r29
    class zParticleEmitterConeSurface * last_particle; // r25
    struct RwSphere worldsph; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8023F018 -> 0x8023F0D4
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__228RegisterOnFirstEmitSystem<180zParticleEmitterConeVolume<149zParticleColorToBlackFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,15FlameConeSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023F0D4 -> 0x8023F0FC
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023F0FC -> 0x8023F1D0
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__224zParticleSystemHelper<180zParticleEmitterConeVolume<149zParticleColorToBlackFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,15FlameConeSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023F1D0 -> 0x8023F2FC
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r1+0x8 */, int count /* r31 */, struct ptank_pool & base_pool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r28
    union padded_particle * padded_particles; // r26
    int source_particle_index; // r27
    union padded_particle * cur_padded_particle; // r30
    class zParticleEmitterConeVolume * particle; // r29
    class zParticleEmitterConeVolume * last_particle; // r25
    struct RwSphere worldsph; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8023F2FC -> 0x8023F3B8
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__228RegisterOnFirstEmitSystem<180zParticleEmitterConeVolume<149zParticleColorToBlackFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,15SmokePuffSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023F3B8 -> 0x8023F3E0
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023F3E0 -> 0x8023F4B4
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__224zParticleSystemHelper<180zParticleEmitterConeVolume<149zParticleColorToBlackFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,15SmokePuffSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023F4B4 -> 0x8023F570
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__225RegisterOnFirstEmitSystem<178zParticleEmitterConeVolume<147zParticleColorWhiteFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,14LavaDripSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023F570 -> 0x8023F598
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023F598 -> 0x8023F66C
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__221zParticleSystemHelper<178zParticleEmitterConeVolume<147zParticleColorWhiteFadeOut<116zParticleMoverLinearVel<89zParticleRadiusPercent<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,14LavaDripSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023F66C -> 0x8023F798
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r1+0x8 */, int count /* r31 */, struct ptank_pool & base_pool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r28
    union padded_particle * padded_particles; // r26
    int source_particle_index; // r27
    union padded_particle * cur_padded_particle; // r30
    class zParticleEmitterConeVolume * particle; // r29
    class zParticleEmitterConeVolume * last_particle; // r25
    struct RwSphere worldsph; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8023F798 -> 0x8023F854
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r1+0x8 */, unsigned int dst_blend /* r1+0xC */, int flags /* r1+0x10 */, void * context /* r1+0x14 */, struct RwTexture * texture /* r1+0x18 */, const char * dbgFile /* r1+0x1C */, int dbgLine /* r1+0x20 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x24

    // References
    // -> char __FUNCTION__$localstatic1$Register__218RegisterOnFirstEmitSystem<174zParticleEmitterConeVolume<143zParticleColorWhiteFadeOut<112zParticleMoverGravity<87zParticleRadiusConst<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,11SparkSystem>FUiUiiPvP9RwTexturePCci[9];
    // -> unsigned int gActiveHeap;
}

// Range: 0x8023F854 -> 0x8023F87C
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r1+0x8 */) {}

// Range: 0x8023F87C -> 0x8023F950
// this: r30
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r31 */, const char * dbgFile /* r1+0x8 */, int dbgLine /* r1+0xC */) {
    // References
    // -> char __FUNCTION__$localstatic1$Init__214zParticleSystemHelper<174zParticleEmitterConeVolume<143zParticleColorWhiteFadeOut<112zParticleMoverGravity<87zParticleRadiusConst<63zParticlePoolType<26ptank_pool__pos_color_size,13zParticleBase>>>>>,11SparkSystem>FR20xParticleBatchSystemPCci[5];
}

// Range: 0x8023F950 -> 0x8023FA7C
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r1+0x8 */, int count /* r31 */, struct ptank_pool & base_pool /* r1+0xC */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r28
    union padded_particle * padded_particles; // r26
    int source_particle_index; // r27
    union padded_particle * cur_padded_particle; // r30
    class zParticleEmitterConeVolume * particle; // r29
    class zParticleEmitterConeVolume * last_particle; // r25
    struct RwSphere worldsph; // r1+0x10

    // References
    // -> struct xGlobals * xglobals;
}


