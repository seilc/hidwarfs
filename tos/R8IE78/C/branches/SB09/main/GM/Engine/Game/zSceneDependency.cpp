/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSceneDependency.cpp
*/
int sceneDependencyCount; // size: 0x4, address: 0x80754E24
int thisSceneLoadListCount; // size: 0x4, address: 0x80754E28
int nextSceneLoadListCount; // size: 0x4, address: 0x80754E2C
int currentScene; // size: 0x4, address: 0x80754E30
class DependencyEntry sceneDependencies[64]; // size: 0x2200, address: 0x80754E38
class SceneRecord thisSceneLoadList[2]; // size: 0x108, address: 0x80757038
class SceneRecord nextSceneLoadList[2]; // size: 0x108, address: 0x80757140
int startLoadHere; // size: 0x4, address: 0x80757248
int stopUnloadHere; // size: 0x4, address: 0x8075724C
bool isPartial; // size: 0x1, address: 0x80757250
// Range: 0x80167030 -> 0x801670B0
void zSceneDependency::Reset() {
    // References
    // -> class SceneRecord nextSceneLoadList[2];
    // -> class SceneRecord thisSceneLoadList[2];
    // -> bool isPartial;
    // -> int stopUnloadHere;
    // -> int startLoadHere;
    // -> int currentScene;
    // -> int nextSceneLoadListCount;
    // -> int thisSceneLoadListCount;
    // -> class DependencyEntry sceneDependencies[64];
    // -> int sceneDependencyCount;
}
// Range: 0x801670B0 -> 0x801673A4
void zSceneDependency::ParseSceneDependencies(class xIniFile * ini /* r25 */) {
    // Local variables
    class xIniSection * section; // r0
    char * str; // r0
    int index; // r1+0x8

    {
        // Range: 0x80167100 -> 0x80167390
        // Local variables
        int i; // r26

        {
            // Range: 0x80167100 -> 0x80167390
            // Local variables
            unsigned short baseStringLength; // r22
            char * tok; // r23
            char localStr[1024]; // r1+0x10

            {
                // Range: 0x80167100 -> 0x801671B0
                // Local variables
                int j; // r5
            }
        }
    }

    // References
    // -> class DependencyEntry sceneDependencies[64];
    // -> class __locale _current_locale;
    // -> int sceneDependencyCount;
}
// signature: zSceneDependency::_BuildSceneList(unsigned int, const char *, zSceneDependency::SceneRecord *, int &)
// Range: 0x801673B0 -> 0x801674E4
void zSceneDependency::_BuildSceneList(class SceneRecord * list /* r27 */, int & count /* r28 */) {
    // Local variables
    int currIdx; // r30

    {
        // Range: 0x80167408 -> 0x801674BC
        // Local variables
        int i; // r29

        {
            // Range: 0x8016741C -> 0x801674BC
            // Local variables
            bool hasIt; // r7

            {
                // Range: 0x8016743C -> 0x80167470
                // Local variables
                int j; // r0
            }
        }
    }

    // References
    // -> int sceneDependencyCount;
    // -> class DependencyEntry sceneDependencies[64];
}
// signature: zSceneDependency::BuildSceneList(unsigned int, const char *)
// Range: 0x801674F0 -> 0x801675AC
void zSceneDependency::BuildSceneList(char * sceneLayer /* r26 */) {
    {
        // Range: 0x8016753C -> 0x80167578
        // Local variables
        int i; // r27
    }

    // References
    // -> class SceneRecord nextSceneLoadList[2];
    // -> int startLoadHere;
    // -> int thisSceneLoadListCount;
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int nextSceneLoadListCount;
}
// Range: 0x801675B0 -> 0x801676C8
void zSceneDependency::PrepareForUnload(unsigned int nextSceneID /* r30 */) {
    {
        // Range: 0x801675DC -> 0x80167668
        // Local variables
        int j; // r11
        int i; // r10
    }

    // References
    // -> int currentScene;
    // -> bool isPartial;
    // -> int startLoadHere;
    // -> int stopUnloadHere;
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int thisSceneLoadListCount;
    // -> class zGlobals globals;
    // -> int nextSceneLoadListCount;
    // -> class SceneRecord nextSceneLoadList[2];
}
// signature: zSceneDependency::NextSceneToLoad(char *)
// Range: 0x801676D0 -> 0x80167744
unsigned int zSceneDependency::NextSceneToLoad() {
    // Local variables
    unsigned int ret; // r0

    // References
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int currentScene;
}
// Range: 0x80167750 -> 0x80167788
unsigned int zSceneDependency::NextSceneToUnload() {
    // Local variables
    unsigned int ret; // r0

    // References
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int stopUnloadHere;
    // -> int currentScene;
}
