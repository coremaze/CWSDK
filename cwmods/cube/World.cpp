#include "World.h"
#include "Zone.h"
#include "constants.h"
#include "../common/LongVector3.h"
#include "../common/IntVector3.h"
cube::Zone* cube::World::GetZone(IntVector2 position) {
	try {
		return this->zones.at(position);
	}
	catch (const std::out_of_range & oor) {
		return nullptr;
	}
	
}
cube::Zone* cube::World::GetZone(int x, int y) {
	IntVector2 position(x, y);
	return this->GetZone(position);
}
void cube::World::SetBlock(LongVector3 block_pos, Block block) {
	IntVector2 zonePos = cube::Zone::ZoneCoordsFromBlocks(block_pos.x, block_pos.y);
	cube::Zone* zone = this->GetZone(zonePos);
	if (!zone) return;
	IntVector3 zoneBlockPos(block_pos.x % cube::BLOCKS_PER_ZONE, block_pos.y % cube::BLOCKS_PER_ZONE, block_pos.z);
	zone->SetBlock(zoneBlockPos, block);
}
void cube::World::SetTime(float ms) {
	this->state.time = ms;
}
void cube::World::SetTime(int ms) {
	this->state.time = (float)ms;
}
void cube::World::SetTime(int hour, int minute) {
	this->state.time = (float)((hour * 60 * 60 * 1000) + (minute * 60 * 1000));
}
float cube::World::GetTime() {
	return this->state.time;
}