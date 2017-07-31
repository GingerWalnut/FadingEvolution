#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_External_Sim901880452.h"

// System.Collections.Generic.Dictionary`2<System.String,GameJolt.External.SimpleJSON.JSONNode>
struct Dictionary_2_t2816659714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.External.SimpleJSON.JSONClass
struct  JSONClass_t4053963016  : public JSONNode_t901880452
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GameJolt.External.SimpleJSON.JSONNode> GameJolt.External.SimpleJSON.JSONClass::m_Dict
	Dictionary_2_t2816659714 * ___m_Dict_0;

public:
	inline static int32_t get_offset_of_m_Dict_0() { return static_cast<int32_t>(offsetof(JSONClass_t4053963016, ___m_Dict_0)); }
	inline Dictionary_2_t2816659714 * get_m_Dict_0() const { return ___m_Dict_0; }
	inline Dictionary_2_t2816659714 ** get_address_of_m_Dict_0() { return &___m_Dict_0; }
	inline void set_m_Dict_0(Dictionary_2_t2816659714 * value)
	{
		___m_Dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dict_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
