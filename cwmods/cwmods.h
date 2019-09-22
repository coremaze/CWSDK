#ifndef CWMODS_H
#define CWMODS_H
#include <cstdint>

#define EXPORT extern "C" __declspec(dllexport)

#include "msvc/string.h"
#include "msvc/wstring.h"

#include "cube/Game.h"
#include "cube/World.h"
#include "cube/Creature.h"
#include "cube/Host.h"
#include "cube/Speech.h"
#include "cube/ChatWidget.h"
#include "cube/WorldMap.h"

#include "gfx/D3D11Renderer.h"

#include "common/FloatRGBA.h"
#include "common/ByteRGBA.h"
#include "common/LongVector3.h"
#include "common/FloatVector3.h"

#include "IDA/types.h"

#include "cube/constants.h"

void* CWBase();

EXPORT void ModPreInitialize();
EXPORT int ModMajorVersion();
EXPORT int ModMinorVersion();

void WriteByte(void* location, char val);
void WriteFarJMP(void* source, void* destination);

#endif // CWMODS_H
