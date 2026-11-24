/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallePlayer.h
*/
// Range: 0x801087F0 -> 0x801087F8
bool zWallePlayer::IsEveContext() {
}
// Range: 0x801940E0 -> 0x801940E8
class zNPCBase * zWallePlayer::GetSlaveNPC() {
}
// Range: 0x80196740 -> 0x80196748
bool zWallePlayer::InStorkJump() {
}
// Range: 0x801DA060 -> 0x801DA068
class xMat4x3 * zWallePlayer::GetMat() {
}
// Range: 0x801DA050 -> 0x801DA058
class xVec3 * zWallePlayer::GetDPos() {
}
// Range: 0x801980B0 -> 0x80198110
void * WalleProxyStartCollector::WalleProxyStartCollector(class WalleProxyStartCollector * this /* r30 */, class zPlayer * player /* r31 */) {
    // References
    // -> struct {} __vt__24WalleProxyStartCollector;
}
// signature: WalleProxyStartCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x801D9EE0 -> 0x801DA050
void WalleProxyStartCollector::addCdPoint(class WalleProxyStartCollector * this /* r31 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x801D9F38 -> 0x801DA030
        // Local variables
        class xBase * bodyOwner; // r0
    }
}
// signature: WalleProxyStartCollector::applyForces(float)
// Range: 0x80198110 -> 0x80198638
void WalleProxyStartCollector::applyForces(class WalleProxyStartCollector * this /* r15 */) {
    // Local variables
    class hkpCharacterObjectInteractionEvent input; // r1+0xD0

    {
        // Range: 0x801981A8 -> 0x8019854C
        // Local variables
        int c; // r16

        {
            // Range: 0x801981A8 -> 0x8019854C
            // Local variables
            class hkpCharacterObjectInteractionResult output; // r1+0x80
            float deltaVelocity; // f21

            {
                // Range: 0x801981A8 -> 0x801981AC
                // Local variables
                class hkVector4 pointVel; // r1+0x70
            }
            {
                // Range: 0x801981AC -> 0x801981AC
                // Local variables
                float maxPushImpulse; // f4

                {
                    // Range: 0x801981AC -> 0x801981AC
                    // Local variables
                    class hkVector4 rc; // r1+0x40
                    class hkVector4 jacAng; // r1+0x50
                    class hkVector4 r; // r1+0x60
                    class hkMatrix3 inertiaInv; // r1+0xA0
                }
            }
            {
                // Range: 0x801981AC -> 0x80198524
                // Local variables
                float relVel; // f1
                class hkVector4 charVelDown; // r1+0x30
            }
        }
    }
}
