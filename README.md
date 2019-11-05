# CWSDK

Defines structures, functions, and callbacks for interacting with Cube World in C++.

Mods produced with CWSDK are for use with the [Cube World Mod Launcher](https://github.com/ChrisMiuchiz/Cube-World-Mod-Launcher).

 ## Getting started
 
Although modding Cube World, even with CWSDK, is not for the faint of heart, CWSDK provides common-use functionality to assist development and cooperation of mods. All projects which use CWSDK should be compiled using Visual Studio and Clang.

 1) Set up and install [Visual Studio 2019](https://visualstudio.microsoft.com/vs/).

 2) Configure it for Clang: https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/

 3) Create a folder for your source code, and add:
 
	a) A [released snapshot](https://github.com/ChrisMiuchiz/CWSDK/releases) of CWSDK.
	
	b) A `main.cpp` for your code.
	
	c) A `CMakeLists.txt`. See [CommandsMod](https://github.com/ChrisMiuchiz/Cube-World-Commands-Mod/) for an example and a script which can auto-generate this for you in simpler projects.
	
 4) Open your project in Visual Studio using the `Open Folder` option. Configure Visual Studio to build with `x64-Clang-Release` according to [the page in step 2](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/).
 
 5) Include `cwmods.h` from CWSDK to use its features.
 
 
 ## Basic mod structure
 
 You must create a class for your mod which inherits from `GenericMod` from cwmods.h. To instantiate the class and provide it to the [Cube World Mod Launcher](https://github.com/ChrisMiuchiz/Cube-World-Mod-Launcher), you must export a function `MakeMod` which returns a pointer to a new instance of your mod. To utilize event handlers, override the appropriate virtual function.
 
 ```
 #include "cwmods/cwmods.h"
 #include <string>
 
 class Mod : GenericMod {
	virtual int OnChat(std::wstring* message) override {
		// This will be called when the player sends a chat message
	}
	virtual void OnGameTick(cube::Game* game) override {
		// This will be called every frame
	}
	virtual void Initialize() override {
		// This will be called after your mod is loaded. CWSDK internals are initialized at this point, so it's safe to use CWBase() and CWOffset().
	}
 }
 
 EXPORT Mod* MakeMod() {
	return new Mod();
}
 ```
 
 ## Event Handlers
 
 To use an event handler, override them as per the example above.
 
 ---
 
 `virtual void Initialize()`
 
 Called after mod is loaded.
 
 Return values: None.
 
 
 ---
 
 `virtual int OnChat(std::wstring* message)`
 
 Called when the player sends a message.
 
 Return values: 
 
 0 - Normal behavior
 
 1 - Cancel message
 
 ---
 
  `virtual int OnCheckInventoryFull(cube::Creature* player, cube::Item* item)`
 
 Called when the game checks to see if a creature can carry more of an item.
 
 Return values: 
 
 0 - Normal behavior
 
 1 - Override, CAN carry more.
 
 2 - Override, CANNOT carry more.
 
 ---
 
  `virtual int OnP2PRequest(uint64_t steamID)`
 
 Called when a new Steam peer to peer request is made.
 
 Return values: 
 
 0 - Normal behavior
 
 1 - Force block request
 
 2 - Force accept request
 
 ---
 
 `virtual void OnGameTick(cube::Game* game)`
 
 Called (prior to) every frame.
 
 Return values: None.
 
 ---
 
 ## Data members and methods
 
 No documentation on these, and they are especially prone to change. Explore the source.
 
Special thanks
==============

```
Andoryuuta - Reverse engineering work and mapping structs
matpow2 - Structs for the alpha that are still useful in the beta
ZaneYork - Fields and contributions to the mod loader and commandsmod
```