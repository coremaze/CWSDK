#ifndef CONTINUOUSATTRIBUTE_H
#define CONTINUOUSATTRIBUTE_H

#include "../IDA/types.h"
#include "Attribute.h"
#include "Array.h"

namespace plasma {
    template <typename T>
    class ContinuousAttribute : public plasma::Attribute {
        public:
            plasma::Array<T> data;
        };
}

#endif // CONTINUOUSATTRIBUTE_H
