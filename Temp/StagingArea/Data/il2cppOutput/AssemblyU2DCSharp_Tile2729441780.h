#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Int32>
struct Dictionary_2_t3016621180;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2729441780  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Int32> Tile::food
	Dictionary_2_t3016621180 * ___food_2;
	// System.Int32 Tile::x
	int32_t ___x_3;
	// System.Int32 Tile::y
	int32_t ___y_4;
	// System.Boolean Tile::isWater
	bool ___isWater_5;
	// UnityEngine.AudioClip Tile::flipClip
	AudioClip_t1932558630 * ___flipClip_6;
	// UnityEngine.AudioClip Tile::convertClip
	AudioClip_t1932558630 * ___convertClip_7;

public:
	inline static int32_t get_offset_of_food_2() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___food_2)); }
	inline Dictionary_2_t3016621180 * get_food_2() const { return ___food_2; }
	inline Dictionary_2_t3016621180 ** get_address_of_food_2() { return &___food_2; }
	inline void set_food_2(Dictionary_2_t3016621180 * value)
	{
		___food_2 = value;
		Il2CppCodeGenWriteBarrier(&___food_2, value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___x_3)); }
	inline int32_t get_x_3() const { return ___x_3; }
	inline int32_t* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(int32_t value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___y_4)); }
	inline int32_t get_y_4() const { return ___y_4; }
	inline int32_t* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(int32_t value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_isWater_5() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___isWater_5)); }
	inline bool get_isWater_5() const { return ___isWater_5; }
	inline bool* get_address_of_isWater_5() { return &___isWater_5; }
	inline void set_isWater_5(bool value)
	{
		___isWater_5 = value;
	}

	inline static int32_t get_offset_of_flipClip_6() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___flipClip_6)); }
	inline AudioClip_t1932558630 * get_flipClip_6() const { return ___flipClip_6; }
	inline AudioClip_t1932558630 ** get_address_of_flipClip_6() { return &___flipClip_6; }
	inline void set_flipClip_6(AudioClip_t1932558630 * value)
	{
		___flipClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___flipClip_6, value);
	}

	inline static int32_t get_offset_of_convertClip_7() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___convertClip_7)); }
	inline AudioClip_t1932558630 * get_convertClip_7() const { return ___convertClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_convertClip_7() { return &___convertClip_7; }
	inline void set_convertClip_7(AudioClip_t1932558630 * value)
	{
		___convertClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___convertClip_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
