#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Core_Re3349151242.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// GameJolt.External.SimpleJSON.JSONNode
struct JSONNode_t901880452;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Core.Response
struct  Response_t2494805475  : public Il2CppObject
{
public:
	// GameJolt.API.Core.ResponseFormat GameJolt.API.Core.Response::format
	int32_t ___format_0;
	// System.Boolean GameJolt.API.Core.Response::success
	bool ___success_1;
	// System.Byte[] GameJolt.API.Core.Response::bytes
	ByteU5BU5D_t3397334013* ___bytes_2;
	// System.String GameJolt.API.Core.Response::dump
	String_t* ___dump_3;
	// GameJolt.External.SimpleJSON.JSONNode GameJolt.API.Core.Response::json
	JSONNode_t901880452 * ___json_4;
	// UnityEngine.Texture2D GameJolt.API.Core.Response::texture
	Texture2D_t3542995729 * ___texture_5;

public:
	inline static int32_t get_offset_of_format_0() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___format_0)); }
	inline int32_t get_format_0() const { return ___format_0; }
	inline int32_t* get_address_of_format_0() { return &___format_0; }
	inline void set_format_0(int32_t value)
	{
		___format_0 = value;
	}

	inline static int32_t get_offset_of_success_1() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___success_1)); }
	inline bool get_success_1() const { return ___success_1; }
	inline bool* get_address_of_success_1() { return &___success_1; }
	inline void set_success_1(bool value)
	{
		___success_1 = value;
	}

	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___bytes_2)); }
	inline ByteU5BU5D_t3397334013* get_bytes_2() const { return ___bytes_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(ByteU5BU5D_t3397334013* value)
	{
		___bytes_2 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_2, value);
	}

	inline static int32_t get_offset_of_dump_3() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___dump_3)); }
	inline String_t* get_dump_3() const { return ___dump_3; }
	inline String_t** get_address_of_dump_3() { return &___dump_3; }
	inline void set_dump_3(String_t* value)
	{
		___dump_3 = value;
		Il2CppCodeGenWriteBarrier(&___dump_3, value);
	}

	inline static int32_t get_offset_of_json_4() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___json_4)); }
	inline JSONNode_t901880452 * get_json_4() const { return ___json_4; }
	inline JSONNode_t901880452 ** get_address_of_json_4() { return &___json_4; }
	inline void set_json_4(JSONNode_t901880452 * value)
	{
		___json_4 = value;
		Il2CppCodeGenWriteBarrier(&___json_4, value);
	}

	inline static int32_t get_offset_of_texture_5() { return static_cast<int32_t>(offsetof(Response_t2494805475, ___texture_5)); }
	inline Texture2D_t3542995729 * get_texture_5() const { return ___texture_5; }
	inline Texture2D_t3542995729 ** get_address_of_texture_5() { return &___texture_5; }
	inline void set_texture_5(Texture2D_t3542995729 * value)
	{
		___texture_5 = value;
		Il2CppCodeGenWriteBarrier(&___texture_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
