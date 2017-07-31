#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Creature
struct  Creature_t3210245773  : public MonoBehaviour_t1158329972
{
public:
	// System.Byte Creature::favoriteFoodR
	uint8_t ___favoriteFoodR_2;
	// System.Byte Creature::favoriteFoodG
	uint8_t ___favoriteFoodG_3;
	// System.Byte Creature::favoriteFoodB
	uint8_t ___favoriteFoodB_4;
	// System.Single Creature::energy
	float ___energy_5;
	// System.Single Creature::biomass
	float ___biomass_6;
	// System.Int32 Creature::maxBiomass
	int32_t ___maxBiomass_7;
	// System.Int32 Creature::eyesight
	int32_t ___eyesight_8;
	// System.Int32 Creature::foodConsumption
	int32_t ___foodConsumption_9;
	// UnityEngine.AudioClip Creature::deathClip
	AudioClip_t1932558630 * ___deathClip_10;
	// UnityEngine.AudioClip Creature::birthClip
	AudioClip_t1932558630 * ___birthClip_11;

public:
	inline static int32_t get_offset_of_favoriteFoodR_2() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___favoriteFoodR_2)); }
	inline uint8_t get_favoriteFoodR_2() const { return ___favoriteFoodR_2; }
	inline uint8_t* get_address_of_favoriteFoodR_2() { return &___favoriteFoodR_2; }
	inline void set_favoriteFoodR_2(uint8_t value)
	{
		___favoriteFoodR_2 = value;
	}

	inline static int32_t get_offset_of_favoriteFoodG_3() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___favoriteFoodG_3)); }
	inline uint8_t get_favoriteFoodG_3() const { return ___favoriteFoodG_3; }
	inline uint8_t* get_address_of_favoriteFoodG_3() { return &___favoriteFoodG_3; }
	inline void set_favoriteFoodG_3(uint8_t value)
	{
		___favoriteFoodG_3 = value;
	}

	inline static int32_t get_offset_of_favoriteFoodB_4() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___favoriteFoodB_4)); }
	inline uint8_t get_favoriteFoodB_4() const { return ___favoriteFoodB_4; }
	inline uint8_t* get_address_of_favoriteFoodB_4() { return &___favoriteFoodB_4; }
	inline void set_favoriteFoodB_4(uint8_t value)
	{
		___favoriteFoodB_4 = value;
	}

	inline static int32_t get_offset_of_energy_5() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___energy_5)); }
	inline float get_energy_5() const { return ___energy_5; }
	inline float* get_address_of_energy_5() { return &___energy_5; }
	inline void set_energy_5(float value)
	{
		___energy_5 = value;
	}

	inline static int32_t get_offset_of_biomass_6() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___biomass_6)); }
	inline float get_biomass_6() const { return ___biomass_6; }
	inline float* get_address_of_biomass_6() { return &___biomass_6; }
	inline void set_biomass_6(float value)
	{
		___biomass_6 = value;
	}

	inline static int32_t get_offset_of_maxBiomass_7() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___maxBiomass_7)); }
	inline int32_t get_maxBiomass_7() const { return ___maxBiomass_7; }
	inline int32_t* get_address_of_maxBiomass_7() { return &___maxBiomass_7; }
	inline void set_maxBiomass_7(int32_t value)
	{
		___maxBiomass_7 = value;
	}

	inline static int32_t get_offset_of_eyesight_8() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___eyesight_8)); }
	inline int32_t get_eyesight_8() const { return ___eyesight_8; }
	inline int32_t* get_address_of_eyesight_8() { return &___eyesight_8; }
	inline void set_eyesight_8(int32_t value)
	{
		___eyesight_8 = value;
	}

	inline static int32_t get_offset_of_foodConsumption_9() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___foodConsumption_9)); }
	inline int32_t get_foodConsumption_9() const { return ___foodConsumption_9; }
	inline int32_t* get_address_of_foodConsumption_9() { return &___foodConsumption_9; }
	inline void set_foodConsumption_9(int32_t value)
	{
		___foodConsumption_9 = value;
	}

	inline static int32_t get_offset_of_deathClip_10() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___deathClip_10)); }
	inline AudioClip_t1932558630 * get_deathClip_10() const { return ___deathClip_10; }
	inline AudioClip_t1932558630 ** get_address_of_deathClip_10() { return &___deathClip_10; }
	inline void set_deathClip_10(AudioClip_t1932558630 * value)
	{
		___deathClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___deathClip_10, value);
	}

	inline static int32_t get_offset_of_birthClip_11() { return static_cast<int32_t>(offsetof(Creature_t3210245773, ___birthClip_11)); }
	inline AudioClip_t1932558630 * get_birthClip_11() const { return ___birthClip_11; }
	inline AudioClip_t1932558630 ** get_address_of_birthClip_11() { return &___birthClip_11; }
	inline void set_birthClip_11(AudioClip_t1932558630 * value)
	{
		___birthClip_11 = value;
		Il2CppCodeGenWriteBarrier(&___birthClip_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
