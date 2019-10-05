#ifndef VECTOR_H
#define VECTOR_H


namespace msvc {
    template <int N, typename T>
    class Vector {
        public:
            T elements[N];

            T at(int i) {
                return elements[i];
            }

            void assign(int i, T x) {
                elements[i] = x;
            }
    };
}

#endif // VECTOR_H
