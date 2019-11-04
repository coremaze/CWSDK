#ifndef CUBE_SERVERUPDATES_H
#define CUBE_SERVERUPDATES_H

#include "../IDA/types.h"
#include <list>

namespace cube {
class ServerUpdates {
    public:
		std::list<void*> hit_packet_list;
		std::list<void*> packet_list_1;
		std::list<void*> packet_list_2;
		std::list<void*> cube_change_list;
		std::list<void*> packet_list_4;
		std::list<void*> packet_list_5;
		std::list<void*> packet_list_6;
		std::list<void*> packet_list_7;
		std::list<void*> packet_list_8;
		std::list<void*> packet_list_9;
		std::list<void*> packet_list_10;
		std::list<void*> packet_list_11;
		std::list<void*> packet_list_12;
		std::list<void*> packet_list_13;
		std::list<void*> packet_list_14;
		std::list<void*> packet_list_15;
    };
}

#endif // CUBE_SERVERUPDATES_H
