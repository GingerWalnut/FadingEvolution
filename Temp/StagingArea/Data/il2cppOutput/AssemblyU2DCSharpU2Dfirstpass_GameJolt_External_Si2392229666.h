#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_External_Sim901880452.h"

// GameJolt.External.SimpleJSON.JSONNode
struct JSONNode_t901880452;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.External.SimpleJSON.JSONLazyCreator
struct  JSONLazyCreator_t2392229666  : public JSONNode_t901880452
{
public:
	// GameJolt.External.SimpleJSON.JSONNode GameJolt.External.SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_t901880452 * ___m_Node_0;
	// System.String GameJolt.External.SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_1;

public:
	inline static int32_t get_offset_of_m_Node_0() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2392229666, ___m_Node_0)); }
	inline JSONNode_t901880452 * get_m_Node_0() const { return ___m_Node_0; }
	inline JSONNode_t901880452 ** get_address_of_m_Node_0() { return &___m_Node_0; }
	inline void set_m_Node_0(JSONNode_t901880452 * value)
	{
		___m_Node_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Node_0, value);
	}

	inline static int32_t get_offset_of_m_Key_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2392229666, ___m_Key_1)); }
	inline String_t* get_m_Key_1() const { return ___m_Key_1; }
	inline String_t** get_address_of_m_Key_1() { return &___m_Key_1; }
	inline void set_m_Key_1(String_t* value)
	{
		___m_Key_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Key_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
