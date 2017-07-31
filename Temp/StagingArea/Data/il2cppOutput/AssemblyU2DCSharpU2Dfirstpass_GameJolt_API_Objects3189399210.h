#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// GameJolt.API.Objects.User
struct User_t1152763447;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Objects.User/<DownloadAvatar>c__AnonStorey1
struct  U3CDownloadAvatarU3Ec__AnonStorey1_t3189399210  : public Il2CppObject
{
public:
	// System.Action`1<System.Boolean> GameJolt.API.Objects.User/<DownloadAvatar>c__AnonStorey1::callback
	Action_1_t3627374100 * ___callback_0;
	// GameJolt.API.Objects.User GameJolt.API.Objects.User/<DownloadAvatar>c__AnonStorey1::$this
	User_t1152763447 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CDownloadAvatarU3Ec__AnonStorey1_t3189399210, ___callback_0)); }
	inline Action_1_t3627374100 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3627374100 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3627374100 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDownloadAvatarU3Ec__AnonStorey1_t3189399210, ___U24this_1)); }
	inline User_t1152763447 * get_U24this_1() const { return ___U24this_1; }
	inline User_t1152763447 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(User_t1152763447 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
