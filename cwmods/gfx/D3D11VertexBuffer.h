#ifndef D3D11VERTEXBUFFER_H
#define D3D11VERTEXBUFFER_H

#include "../IDA/types.h"
#include "VertexBuffer.h"

namespace gfx {
class D3D11VertexBuffer : public VertexBuffer {
    public:
		~D3D11VertexBuffer() {};

		void* device;
		void* buffer;
    };
}

#endif // D3D11VERTEXBUFFER_H
