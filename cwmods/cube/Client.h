#ifndef CLIENT_H
#define CLIENT_H

#include "../IDA/types.h"
#include <windows.h>

namespace cube {
    class Client {
        public:
            void *vtable;
            char field_8[2576];
            CRITICAL_SECTION critical_section;
            char field_A40[24];

            void JoinSteamID(long long steamID);
        };
}

#endif // CLIENT_H
