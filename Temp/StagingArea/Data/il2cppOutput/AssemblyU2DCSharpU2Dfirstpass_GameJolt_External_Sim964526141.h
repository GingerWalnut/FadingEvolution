#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_External_Sim901880452.h"

// System.Collections.Generic.List`1<GameJolt.External.SimpleJSON.JSONNode>
struct List_1_t271001584;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.External.SimpleJSON.JSONArray
struct  JSONArray_t964526141  : public JSONNode_t901880452
{
public:
	// System.Collections.Generic.List`1<GameJolt.External.SimpleJSON.JSONNode> GameJolt.External.SimpleJSON.JSONArray::m_List
	List_1_t271001584 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(JSONArray_t964526141, ___m_List_0)); }
	inline List_1_t271001584 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t271001584 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t271001584 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
