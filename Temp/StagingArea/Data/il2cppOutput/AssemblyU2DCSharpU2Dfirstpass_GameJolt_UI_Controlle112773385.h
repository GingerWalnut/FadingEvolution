#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.BaseWindow
struct  BaseWindow_t112773385  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GameJolt.UI.Controllers.BaseWindow::animator
	Animator_t69676727 * ___animator_2;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(BaseWindow_t112773385, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
