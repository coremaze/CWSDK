#ifndef FIELD_H
#define FIELD_H

#include "../IDA/types.h"
#include "Block.h"
#include <vector>

namespace cube {
class Field {
    public:
		virtual ~Field();

		_BYTE gap8[52];
		int base_z;
		std::vector<cube::Block> blocks;
    };
}

static_assert(sizeof(cube::Field) == 0x58, "cube::Field is not the correct size.");

#endif // FIELD_H
