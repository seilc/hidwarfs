/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B5A0 -> 0x8021A3B0
*/
// total size: 0x18
class CasterSort {
    // Members
    class @class distanceSqr; // offset 0x0, size 0x4
    bool largeCaster; // offset 0x4, size 0x1
    bool simpleIfNeeded; // offset 0x5, size 0x1
    int rendIndex; // offset 0x8, size 0x4
    unsigned int cacheIdx; // offset 0xC, size 0x4
    unsigned int * projectShadowCachePtr; // offset 0x10, size 0x4
    unsigned int priority; // offset 0x14, size 0x4
};
// total size: 0x4
class @class {
    // Members
    float f; // offset 0x0, size 0x4
    unsigned int i; // offset 0x0, size 0x4
};
// total size: 0x1
class less {};
// total size: 0x68
class StaticReceiverRayCaster {
    // Members
    class BroadBound bound; // offset 0x0, size 0x20
    class Vector boundCenter; // offset 0x20, size 0x10
    class Vector boundHalf; // offset 0x30, size 0x10
    class Vector4 capsuleStart; // offset 0x40, size 0x10
    class Vector capsuleEnd; // offset 0x50, size 0x10
    unsigned int hitFlags; // offset 0x60, size 0x4
    float minPolyDist; // offset 0x64, size 0x4
};
// total size: 0x2B5C
class ShadowCache_CapsuleNoRay : public ShadowCache {};
// total size: 0x24
class LineGradient {
    // Members
    float dxdx; // offset 0x0, size 0x4
    float dxdy; // offset 0x4, size 0x4
    float dxdz; // offset 0x8, size 0x4
    float dydx; // offset 0xC, size 0x4
    float dydy; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
    float dzdx; // offset 0x18, size 0x4
    float dzdy; // offset 0x1C, size 0x4
    float dzdz; // offset 0x20, size 0x4
};
// total size: 0x4
class FloatOrInt {
    // Members
    float fdata; // offset 0x0, size 0x4
    int idata; // offset 0x0, size 0x4
};
// total size: 0x2C
class ImmediateContext {
    // Members
    class VertexPos * verts; // offset 0x0, size 0x4
    unsigned short * indices; // offset 0x4, size 0x4
    class ImmediateGeometryEntity * geomEnt; // offset 0x8, size 0x4
    class ImmediateGeometry * geom; // offset 0xC, size 0x4
    int vertexCount; // offset 0x10, size 0x4
    int primCount; // offset 0x14, size 0x4
    int indexCount; // offset 0x18, size 0x4
    enum StateEnum state; // offset 0x1C, size 0x4
    class ImmediateGeometryContext igeomCtxt; // offset 0x20, size 0xC
};
// total size: 0xC
class VertexPos : public ImmediateVertexBase {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum StateEnum {
    STATE_ERROR = 4294967295,
    STATE_Constructed = 0,
    STATE_Committed = 1,
    STATE_Added = 2,
};
