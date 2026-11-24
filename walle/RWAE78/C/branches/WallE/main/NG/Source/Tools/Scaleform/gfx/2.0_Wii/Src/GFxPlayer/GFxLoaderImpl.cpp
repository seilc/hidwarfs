/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxLoaderImpl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804DF640 -> 0x804E39E8
*/
// total size: 0x4
class GPtr {
    // Members
    class GFxState * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class StatePtr {
    // Members
    class GPtr pState; // offset 0x0, size 0x4
};
// total size: 0xC
class ghashset_cached_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    unsigned long HashValue; // offset 0x4, size 0x4
    class StatePtr value; // offset 0x8, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxLoadProcess * pObject; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class GFxMovieBindProcess * pObject; // offset 0x0, size 0x4
};
// total size: 0x34
class GFxMovieBindProcess : public GRefCountBase {
    // Members
    unsigned int BindIndex; // offset 0x10, size 0x4
    unsigned int ImportIndex; // offset 0x14, size 0x4
    unsigned int FontUseIndex; // offset 0x18, size 0x4
    class GFxResourceId GlyphTextureIdGen; // offset 0x1C, size 0x4
    bool Stripped; // offset 0x20, size 0x1
    class GFxMovieDataDef * pDataDef; // offset 0x24, size 0x4
    class GFxLoadStates * pLoadStates; // offset 0x28, size 0x4
    class GPtr pDefImpl; // offset 0x2C, size 0x4
    enum BindState State; // offset 0x30, size 0x4
};
// total size: 0x10
class GRefCountBase : public GRefCountBaseImpl {};
enum BindState {
    Bind_NotStarted = 0,
    Bind_InProgress = 1,
    Bind_Finished = 2,
    Bind_Error = 3,
};
// total size: 0x1C
class GFxMovieBindTask : public GFxTask {
    // Members
    class GPtr pBindProcess; // offset 0x18, size 0x4
};
// total size: 0x18
class GFxTask : public GRefCountBase {
    // Members
    enum TaskId ThisTaskId; // offset 0x10, size 0x4
    enum TaskState CurrentState; // offset 0x14, size 0x4
};
enum TaskId {
    Id_Unknown = 0,
    Id_MovieDataLoad = 65537,
    Id_MovieImageLoad = 65538,
    Id_MovieBind = 65539,
};
enum TaskState {
    State_Idle = 0,
    State_Pending = 1,
    State_Running = 2,
    State_Abandoned = 3,
    State_Finished = 4,
};
// total size: 0x34
class GFxMovieImageLoadTask : public GFxTask {
    // Members
    class GPtr pDef; // offset 0x18, size 0x4
    class GFxString FileName; // offset 0x1C, size 0x4
    class GPtr pImageFile; // offset 0x20, size 0x4
    enum FileFormatType ImageFormat; // offset 0x24, size 0x4
    class GPtr pImageCreator; // offset 0x28, size 0x4
    class GPtr pRenderConfig; // offset 0x2C, size 0x4
    class GPtr pImageRes; // offset 0x30, size 0x4
};
// total size: 0x24
class GFxMovieDataLoadTask : public GFxTask {
    // Members
    class GPtr pDef; // offset 0x18, size 0x4
    class GPtr pLoadProcess; // offset 0x1C, size 0x4
    class GPtr pBindProcess; // offset 0x20, size 0x4
};
static char pstaticImage[229]; // size: 0xE5, address: 0x807381D8
// signature: GFxExporterInfoImpl::SetData(unsigned short, GFxFileConstants::FileFormatType, const char *, const char *, unsigned int)
// Range: 0x804DF640 -> 0x804DF6DC
void GFxExporterInfoImpl::SetData(class GFxExporterInfoImpl * this /* r29 */, char * pname /* r30 */, unsigned int flags /* r31 */) {
}
// Range: 0x804DF6E0 -> 0x804DFA4C
void * GFxLoaderImpl::GFxLoaderImpl(class GFxLoaderImpl * this /* r31 */, class GFxResourceLib * plib /* r30 */) {
    // References
    // -> struct {} __vt__15GFxImageCreator;
    // -> struct {} __vt__6GFxLog;
    // -> struct {} __vt__8GFxState;
    // -> struct {} __vt__18GFxSharedStateImpl;
    // -> struct {} __vt__13GFxLoaderImpl;
}
// Range: 0x804E0360 -> 0x804E0414
void * GFxLoaderImpl::~GFxLoaderImpl(class GFxLoaderImpl * this /* r30 */) {
}
// Range: 0x804E0420 -> 0x804E05A0
class GFxMovieDef * GFxLoaderImpl::CreateMovie(class GFxLoaderImpl * this /* r30 */, char * pfilename /* r28 */, unsigned int loadConstants /* r31 */) {
    // Local variables
    class LocationInfo loc; // r1+0x8
}
// Range: 0x804E37E0 -> 0x804E38B0
void * GFxMovieDataLoadTask::~GFxMovieDataLoadTask(class GFxMovieDataLoadTask * this /* r30 */) {
}
// Range: 0x804E1C70 -> 0x804E1C84
void GFxMovieDataLoadTask::Execute(class GFxMovieDataLoadTask * this /* r5 */) {
}
// Range: 0x804E38B0 -> 0x804E38B4
void GFxMovieDataLoadTask::Abandon() {
}
// Range: 0x804E1A70 -> 0x804E1C70
void GFxMovieImageLoadTask::Execute(class GFxMovieImageLoadTask * this /* r31 */) {
    {
        // Range: 0x804E1AC4 -> 0x804E1BD8
        // Local variables
        class GFxImageCreateInfo ico; // r1+0x8
    }

    // References
    // -> struct {} __vt__16GFxImageResource;
}
// Range: 0x804E38C0 -> 0x804E38C4
void GFxMovieImageLoadTask::Abandon() {
}
// Range: 0x804E38D0 -> 0x804E3960
void * GFxMovieBindTask::~GFxMovieBindTask(class GFxMovieBindTask * this /* r30 */) {
}
// Range: 0x804E1A30 -> 0x804E1A70
void GFxMovieBindTask::Execute(class GFxMovieBindTask * this /* r31 */) {
}
// Range: 0x804E3960 -> 0x804E3964
void GFxMovieBindTask::Abandon() {
}
// Range: 0x804E05A0 -> 0x804E1970
class GFxMovieDefImpl * GFxLoaderImpl::CreateMovie_LoadState(class GFxLoadStates * pls /* r23 */, class LocationInfo & loc /* r21 */, unsigned int loadConstants /* r24 */) {
    // Local variables
    class GFxString fileName; // r1+0x48
    class BindHandle bh; // r1+0x58
    class GFxMovieDefImpl * pm; // r26
    class GFxLog * plog; // r0
    bool movieNeedsLoading; // r22
    enum MovieDataType mtype; // r29
    class GPtr pbp; // r1+0x44
    enum FileFormatType format; // r25
    class GFxImageCreator * pkeyImageCreator; // r27
    class GFxFileOpener * pfileOpener; // r21
    unsigned long long modifyTime; // r0:r0
    class GFxResourceKey fileDataKey; // r1+0x50

    {
        // Range: 0x804E06A4 -> 0x804E0834
        // Local variables
        class GFxString s; // r1+0x40
    }
    {
        // Range: 0x804E0860 -> 0x804E0A14
        // Local variables
        class GFxString s; // r1+0x3C
    }
    {
        // Range: 0x804E0A2C -> 0x804E0AD4
        // Local variables
        class GFxString s; // r1+0x38
    }
    {
        // Range: 0x804E0C28 -> 0x804E0DE4
        // Local variables
        class GFxString s; // r1+0x34
    }
    {
        // Range: 0x804E0EB0 -> 0x804E105C
        // Local variables
        class GFxString s; // r1+0x30
    }
    {
        // Range: 0x804E12CC -> 0x804E1474
        // Local variables
        class GFxMovieBindProcess * ploadBind; // r25
    }

    // References
    // -> struct {} __vt__16GFxMovieBindTask;
    // -> struct {} __vt__21GFxMovieImageLoadTask;
    // -> struct {} __vt__20GFxMovieDataLoadTask;
    // -> struct {} __vt__7GFxTask;
}
// Range: 0x804E1C90 -> 0x804E2038
class GFxMovieDefImpl * GFxLoaderImpl::CreateMovieDefImpl(class GFxLoadStates * pls /* r25 */, class GFxMovieDataDef * pmd /* r26 */, unsigned int loadConstants /* r27 */, class GFxMovieBindProcess * * ppbindProcess /* r28 */) {
    // Local variables
    class BindHandle bh; // r1+0x20
    class GFxMovieDefImpl * pm; // r30
    class GFxMovieDefBindStates * pbindStates; // r29
    class GFxResourceKey movieImplKey; // r1+0x18

    {
        // Range: 0x804E1D84 -> 0x804E1ECC
        // Local variables
        class GFxString s; // r1+0x10
    }
}
// Range: 0x804E2040 -> 0x804E2218
class GFxMovieDefImpl * GFxLoaderImpl::CreateMovie_LoadState(class GFxLoadStates * pls /* r30 */, class GFxMovieDataDef * pmd /* r29 */, unsigned int loadConstants /* r28 */) {
    // Local variables
    class BindHandle bh; // r1+0x10
    class GPtr pbp; // r1+0x8
    class GFxMovieDefImpl * pm; // r31

    // References
    // -> struct {} __vt__16GFxMovieBindTask;
    // -> struct {} __vt__7GFxTask;
}
// Range: 0x804E2220 -> 0x804E2428
enum FileFormatType GFxLoaderImpl::DetectFileFormat(class GFile * pfile /* r31 */) {
    // Local variables
    int pos; // r30
    enum FileFormatType format; // r29
    unsigned char buffer[4]; // r1+0x8

    {
        // Range: 0x804E23C8 -> 0x804E2408
        // Local variables
        char * ppath; // r0

        {
            // Range: 0x804E23E4 -> 0x804E2408
            // Local variables
            char * pstr; // r0
        }
    }
}
// Range: 0x804E2430 -> 0x804E29C8
bool GFxLoaderImpl::SWFProcessInfo::Initialize(class SWFProcessInfo * this /* r24 */, class GFile * pin /* r25 */, class GFxLoadProcess * plp /* r26 */, bool readingMsg /* r27 */) {
    // Local variables
    bool compressed; // r28
}
// signature: GFxLoaderImpl::LoadMovieImage(const char *, GFxImageLoader *, GFxLog *)
// Range: 0x804E2A80 -> 0x804E2BF8
class GFxImageResource * GFxLoaderImpl::LoadMovieImage(char * purl /* r29 */, class GFxLog * plog /* r30 */) {
    // References
    // -> struct {} __vt__16GFxImageResource;
}
// Range: 0x804E2C00 -> 0x804E2DEC
class GImageInfoBase * GFxLoaderImpl::CreateStaticUserImage() {
    {
        // Range: 0x804E2C68 -> 0x804E2D4C
        // Local variables
        int y; // r19

        {
            // Range: 0x804E2C78 -> 0x804E2D4C
            // Local variables
            int x; // r18

            {
                // Range: 0x804E2C78 -> 0x804E2D4C
                // Local variables
                unsigned long color; // r17

                {
                    // Range: 0x804E2D14 -> 0x804E2D34
                    // Local variables
                    int iy; // r16

                    {
                        // Range: 0x804E2D1C -> 0x804E2D34
                        // Local variables
                        int ix; // r15
                    }
                }
            }
        }
    }

    // References
    // -> static char pstaticImage[229];
}
