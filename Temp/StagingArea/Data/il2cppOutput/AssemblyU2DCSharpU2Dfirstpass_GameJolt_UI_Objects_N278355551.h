#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Objects.Notification
struct  Notification_t278355551  : public Il2CppObject
{
public:
	// System.String GameJolt.UI.Objects.Notification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// UnityEngine.Sprite GameJolt.UI.Objects.Notification::<Image>k__BackingField
	Sprite_t309593783 * ___U3CImageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Notification_t278355551, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTextU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CImageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Notification_t278355551, ___U3CImageU3Ek__BackingField_1)); }
	inline Sprite_t309593783 * get_U3CImageU3Ek__BackingField_1() const { return ___U3CImageU3Ek__BackingField_1; }
	inline Sprite_t309593783 ** get_address_of_U3CImageU3Ek__BackingField_1() { return &___U3CImageU3Ek__BackingField_1; }
	inline void set_U3CImageU3Ek__BackingField_1(Sprite_t309593783 * value)
	{
		___U3CImageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CImageU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
