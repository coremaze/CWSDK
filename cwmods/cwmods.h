#ifndef CWMODS_H
#define CWMODS_H
#include <cstdint>

#define EXPORT extern "C" __declspec(dllexport)

#include "IDA/types.h"

#include "common/ByteRGBA.h"
#include "common/FloatRGBA.h"
#include "common/FloatVector3.h"
#include "common/IntVector2.h"
#include "common/LongVector3.h"

#include "cube/ChatWidget.h"
#include "cube/Client.h"
#include "cube/Creature.h"
#include "cube/Database.h"
#include "cube/Field.h"
#include "cube/Game.h"
#include "cube/Host.h"
#include "cube/PlasmaHolder.h"
#include "cube/Speech.h"
#include "cube/World.h"
#include "cube/WorldMap.h"
#include "cube/Zone.h"
#include "cube/constants.h"

#include "gfx/Chunk.h"
#include "gfx/D3D11Renderer.h"

#include "msvc/string.h"
#include "msvc/vector.h"
#include "msvc/wstring.h"

#include "plasma/Array.h"
#include "plasma/Attribute.h"
#include "plasma/ContinuousAttribute.h"
#include "plasma/D3D11Engine.h"
#include "plasma/DiscreteAttribute.h"
#include "plasma/Display.h"
#include "plasma/Engine.h"
#include "plasma/Keyable.h"
#include "plasma/NamedObject.h"
#include "plasma/Node.h"
#include "plasma/Object.h"
#include "plasma/ObjectManager.h"
#include "plasma/Widget.h"


void* CWBase();

EXPORT void ModPreInitialize();
EXPORT int ModMajorVersion();
EXPORT int ModMinorVersion();

void WriteByte(void* location, char val);
void WriteFarJMP(void* source, void* destination);

#endif // CWMODS_H
