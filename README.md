# Heavy Iron DWARF Dumps

This repository contains C/C++ types, variables, and functions reconstructed from DWARF debug data found in several Heavy Iron Studios games. The DWARF 1.0/1.1 dumps (PlayStation 2 and GameCube) were generated with [dtk dwarf dump](https://github.com/encounter/decomp-toolkit) and split into files while preserving the original directory structure.

The Wii games (WALL-E, Up, SpongeBob's Truth or Square) carry Metrowerks DWARF 2, which dtk doesn't read. Their dumps were generated with a [pyelftools](https://github.com/eliben/pyelftools) script that writes dtk's format. Functions, parameters, locals and globals are split by their declaring source file (`DW_AT_decl_file`), in line order. Types carry no source file in these builds, so each stays in the file of the compile unit that holds it (the unity `WAD` files, e.g. `C/RT/Engine/WAD/WAD00.cpp`). Every C++ record is a `class` in this DWARF, whatever its source keyword, and type names carry no namespace or class scope.

These dumps are useful for decompilation efforts, providing a close approximation of the original source structure. Note that the dumps are not 100% complete, as unused local variables and parameters are omitted.

## Games

### Scooby-Doo! Night of 100 Frights

| Directory | Build | Platform | Executable
|--|--|--|--|
| scooby/proto-1-31-01 | [Jan 31, 2001 prototype](https://hiddenpalace.org/Scooby-Doo!:_Night_of_100_Frights_(Jan_31,_2001_prototype)) | PlayStation 2 | XXXX_999.99
| scooby/SLUS-20349 | Retail game (NTSC-U) | PlayStation 2 | SLUS_203.49
| scooby/SLES-51017 | Retail game (PAL, Europe) | PlayStation 2 | SLES_510.17

### SpongeBob SquarePants: Battle for Bikini Bottom

| Directory | Build | Platform | Executable
|--|--|--|--|
| bfbb/SLUS-20680 | Retail game (NTSC-U) | PlayStation 2 | SLUS_206.80
| bfbb/SLES-51970 | Retail game (PAL, Germany) | PlayStation 2 | SLES_519.70

### The SpongeBob SquarePants Movie

| Directory | Build | Platform | Executable
|--|--|--|--|
| tssm/demo-opm-90 | Official U.S. PlayStation Magazine Demo Disc 90 | PlayStation 2 | SLUS_999.99

### The Incredibles

| Directory | Build | Platform | Executable
|--|--|--|--|
| incredibles/proto-8-5-04 | [Aug 5, 2004 prototype](https://hiddenpalace.org/Disney-Pixar_The_Incredibles_(Aug_5,_2004_prototype)) | PlayStation 2 | SLUS_209.05
| incredibles/proto-8-10-04 | [Aug 10, 2004 prototype](https://hiddenpalace.org/Disney-Pixar_The_Incredibles_(Aug_10,_2004_prototype)) | PlayStation 2 | SLUS_209.05

### Ratatouille

| Directory | Build | Platform | Executable
|--|--|--|--|
| ratatouille/proto-1-18-06/ratsgc_d | [Jan 18, 2006 prototype](https://hiddenpalace.org/Disney-Pixar_Ratatouille_(Jan_18,_2006_prototype)) (debug build) | GameCube | ratsgc_d.elf
| ratatouille/proto-1-18-06/ratsgc_m | [Jan 18, 2006 prototype](https://hiddenpalace.org/Disney-Pixar_Ratatouille_(Jan_18,_2006_prototype)) (master build) | GameCube | ratsgc_m.elf
| ratatouille/proto-1-18-06/ratsgc_md | [Jan 18, 2006 prototype](https://hiddenpalace.org/Disney-Pixar_Ratatouille_(Jan_18,_2006_prototype)) (master+debug build) | GameCube | ratsgc_md.elf
| ratatouille/proto-1-18-06/ratsgc_r | [Jan 18, 2006 prototype](https://hiddenpalace.org/Disney-Pixar_Ratatouille_(Jan_18,_2006_prototype)) (release build) | GameCube | ratsgc_r.elf

### WALL-E

| Directory | Build | Platform | Executable
|--|--|--|--|
| walle/RWAE78 | Retail game (NTSC-U, En/Fr, Build 303) | Wii | WALLEWiiMaster.elf

### Up

| Directory | Build | Platform | Executable
|--|--|--|--|
| up/RUQE78 | Retail game (NTSC-U) | Wii | UP09WiiMASTERWAD.elf

### SpongeBob's Truth or Square

| Directory | Build | Platform | Executable
|--|--|--|--|
| tos/R8IE78 | Retail game (NTSC-U) | Wii | SB09WiiMASTERWAD.elf
