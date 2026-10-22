/*
    Compile unit: C:\TestBuild\in\Core\p2\arraycondes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x14
class __partial_array_destructor {
    // Members
public:
    void * p; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int n; // offset 0x8, size 0x4
    void * dtor; // offset 0xC, size 0x4
    unsigned int i; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\arraycondes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE0F0 -> 0x002BE214
*/
// Range: 0x2BE0F0 -> 0x2BE214
void __construct_array(void * ptr /* r2 */, void * ctor /* r21 */, void * dtor /* r2 */, unsigned int size /* r20 */, unsigned int n /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2BE0F0 -> 0x2BE214
        class __partial_array_destructor pad; // r29+0x90
        char * p; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\arraycondes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE220 -> 0x002BE364
*/
// Range: 0x2BE220 -> 0x2BE364
void * __construct_new_array(void * block /* r2 */, void * ctor /* r21 */, void * dtor /* r2 */, unsigned int size /* r20 */, unsigned int n /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2BE220 -> 0x2BE364
        char * ptr; // r18
        class __partial_array_destructor pad; // r29+0xA0
        char * p; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\arraycondes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002BE370 -> 0x002BE378
*/
// Range: 0x2BE370 -> 0x2BE378
void operator delete() {
    /* anonymous block */ {
        // Range: 0x2BE370 -> 0x2BE378
    }
}


