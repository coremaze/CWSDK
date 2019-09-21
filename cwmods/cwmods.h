#ifndef CWMODS_H
#define CWMODS_H
#include <cstdint>

#define EXPORT extern "C" __declspec(dllexport)

#include "msvc/string.h"

#include "cube/Game.h"
#include "cube/World.h"
#include "cube/Creature.h"
#include "cube/Host.h"
#include "cube/Speech.h"

void* CWBase();

EXPORT void ModPreInitialize();
EXPORT int ModMajorVersion();
EXPORT int ModMinorVersion();

void WriteByte(void* location, char val);
void WriteFarJMP(void* source, void* destination);

#endif // CWMODS_H
