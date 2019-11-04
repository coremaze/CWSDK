#ifndef GFX_CHUNK_H
#define GFX_CHUNK_H
#include "../IDA/types.h"

namespace gfx {
class Chunk {
    public:
		virtual ~Chunk();

		//Data members
		_BYTE gap8[112];
		int remesh_time;
		bool needs_remesh;
		_BYTE gap7D[522];
		char end;
    };
}


static_assert(sizeof(gfx::Chunk) == 0x288, "gfx::Chunk is not the correct size.");

#endif // GFX_CHUNK_H
