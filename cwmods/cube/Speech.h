#ifndef SPEECH_H
#define SPEECH_H
#include "../IDA/types.h"
#include <map>
#include <string>

namespace cube {
class Speech {
    public:
		virtual ~Speech();

		std::map<int32_t, std::wstring> entity_type_id_map;
		std::map<int32_t, std::wstring> skill_type_id_map;
		std::map<int32_t, std::wstring> specialization_type_id_map;
		std::map<uint32_t, std::wstring> faction_type_id_map;
		std::map<uint32_t, std::wstring> ruler_type_id_map;
		std::map<uint64_t, std::wstring> item_identifier_map;
		std::map<void*, void*> unk_map_1;
		std::map<void*, void*> unk_map_2;
		std::map<void*, void*> unk_map_3;
		std::map<std::wstring, void*> entity_wstring_to_speechtext_ptr_map; // void* should be cube::SpeechText*
		std::map<std::wstring, void*> unk_wstring_to_speechtext_ptr_map; // void* should be cube::SpeechText*
		std::map<void*, void*> unk_map_4;
    };
}

static_assert(sizeof(cube::Speech) == 0xC8, "cube::Speech is not the correct size.");

#endif // SPEECH_H
