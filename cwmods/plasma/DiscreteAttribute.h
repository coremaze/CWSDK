#ifndef DISCRETEATTRIBUTE_H
#define DISCRETEATTRIBUTE_H

#include "../IDA/types.h"
#include "Attribute.h"
#include "../msvc/vector.h"

namespace plasma {
    template <typename T>
    class DiscreteAttribute : public plasma::Attribute {
        public:
            msvc::vector<T> data;
        };
}

#endif // DISCRETEATTRIBUTE_H
