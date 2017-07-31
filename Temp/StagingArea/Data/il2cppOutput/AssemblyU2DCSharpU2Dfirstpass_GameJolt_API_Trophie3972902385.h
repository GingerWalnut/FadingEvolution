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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Trophies/<Unlock>c__AnonStorey0
struct  U3CUnlockU3Ec__AnonStorey0_t3972902385  : public Il2CppObject
{
public:
	// System.Int32 GameJolt.API.Trophies/<Unlock>c__AnonStorey0::id
	int32_t ___id_0;
	// System.Action`1<System.Boolean> GameJolt.API.Trophies/<Unlock>c__AnonStorey0::callback
	Action_1_t3627374100 * ___callback_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CUnlockU3Ec__AnonStorey0_t3972902385, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CUnlockU3Ec__AnonStorey0_t3972902385, ___callback_1)); }
	inline Action_1_t3627374100 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t3627374100 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t3627374100 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
