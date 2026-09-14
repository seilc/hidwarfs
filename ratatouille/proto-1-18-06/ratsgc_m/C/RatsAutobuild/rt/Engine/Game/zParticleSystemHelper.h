/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zParticleSystemHelper.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012956C -> 0x8012A514
*/
// Range: 0x8012956C -> 0x80129594
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x80129594 -> 0x801295A0
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x801295A0 -> 0x801295C8
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x801295C8 -> 0x801295D4
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x801295D4 -> 0x801295FC
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x801295FC -> 0x80129608
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x80129608 -> 0x80129630
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x80129630 -> 0x8012963C
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x8012963C -> 0x80129664
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x80129664 -> 0x80129670
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x80129670 -> 0x80129698
// this: r0
void RegisterOnFirstEmitSystem::SceneInit() {}

// Range: 0x80129698 -> 0x801296A4
// this: r0
void zParticleSystemHelper::Reset() {}

// Range: 0x80129714 -> 0x80129744
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x801297B4 -> 0x801297E4
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x80129854 -> 0x80129884
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x801298F4 -> 0x80129924
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x80129994 -> 0x801299C4
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x80129A34 -> 0x80129A64
// this: r31
zParticleSystemHelper::zParticleSystemHelper() {}

// Range: 0x80129A64 -> 0x80129ACC
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80129ACC -> 0x80129AEC
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x80129AEC -> 0x80129B3C
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x80129B3C -> 0x80129C5C
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r3 */, int count /* r26 */, struct ptank_pool & base_pool /* r5 */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size_uv2 * pool; // r30
    union padded_particle * padded_particles; // r29
    int source_particle_index; // r28
    union padded_particle * cur_padded_particle; // r27
    class zParticleUVStaticTile * last_particle; // r4
    struct RwSphere worldsph; // r1+0x8

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x80129C5C -> 0x80129CC4
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80129CC4 -> 0x80129CE4
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x80129CE4 -> 0x80129D34
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x80129D34 -> 0x80129E54
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r3 */, int count /* r26 */, struct ptank_pool & base_pool /* r5 */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r30
    union padded_particle * padded_particles; // r29
    int source_particle_index; // r28
    union padded_particle * cur_padded_particle; // r27
    class zParticleEmitterConeSurface * last_particle; // r4
    struct RwSphere worldsph; // r1+0x8

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x80129E54 -> 0x80129EBC
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x80129EBC -> 0x80129EDC
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x80129EDC -> 0x80129F2C
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x80129F2C -> 0x8012A04C
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r3 */, int count /* r26 */, struct ptank_pool & base_pool /* r5 */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r30
    union padded_particle * padded_particles; // r29
    int source_particle_index; // r28
    union padded_particle * cur_padded_particle; // r27
    class zParticleEmitterConeVolume * last_particle; // r4
    struct RwSphere worldsph; // r1+0x8

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8012A04C -> 0x8012A0B4
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8012A0B4 -> 0x8012A0D4
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x8012A0D4 -> 0x8012A124
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x8012A124 -> 0x8012A18C
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8012A18C -> 0x8012A1AC
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x8012A1AC -> 0x8012A1FC
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x8012A1FC -> 0x8012A31C
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r3 */, int count /* r26 */, struct ptank_pool & base_pool /* r5 */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r30
    union padded_particle * padded_particles; // r29
    int source_particle_index; // r28
    union padded_particle * cur_padded_particle; // r27
    class zParticleEmitterConeVolume * last_particle; // r4
    struct RwSphere worldsph; // r1+0x8

    // References
    // -> struct xGlobals * xglobals;
}

// Range: 0x8012A31C -> 0x8012A384
// this: r31
void RegisterOnFirstEmitSystem::Register(unsigned int src_blend /* r0 */, unsigned int dst_blend /* r0 */, int flags /* r0 */, void * context /* r0 */, struct RwTexture * texture /* r0 */) {
    // Local variables
    struct xParticleBatchSystem particles; // r1+0x8

    // References
    // -> unsigned int gActiveHeap;
}

// Range: 0x8012A384 -> 0x8012A3A4
void RegisterOnFirstEmitSystem::UnRegister(class RegisterOnFirstEmitSystem * system /* r0 */) {}

// Range: 0x8012A3A4 -> 0x8012A3F4
// this: r31
void zParticleSystemHelper::Init(struct xParticleBatchSystem & params /* r4 */) {}

// Range: 0x8012A3F4 -> 0x8012A514
int zParticleSystemHelperEmitter::Update(unsigned char * mem /* r3 */, int count /* r26 */, struct ptank_pool & base_pool /* r5 */, float dt /* f31 */) {
    // Local variables
    struct ptank_pool__pos_color_size * pool; // r30
    union padded_particle * padded_particles; // r29
    int source_particle_index; // r28
    union padded_particle * cur_padded_particle; // r27
    class zParticleEmitterConeVolume * last_particle; // r4
    struct RwSphere worldsph; // r1+0x8

    // References
    // -> struct xGlobals * xglobals;
}


