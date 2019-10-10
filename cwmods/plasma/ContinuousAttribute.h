#ifndef CONTINUOUSATTRIBUTE_H
#define CONTINUOUSATTRIBUTE_H

#include "../IDA/types.h"
#include "Attribute.h"
#include "../msvc/vector.h"

namespace plasma {
    template <typename T>
    class ContinuousAttribute : public plasma::Attribute {
        public:
            msvc::vector<T> data;
        };
}

#endif // CONTINUOUSATTRIBUTE_H
