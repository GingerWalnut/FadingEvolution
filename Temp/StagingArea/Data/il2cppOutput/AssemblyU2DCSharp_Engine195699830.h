#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// Map
struct Map_t4262919222;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Collections.Generic.List`1<Creature>
struct List_1_t2579366905;
// Engine
struct Engine_t195699830;
// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Dictionary_2_t2557572443;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Engine
struct  Engine_t195699830  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Engine::tilePrefab
	GameObject_t1756533147 * ___tilePrefab_2;
	// UnityEngine.GameObject Engine::creaturePrefab
	GameObject_t1756533147 * ___creaturePrefab_3;
	// Map Engine::map
	Map_t4262919222 * ___map_4;
	// UnityEngine.UI.Text Engine::populationLabel
	Text_t356221433 * ___populationLabel_5;
	// UnityEngine.UI.Image Engine::averageColor
	Image_t2042527209 * ___averageColor_6;
	// UnityEngine.UI.Slider Engine::averageEyesightSlider
	Slider_t297367283 * ___averageEyesightSlider_7;
	// UnityEngine.UI.Slider Engine::averageMaxBiomassSlider
	Slider_t297367283 * ___averageMaxBiomassSlider_8;
	// UnityEngine.UI.Slider Engine::averageFoodConsumptionSlider
	Slider_t297367283 * ___averageFoodConsumptionSlider_9;
	// UnityEngine.UI.Button Engine::removeCostButton
	Button_t2872111280 * ___removeCostButton_10;
	// UnityEngine.UI.Button Engine::perfectColorButton
	Button_t2872111280 * ___perfectColorButton_11;
	// UnityEngine.UI.Button Engine::slowDoosmdayButton
	Button_t2872111280 * ___slowDoosmdayButton_12;
	// UnityEngine.UI.Text Engine::plantGrowthLabel
	Text_t356221433 * ___plantGrowthLabel_13;
	// UnityEngine.UI.Text Engine::biomassLabel
	Text_t356221433 * ___biomassLabel_14;
	// UnityEngine.UI.Text Engine::landTilesLabel
	Text_t356221433 * ___landTilesLabel_15;
	// UnityEngine.UI.Text Engine::scoreLabel
	Text_t356221433 * ___scoreLabel_16;
	// UnityEngine.UI.Text Engine::energyLabel
	Text_t356221433 * ___energyLabel_17;
	// UnityEngine.GameObject Engine::gameOverObject
	GameObject_t1756533147 * ___gameOverObject_18;
	// UnityEngine.AudioSource Engine::musicSource
	AudioSource_t1135106623 * ___musicSource_19;
	// System.Boolean Engine::drawingLand
	bool ___drawingLand_20;
	// System.Boolean Engine::drawing
	bool ___drawing_21;
	// System.Boolean Engine::perfectColorPrimed
	bool ___perfectColorPrimed_22;
	// System.Int32 Engine::landTiles
	int32_t ___landTiles_23;
	// System.Single Engine::biomass
	float ___biomass_24;
	// System.Single Engine::energy
	float ___energy_25;
	// System.Single Engine::score
	float ___score_26;
	// System.Single Engine::energyCostMultiplier
	float ___energyCostMultiplier_27;
	// System.Collections.Generic.List`1<Creature> Engine::creatures
	List_1_t2579366905 * ___creatures_28;
	// System.Collections.Generic.List`1<Creature> Engine::creaturesToRemove
	List_1_t2579366905 * ___creaturesToRemove_29;
	// System.Collections.Generic.List`1<Creature> Engine::creaturesToAdd
	List_1_t2579366905 * ___creaturesToAdd_30;
	// System.Int32 Engine::worldEndTick
	int32_t ___worldEndTick_32;
	// System.Boolean Engine::paused
	bool ___paused_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Collections.Generic.List`1<UnityEngine.Vector2>> Engine::nextSpred
	Dictionary_2_t2557572443 * ___nextSpred_34;
	// System.Int32 Engine::phase
	int32_t ___phase_35;
	// System.Int64 Engine::ticksFromStart
	int64_t ___ticksFromStart_36;
	// System.Boolean Engine::hasEnded
	bool ___hasEnded_37;
	// System.Int64 Engine::ticksRCCooldown
	int64_t ___ticksRCCooldown_38;
	// System.Int64 Engine::ticksRCDuration
	int64_t ___ticksRCDuration_39;
	// System.Int64 Engine::ticksPCCooldown
	int64_t ___ticksPCCooldown_40;
	// System.Int64 Engine::ticksSDCooldown
	int64_t ___ticksSDCooldown_41;

public:
	inline static int32_t get_offset_of_tilePrefab_2() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___tilePrefab_2)); }
	inline GameObject_t1756533147 * get_tilePrefab_2() const { return ___tilePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_tilePrefab_2() { return &___tilePrefab_2; }
	inline void set_tilePrefab_2(GameObject_t1756533147 * value)
	{
		___tilePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___tilePrefab_2, value);
	}

	inline static int32_t get_offset_of_creaturePrefab_3() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___creaturePrefab_3)); }
	inline GameObject_t1756533147 * get_creaturePrefab_3() const { return ___creaturePrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_creaturePrefab_3() { return &___creaturePrefab_3; }
	inline void set_creaturePrefab_3(GameObject_t1756533147 * value)
	{
		___creaturePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___creaturePrefab_3, value);
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___map_4)); }
	inline Map_t4262919222 * get_map_4() const { return ___map_4; }
	inline Map_t4262919222 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(Map_t4262919222 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}

	inline static int32_t get_offset_of_populationLabel_5() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___populationLabel_5)); }
	inline Text_t356221433 * get_populationLabel_5() const { return ___populationLabel_5; }
	inline Text_t356221433 ** get_address_of_populationLabel_5() { return &___populationLabel_5; }
	inline void set_populationLabel_5(Text_t356221433 * value)
	{
		___populationLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___populationLabel_5, value);
	}

	inline static int32_t get_offset_of_averageColor_6() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___averageColor_6)); }
	inline Image_t2042527209 * get_averageColor_6() const { return ___averageColor_6; }
	inline Image_t2042527209 ** get_address_of_averageColor_6() { return &___averageColor_6; }
	inline void set_averageColor_6(Image_t2042527209 * value)
	{
		___averageColor_6 = value;
		Il2CppCodeGenWriteBarrier(&___averageColor_6, value);
	}

	inline static int32_t get_offset_of_averageEyesightSlider_7() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___averageEyesightSlider_7)); }
	inline Slider_t297367283 * get_averageEyesightSlider_7() const { return ___averageEyesightSlider_7; }
	inline Slider_t297367283 ** get_address_of_averageEyesightSlider_7() { return &___averageEyesightSlider_7; }
	inline void set_averageEyesightSlider_7(Slider_t297367283 * value)
	{
		___averageEyesightSlider_7 = value;
		Il2CppCodeGenWriteBarrier(&___averageEyesightSlider_7, value);
	}

	inline static int32_t get_offset_of_averageMaxBiomassSlider_8() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___averageMaxBiomassSlider_8)); }
	inline Slider_t297367283 * get_averageMaxBiomassSlider_8() const { return ___averageMaxBiomassSlider_8; }
	inline Slider_t297367283 ** get_address_of_averageMaxBiomassSlider_8() { return &___averageMaxBiomassSlider_8; }
	inline void set_averageMaxBiomassSlider_8(Slider_t297367283 * value)
	{
		___averageMaxBiomassSlider_8 = value;
		Il2CppCodeGenWriteBarrier(&___averageMaxBiomassSlider_8, value);
	}

	inline static int32_t get_offset_of_averageFoodConsumptionSlider_9() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___averageFoodConsumptionSlider_9)); }
	inline Slider_t297367283 * get_averageFoodConsumptionSlider_9() const { return ___averageFoodConsumptionSlider_9; }
	inline Slider_t297367283 ** get_address_of_averageFoodConsumptionSlider_9() { return &___averageFoodConsumptionSlider_9; }
	inline void set_averageFoodConsumptionSlider_9(Slider_t297367283 * value)
	{
		___averageFoodConsumptionSlider_9 = value;
		Il2CppCodeGenWriteBarrier(&___averageFoodConsumptionSlider_9, value);
	}

	inline static int32_t get_offset_of_removeCostButton_10() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___removeCostButton_10)); }
	inline Button_t2872111280 * get_removeCostButton_10() const { return ___removeCostButton_10; }
	inline Button_t2872111280 ** get_address_of_removeCostButton_10() { return &___removeCostButton_10; }
	inline void set_removeCostButton_10(Button_t2872111280 * value)
	{
		___removeCostButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___removeCostButton_10, value);
	}

	inline static int32_t get_offset_of_perfectColorButton_11() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___perfectColorButton_11)); }
	inline Button_t2872111280 * get_perfectColorButton_11() const { return ___perfectColorButton_11; }
	inline Button_t2872111280 ** get_address_of_perfectColorButton_11() { return &___perfectColorButton_11; }
	inline void set_perfectColorButton_11(Button_t2872111280 * value)
	{
		___perfectColorButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___perfectColorButton_11, value);
	}

	inline static int32_t get_offset_of_slowDoosmdayButton_12() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___slowDoosmdayButton_12)); }
	inline Button_t2872111280 * get_slowDoosmdayButton_12() const { return ___slowDoosmdayButton_12; }
	inline Button_t2872111280 ** get_address_of_slowDoosmdayButton_12() { return &___slowDoosmdayButton_12; }
	inline void set_slowDoosmdayButton_12(Button_t2872111280 * value)
	{
		___slowDoosmdayButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___slowDoosmdayButton_12, value);
	}

	inline static int32_t get_offset_of_plantGrowthLabel_13() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___plantGrowthLabel_13)); }
	inline Text_t356221433 * get_plantGrowthLabel_13() const { return ___plantGrowthLabel_13; }
	inline Text_t356221433 ** get_address_of_plantGrowthLabel_13() { return &___plantGrowthLabel_13; }
	inline void set_plantGrowthLabel_13(Text_t356221433 * value)
	{
		___plantGrowthLabel_13 = value;
		Il2CppCodeGenWriteBarrier(&___plantGrowthLabel_13, value);
	}

	inline static int32_t get_offset_of_biomassLabel_14() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___biomassLabel_14)); }
	inline Text_t356221433 * get_biomassLabel_14() const { return ___biomassLabel_14; }
	inline Text_t356221433 ** get_address_of_biomassLabel_14() { return &___biomassLabel_14; }
	inline void set_biomassLabel_14(Text_t356221433 * value)
	{
		___biomassLabel_14 = value;
		Il2CppCodeGenWriteBarrier(&___biomassLabel_14, value);
	}

	inline static int32_t get_offset_of_landTilesLabel_15() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___landTilesLabel_15)); }
	inline Text_t356221433 * get_landTilesLabel_15() const { return ___landTilesLabel_15; }
	inline Text_t356221433 ** get_address_of_landTilesLabel_15() { return &___landTilesLabel_15; }
	inline void set_landTilesLabel_15(Text_t356221433 * value)
	{
		___landTilesLabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___landTilesLabel_15, value);
	}

	inline static int32_t get_offset_of_scoreLabel_16() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___scoreLabel_16)); }
	inline Text_t356221433 * get_scoreLabel_16() const { return ___scoreLabel_16; }
	inline Text_t356221433 ** get_address_of_scoreLabel_16() { return &___scoreLabel_16; }
	inline void set_scoreLabel_16(Text_t356221433 * value)
	{
		___scoreLabel_16 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_16, value);
	}

	inline static int32_t get_offset_of_energyLabel_17() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___energyLabel_17)); }
	inline Text_t356221433 * get_energyLabel_17() const { return ___energyLabel_17; }
	inline Text_t356221433 ** get_address_of_energyLabel_17() { return &___energyLabel_17; }
	inline void set_energyLabel_17(Text_t356221433 * value)
	{
		___energyLabel_17 = value;
		Il2CppCodeGenWriteBarrier(&___energyLabel_17, value);
	}

	inline static int32_t get_offset_of_gameOverObject_18() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___gameOverObject_18)); }
	inline GameObject_t1756533147 * get_gameOverObject_18() const { return ___gameOverObject_18; }
	inline GameObject_t1756533147 ** get_address_of_gameOverObject_18() { return &___gameOverObject_18; }
	inline void set_gameOverObject_18(GameObject_t1756533147 * value)
	{
		___gameOverObject_18 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverObject_18, value);
	}

	inline static int32_t get_offset_of_musicSource_19() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___musicSource_19)); }
	inline AudioSource_t1135106623 * get_musicSource_19() const { return ___musicSource_19; }
	inline AudioSource_t1135106623 ** get_address_of_musicSource_19() { return &___musicSource_19; }
	inline void set_musicSource_19(AudioSource_t1135106623 * value)
	{
		___musicSource_19 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_19, value);
	}

	inline static int32_t get_offset_of_drawingLand_20() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___drawingLand_20)); }
	inline bool get_drawingLand_20() const { return ___drawingLand_20; }
	inline bool* get_address_of_drawingLand_20() { return &___drawingLand_20; }
	inline void set_drawingLand_20(bool value)
	{
		___drawingLand_20 = value;
	}

	inline static int32_t get_offset_of_drawing_21() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___drawing_21)); }
	inline bool get_drawing_21() const { return ___drawing_21; }
	inline bool* get_address_of_drawing_21() { return &___drawing_21; }
	inline void set_drawing_21(bool value)
	{
		___drawing_21 = value;
	}

	inline static int32_t get_offset_of_perfectColorPrimed_22() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___perfectColorPrimed_22)); }
	inline bool get_perfectColorPrimed_22() const { return ___perfectColorPrimed_22; }
	inline bool* get_address_of_perfectColorPrimed_22() { return &___perfectColorPrimed_22; }
	inline void set_perfectColorPrimed_22(bool value)
	{
		___perfectColorPrimed_22 = value;
	}

	inline static int32_t get_offset_of_landTiles_23() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___landTiles_23)); }
	inline int32_t get_landTiles_23() const { return ___landTiles_23; }
	inline int32_t* get_address_of_landTiles_23() { return &___landTiles_23; }
	inline void set_landTiles_23(int32_t value)
	{
		___landTiles_23 = value;
	}

	inline static int32_t get_offset_of_biomass_24() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___biomass_24)); }
	inline float get_biomass_24() const { return ___biomass_24; }
	inline float* get_address_of_biomass_24() { return &___biomass_24; }
	inline void set_biomass_24(float value)
	{
		___biomass_24 = value;
	}

	inline static int32_t get_offset_of_energy_25() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___energy_25)); }
	inline float get_energy_25() const { return ___energy_25; }
	inline float* get_address_of_energy_25() { return &___energy_25; }
	inline void set_energy_25(float value)
	{
		___energy_25 = value;
	}

	inline static int32_t get_offset_of_score_26() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___score_26)); }
	inline float get_score_26() const { return ___score_26; }
	inline float* get_address_of_score_26() { return &___score_26; }
	inline void set_score_26(float value)
	{
		___score_26 = value;
	}

	inline static int32_t get_offset_of_energyCostMultiplier_27() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___energyCostMultiplier_27)); }
	inline float get_energyCostMultiplier_27() const { return ___energyCostMultiplier_27; }
	inline float* get_address_of_energyCostMultiplier_27() { return &___energyCostMultiplier_27; }
	inline void set_energyCostMultiplier_27(float value)
	{
		___energyCostMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_creatures_28() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___creatures_28)); }
	inline List_1_t2579366905 * get_creatures_28() const { return ___creatures_28; }
	inline List_1_t2579366905 ** get_address_of_creatures_28() { return &___creatures_28; }
	inline void set_creatures_28(List_1_t2579366905 * value)
	{
		___creatures_28 = value;
		Il2CppCodeGenWriteBarrier(&___creatures_28, value);
	}

	inline static int32_t get_offset_of_creaturesToRemove_29() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___creaturesToRemove_29)); }
	inline List_1_t2579366905 * get_creaturesToRemove_29() const { return ___creaturesToRemove_29; }
	inline List_1_t2579366905 ** get_address_of_creaturesToRemove_29() { return &___creaturesToRemove_29; }
	inline void set_creaturesToRemove_29(List_1_t2579366905 * value)
	{
		___creaturesToRemove_29 = value;
		Il2CppCodeGenWriteBarrier(&___creaturesToRemove_29, value);
	}

	inline static int32_t get_offset_of_creaturesToAdd_30() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___creaturesToAdd_30)); }
	inline List_1_t2579366905 * get_creaturesToAdd_30() const { return ___creaturesToAdd_30; }
	inline List_1_t2579366905 ** get_address_of_creaturesToAdd_30() { return &___creaturesToAdd_30; }
	inline void set_creaturesToAdd_30(List_1_t2579366905 * value)
	{
		___creaturesToAdd_30 = value;
		Il2CppCodeGenWriteBarrier(&___creaturesToAdd_30, value);
	}

	inline static int32_t get_offset_of_worldEndTick_32() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___worldEndTick_32)); }
	inline int32_t get_worldEndTick_32() const { return ___worldEndTick_32; }
	inline int32_t* get_address_of_worldEndTick_32() { return &___worldEndTick_32; }
	inline void set_worldEndTick_32(int32_t value)
	{
		___worldEndTick_32 = value;
	}

	inline static int32_t get_offset_of_paused_33() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___paused_33)); }
	inline bool get_paused_33() const { return ___paused_33; }
	inline bool* get_address_of_paused_33() { return &___paused_33; }
	inline void set_paused_33(bool value)
	{
		___paused_33 = value;
	}

	inline static int32_t get_offset_of_nextSpred_34() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___nextSpred_34)); }
	inline Dictionary_2_t2557572443 * get_nextSpred_34() const { return ___nextSpred_34; }
	inline Dictionary_2_t2557572443 ** get_address_of_nextSpred_34() { return &___nextSpred_34; }
	inline void set_nextSpred_34(Dictionary_2_t2557572443 * value)
	{
		___nextSpred_34 = value;
		Il2CppCodeGenWriteBarrier(&___nextSpred_34, value);
	}

	inline static int32_t get_offset_of_phase_35() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___phase_35)); }
	inline int32_t get_phase_35() const { return ___phase_35; }
	inline int32_t* get_address_of_phase_35() { return &___phase_35; }
	inline void set_phase_35(int32_t value)
	{
		___phase_35 = value;
	}

	inline static int32_t get_offset_of_ticksFromStart_36() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___ticksFromStart_36)); }
	inline int64_t get_ticksFromStart_36() const { return ___ticksFromStart_36; }
	inline int64_t* get_address_of_ticksFromStart_36() { return &___ticksFromStart_36; }
	inline void set_ticksFromStart_36(int64_t value)
	{
		___ticksFromStart_36 = value;
	}

	inline static int32_t get_offset_of_hasEnded_37() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___hasEnded_37)); }
	inline bool get_hasEnded_37() const { return ___hasEnded_37; }
	inline bool* get_address_of_hasEnded_37() { return &___hasEnded_37; }
	inline void set_hasEnded_37(bool value)
	{
		___hasEnded_37 = value;
	}

	inline static int32_t get_offset_of_ticksRCCooldown_38() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___ticksRCCooldown_38)); }
	inline int64_t get_ticksRCCooldown_38() const { return ___ticksRCCooldown_38; }
	inline int64_t* get_address_of_ticksRCCooldown_38() { return &___ticksRCCooldown_38; }
	inline void set_ticksRCCooldown_38(int64_t value)
	{
		___ticksRCCooldown_38 = value;
	}

	inline static int32_t get_offset_of_ticksRCDuration_39() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___ticksRCDuration_39)); }
	inline int64_t get_ticksRCDuration_39() const { return ___ticksRCDuration_39; }
	inline int64_t* get_address_of_ticksRCDuration_39() { return &___ticksRCDuration_39; }
	inline void set_ticksRCDuration_39(int64_t value)
	{
		___ticksRCDuration_39 = value;
	}

	inline static int32_t get_offset_of_ticksPCCooldown_40() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___ticksPCCooldown_40)); }
	inline int64_t get_ticksPCCooldown_40() const { return ___ticksPCCooldown_40; }
	inline int64_t* get_address_of_ticksPCCooldown_40() { return &___ticksPCCooldown_40; }
	inline void set_ticksPCCooldown_40(int64_t value)
	{
		___ticksPCCooldown_40 = value;
	}

	inline static int32_t get_offset_of_ticksSDCooldown_41() { return static_cast<int32_t>(offsetof(Engine_t195699830, ___ticksSDCooldown_41)); }
	inline int64_t get_ticksSDCooldown_41() const { return ___ticksSDCooldown_41; }
	inline int64_t* get_address_of_ticksSDCooldown_41() { return &___ticksSDCooldown_41; }
	inline void set_ticksSDCooldown_41(int64_t value)
	{
		___ticksSDCooldown_41 = value;
	}
};

struct Engine_t195699830_StaticFields
{
public:
	// Engine Engine::instance
	Engine_t195699830 * ___instance_31;

public:
	inline static int32_t get_offset_of_instance_31() { return static_cast<int32_t>(offsetof(Engine_t195699830_StaticFields, ___instance_31)); }
	inline Engine_t195699830 * get_instance_31() const { return ___instance_31; }
	inline Engine_t195699830 ** get_address_of_instance_31() { return &___instance_31; }
	inline void set_instance_31(Engine_t195699830 * value)
	{
		___instance_31 = value;
		Il2CppCodeGenWriteBarrier(&___instance_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
