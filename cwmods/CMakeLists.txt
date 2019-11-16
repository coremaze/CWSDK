cmake_minimum_required (VERSION 3.8)
if(NOT CMAKE_CL_64)
   message(FATAL_ERROR "CWSDK REQUIRES clang-cl x64 to build. " )
endif()
if(CMAKE_BUILD_TYPE MATCHES "Debug")
    message(FATAL_ERROR "CWSDK cannot be built debug mode due to MSVC binary compatibility issues." )
endif()
project("CWSDK" VERSION "1.0.0")
add_library (CWSDK 
    cwsdk.cpp
    common/ByteRGBA.cpp
    common/DoubleVector3.cpp
    common/FloatRGBA.cpp
    common/FloatVector2.cpp
    common/FloatVector3.cpp
    common/IntVector2.cpp
    common/IntVector3.cpp
    common/LongVector3.cpp
    common/math.cpp
    common/Matrix4.cpp
    cube/AdaptionWidget.cpp
    cube/AI.cpp
    cube/BaseWidget.cpp
    cube/Block.cpp
    cube/BlockProperties.cpp
    cube/CharacterPreviewWidget.cpp
    cube/CharacterWidget.cpp
    cube/ChatWidget.cpp
    cube/Client.cpp
    cube/Connection.cpp
    cube/Controls.cpp
    cube/ControlsWidget.cpp
    cube/Creature.cpp
    cube/cube.cpp
    cube/Database.cpp
    cube/EnchantWidget.cpp
    cube/Equipment.cpp
    cube/Field.cpp
    cube/FormulaDetailsWidget.cpp
    cube/Game.cpp
    cube/GUI.cpp
    cube/HelpWidget.cpp
    cube/Host.cpp
    cube/InventoryWidget.cpp
    cube/Item.cpp
    cube/ItemStack.cpp
    cube/MapOverlayWidget.cpp
    cube/MultiplayerWidget.cpp
    cube/Music.cpp
    cube/Options.cpp
    cube/OptionsWidget.cpp
    cube/PreviewWidget.cpp
    cube/Projectile.cpp
    cube/QuestionWidget.cpp
    cube/ServerUpdates.cpp
    cube/Speech.cpp
    cube/SpeechText.cpp
    cube/SpeechTextNode.cpp
    cube/SpeechWidget.cpp
    cube/Spirit.cpp
    cube/Sprite.cpp
    cube/SpriteManager.cpp
    cube/SpriteWidget.cpp
    cube/SystemWidget.cpp
    cube/TextFX.cpp
    cube/VoxelWidget.cpp
    cube/World.cpp
    cube/WorldMap.cpp
    cube/XAudio2Engine.cpp
    cube/Zone.cpp
    gfx/Chunk.cpp
    gfx/D3D11Graphics.cpp
    gfx/D3D11IndexBuffer.cpp
    gfx/D3D11Renderer.cpp
    gfx/D3D11VertexBuffer.cpp
    gfx/IndexBuffer.cpp
    gfx/VertexBuffer.cpp
    msvc/_Thrd_t.cpp
    plasma/Array.cpp
    plasma/Attribute.cpp
    plasma/ContinuousAttribute.cpp
    plasma/D3D11Engine.cpp
    plasma/DiscreteAttribute.cpp
    plasma/Display.cpp
    plasma/Engine.cpp
    plasma/FontEngine.cpp
    plasma/Keyable.cpp
    plasma/Matrix.cpp
    plasma/NamedObject.cpp
    plasma/Node.cpp
    plasma/Object.cpp
    plasma/ObjectManager.cpp
    plasma/ScalableFont.cpp
    plasma/Transformation.cpp
    plasma/Vector.cpp
    plasma/Widget.cpp)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/common)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/cube)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/gfx)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/IDA)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/msvc)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/plasma)
target_include_directories (CWSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cwmods/steam)