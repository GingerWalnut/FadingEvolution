using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Creature : MonoBehaviour {

	public byte favoriteFoodR;
	public byte favoriteFoodG;
	public byte favoriteFoodB;

	public float energy;

	public float biomass;
	public int maxBiomass;

	public int eyesight;

	public int foodConsumption;

	public AudioClip deathClip;
	public AudioClip birthClip;

	public static Creature CreateNew(Vector2 pos) {

		GameObject creatureObject = GameObject.Instantiate (Engine.instance.creaturePrefab);
		creatureObject.transform.position = pos;

		Creature creature = creatureObject.GetComponent<Creature>();

		return creature;

	}

	public static void GiveRandomAttributes (Creature creature) {

		int colorR = Random.Range (0, 255);
		int colorG = Random.Range (0, 255);
		int colorB = Random.Range (0, 255);

		creature.favoriteFoodR = (byte) colorR;
		creature.favoriteFoodG = (byte) colorG;
		creature.favoriteFoodB = (byte) colorB;

		creature.energy = 100;
		creature.eyesight = 5;

		creature.maxBiomass = 100;
		creature.biomass = creature.maxBiomass / 2;

		creature.foodConsumption = 20;

		creature.GetComponent<SpriteRenderer> ().color = new Color (colorR / 255.0F, colorG / 255.0f, colorB / 255.0f);

	}

	public static Creature clone (Creature creature) {

		GameObject creatureObject = GameObject.Instantiate (Engine.instance.creaturePrefab);
		creatureObject.transform.position = creature.gameObject.transform.position;

		Creature newCreature = creatureObject.GetComponent<Creature>();

		newCreature.favoriteFoodR = creature.favoriteFoodR;
		newCreature.favoriteFoodG = creature.favoriteFoodG;
		newCreature.favoriteFoodB = creature.favoriteFoodB;

		newCreature.energy = creature.energy;
		newCreature.eyesight = creature.eyesight;

		newCreature.biomass = creature.biomass;
		newCreature.maxBiomass = creature.maxBiomass;

		newCreature.foodConsumption = creature.foodConsumption;

		newCreature.GetComponent<SpriteRenderer> ().color = new Color (newCreature.favoriteFoodR / 255.0F, newCreature.favoriteFoodR / 255.0f, newCreature.favoriteFoodR / 255.0f);

		return newCreature;

	}

	public void doTick () {

		energy -= eyesight / 30.0f * Engine.instance.energyCostMultiplier;
		energy -= foodConsumption / 20.0f * Engine.instance.energyCostMultiplier;

		if (energy < 0) {

			biomass += energy;
			energy = 0;

			if (biomass < 0) {
				
				Engine.instance.creaturesToRemove.Add (this);

			}

		}

		int tileX = (int) (transform.position.x * 4 + Map.mapWidth / 2);
		int tileY = (int) (transform.position.y * 4 + Map.mapWidth / 2);

		Tile tile = Engine.instance.map.tiles [tileX, tileY];

		if (!tile.isWater) {

			Color thisFood = tile.getFoodColor ();

			float precentSimilar = getPrecentSimilar(thisFood);

			float food = 1;

			if (tile.food.ContainsKey (Color.black)) {

				food *= ((100 - tile.food [Color.black]) * (foodConsumption / 100.0f));

			} else {

				food = foodConsumption;

			}

			food *= precentSimilar;

			food -= 4 * Engine.instance.energyCostMultiplier;

			if (food > 0) {

				int change = 0;

				if (tile.food.ContainsKey(Color.black)) {

					change = tile.food [Color.black];

				}

				for (int i = 0; i < (100 - change) * (foodConsumption / 100.0f); i++) {

					if (tile.food.ContainsKey(Color.black)) {

						change = tile.food [Color.black];

					}

					int overgrowth = Random.Range (0, 100 - change);

					int current = 0;

					foreach (Color otherFood in tile.food.Keys) {

						if (otherFood != Color.black) {

							if (tile.food [otherFood] + current > overgrowth) {

								energy += getPrecentSimilar (tile.getFoodColor ());

								tile.food [otherFood]--;

								if (tile.food [otherFood] == 0) {

									tile.food.Remove (otherFood);

								}

								if (!tile.food.ContainsKey (Color.black)) {

									tile.food.Add (Color.black, 0);

								}

								tile.food [Color.black]++;

								break;

							}

							current += tile.food [otherFood];

						}

					}

				}

				energy -= 4 * Engine.instance.energyCostMultiplier;

				if (energy < 0) {

					biomass += energy;
					energy = 0;

					if (biomass < 0) {


						Engine.instance.creaturesToRemove.Add (this);

					}

				}

			}

		}

		List<Vector2> potentialTiles = getTilesWithinSight ();

		Tile bestTile = null;
		float bestEnergy = 0;

		foreach (Vector2 potentialTile in potentialTiles) {

			Tile otherTile = Engine.instance.map.tiles [(int) potentialTile.x, (int) potentialTile.y];

			if (!otherTile.isWater) {

				Color otherFood = otherTile.getFoodColor ();

				float precentSimilar = getPrecentSimilar(otherFood);

				float food = 1;

				if (otherTile.food.ContainsKey (Color.black)) {

					food *= ((100 - otherTile.food [Color.black]) * (1.0f / foodConsumption));

				} else {

					food = 10;

				}

				food *= precentSimilar;

				food -= 4 * Engine.instance.energyCostMultiplier;

				if (food > bestEnergy) {

					bestEnergy = food;
					bestTile = otherTile;

				}

			}

		}

		if (bestTile != null) {

			//gameObject.transform.position = Vector2.Lerp (gameObject.transform.position, new Vector2 (bestTile.transform.position.x, bestTile.transform.position.y), 0.5f);
			gameObject.transform.position = Vector2.MoveTowards(gameObject.transform.position, bestTile.transform.position, 0.25f);

			energy -= 0.25f * Engine.instance.energyCostMultiplier;
				
		} else {

			Vector2 potentialTile = potentialTiles [Random.Range (0, potentialTiles.Count)];
			Tile otherTile = Engine.instance.map.tiles [(int) potentialTile.x, (int) potentialTile.y];

			gameObject.transform.position = Vector2.MoveTowards(gameObject.transform.position, otherTile.transform.position, 0.25f);

			energy -= 0.25f * Engine.instance.energyCostMultiplier;

		}

		float biomassChange = maxBiomass - biomass;
		biomassChange = Mathf.Clamp (biomassChange, 0, .1f);
		biomassChange = Mathf.Clamp (biomassChange, 0, energy);

		biomass += biomassChange;
		energy -= biomassChange;


		if (energy >= maxBiomass * 2) {

			energy -= maxBiomass;

			Creature creature = Creature.CreateNew (gameObject.transform.position);

			int newFavoriteR = favoriteFoodR + Random.Range (-25, 25);
			int newFavoriteG = favoriteFoodG + Random.Range (-25, 25);
			int newFavoriteB = favoriteFoodB + Random.Range (-25, 25);

			newFavoriteR = Mathf.Clamp (newFavoriteR, 0, 255);
			newFavoriteG = Mathf.Clamp (newFavoriteG, 0, 255);
			newFavoriteB = Mathf.Clamp (newFavoriteB, 0, 255);

			creature.favoriteFoodR = (byte) newFavoriteR;
			creature.favoriteFoodG = (byte) newFavoriteG;
			creature.favoriteFoodB = (byte) newFavoriteB;

			int newEyesight = eyesight + Random.Range (-2, 2);

			if (newEyesight < Engine.instance.averageEyesightSlider.value) {

				newEyesight += Random.Range (0, 20);

			} else if (newEyesight > Engine.instance.averageEyesightSlider.value) {

				newEyesight -= Random.Range (0, 20);

			}

			newEyesight = Mathf.Clamp (newEyesight, 1, 100);

			creature.eyesight = newEyesight;

			int newMaxBiomass = maxBiomass + Random.Range (-5, 5);

			if (newMaxBiomass < Engine.instance.averageMaxBiomassSlider.value) {

				newMaxBiomass += Random.Range (0, 100);

			} else if (newMaxBiomass > Engine.instance.averageMaxBiomassSlider.value) {

				newMaxBiomass -= Random.Range (0, 100);

			}

			newMaxBiomass = Mathf.Clamp (newMaxBiomass, 10, 1000);

			int newFoodConsumption = foodConsumption + Random.Range (-2, 2);

			if (newFoodConsumption < Engine.instance.averageFoodConsumptionSlider.value) {

				newFoodConsumption += Random.Range (0, 20);

			} else if (newFoodConsumption > Engine.instance.averageFoodConsumptionSlider.value) {

				newFoodConsumption -= Random.Range (0, 20);

			}

			newFoodConsumption = Mathf.Clamp (newFoodConsumption, 1, 100);

			creature.foodConsumption = newFoodConsumption;

			creature.maxBiomass = newMaxBiomass;
			creature.biomass = maxBiomass / 2;

			creature.energy = maxBiomass / 2;

			creature.GetComponent<SpriteRenderer> ().color = new Color (newFavoriteR / 255.0F, newFavoriteG / 255.0f, newFavoriteB / 255.0f);

			Engine.instance.creaturesToAdd.Add (creature);

		}

	}

	private float getPrecentSimilar (Color food) {

		float precentSimilar = 0;

		float myR = favoriteFoodR / 255.0f;
		float myG = favoriteFoodG / 255.0f;
		float myB = favoriteFoodB / 255.0f;

		if (myR > food.r) {

			precentSimilar += (1.0f / 3) * (food.r / myR);

		} else {

			precentSimilar += (1.0f / 3) * (myR / food.r);

		}

		if (myG > food.g) {

			precentSimilar += (1.0f / 3) * (food.g / myG);

		} else {

			precentSimilar += (1.0f / 3) * (myG / food.g);

		}

		if (myB > food.b) {

			precentSimilar += (1.0f / 3) * (food.b / myB);

		} else {

			precentSimilar += (1.0f / 3) * (myB / food.b);

		}

		return precentSimilar;

	}

	private List<Vector2> getTilesWithinSight () {

		int tileX = (int) (transform.position.x * 4 + Map.mapWidth / 2);
		int tileY = (int) (transform.position.y * 4 + Map.mapWidth / 2);

		List<Vector2> tiles = new List<Vector2> ();
		tiles.Add (new Vector2 (tileX, tileY));

		HashSet<Vector2> triedTiles = new HashSet<Vector2> ();
		triedTiles.Add (new Vector2 (tileX, tileY));

		LinkedList<Vector2> toTryTiles = new LinkedList<Vector2> ();
		toTryTiles.AddLast (new Vector2 (tileX, tileY));

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

					float distance = (potentialTile.x - tileX) * (potentialTile.x - tileX) + (potentialTile.y - tileY) * (potentialTile.y - tileY);

					if (distance <= eyesight) {

						tiles.Add (potentialTile);
						toTryTiles.AddLast (potentialTile);

					}

				}

			}

		}

		return tiles;

	}

}
