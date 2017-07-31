#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Objects2375913005.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Objects1979452855.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Objects1517081349.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Objects.User
struct  User_t1152763447  : public Base_t2375913005
{
public:
	// System.String GameJolt.API.Objects.User::name
	String_t* ___name_0;
	// System.String GameJolt.API.Objects.User::token
	String_t* ___token_1;
	// System.Boolean GameJolt.API.Objects.User::<IsAuthenticated>k__BackingField
	bool ___U3CIsAuthenticatedU3Ek__BackingField_2;
	// System.Int32 GameJolt.API.Objects.User::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_3;
	// GameJolt.API.Objects.UserType GameJolt.API.Objects.User::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_4;
	// GameJolt.API.Objects.UserStatus GameJolt.API.Objects.User::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_5;
	// System.String GameJolt.API.Objects.User::<AvatarURL>k__BackingField
	String_t* ___U3CAvatarURLU3Ek__BackingField_6;
	// UnityEngine.Sprite GameJolt.API.Objects.User::<Avatar>k__BackingField
	Sprite_t309593783 * ___U3CAvatarU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(User_t1152763447, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_token_1() { return static_cast<int32_t>(offsetof(User_t1152763447, ___token_1)); }
	inline String_t* get_token_1() const { return ___token_1; }
	inline String_t** get_address_of_token_1() { return &___token_1; }
	inline void set_token_1(String_t* value)
	{
		___token_1 = value;
		Il2CppCodeGenWriteBarrier(&___token_1, value);
	}

	inline static int32_t get_offset_of_U3CIsAuthenticatedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CIsAuthenticatedU3Ek__BackingField_2)); }
	inline bool get_U3CIsAuthenticatedU3Ek__BackingField_2() const { return ___U3CIsAuthenticatedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsAuthenticatedU3Ek__BackingField_2() { return &___U3CIsAuthenticatedU3Ek__BackingField_2; }
	inline void set_U3CIsAuthenticatedU3Ek__BackingField_2(bool value)
	{
		___U3CIsAuthenticatedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CIDU3Ek__BackingField_3)); }
	inline int32_t get_U3CIDU3Ek__BackingField_3() const { return ___U3CIDU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_3() { return &___U3CIDU3Ek__BackingField_3; }
	inline void set_U3CIDU3Ek__BackingField_3(int32_t value)
	{
		___U3CIDU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_4() const { return ___U3CTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_4() { return &___U3CTypeU3Ek__BackingField_4; }
	inline void set_U3CTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CStatusU3Ek__BackingField_5)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_5() const { return ___U3CStatusU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_5() { return &___U3CStatusU3Ek__BackingField_5; }
	inline void set_U3CStatusU3Ek__BackingField_5(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAvatarURLU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CAvatarURLU3Ek__BackingField_6)); }
	inline String_t* get_U3CAvatarURLU3Ek__BackingField_6() const { return ___U3CAvatarURLU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CAvatarURLU3Ek__BackingField_6() { return &___U3CAvatarURLU3Ek__BackingField_6; }
	inline void set_U3CAvatarURLU3Ek__BackingField_6(String_t* value)
	{
		___U3CAvatarURLU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvatarURLU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CAvatarU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(User_t1152763447, ___U3CAvatarU3Ek__BackingField_7)); }
	inline Sprite_t309593783 * get_U3CAvatarU3Ek__BackingField_7() const { return ___U3CAvatarU3Ek__BackingField_7; }
	inline Sprite_t309593783 ** get_address_of_U3CAvatarU3Ek__BackingField_7() { return &___U3CAvatarU3Ek__BackingField_7; }
	inline void set_U3CAvatarU3Ek__BackingField_7(Sprite_t309593783 * value)
	{
		___U3CAvatarU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvatarU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
