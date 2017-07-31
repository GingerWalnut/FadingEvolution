#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_StateMachineBehaviour2151245329.h"

// System.String
struct String_t;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Behaviours.KeyboardNavigableForm
struct  KeyboardNavigableForm_t3395693736  : public StateMachineBehaviour_t2151245329
{
public:
	// System.String GameJolt.UI.Behaviours.KeyboardNavigableForm::firstFieldPath
	String_t* ___firstFieldPath_2;
	// System.String GameJolt.UI.Behaviours.KeyboardNavigableForm::submitButtonPath
	String_t* ___submitButtonPath_3;
	// UnityEngine.UI.InputField GameJolt.UI.Behaviours.KeyboardNavigableForm::firstField
	InputField_t1631627530 * ___firstField_4;
	// UnityEngine.UI.Button GameJolt.UI.Behaviours.KeyboardNavigableForm::submitButton
	Button_t2872111280 * ___submitButton_5;

public:
	inline static int32_t get_offset_of_firstFieldPath_2() { return static_cast<int32_t>(offsetof(KeyboardNavigableForm_t3395693736, ___firstFieldPath_2)); }
	inline String_t* get_firstFieldPath_2() const { return ___firstFieldPath_2; }
	inline String_t** get_address_of_firstFieldPath_2() { return &___firstFieldPath_2; }
	inline void set_firstFieldPath_2(String_t* value)
	{
		___firstFieldPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstFieldPath_2, value);
	}

	inline static int32_t get_offset_of_submitButtonPath_3() { return static_cast<int32_t>(offsetof(KeyboardNavigableForm_t3395693736, ___submitButtonPath_3)); }
	inline String_t* get_submitButtonPath_3() const { return ___submitButtonPath_3; }
	inline String_t** get_address_of_submitButtonPath_3() { return &___submitButtonPath_3; }
	inline void set_submitButtonPath_3(String_t* value)
	{
		___submitButtonPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___submitButtonPath_3, value);
	}

	inline static int32_t get_offset_of_firstField_4() { return static_cast<int32_t>(offsetof(KeyboardNavigableForm_t3395693736, ___firstField_4)); }
	inline InputField_t1631627530 * get_firstField_4() const { return ___firstField_4; }
	inline InputField_t1631627530 ** get_address_of_firstField_4() { return &___firstField_4; }
	inline void set_firstField_4(InputField_t1631627530 * value)
	{
		___firstField_4 = value;
		Il2CppCodeGenWriteBarrier(&___firstField_4, value);
	}

	inline static int32_t get_offset_of_submitButton_5() { return static_cast<int32_t>(offsetof(KeyboardNavigableForm_t3395693736, ___submitButton_5)); }
	inline Button_t2872111280 * get_submitButton_5() const { return ___submitButton_5; }
	inline Button_t2872111280 ** get_address_of_submitButton_5() { return &___submitButton_5; }
	inline void set_submitButton_5(Button_t2872111280 * value)
	{
		___submitButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___submitButton_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
