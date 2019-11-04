#ifndef D3D11INDEXBUFFER_H
#define D3D11INDEXBUFFER_H

#include "../IDA/types.h"
#include "IndexBuffer.h"

namespace gfx {
class D3D11IndexBuffer : public IndexBuffer {
    public:
		~D3D11IndexBuffer() {};

		void* device;
		void* buffer;
		int field_18;
		int field_1C;
    };
}

#endif // D3D11INDEXBUFFER_H
