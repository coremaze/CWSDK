#ifndef MSVC_ALLOCATOR_H
#define MSVC_ALLOCATOR_H
#include <iostream>
#include <stdexcept>
#include <cstdint>

#include <windows.h>

namespace msvc {
    template <typename T>
	struct allocator {
	public:
		typedef size_t size_type;
		typedef T value_type;
		typedef T& reference;
		typedef T* pointer;

		T* allocate( std::size_t n ) {
            const static size_type alignment_size = 32;
            const static size_type alignment_offset = (alignment_size-1) + sizeof(void*);

		    size_type new_allocation_size = n * sizeof(T);
		    pointer new_backing;

		    // Large arrays
            if (new_allocation_size < 0x1000) {
                new_backing = (pointer)new char[new_allocation_size];
            } else {
                new_allocation_size += 39;
                char* large_array = new char[new_allocation_size];
                new_backing = (pointer)((long long unsigned int)(large_array + alignment_offset) & ~(alignment_size-1));
                ((char**)(new_backing))[-1] = large_array;
            }
            return new_backing;
		}

		void deallocate( T* p, std::size_t n ) {
            size_type old_allocation_size = n * sizeof(T);
			if (old_allocation_size < 0x1000) {
                delete[] p;
			} else {
                char* actual_allocation = ((char**)(p))[-1];
                delete[] actual_allocation;
			}
		}


	};
}

#endif // MSVC_ALLOCATOR_H
