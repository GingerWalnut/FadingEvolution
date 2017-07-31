#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.ScoreItem
struct  ScoreItem_t4291748601  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameJolt.UI.Controllers.ScoreItem::username
	Text_t356221433 * ___username_2;
	// UnityEngine.UI.Text GameJolt.UI.Controllers.ScoreItem::value
	Text_t356221433 * ___value_3;
	// UnityEngine.Color GameJolt.UI.Controllers.ScoreItem::defaultColour
	Color_t2020392075  ___defaultColour_4;
	// UnityEngine.Color GameJolt.UI.Controllers.ScoreItem::highlightColour
	Color_t2020392075  ___highlightColour_5;

public:
	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(ScoreItem_t4291748601, ___username_2)); }
	inline Text_t356221433 * get_username_2() const { return ___username_2; }
	inline Text_t356221433 ** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(Text_t356221433 * value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier(&___username_2, value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ScoreItem_t4291748601, ___value_3)); }
	inline Text_t356221433 * get_value_3() const { return ___value_3; }
	inline Text_t356221433 ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(Text_t356221433 * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}

	inline static int32_t get_offset_of_defaultColour_4() { return static_cast<int32_t>(offsetof(ScoreItem_t4291748601, ___defaultColour_4)); }
	inline Color_t2020392075  get_defaultColour_4() const { return ___defaultColour_4; }
	inline Color_t2020392075 * get_address_of_defaultColour_4() { return &___defaultColour_4; }
	inline void set_defaultColour_4(Color_t2020392075  value)
	{
		___defaultColour_4 = value;
	}

	inline static int32_t get_offset_of_highlightColour_5() { return static_cast<int32_t>(offsetof(ScoreItem_t4291748601, ___highlightColour_5)); }
	inline Color_t2020392075  get_highlightColour_5() const { return ___highlightColour_5; }
	inline Color_t2020392075 * get_address_of_highlightColour_5() { return &___highlightColour_5; }
	inline void set_highlightColour_5(Color_t2020392075  value)
	{
		___highlightColour_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
