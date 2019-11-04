#ifndef CUBE_BLOCK_H
#define CUBE_BLOCK_H

#include "../IDA/types.h"

namespace cube {
class Block {
    public:
		char red;
		char green;
		char blue;
		char field_3;
		char type;
		char breakable;
    };
}

static_assert(sizeof(cube::Block) == 0x6, "cube::Block is not the correct size.");

#endif // CUBE_BLOCK_H
