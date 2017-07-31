#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_UI_Controlle112773385.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.TrophiesWindow
struct  TrophiesWindow_t1296021764  : public BaseWindow_t112773385
{
public:
	// UnityEngine.RectTransform GameJolt.UI.Controllers.TrophiesWindow::container
	RectTransform_t3349966182 * ___container_3;
	// UnityEngine.GameObject GameJolt.UI.Controllers.TrophiesWindow::trophyItem
	GameObject_t1756533147 * ___trophyItem_4;
	// System.Action`1<System.Boolean> GameJolt.UI.Controllers.TrophiesWindow::callback
	Action_1_t3627374100 * ___callback_5;

public:
	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(TrophiesWindow_t1296021764, ___container_3)); }
	inline RectTransform_t3349966182 * get_container_3() const { return ___container_3; }
	inline RectTransform_t3349966182 ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(RectTransform_t3349966182 * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier(&___container_3, value);
	}

	inline static int32_t get_offset_of_trophyItem_4() { return static_cast<int32_t>(offsetof(TrophiesWindow_t1296021764, ___trophyItem_4)); }
	inline GameObject_t1756533147 * get_trophyItem_4() const { return ___trophyItem_4; }
	inline GameObject_t1756533147 ** get_address_of_trophyItem_4() { return &___trophyItem_4; }
	inline void set_trophyItem_4(GameObject_t1756533147 * value)
	{
		___trophyItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___trophyItem_4, value);
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(TrophiesWindow_t1296021764, ___callback_5)); }
	inline Action_1_t3627374100 * get_callback_5() const { return ___callback_5; }
	inline Action_1_t3627374100 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(Action_1_t3627374100 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___callback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
