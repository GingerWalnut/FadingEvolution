#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Tile[0...,0...]
struct TileU5BU2CU5D_t1358904254;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Map
struct  Map_t4262919222  : public MonoBehaviour_t1158329972
{
public:
	// Tile[0...,0...] Map::tiles
	TileU5BU2CU5D_t1358904254* ___tiles_4;

public:
	inline static int32_t get_offset_of_tiles_4() { return static_cast<int32_t>(offsetof(Map_t4262919222, ___tiles_4)); }
	inline TileU5BU2CU5D_t1358904254* get_tiles_4() const { return ___tiles_4; }
	inline TileU5BU2CU5D_t1358904254** get_address_of_tiles_4() { return &___tiles_4; }
	inline void set_tiles_4(TileU5BU2CU5D_t1358904254* value)
	{
		___tiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_4, value);
	}
};

struct Map_t4262919222_StaticFields
{
public:
	// System.Int32 Map::mapWidth
	int32_t ___mapWidth_2;
	// System.Int32 Map::mapHeight
	int32_t ___mapHeight_3;

public:
	inline static int32_t get_offset_of_mapWidth_2() { return static_cast<int32_t>(offsetof(Map_t4262919222_StaticFields, ___mapWidth_2)); }
	inline int32_t get_mapWidth_2() const { return ___mapWidth_2; }
	inline int32_t* get_address_of_mapWidth_2() { return &___mapWidth_2; }
	inline void set_mapWidth_2(int32_t value)
	{
		___mapWidth_2 = value;
	}

	inline static int32_t get_offset_of_mapHeight_3() { return static_cast<int32_t>(offsetof(Map_t4262919222_StaticFields, ___mapHeight_3)); }
	inline int32_t get_mapHeight_3() const { return ___mapHeight_3; }
	inline int32_t* get_address_of_mapHeight_3() { return &___mapHeight_3; }
	inline void set_mapHeight_3(int32_t value)
	{
		___mapHeight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
