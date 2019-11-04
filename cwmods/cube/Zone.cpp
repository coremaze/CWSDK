#include "Zone.h"
#include "../cwmods.h"
#include "Block.h"

IntVector2 cube::Zone::ZoneCoordsFromDots(LongVector3 position) {
	int zone_x = (position.x / cube::DOTS_PER_BLOCK) / cube::BLOCKS_PER_ZONE;
	int zone_y = (position.y / cube::DOTS_PER_BLOCK) / cube::BLOCKS_PER_ZONE;
	return IntVector2(zone_x, zone_y);
}

IntVector2 cube::Zone::ZoneCoordsFromBlocks(int64_t x, int64_t y) {
	int zone_x = x / cube::BLOCKS_PER_ZONE;
	int zone_y = y / cube::BLOCKS_PER_ZONE;
	return IntVector2(zone_x, zone_y);
}
void cube::Zone::SetBlock(IntVector3 zone_position, cube::Block block) {
	int fieldIndex = zone_position.x * cube::BLOCKS_PER_ZONE + zone_position.y;
	cube::Field* field = &this->fields[fieldIndex];

	int block_index = zone_position.z - field->base_z;
	int end_z = field->base_z + field->blocks.size();

	if (zone_position.z >= end_z) { //Too high
		int block_index = zone_position.z - field->base_z;

		int old_count = field->blocks.size();
		field->blocks.resize(block_index + 1);
		int new_count = field->blocks.size();

		void* start_air = &field->blocks[old_count];
		int air_size = (new_count - old_count) * sizeof(cube::Block);
		memset(start_air, 0, air_size);

		field->blocks[block_index] = block;
	} 
	else if (zone_position.z < field->base_z) { //Too low
		int old_size = field->blocks.size() * sizeof(cube::Block);
		char* tmp_blocks = new char[old_size];
		memcpy(tmp_blocks, &field->blocks[0], old_size);

		int difference = field->base_z - zone_position.z;
		int required_blocks = field->blocks.size() + difference;

		field->blocks.resize(required_blocks);
		memset(&field->blocks[0], 0, difference * sizeof(cube::Block));

		memcpy(&field->blocks[difference], tmp_blocks, old_size);

		field->blocks[0] = block;

		field->base_z -= difference;
	}
	else {
		int block_index = zone_position.z - field->base_z;
		field->blocks[block_index] = block;
	}

	this->chunk.needs_remesh = true;
}