﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameJolt.API.Core.MonoSingleton`1<System.Object>
struct  MonoSingleton_1_t3393473785  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MonoSingleton_1_t3393473785_StaticFields
{
public:
	// T GameJolt.API.Core.MonoSingleton`1::instance
	Il2CppObject * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t3393473785_StaticFields, ___instance_2)); }
	inline Il2CppObject * get_instance_2() const { return ___instance_2; }
	inline Il2CppObject ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Il2CppObject * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
