#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Settings
struct  Settings_t784523111  : public ScriptableObject_t1975622470
{
public:
	// System.Int32 GameJolt.API.Settings::gameID
	int32_t ___gameID_2;
	// System.String GameJolt.API.Settings::privateKey
	String_t* ___privateKey_3;
	// System.Single GameJolt.API.Settings::timeout
	float ___timeout_4;
	// System.Boolean GameJolt.API.Settings::autoPing
	bool ___autoPing_5;
	// System.Boolean GameJolt.API.Settings::useCaching
	bool ___useCaching_6;
	// System.Boolean GameJolt.API.Settings::autoConnect
	bool ___autoConnect_7;
	// System.String GameJolt.API.Settings::user
	String_t* ___user_8;
	// System.String GameJolt.API.Settings::token
	String_t* ___token_9;

public:
	inline static int32_t get_offset_of_gameID_2() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___gameID_2)); }
	inline int32_t get_gameID_2() const { return ___gameID_2; }
	inline int32_t* get_address_of_gameID_2() { return &___gameID_2; }
	inline void set_gameID_2(int32_t value)
	{
		___gameID_2 = value;
	}

	inline static int32_t get_offset_of_privateKey_3() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___privateKey_3)); }
	inline String_t* get_privateKey_3() const { return ___privateKey_3; }
	inline String_t** get_address_of_privateKey_3() { return &___privateKey_3; }
	inline void set_privateKey_3(String_t* value)
	{
		___privateKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___privateKey_3, value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___timeout_4)); }
	inline float get_timeout_4() const { return ___timeout_4; }
	inline float* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(float value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_autoPing_5() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___autoPing_5)); }
	inline bool get_autoPing_5() const { return ___autoPing_5; }
	inline bool* get_address_of_autoPing_5() { return &___autoPing_5; }
	inline void set_autoPing_5(bool value)
	{
		___autoPing_5 = value;
	}

	inline static int32_t get_offset_of_useCaching_6() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___useCaching_6)); }
	inline bool get_useCaching_6() const { return ___useCaching_6; }
	inline bool* get_address_of_useCaching_6() { return &___useCaching_6; }
	inline void set_useCaching_6(bool value)
	{
		___useCaching_6 = value;
	}

	inline static int32_t get_offset_of_autoConnect_7() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___autoConnect_7)); }
	inline bool get_autoConnect_7() const { return ___autoConnect_7; }
	inline bool* get_address_of_autoConnect_7() { return &___autoConnect_7; }
	inline void set_autoConnect_7(bool value)
	{
		___autoConnect_7 = value;
	}

	inline static int32_t get_offset_of_user_8() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___user_8)); }
	inline String_t* get_user_8() const { return ___user_8; }
	inline String_t** get_address_of_user_8() { return &___user_8; }
	inline void set_user_8(String_t* value)
	{
		___user_8 = value;
		Il2CppCodeGenWriteBarrier(&___user_8, value);
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Settings_t784523111, ___token_9)); }
	inline String_t* get_token_9() const { return ___token_9; }
	inline String_t** get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(String_t* value)
	{
		___token_9 = value;
		Il2CppCodeGenWriteBarrier(&___token_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
