#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.NotificationItem
struct  NotificationItem_t194023970  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image GameJolt.UI.Controllers.NotificationItem::image
	Image_t2042527209 * ___image_2;
	// UnityEngine.UI.Text GameJolt.UI.Controllers.NotificationItem::text
	Text_t356221433 * ___text_3;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(NotificationItem_t194023970, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(NotificationItem_t194023970, ___text_3)); }
	inline Text_t356221433 * get_text_3() const { return ___text_3; }
	inline Text_t356221433 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t356221433 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
