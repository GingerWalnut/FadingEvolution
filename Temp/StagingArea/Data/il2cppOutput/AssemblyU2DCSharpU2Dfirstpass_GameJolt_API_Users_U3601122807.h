#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GameJolt.API.Objects.User
struct User_t1152763447;
// System.Action`1<GameJolt.API.Objects.User>
struct Action_1_t954562829;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Users/<Get>c__AnonStorey0
struct  U3CGetU3Ec__AnonStorey0_t3601122807  : public Il2CppObject
{
public:
	// GameJolt.API.Objects.User GameJolt.API.Users/<Get>c__AnonStorey0::user
	User_t1152763447 * ___user_0;
	// System.Action`1<GameJolt.API.Objects.User> GameJolt.API.Users/<Get>c__AnonStorey0::callback
	Action_1_t954562829 * ___callback_1;

public:
	inline static int32_t get_offset_of_user_0() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey0_t3601122807, ___user_0)); }
	inline User_t1152763447 * get_user_0() const { return ___user_0; }
	inline User_t1152763447 ** get_address_of_user_0() { return &___user_0; }
	inline void set_user_0(User_t1152763447 * value)
	{
		___user_0 = value;
		Il2CppCodeGenWriteBarrier(&___user_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey0_t3601122807, ___callback_1)); }
	inline Action_1_t954562829 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t954562829 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t954562829 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
