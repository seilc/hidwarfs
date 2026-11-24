/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCEntity.h
*/
// Range: 0x801038E0 -> 0x80103908
void * zNPCEntityParams::zNPCEntityParams() {
}
// Range: 0x800DCA70 -> 0x800DCA88
float zNPCBound::GetBoundRadiusXZ() const {
}
// signature: zNPCRayHitCollector::zNPCRayHitCollector(const xBase *)
// Range: 0x800E5FB0 -> 0x800E5FE0
void * zNPCRayHitCollector::zNPCRayHitCollector() {
    // References
    // -> struct {} __vt__19zNPCRayHitCollector;
}
// signature: zNPCRayHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801023E0 -> 0x80102498
void zNPCRayHitCollector::addRayHit(class zNPCRayHitCollector * this /* r30 */, class hkpShapeRayCastCollectorOutput & hitInfo /* r31 */) {
    // Local variables
    class hkpCollidable * collidable; // r0
    class hkpWorldObject * worldObject; // r0
    class xBase * base; // r0
}
// Range: 0x800E89D0 -> 0x800E89E0
float zNPCEntity::GetYaw() const {
}
// Range: 0x801023D0 -> 0x801023DC
class xVec3 * zNPCEntity::GetDPos() {
}
// Range: 0x800EF2A0 -> 0x800EF2F0
void zNPCEntity::GetBoundCenter(class zNPCEntity * this /* r5 */, class xVec3 & boundCenter /* r30 */) const {
}
// Range: 0x80027BA0 -> 0x80027BD8
class hkpShapePhantom * zNPCEntity::GetPhantomObject() {
    // Local variables
    class hkpCharacterProxy * proxy; // r0
}
