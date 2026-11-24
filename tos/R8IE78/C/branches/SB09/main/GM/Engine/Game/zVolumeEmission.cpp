/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zVolumeEmission.cpp
*/
class model_volume * modelData; // size: 0x4, address: 0x80734B88
class NumberPool sModelIndices; // size: 0x14, address: 0x80734B8C
// signature: FX::Locator::Box::GetVertex(xVec3 &, float, float, float, int)
// Range: 0x800C3480 -> 0x800C3550
void FX::Locator::Box::GetVertex() {
}
// Range: 0x800C3550 -> 0x800C36D4
void FX::Locator::Model::get_offset_surface_impl(class xVec3 & offset /* r29 */, class hkpShape * shape /* r30 */, int idx /* r31 */) {
    {
        // Range: 0x800C35A4 -> 0x800C35EC
        // Local variables
        int stride; // r8
    }
    {
        // Range: 0x800C35EC -> 0x800C3664
        // Local variables
        class hkVector4 rotvec; // r1+0x20
        class hkVector4 preRot; // r1+0x30
        class hkpConvexTransformShape * tshape; // r0
    }
    {
        // Range: 0x800C3664 -> 0x800C3694
        // Local variables
        class hkpConvexTranslateShape * tshape; // r0
    }
    {
        // Range: 0x800C3694 -> 0x800C36B8
        // Local variables
        class hkVector4 halfExtents; // r1+0x10
    }
}
// Range: 0x800C3780 -> 0x800C3898
void FX::Locator::Model::get_offset_surface_impl(int & outModelIndex /* r29 */, class xVec3 & offset /* r30 */, class model_volume & data /* r31 */) {
    // Local variables
    int idx; // r1+0x10
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // reg65535

    {
        // Range: 0x800C37E0 -> 0x800C386C
        // Local variables
        class hkpShape * childShape; // r0
        char buf[512]; // r1+0x20
        unsigned int key; // r4
        class hkpListShape * pShape; // r31
    }
}
// signature: FX::Locator::Model::get_offset_vert_impl(xVec3 &, const FX::model_volume &, const hkpShape *, int)
// Range: 0x800C3920 -> 0x800C3A8C
void FX::Locator::Model::get_offset_vert_impl(class xVec3 & offset /* r29 */, class hkpShape * shape /* r30 */, int vert_index /* r31 */) {
    {
        // Range: 0x800C3974 -> 0x800C39A4
        // Local variables
        float * vert; // r4
    }
    {
        // Range: 0x800C39A4 -> 0x800C3A1C
        // Local variables
        class hkVector4 rotvec; // r1+0x20
        class hkVector4 preRot; // r1+0x30
        class hkpConvexTransformShape * tshape; // r0
    }
    {
        // Range: 0x800C3A1C -> 0x800C3A4C
        // Local variables
        class hkpConvexTranslateShape * tshape; // r0
    }
    {
        // Range: 0x800C3A4C -> 0x800C3A70
        // Local variables
        class hkVector4 halfExtents; // r1+0x10
    }
}
// Range: 0x800C3A90 -> 0x800C3BB0
void FX::Locator::Model::get_offset_vert_impl(int & outModelIndex /* r28 */, class xVec3 & offset /* r29 */, class model_volume & data /* r30 */) {
    // Local variables
    int vert_index; // r1+0x10
    class ModelPrototypeEntity * modelProto; // r0
    class hkpShape * shape; // reg65535

    {
        // Range: 0x800C3AF0 -> 0x800C3B80
        // Local variables
        class hkpShape * childShape; // r0
        char buf[512]; // r1+0x20
        unsigned int key; // r4
        class hkpListShape * pShape; // r31
    }
}
// signature: FX::Locator::Model::get_offset_vert(xVec3 &, const int)
// Range: 0x800C3BB0 -> 0x800C3BEC
void FX::Locator::Model::get_offset_vert(int volumeIdx /* r0 */) {
    // Local variables
    int modelIndex; // r1+0x8

    // References
    // -> class model_volume * modelData;
}
// signature: FX::Locator::Model::get_offset_surface(xVec3 &, const int)
// Range: 0x800C3BF0 -> 0x800C3C2C
void FX::Locator::Model::get_offset_surface(int volumeIdx /* r0 */) {
    // Local variables
    int modelIndex; // r1+0x8

    // References
    // -> class model_volume * modelData;
}
// signature: FX::Locator::Model::get_offset_vert_vol(xVec3 &, const int)
// Range: 0x800C3C30 -> 0x800C3CE4
void FX::Locator::Model::get_offset_vert_vol(class xVec3 & offset /* r30 */) {
    // Local variables
    class model_volume & volume; // r31
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f1

    // References
    // -> class model_volume * modelData;
}
// signature: FX::Locator::Model::get_offset_surface_vol(xVec3 &, const int)
// Range: 0x800C3CF0 -> 0x800C3DA4
void FX::Locator::Model::get_offset_surface_vol(class xVec3 & offset /* r30 */) {
    // Local variables
    class model_volume & volume; // r31
    int modelIndex; // r1+0x8
    class xVec3 diff; // r1+0xC
    float scaleVal; // f1

    // References
    // -> class model_volume * modelData;
}
// signature: FX::Locator::Model::get_shape_data(int &, int &, xVec3 &, const hkpShape *)
// Range: 0x800C3DB0 -> 0x800C3FFC
bool FX::Locator::Model::get_shape_data(int & outNumVertices /* r30 */, class xVec3 & outCenter /* r31 */, class hkpShape * inShape /* r29 */) {
    {
        // Range: 0x800C3E10 -> 0x800C3ECC
        // Local variables
        float * vert; // r4
        class xVec3 vertTotal; // r1+0x60

        {
            // Range: 0x800C3E3C -> 0x800C3E90
            // Local variables
            int idx; // r5
        }
    }
    {
        // Range: 0x800C3ECC -> 0x800C3F30
        // Local variables
        class hkVector4 trans; // r1+0x40
        class hkVector4 centre; // r1+0x50
    }
    {
        // Range: 0x800C3F30 -> 0x800C3F94
        // Local variables
        class hkVector4 trans; // r1+0x20
        class hkVector4 centre; // r1+0x30
    }
    {
        // Range: 0x800C3F94 -> 0x800C3FD0
        // Local variables
        class hkVector4 centre; // r1+0x10
    }
}
// Range: 0x800C4000 -> 0x800C4048
void FX::Locator::Model::release_volume(class activity_data & activity /* r31 */) {
    // References
    // -> class NumberPool sModelIndices;
}
// signature: FX::Locator::Model::setup_volume(FX::activity_data &, const World::ModelInstanceAsset &, const xVec3 &, bool, bool, Sext::uid)
// Range: 0x800C4050 -> 0x800C42C0
bool FX::Locator::Model::setup_volume(class activity_data & activity /* r26 */, class ModelInstanceAsset & inModelInstance /* r27 */, class xVec3 & inScale /* r25 */, bool inVertexEmit /* r24 */, bool inEdgeVolume /* r23 */) {
    // Local variables
    class model_volume & volume; // r31
    int model_index; // r0
    int models_size; // r30
    int total_vertices; // r29
    int total_surfaces; // r28

    {
        // Range: 0x800C4108 -> 0x800C4288
        // Local variables
        class hkpShape * shape; // r3
        class ModelPrototypeEntity * modelProto; // r0
        class ModelInstanceAsset & m; // r0

        {
            // Range: 0x800C4158 -> 0x800C422C
            // Local variables
            char buf[512]; // r1+0x20
            class hkpListShape * pShape; // r24

            {
                // Range: 0x800C4164 -> 0x800C422C
                // Local variables
                unsigned int key; // r23

                {
                    // Range: 0x800C4164 -> 0x800C422C
                    // Local variables
                    int surfaces; // r1+0x18
                    int size; // r1+0x1C
                    class hkpShape * childShape; // r0
                }
            }
        }
        {
            // Range: 0x800C422C -> 0x800C4288
            // Local variables
            int surfaces; // r1+0x10
            int size; // r1+0x14
        }
    }

    // References
    // -> class model_volume * modelData;
    // -> class NumberPool sModelIndices;
}
