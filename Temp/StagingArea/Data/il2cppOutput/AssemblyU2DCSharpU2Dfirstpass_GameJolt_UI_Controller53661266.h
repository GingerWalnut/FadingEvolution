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
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Controllers.LeaderboardsWindow
struct  LeaderboardsWindow_t53661266  : public BaseWindow_t112773385
{
public:
	// UnityEngine.RectTransform GameJolt.UI.Controllers.LeaderboardsWindow::tabsContainer
	RectTransform_t3349966182 * ___tabsContainer_3;
	// UnityEngine.GameObject GameJolt.UI.Controllers.LeaderboardsWindow::tableButton
	GameObject_t1756533147 * ___tableButton_4;
	// UnityEngine.UI.ScrollRect GameJolt.UI.Controllers.LeaderboardsWindow::scoresScrollRect
	ScrollRect_t1199013257 * ___scoresScrollRect_5;
	// UnityEngine.GameObject GameJolt.UI.Controllers.LeaderboardsWindow::scoreItem
	GameObject_t1756533147 * ___scoreItem_6;
	// System.Action`1<System.Boolean> GameJolt.UI.Controllers.LeaderboardsWindow::callback
	Action_1_t3627374100 * ___callback_7;
	// System.Int32[] GameJolt.UI.Controllers.LeaderboardsWindow::tableIDs
	Int32U5BU5D_t3030399641* ___tableIDs_8;
	// System.Int32 GameJolt.UI.Controllers.LeaderboardsWindow::currentTab
	int32_t ___currentTab_9;

public:
	inline static int32_t get_offset_of_tabsContainer_3() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___tabsContainer_3)); }
	inline RectTransform_t3349966182 * get_tabsContainer_3() const { return ___tabsContainer_3; }
	inline RectTransform_t3349966182 ** get_address_of_tabsContainer_3() { return &___tabsContainer_3; }
	inline void set_tabsContainer_3(RectTransform_t3349966182 * value)
	{
		___tabsContainer_3 = value;
		Il2CppCodeGenWriteBarrier(&___tabsContainer_3, value);
	}

	inline static int32_t get_offset_of_tableButton_4() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___tableButton_4)); }
	inline GameObject_t1756533147 * get_tableButton_4() const { return ___tableButton_4; }
	inline GameObject_t1756533147 ** get_address_of_tableButton_4() { return &___tableButton_4; }
	inline void set_tableButton_4(GameObject_t1756533147 * value)
	{
		___tableButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___tableButton_4, value);
	}

	inline static int32_t get_offset_of_scoresScrollRect_5() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___scoresScrollRect_5)); }
	inline ScrollRect_t1199013257 * get_scoresScrollRect_5() const { return ___scoresScrollRect_5; }
	inline ScrollRect_t1199013257 ** get_address_of_scoresScrollRect_5() { return &___scoresScrollRect_5; }
	inline void set_scoresScrollRect_5(ScrollRect_t1199013257 * value)
	{
		___scoresScrollRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoresScrollRect_5, value);
	}

	inline static int32_t get_offset_of_scoreItem_6() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___scoreItem_6)); }
	inline GameObject_t1756533147 * get_scoreItem_6() const { return ___scoreItem_6; }
	inline GameObject_t1756533147 ** get_address_of_scoreItem_6() { return &___scoreItem_6; }
	inline void set_scoreItem_6(GameObject_t1756533147 * value)
	{
		___scoreItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreItem_6, value);
	}

	inline static int32_t get_offset_of_callback_7() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___callback_7)); }
	inline Action_1_t3627374100 * get_callback_7() const { return ___callback_7; }
	inline Action_1_t3627374100 ** get_address_of_callback_7() { return &___callback_7; }
	inline void set_callback_7(Action_1_t3627374100 * value)
	{
		___callback_7 = value;
		Il2CppCodeGenWriteBarrier(&___callback_7, value);
	}

	inline static int32_t get_offset_of_tableIDs_8() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___tableIDs_8)); }
	inline Int32U5BU5D_t3030399641* get_tableIDs_8() const { return ___tableIDs_8; }
	inline Int32U5BU5D_t3030399641** get_address_of_tableIDs_8() { return &___tableIDs_8; }
	inline void set_tableIDs_8(Int32U5BU5D_t3030399641* value)
	{
		___tableIDs_8 = value;
		Il2CppCodeGenWriteBarrier(&___tableIDs_8, value);
	}

	inline static int32_t get_offset_of_currentTab_9() { return static_cast<int32_t>(offsetof(LeaderboardsWindow_t53661266, ___currentTab_9)); }
	inline int32_t get_currentTab_9() const { return ___currentTab_9; }
	inline int32_t* get_address_of_currentTab_9() { return &___currentTab_9; }
	inline void set_currentTab_9(int32_t value)
	{
		___currentTab_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
