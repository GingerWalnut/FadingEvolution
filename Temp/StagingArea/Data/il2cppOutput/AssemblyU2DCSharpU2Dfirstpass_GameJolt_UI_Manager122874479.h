#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_GameJolt_API_Core_Mon826898969.h"

// GameJolt.UI.Controllers.SignInWindow
struct SignInWindow_t3808769796;
// GameJolt.UI.Controllers.TrophiesWindow
struct TrophiesWindow_t1296021764;
// GameJolt.UI.Controllers.LeaderboardsWindow
struct LeaderboardsWindow_t53661266;
// GameJolt.UI.Behaviours.NotificationCentre
struct NotificationCentre_t1102848780;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Manager
struct  Manager_t122874479  : public MonoSingleton_1_t826898969
{
public:
	// GameJolt.UI.Controllers.SignInWindow GameJolt.UI.Manager::signinWindow
	SignInWindow_t3808769796 * ___signinWindow_3;
	// GameJolt.UI.Controllers.TrophiesWindow GameJolt.UI.Manager::trophiesWindow
	TrophiesWindow_t1296021764 * ___trophiesWindow_4;
	// GameJolt.UI.Controllers.LeaderboardsWindow GameJolt.UI.Manager::leaderboardsWindow
	LeaderboardsWindow_t53661266 * ___leaderboardsWindow_5;
	// GameJolt.UI.Behaviours.NotificationCentre GameJolt.UI.Manager::notificationCentre
	NotificationCentre_t1102848780 * ___notificationCentre_6;

public:
	inline static int32_t get_offset_of_signinWindow_3() { return static_cast<int32_t>(offsetof(Manager_t122874479, ___signinWindow_3)); }
	inline SignInWindow_t3808769796 * get_signinWindow_3() const { return ___signinWindow_3; }
	inline SignInWindow_t3808769796 ** get_address_of_signinWindow_3() { return &___signinWindow_3; }
	inline void set_signinWindow_3(SignInWindow_t3808769796 * value)
	{
		___signinWindow_3 = value;
		Il2CppCodeGenWriteBarrier(&___signinWindow_3, value);
	}

	inline static int32_t get_offset_of_trophiesWindow_4() { return static_cast<int32_t>(offsetof(Manager_t122874479, ___trophiesWindow_4)); }
	inline TrophiesWindow_t1296021764 * get_trophiesWindow_4() const { return ___trophiesWindow_4; }
	inline TrophiesWindow_t1296021764 ** get_address_of_trophiesWindow_4() { return &___trophiesWindow_4; }
	inline void set_trophiesWindow_4(TrophiesWindow_t1296021764 * value)
	{
		___trophiesWindow_4 = value;
		Il2CppCodeGenWriteBarrier(&___trophiesWindow_4, value);
	}

	inline static int32_t get_offset_of_leaderboardsWindow_5() { return static_cast<int32_t>(offsetof(Manager_t122874479, ___leaderboardsWindow_5)); }
	inline LeaderboardsWindow_t53661266 * get_leaderboardsWindow_5() const { return ___leaderboardsWindow_5; }
	inline LeaderboardsWindow_t53661266 ** get_address_of_leaderboardsWindow_5() { return &___leaderboardsWindow_5; }
	inline void set_leaderboardsWindow_5(LeaderboardsWindow_t53661266 * value)
	{
		___leaderboardsWindow_5 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardsWindow_5, value);
	}

	inline static int32_t get_offset_of_notificationCentre_6() { return static_cast<int32_t>(offsetof(Manager_t122874479, ___notificationCentre_6)); }
	inline NotificationCentre_t1102848780 * get_notificationCentre_6() const { return ___notificationCentre_6; }
	inline NotificationCentre_t1102848780 ** get_address_of_notificationCentre_6() { return &___notificationCentre_6; }
	inline void set_notificationCentre_6(NotificationCentre_t1102848780 * value)
	{
		___notificationCentre_6 = value;
		Il2CppCodeGenWriteBarrier(&___notificationCentre_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
