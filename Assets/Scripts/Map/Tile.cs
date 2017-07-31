using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour{

	public Dictionary<Color,int> food = new Dictionary<Color,int>();
	public int x;
	public int y;

	public bool isWater = false;

	public AudioClip flipClip;
	public AudioClip convertClip;

	public AudioClip Click () {

		if (Engine.instance.ticksFromStart < Engine.instance.worldEndTick && Engine.instance.ticksFromStart > 500) {

			if (!Engine.instance.perfectColorPrimed && Engine.instance.drawing) {

				if (isWater) {

					isWater = false;
					food.Add (Color.black, 100);

					Engine.instance.landTiles++;

				} else {

					isWater = true;
					food.Clear ();

					Engine.instance.landTiles--;

				}

				return flipClip;

			} else if (Engine.instance.perfectColorPrimed && !isWater) {

				foreach (Creature creature in Engine.instance.creatures) {

					int tileX = (int) (creature.transform.position.x * 4 + Map.mapWidth / 2);
					int tileY = (int) (creature.transform.position.y * 4 + Map.mapWidth / 2);

					Tile tile = Engine.instance.map.tiles [tileX, tileY];

					if (tile == this) {

						Color foodColor = getFoodColor ();

						creature.favoriteFoodR = (byte) (foodColor.r * 255);
						creature.favoriteFoodG = (byte) (foodColor.g * 255);
						creature.favoriteFoodB = (byte) (foodColor.b * 255);

						creature.GetComponent<SpriteRenderer> ().color = new Color (creature.favoriteFoodR / 255.0F, creature.favoriteFoodG / 255.0f, creature.favoriteFoodB / 255.0f);

						Engine.instance.perfectColorPrimed = false;

						return convertClip;

					}

				}

			}

		}

		return null;

	}

	public Color getDisplayColor () {

		if (isWater) {

			return Color.blue;

		}

		float r = 0;
		float g = 0;
		float b = 0;

		foreach (Color color in food.Keys) {

			r += color.r * (food [color] / 100.0f);
			g += color.g * (food [color] / 100.0f);
			b += color.b * (food [color] / 100.0f);

		}

		return new Color (r, g, b);

	}

	public Color getFoodColor () {

		if (isWater) {

			return Color.blue;

		}

		float r = 0;
		float g = 0;
		float b = 0;

		float percent = 100.0f;

		if (food.ContainsKey (Color.black)) {

			percent -= food [Color.black];

		}

		foreach (Color color in food.Keys) {

			r += color.r * (food [color] / percent);
			g += color.g * (food [color] / percent);
			b += color.b * (food [color] / percent);

		}

		return new Color (r, g, b);

	}

}
