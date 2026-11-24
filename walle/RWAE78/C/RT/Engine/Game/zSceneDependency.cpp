/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSceneDependency.cpp
*/
int sceneDependencyCount; // size: 0x4, address: 0x80799A20
int thisSceneLoadListCount; // size: 0x4, address: 0x80799A24
int nextSceneLoadListCount; // size: 0x4, address: 0x80799A28
int currentScene; // size: 0x4, address: 0x80799A2C
class DependencyEntry sceneDependencies[64]; // size: 0x2200, address: 0x80799A30
class SceneRecord thisSceneLoadList[2]; // size: 0x108, address: 0x8079BC30
class SceneRecord nextSceneLoadList[2]; // size: 0x108, address: 0x8079BD38
int startLoadHere; // size: 0x4, address: 0x8079BE40
int stopUnloadHere; // size: 0x4, address: 0x8079BE44
bool isPartial; // size: 0x1, address: 0x8079BE48
// Range: 0x801BB120 -> 0x801BB45C
void zSceneDependency::ParseSceneDependencies(class xIniFile * ini /* r26 */) {
    // Local variables
    class xIniSection * section; // r0
    char * str; // r0
    int index; // r1+0x8

    {
        // Range: 0x801BB1BC -> 0x801BB428
        // Local variables
        int i; // r27

        {
            // Range: 0x801BB1BC -> 0x801BB428
            // Local variables
            unsigned short baseStringLength; // r24
            char * tok; // r25
            char localStr[1024]; // r1+0x10

            {
                // Range: 0x801BB1BC -> 0x801BB1BC
                // Local variables
                int j; // r5
            }
        }
    }

    // References
    // -> class __locale _current_locale;
    // -> class SceneRecord nextSceneLoadList[2];
    // -> class SceneRecord thisSceneLoadList[2];
    // -> bool isPartial;
    // -> int stopUnloadHere;
    // -> int startLoadHere;
    // -> int currentScene;
    // -> int nextSceneLoadListCount;
    // -> int thisSceneLoadListCount;
    // -> int sceneDependencyCount;
    // -> class DependencyEntry sceneDependencies[64];
}
// signature: zSceneDependency::_BuildSceneList(unsigned int, const char *, zSceneDependency::SceneRecord *, int &)
// Range: 0x801BB460 -> 0x801BB590
void zSceneDependency::_BuildSceneList(class SceneRecord * list /* r25 */, int * count /* r26 */) {
    // Local variables
    int currIdx; // r28

    {
        // Range: 0x801BB4B0 -> 0x801BB4B0
        // Local variables
        int i; // r27

        {
            // Range: 0x801BB4B0 -> 0x801BB4B0
            // Local variables
            bool hasIt; // r6

            {
                // Range: 0x801BB4B0 -> 0x801BB4B0
                // Local variables
                int j; // r0
            }
        }
    }

    // References
    // -> class DependencyEntry sceneDependencies[64];
    // -> int sceneDependencyCount;
}
// Range: 0x801BB590 -> 0x801BB6C4
void zSceneDependency::PrepareForUnload(unsigned int nextSceneID /* r29 */) {
    {
        // Range: 0x801BB5C8 -> 0x801BB65C
        // Local variables
        int j; // r9
        int i; // r8
    }

    // References
    // -> int currentScene;
    // -> bool isPartial;
    // -> int startLoadHere;
    // -> int stopUnloadHere;
    // -> class SceneRecord thisSceneLoadList[2];
    // -> int thisSceneLoadListCount;
    // -> class zGlobals globals;
    // -> class SceneRecord nextSceneLoadList[2];
    // -> int nextSceneLoadListCount;
}
