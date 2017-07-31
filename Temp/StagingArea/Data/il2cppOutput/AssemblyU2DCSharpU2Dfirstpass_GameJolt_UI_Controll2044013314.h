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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Button
struct Button_t2872111280;
// GameJolt.UI.Controllers.LeaderboardsWindow
struct LeaderboardsWindow_t53661266;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.TableButton
struct  TableButton_t2044013314  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameJolt.UI.Controllers.TableButton::title
	Text_t356221433 * ___title_2;
	// UnityEngine.UI.Image GameJolt.UI.Controllers.TableButton::backgroundImage
	Image_t2042527209 * ___backgroundImage_3;
	// UnityEngine.Color GameJolt.UI.Controllers.TableButton::defaultBackgroundColour
	Color_t2020392075  ___defaultBackgroundColour_4;
	// UnityEngine.Color GameJolt.UI.Controllers.TableButton::activeBackgroundColour
	Color_t2020392075  ___activeBackgroundColour_5;
	// UnityEngine.UI.Button GameJolt.UI.Controllers.TableButton::button
	Button_t2872111280 * ___button_6;
	// System.Int32 GameJolt.UI.Controllers.TableButton::tabIndex
	int32_t ___tabIndex_7;
	// GameJolt.UI.Controllers.LeaderboardsWindow GameJolt.UI.Controllers.TableButton::windowController
	LeaderboardsWindow_t53661266 * ___windowController_8;
	// System.Boolean GameJolt.UI.Controllers.TableButton::active
	bool ___active_9;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___title_2)); }
	inline Text_t356221433 * get_title_2() const { return ___title_2; }
	inline Text_t356221433 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Text_t356221433 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_backgroundImage_3() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___backgroundImage_3)); }
	inline Image_t2042527209 * get_backgroundImage_3() const { return ___backgroundImage_3; }
	inline Image_t2042527209 ** get_address_of_backgroundImage_3() { return &___backgroundImage_3; }
	inline void set_backgroundImage_3(Image_t2042527209 * value)
	{
		___backgroundImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundImage_3, value);
	}

	inline static int32_t get_offset_of_defaultBackgroundColour_4() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___defaultBackgroundColour_4)); }
	inline Color_t2020392075  get_defaultBackgroundColour_4() const { return ___defaultBackgroundColour_4; }
	inline Color_t2020392075 * get_address_of_defaultBackgroundColour_4() { return &___defaultBackgroundColour_4; }
	inline void set_defaultBackgroundColour_4(Color_t2020392075  value)
	{
		___defaultBackgroundColour_4 = value;
	}

	inline static int32_t get_offset_of_activeBackgroundColour_5() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___activeBackgroundColour_5)); }
	inline Color_t2020392075  get_activeBackgroundColour_5() const { return ___activeBackgroundColour_5; }
	inline Color_t2020392075 * get_address_of_activeBackgroundColour_5() { return &___activeBackgroundColour_5; }
	inline void set_activeBackgroundColour_5(Color_t2020392075  value)
	{
		___activeBackgroundColour_5 = value;
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___button_6)); }
	inline Button_t2872111280 * get_button_6() const { return ___button_6; }
	inline Button_t2872111280 ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_t2872111280 * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier(&___button_6, value);
	}

	inline static int32_t get_offset_of_tabIndex_7() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___tabIndex_7)); }
	inline int32_t get_tabIndex_7() const { return ___tabIndex_7; }
	inline int32_t* get_address_of_tabIndex_7() { return &___tabIndex_7; }
	inline void set_tabIndex_7(int32_t value)
	{
		___tabIndex_7 = value;
	}

	inline static int32_t get_offset_of_windowController_8() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___windowController_8)); }
	inline LeaderboardsWindow_t53661266 * get_windowController_8() const { return ___windowController_8; }
	inline LeaderboardsWindow_t53661266 ** get_address_of_windowController_8() { return &___windowController_8; }
	inline void set_windowController_8(LeaderboardsWindow_t53661266 * value)
	{
		___windowController_8 = value;
		Il2CppCodeGenWriteBarrier(&___windowController_8, value);
	}

	inline static int32_t get_offset_of_active_9() { return static_cast<int32_t>(offsetof(TableButton_t2044013314, ___active_9)); }
	inline bool get_active_9() const { return ___active_9; }
	inline bool* get_address_of_active_9() { return &___active_9; }
	inline void set_active_9(bool value)
	{
		___active_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
