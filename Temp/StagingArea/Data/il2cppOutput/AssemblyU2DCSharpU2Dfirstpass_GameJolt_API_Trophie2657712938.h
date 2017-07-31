#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GameJolt.API.Objects.Trophy[]>
struct Action_1_t3519465901;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Trophies/<Get>c__AnonStorey7
struct  U3CGetU3Ec__AnonStorey7_t2657712938  : public Il2CppObject
{
public:
	// System.Action`1<GameJolt.API.Objects.Trophy[]> GameJolt.API.Trophies/<Get>c__AnonStorey7::callback
	Action_1_t3519465901 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey7_t2657712938, ___callback_0)); }
	inline Action_1_t3519465901 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3519465901 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3519465901 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
