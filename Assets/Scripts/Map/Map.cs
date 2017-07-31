using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Map : MonoBehaviour {

	public static readonly int mapWidth = 40;
	public static readonly int mapHeight = 40;

	public Tile[,] tiles = new Tile[mapWidth,mapHeight];

	public static Map createNew () {

		GameObject mapObject = new GameObject ("Map");
		Map map = mapObject.AddComponent<Map> ();
		map.transform.position = new Vector3 (0.125f, 0.125f, 10);
		map.transform.localScale = new Vector3 (0.5f, 0.5f);

		for (int x = 0; x < mapWidth; x++) {

			for (int y = 0; y < mapHeight; y++) {

				map.tiles [x, y] = GameObject.Instantiate (Engine.instance.tilePrefab).GetComponent<Tile>();
				map.tiles [x, y].transform.SetParent (map.transform);
				map.tiles [x, y].transform.localPosition = new Vector3 (x * .5f - mapWidth / 4, y * .5f - mapHeight / 4);
				map.tiles [x, y].GetComponent<SpriteRenderer> ().color = Color.black;
				map.tiles [x, y].GetComponent<Tile> ().food.Add (Color.black, 100);
				map.tiles [x, y].GetComponent<Tile> ().x = x;
				map.tiles [x, y].GetComponent<Tile> ().y = y;

			}

		}

		int foodX = Random.Range (0, mapWidth);
		int foodY = Random.Range (0, mapHeight / 4);

		map.tiles [foodX, foodY].GetComponent<SpriteRenderer> ().color = Color.yellow;
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Clear ();
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Add (Color.yellow, 100);

		foodX = Random.Range (0, mapWidth);
		foodY = Random.Range (mapHeight / 4, mapHeight / 2);

		map.tiles [foodX, foodY].GetComponent<SpriteRenderer> ().color = Color.green;
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Clear ();
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Add (Color.green, 100);

		foodX = Random.Range (0, mapWidth);
		foodY = Random.Range (mapHeight / 2, 3 * mapHeight/ 4);

		map.tiles [foodX, foodY].GetComponent<SpriteRenderer> ().color = Color.cyan;
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Clear ();
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Add (Color.cyan, 100);

		foodX = Random.Range (0, mapWidth);
		foodY = Random.Range (3 * mapHeight / 4, mapHeight);

		map.tiles [foodX, foodY].GetComponent<SpriteRenderer> ().color = Color.magenta;
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Clear ();
		map.tiles [foodX, foodY].GetComponent<Tile> ().food.Add (Color.magenta, 100);

		return map;

	}

	public void generateWater () {

		List<HashSet<Vector2>> landTiles = new List<HashSet<Vector2>>();

		int landX = 0;
		int landY = 0;

		Dictionary<int, int> worldGenParameters = new Dictionary<int, int> ();
		switch (WorldType.worldGen) {

		case "normal":
			worldGenParameters = WorldType.NormalGen;
			break;
		case "cont":
			worldGenParameters = WorldType.ContinentsGen;
			break;
		case "islands":
			worldGenParameters = WorldType.IslandsGen;
			break;
		case "arch":
			worldGenParameters = WorldType.ArchipelagoGen;
			break;
		case "flat":
			return;

		}

		foreach (int size in worldGenParameters.Keys) {

			for (int i = 0; i < worldGenParameters [size]; i++) {

				landX = Random.Range (0, mapWidth);
				landY = Random.Range (0, mapHeight);

				landTiles.Add(generateIsland(landX, landY, size));

			}

		}

		/*for (int i = 0; i < 1; i++) {

			landX = Random.Range (0, mapWidth);
			landY = Random.Range (0, mapHeight);

			landTiles.Add(generateIsland(landX, landY, 12));

		}

		for (int i = 0; i < 3; i++) {

			landX = Random.Range (0, mapWidth);
			landY = Random.Range (0, mapHeight);

			landTiles.Add(generateIsland(landX, landY, 6));

		}

		for (int i = 0; i < 10; i++) {

			landX = Random.Range (0, mapWidth);
			landY = Random.Range (0, mapHeight);

			landTiles.Add(generateIsland(landX, landY, 3));

		}

		for (int i = 0; i < 30; i++) {

			landX = Random.Range (0, mapWidth);
			landY = Random.Range (0, mapHeight);

			landTiles.Add(generateIsland(landX, landY, 2));

		}*/

		int landTileNum = mapWidth * mapHeight;

		foreach (Tile tile in tiles) {

			bool contains = false;

			foreach (HashSet<Vector2> landTileSet in landTiles) {

				if (landTileSet.Contains (new Vector2 (tile.x, tile.y))) {

					contains = true;
					break;

				}

			}

			if (!contains) {

				tile.isWater = true;
				tile.food.Clear ();

				landTileNum--;

			}

		}
			
		Engine.instance.landTiles = landTileNum;

	}

	private HashSet<Vector2> generateIsland (int landX, int landY, int radius) {

		HashSet<Vector2> landTiles = new HashSet<Vector2> ();
		landTiles.Add (new Vector2 (landX, landY));

		HashSet<Vector2> triedTiles = new HashSet<Vector2> ();
		triedTiles.Add (new Vector2 (landX, landY));

		LinkedList<Vector2> toTryTiles = new LinkedList<Vector2> ();
		toTryTiles.AddLast (new Vector2 (landX, landY));

		while (toTryTiles.Count > 0) {

			Vector2 currentTile = toTryTiles.First.Value;

			toTryTiles.RemoveFirst ();

			List<Vector2> potentialTiles = new List<Vector2> ();
			potentialTiles.Add (new Vector2(currentTile.x, currentTile.y));

			if (currentTile.x >= 1) {

				potentialTiles.Add(new Vector2(currentTile.x - 1, currentTile.y));

			}

			if (currentTile.y >= 1) {

				potentialTiles.Add(new Vector2(currentTile.x, currentTile.y - 1));

			}

			if (currentTile.x < Map.mapWidth - 1) {

				potentialTiles.Add(new Vector2(currentTile.x + 1, currentTile.y));

			}

			if (currentTile.y < Map.mapHeight - 1) {

				potentialTiles.Add(new Vector2(currentTile.x, currentTile.y + 1));

			}

			foreach (Vector2 potentialTile in potentialTiles) {

				if (!triedTiles.Contains (potentialTile)) {

					triedTiles.Add (potentialTile);

					float distance = (potentialTile.x - landX) * (potentialTile.x - landX) + (potentialTile.y - landY) * (potentialTile.y - landY);

					if (distance <= radius * radius) {

						if (Random.Range(distance, radius * radius) < radius *radius * (7.0f / 8.0f)) {

							landTiles.Add (potentialTile);
							toTryTiles.AddLast (potentialTile);

						}

					}

				}

			}

		}

		return landTiles;

	}

}
