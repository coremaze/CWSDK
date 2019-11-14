#ifndef CWMODS_H
#define CWMODS_H

#define EXPORT extern "C" __declspec(dllexport) __declspec(noinline)

#include <cstdint>
#include <dinput.h>
#include <d3d11.h>

#include "IDA/types.h"

#include "cube/cube.h"

#include "common/ByteRGBA.h"
#include "common/DoubleVector3.h"
#include "common/FloatRGBA.h"
#include "common/FloatVector2.h"
#include "common/FloatVector3.h"
#include "common/IntVector2.h"
#include "common/IntVector3.h"
#include "common/LongVector3.h"
#include "common/math.h"
#include "common/Matrix4.h"
#include "common/types.h"

#include "cube/AdaptionWidget.h"
#include "cube/AI.h"
#include "cube/BaseWidget.h"
#include "cube/Block.h"
#include "cube/BlockProperties.h"
#include "cube/CharacterWidget.h"
#include "cube/ChatWidget.h"
#include "cube/Client.h"
#include "cube/Controls.h"
#include "cube/ControlsWidget.h"
#include "cube/Creature.h"
#include "cube/Database.h"
#include "cube/Field.h"
#include "cube/FormulaDetailsWidget.h"
#include "cube/EnchantWidget.h"
#include "cube/Equipment.h"
#include "cube/Game.h"
#include "cube/GUI.h"
#include "cube/HelpWidget.h"
#include "cube/Host.h"
#include "cube/InventoryWidget.h"
#include "cube/Item.h"
#include "cube/ItemStack.h"
#include "cube/MapOverlayWidget.h"
#include "cube/MultiplayerWidget.h"
#include "cube/Music.h"
#include "cube/Options.h"
#include "cube/OptionsWidget.h"
#include "cube/PreviewWidget.h"
#include "cube/Projectile.h"
#include "cube/QuestionWidget.h"
#include "cube/ServerUpdates.h"
#include "cube/Speech.h"
#include "cube/SpeechText.h"
#include "cube/SpeechTextNode.h"
#include "cube/SpeechWidget.h"
#include "cube/Sprite.h"
#include "cube/SpriteManager.h"
#include "cube/SpriteWidget.h"
#include "cube/SystemWidget.h"
#include "cube/TextFX.h"
#include "cube/VoxelWidget.h"
#include "cube/World.h"
#include "cube/WorldMap.h"
#include "cube/XAudio2Engine.h"
#include "cube/Zone.h"
#include "cube/constants.h"

#include "gfx/Chunk.h"
#include "gfx/D3D11Graphics.h"
#include "gfx/D3D11Renderer.h"
#include "gfx/D3D11IndexBuffer.h"
#include "gfx/D3D11VertexBuffer.h"
#include "gfx/IndexBuffer.h"
#include "gfx/VertexBuffer.h"

#include "msvc/_Thrd_t.h"

#include "plasma/Attribute.h"
#include "plasma/ContinuousAttribute.h"
#include "plasma/D3D11Engine.h"
#include "plasma/DiscreteAttribute.h"
#include "plasma/Display.h"
#include "plasma/Engine.h"
#include "plasma/FontEngine.h"
#include "plasma/Keyable.h"
#include "plasma/NamedObject.h"
#include "plasma/Matrix.h"
#include "plasma/Node.h"
#include "plasma/Object.h"
#include "plasma/ObjectManager.h"
#include "plasma/ScalableFont.h"
#include "plasma/Transformation.h"
#include "plasma/Vector.h"
#include "plasma/Widget.h"

#include "steam/CSteamID.h"
#include "steam/EBeginAuthResult.h"
#include "steam/EP2PSend.h"
#include "steam/ESNetSocketConnectionType.h"
#include "steam/EUserHasLicenseForAppResult.h"
#include "steam/EVoiceResult.h"
#include "steam/ISteamNetworking.h"
#include "steam/ISteamUser.h"
#include "steam/P2PSessionState_t.h"
#include "steam/SNetListenSocket_t.h"
#include "steam/SNetSocket_t.h"

void* CWBase();
void* CWOffset(size_t offset);

EXPORT void ModPreInitialize();
EXPORT int ModMajorVersion();
EXPORT int ModMinorVersion();

void WriteByte(void* location, char val);
void WriteFarJMP(void* source, void* destination);

__declspec(noinline) void* operator new(size_t size);
__declspec(noinline) void* operator new[](size_t size);
__declspec(noinline) void operator delete(void* ptr) noexcept;
__declspec(noinline) void operator delete[](void* ptr) noexcept;

class GenericMod {
	public:
		enum Priority : u64 {
			VeryHighPriority = 0,
			HighPriority = 1,
			NormalPriority = 2,
			LowPriority = 3,
			VeryLowPriority = 4
		};

		virtual void Initialize() {}

		Priority OnChatPriority = NormalPriority;
		virtual int OnChat(std::wstring* message) { return 0; }

		Priority OnCheckInventoryFullPriority = NormalPriority;
		virtual int OnCheckInventoryFull(cube::Creature* player, cube::Item* item) { return 0; }

		Priority OnP2PRequestPriority = NormalPriority;
		virtual int OnP2PRequest(uint64_t steamID) { return 0; }

		Priority OnGameTickPriority = NormalPriority;
		virtual void OnGameTick(cube::Game* game) {}

		Priority OnZoneGeneratedPriority = NormalPriority;
		virtual void OnZoneGenerated(cube::World* world, cube::Zone* zone) {}

		Priority OnWindowProcPriority = NormalPriority;
		virtual int OnWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) { return 0; }

		Priority OnGetKeyboardStatePriority = NormalPriority;
		virtual void OnGetKeyboardState(BYTE* diKeys) {}

		Priority OnGetMouseStatePriority = NormalPriority;
		virtual void OnGetMouseState(DIMOUSESTATE* diMouse) {}

		Priority OnPresentPriority = NormalPriority;
		virtual void OnPresent(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags) {}
};

#endif // CWMODS_H
