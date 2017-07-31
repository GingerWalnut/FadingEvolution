#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.TrophyItem
struct  TrophyItem_t662135789  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CanvasGroup GameJolt.UI.Controllers.TrophyItem::group
	CanvasGroup_t3296560743 * ___group_2;
	// UnityEngine.UI.Image GameJolt.UI.Controllers.TrophyItem::image
	Image_t2042527209 * ___image_3;
	// UnityEngine.UI.Text GameJolt.UI.Controllers.TrophyItem::title
	Text_t356221433 * ___title_4;
	// UnityEngine.UI.Text GameJolt.UI.Controllers.TrophyItem::description
	Text_t356221433 * ___description_5;

public:
	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(TrophyItem_t662135789, ___group_2)); }
	inline CanvasGroup_t3296560743 * get_group_2() const { return ___group_2; }
	inline CanvasGroup_t3296560743 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CanvasGroup_t3296560743 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier(&___group_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(TrophyItem_t662135789, ___image_3)); }
	inline Image_t2042527209 * get_image_3() const { return ___image_3; }
	inline Image_t2042527209 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Image_t2042527209 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(TrophyItem_t662135789, ___title_4)); }
	inline Text_t356221433 * get_title_4() const { return ___title_4; }
	inline Text_t356221433 ** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(Text_t356221433 * value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier(&___title_4, value);
	}

	inline static int32_t get_offset_of_description_5() { return static_cast<int32_t>(offsetof(TrophyItem_t662135789, ___description_5)); }
	inline Text_t356221433 * get_description_5() const { return ___description_5; }
	inline Text_t356221433 ** get_address_of_description_5() { return &___description_5; }
	inline void set_description_5(Text_t356221433 * value)
	{
		___description_5 = value;
		Il2CppCodeGenWriteBarrier(&___description_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
