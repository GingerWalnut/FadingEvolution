#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GameJolt.API.Objects.Trophy>
struct Action_1_t282107960;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Trophies/<Get>c__AnonStorey3
struct  U3CGetU3Ec__AnonStorey3_t2657712942  : public Il2CppObject
{
public:
	// System.Int32 GameJolt.API.Trophies/<Get>c__AnonStorey3::id
	int32_t ___id_0;
	// System.Action`1<GameJolt.API.Objects.Trophy> GameJolt.API.Trophies/<Get>c__AnonStorey3::callback
	Action_1_t282107960 * ___callback_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey3_t2657712942, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CGetU3Ec__AnonStorey3_t2657712942, ___callback_1)); }
	inline Action_1_t282107960 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t282107960 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t282107960 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
