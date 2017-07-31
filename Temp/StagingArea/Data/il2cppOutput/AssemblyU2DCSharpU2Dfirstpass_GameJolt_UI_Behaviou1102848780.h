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
// GameJolt.UI.Controllers.NotificationItem
struct NotificationItem_t194023970;
// System.Collections.Generic.Queue`1<GameJolt.UI.Objects.Notification>
struct Queue_1_t98012386;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.UI.Behaviours.NotificationCentre
struct  NotificationCentre_t1102848780  : public StateMachineBehaviour_t2151245329
{
public:
	// System.String GameJolt.UI.Behaviours.NotificationCentre::notificationPanelPath
	String_t* ___notificationPanelPath_2;
	// GameJolt.UI.Controllers.NotificationItem GameJolt.UI.Behaviours.NotificationCentre::notificationItem
	NotificationItem_t194023970 * ___notificationItem_3;
	// System.Collections.Generic.Queue`1<GameJolt.UI.Objects.Notification> GameJolt.UI.Behaviours.NotificationCentre::notificationsQueue
	Queue_1_t98012386 * ___notificationsQueue_4;

public:
	inline static int32_t get_offset_of_notificationPanelPath_2() { return static_cast<int32_t>(offsetof(NotificationCentre_t1102848780, ___notificationPanelPath_2)); }
	inline String_t* get_notificationPanelPath_2() const { return ___notificationPanelPath_2; }
	inline String_t** get_address_of_notificationPanelPath_2() { return &___notificationPanelPath_2; }
	inline void set_notificationPanelPath_2(String_t* value)
	{
		___notificationPanelPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___notificationPanelPath_2, value);
	}

	inline static int32_t get_offset_of_notificationItem_3() { return static_cast<int32_t>(offsetof(NotificationCentre_t1102848780, ___notificationItem_3)); }
	inline NotificationItem_t194023970 * get_notificationItem_3() const { return ___notificationItem_3; }
	inline NotificationItem_t194023970 ** get_address_of_notificationItem_3() { return &___notificationItem_3; }
	inline void set_notificationItem_3(NotificationItem_t194023970 * value)
	{
		___notificationItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___notificationItem_3, value);
	}

	inline static int32_t get_offset_of_notificationsQueue_4() { return static_cast<int32_t>(offsetof(NotificationCentre_t1102848780, ___notificationsQueue_4)); }
	inline Queue_1_t98012386 * get_notificationsQueue_4() const { return ___notificationsQueue_4; }
	inline Queue_1_t98012386 ** get_address_of_notificationsQueue_4() { return &___notificationsQueue_4; }
	inline void set_notificationsQueue_4(Queue_1_t98012386 * value)
	{
		___notificationsQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___notificationsQueue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
