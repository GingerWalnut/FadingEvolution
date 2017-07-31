#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Core_Mo3633169093.h"

// System.String
struct String_t;
// GameJolt.API.Objects.User
struct User_t1152763447;
// System.Action`1<GameJolt.API.Objects.Trophy[]>
struct Action_1_t3519465901;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Manager
struct  Manager_t2929144603  : public MonoSingleton_1_t3633169093
{
public:
	// System.Int32 GameJolt.API.Manager::<GameID>k__BackingField
	int32_t ___U3CGameIDU3Ek__BackingField_3;
	// System.String GameJolt.API.Manager::<PrivateKey>k__BackingField
	String_t* ___U3CPrivateKeyU3Ek__BackingField_4;
	// System.Single GameJolt.API.Manager::<Timeout>k__BackingField
	float ___U3CTimeoutU3Ek__BackingField_5;
	// System.Boolean GameJolt.API.Manager::<AutoPing>k__BackingField
	bool ___U3CAutoPingU3Ek__BackingField_6;
	// System.Boolean GameJolt.API.Manager::<UseCaching>k__BackingField
	bool ___U3CUseCachingU3Ek__BackingField_7;
	// GameJolt.API.Objects.User GameJolt.API.Manager::currentUser
	User_t1152763447 * ___currentUser_8;

public:
	inline static int32_t get_offset_of_U3CGameIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___U3CGameIDU3Ek__BackingField_3)); }
	inline int32_t get_U3CGameIDU3Ek__BackingField_3() const { return ___U3CGameIDU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CGameIDU3Ek__BackingField_3() { return &___U3CGameIDU3Ek__BackingField_3; }
	inline void set_U3CGameIDU3Ek__BackingField_3(int32_t value)
	{
		___U3CGameIDU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPrivateKeyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___U3CPrivateKeyU3Ek__BackingField_4)); }
	inline String_t* get_U3CPrivateKeyU3Ek__BackingField_4() const { return ___U3CPrivateKeyU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPrivateKeyU3Ek__BackingField_4() { return &___U3CPrivateKeyU3Ek__BackingField_4; }
	inline void set_U3CPrivateKeyU3Ek__BackingField_4(String_t* value)
	{
		___U3CPrivateKeyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPrivateKeyU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___U3CTimeoutU3Ek__BackingField_5)); }
	inline float get_U3CTimeoutU3Ek__BackingField_5() const { return ___U3CTimeoutU3Ek__BackingField_5; }
	inline float* get_address_of_U3CTimeoutU3Ek__BackingField_5() { return &___U3CTimeoutU3Ek__BackingField_5; }
	inline void set_U3CTimeoutU3Ek__BackingField_5(float value)
	{
		___U3CTimeoutU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAutoPingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___U3CAutoPingU3Ek__BackingField_6)); }
	inline bool get_U3CAutoPingU3Ek__BackingField_6() const { return ___U3CAutoPingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CAutoPingU3Ek__BackingField_6() { return &___U3CAutoPingU3Ek__BackingField_6; }
	inline void set_U3CAutoPingU3Ek__BackingField_6(bool value)
	{
		___U3CAutoPingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CUseCachingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___U3CUseCachingU3Ek__BackingField_7)); }
	inline bool get_U3CUseCachingU3Ek__BackingField_7() const { return ___U3CUseCachingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CUseCachingU3Ek__BackingField_7() { return &___U3CUseCachingU3Ek__BackingField_7; }
	inline void set_U3CUseCachingU3Ek__BackingField_7(bool value)
	{
		___U3CUseCachingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_currentUser_8() { return static_cast<int32_t>(offsetof(Manager_t2929144603, ___currentUser_8)); }
	inline User_t1152763447 * get_currentUser_8() const { return ___currentUser_8; }
	inline User_t1152763447 ** get_address_of_currentUser_8() { return &___currentUser_8; }
	inline void set_currentUser_8(User_t1152763447 * value)
	{
		___currentUser_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentUser_8, value);
	}
};

struct Manager_t2929144603_StaticFields
{
public:
	// System.Action`1<GameJolt.API.Objects.Trophy[]> GameJolt.API.Manager::<>f__am$cache0
	Action_1_t3519465901 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(Manager_t2929144603_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Action_1_t3519465901 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Action_1_t3519465901 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Action_1_t3519465901 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
