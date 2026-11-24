/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSceneDependency.cpp
*/
int sceneDependencyCount; // size: 0x4, address: 0x8082650C
int thisSceneLoadListCount; // size: 0x4, address: 0x80826510
int nextSceneLoadListCount; // size: 0x4, address: 0x80826514
int currentScene; // size: 0x4, address: 0x80826518
class DependencyEntry sceneDependencies[64]; // size: 0x2200, address: 0x80826520
class SceneRecord thisSceneLoadList[2]; // size: 0x108, address: 0x80828720
class SceneRecord nextSceneLoadList[2]; // size: 0x108, address: 0x80828828
int startLoadHere; // size: 0x4, address: 0x80828930
int stopUnloadHere; // size: 0x4, address: 0x80828934
bool isPartial; // size: 0x1, address: 0x80828938
// Range: 0x8024C410 -> 0x8024C744
void zSceneDependency::ParseSceneDependencies(class xIniFile * ini /* r26 */) {
    // Local variables
    class xIniSection * section; // r0
    char * str; // r0
    int index; // r1+0x8

    {
        // Range: 0x8024C4A8 -> 0x8024C710
        // Local variables
        int i; // r27

        {
            // Range: 0x8024C4A8 -> 0x8024C710
            // Local variables
            unsigned short baseStringLength; // r24
            char * tok; // r25
            char localStr[1024]; // r1+0x10

            {
                // Range: 0x8024C4A8 -> 0x8024C4A8
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
// Range: 0x8024C750 -> 0x8024C880
void zSceneDependency::_BuildSceneList(class SceneRecord * list /* r25 */, int & count /* r26 */) {
    // Local variables
    int currIdx; // r28

    {
        // Range: 0x8024C7A0 -> 0x8024C7A0
        // Local variables
        int i; // r27

        {
            // Range: 0x8024C7A0 -> 0x8024C7A0
            // Local variables
            bool hasIt; // r6

            {
                // Range: 0x8024C7A0 -> 0x8024C7A0
                // Local variables
                int j; // r0
            }
        }
    }

    // References
    // -> class DependencyEntry sceneDependencies[64];
    // -> int sceneDependencyCount;
}
// Range: 0x8024C880 -> 0x8024C9A8
void zSceneDependency::PrepareForUnload(unsigned int nextSceneID /* r30 */) {
    {
        // Range: 0x8024C8B0 -> 0x8024C944
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
    // -> int nextSceneLoadListCount;
    // -> class SceneRecord nextSceneLoadList[2];
}
