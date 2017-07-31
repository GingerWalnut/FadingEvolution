#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GameJolt.API.Objects.Trophy
struct Trophy_t480308578;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Trophies/<PrepareNotification>c__AnonStorey2
struct  U3CPrepareNotificationU3Ec__AnonStorey2_t3778415783  : public Il2CppObject
{
public:
	// GameJolt.API.Objects.Trophy GameJolt.API.Trophies/<PrepareNotification>c__AnonStorey2::trophy
	Trophy_t480308578 * ___trophy_0;

public:
	inline static int32_t get_offset_of_trophy_0() { return static_cast<int32_t>(offsetof(U3CPrepareNotificationU3Ec__AnonStorey2_t3778415783, ___trophy_0)); }
	inline Trophy_t480308578 * get_trophy_0() const { return ___trophy_0; }
	inline Trophy_t480308578 ** get_address_of_trophy_0() { return &___trophy_0; }
	inline void set_trophy_0(Trophy_t480308578 * value)
	{
		___trophy_0 = value;
		Il2CppCodeGenWriteBarrier(&___trophy_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
