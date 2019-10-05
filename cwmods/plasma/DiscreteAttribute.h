#ifndef DISCRETEATTRIBUTE_H
#define DISCRETEATTRIBUTE_H

#include "../IDA/types.h"
#include "Attribute.h"
#include "Array.h"

namespace plasma {
    template <typename T>
    class DiscreteAttribute : public plasma::Attribute {
        public:
            plasma::Array<T> data;
        };
}

#endif // DISCRETEATTRIBUTE_H
