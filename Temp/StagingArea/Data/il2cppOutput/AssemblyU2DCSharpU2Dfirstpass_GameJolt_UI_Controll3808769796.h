#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_UI_Controlle112773385.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.SignInWindow
struct  SignInWindow_t3808769796  : public BaseWindow_t112773385
{
public:
	// UnityEngine.UI.InputField GameJolt.UI.Controllers.SignInWindow::usernameField
	InputField_t1631627530 * ___usernameField_3;
	// UnityEngine.UI.InputField GameJolt.UI.Controllers.SignInWindow::tokenField
	InputField_t1631627530 * ___tokenField_4;
	// UnityEngine.UI.Text GameJolt.UI.Controllers.SignInWindow::errorMessage
	Text_t356221433 * ___errorMessage_5;
	// System.Action`1<System.Boolean> GameJolt.UI.Controllers.SignInWindow::callback
	Action_1_t3627374100 * ___callback_6;

public:
	inline static int32_t get_offset_of_usernameField_3() { return static_cast<int32_t>(offsetof(SignInWindow_t3808769796, ___usernameField_3)); }
	inline InputField_t1631627530 * get_usernameField_3() const { return ___usernameField_3; }
	inline InputField_t1631627530 ** get_address_of_usernameField_3() { return &___usernameField_3; }
	inline void set_usernameField_3(InputField_t1631627530 * value)
	{
		___usernameField_3 = value;
		Il2CppCodeGenWriteBarrier(&___usernameField_3, value);
	}

	inline static int32_t get_offset_of_tokenField_4() { return static_cast<int32_t>(offsetof(SignInWindow_t3808769796, ___tokenField_4)); }
	inline InputField_t1631627530 * get_tokenField_4() const { return ___tokenField_4; }
	inline InputField_t1631627530 ** get_address_of_tokenField_4() { return &___tokenField_4; }
	inline void set_tokenField_4(InputField_t1631627530 * value)
	{
		___tokenField_4 = value;
		Il2CppCodeGenWriteBarrier(&___tokenField_4, value);
	}

	inline static int32_t get_offset_of_errorMessage_5() { return static_cast<int32_t>(offsetof(SignInWindow_t3808769796, ___errorMessage_5)); }
	inline Text_t356221433 * get_errorMessage_5() const { return ___errorMessage_5; }
	inline Text_t356221433 ** get_address_of_errorMessage_5() { return &___errorMessage_5; }
	inline void set_errorMessage_5(Text_t356221433 * value)
	{
		___errorMessage_5 = value;
		Il2CppCodeGenWriteBarrier(&___errorMessage_5, value);
	}

	inline static int32_t get_offset_of_callback_6() { return static_cast<int32_t>(offsetof(SignInWindow_t3808769796, ___callback_6)); }
	inline Action_1_t3627374100 * get_callback_6() const { return ___callback_6; }
	inline Action_1_t3627374100 ** get_address_of_callback_6() { return &___callback_6; }
	inline void set_callback_6(Action_1_t3627374100 * value)
	{
		___callback_6 = value;
		Il2CppCodeGenWriteBarrier(&___callback_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
