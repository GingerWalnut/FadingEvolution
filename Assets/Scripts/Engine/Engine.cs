using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Engine : MonoBehaviour {

	public GameObject tilePrefab;
	public GameObject creaturePrefab;

	public Map map;

	public Text populationLabel;
	public Image averageColor;
	public Slider averageEyesightSlider;
	public Slider averageMaxBiomassSlider;
	public Slider averageFoodConsumptionSlider;
	public Button removeCostButton;
	public Button perfectColorButton;
	public Button slowDoosmdayButton;
	public Text plantGrowthLabel;
	public Text biomassLabel;
	public Text landTilesLabel;
	public Text scoreLabel;
	public Text energyLabel;

	public GameObject gameOverObject;

	public AudioSource musicSource;

	public bool drawingLand;
	public bool drawing;
	public bool perfectColorPrimed;

	public int landTiles = Map.mapWidth * Map.mapHeight;
	public float biomass;
	public float energy;
	public float score;

	public float energyCostMultiplier;

	public List<Creature> creatures = new List<Creature>();
	public List<Creature> creaturesToRemove = new List<Creature>();
	public List<Creature> creaturesToAdd = new List<Creature>();

	public static Engine instance;

	public int worldEndTick = 60 * 60 * 3;
	//public static readonly int worldEndTick = 1000;

	public bool paused = false;

	public void Start () {

		instance = this;

		this.map = Map.createNew ();

	}

	private Dictionary<Color, List<Vector2>> nextSpred = new Dictionary<Color, List<Vector2>> ();

	public void doTick1 () {

		nextSpred.Add (Color.magenta, new List<Vector2> ());
		nextSpred.Add (Color.cyan, new List<Vector2> ());
		nextSpred.Add (Color.green, new List<Vector2> ());
		nextSpred.Add (Color.yellow, new List<Vector2> ());

		foreach (Tile tile in map.tiles) {

			if (tile.isWater) {

				if (ticksFromStart > worldEndTick) {

					List<Vector2> spreadTiles = new List<Vector2> ();
					//spreadTiles.Add (new Vector2(tile.x, tile.y));

					if (tile.x >= 1) {

						spreadTiles.Add(new Vector2(tile.x - 1, tile.y));

					}

					if (tile.y >= 1) {

						spreadTiles.Add(new Vector2(tile.x, tile.y - 1));

					}

					if (tile.x < Map.mapWidth - 1) {

						spreadTiles.Add(new Vector2(tile.x + 1, tile.y));

					}

					if (tile.y < Map.mapHeight - 1) {

						spreadTiles.Add(new Vector2(tile.x, tile.y + 1));

					}

					int nearbyLand = 0;

					foreach (Vector2 spreadTile in spreadTiles) {

						Tile otherTile = map.tiles [(int) spreadTile.x, (int) spreadTile.y];

						if (!otherTile.isWater) {

							nearbyLand++;

						}

					}

					if (Random.Range (0, 1000) < 10 * nearbyLand + 1) {

						tile.isWater = false;
						tile.food.Add (Color.black, 100);
						landTiles++;

					}

				}

			} else {

				if (Random.Range (0, worldEndTick) < ticksFromStart) {

					if (ticksFromStart > worldEndTick) {

						if (Random.Range (0, 5) == 3) {

							int change = 0;

							if (tile.food.ContainsKey(Color.black)) {

								change = tile.food [Color.black];

							}

							int overgrowth = Random.Range (0, 100 - change);

							int current = 0;

							foreach (Color otherFood in tile.food.Keys) {

								if (otherFood != Color.black) {

									if (tile.food [otherFood] + current > overgrowth) {

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

					}

					continue;

				}

				foreach (Color food in tile.food.Keys) {

					if (!food.Equals(Color.black) && !food.Equals(Color.red)) {

						//if (Random.Range (0, 100) < tile.food[food]) {
						if (0 < tile.food[food]) {

							List<Vector2> spreadTiles = new List<Vector2> ();
							//spreadTiles.Add (new Vector2(tile.x, tile.y));

							if (tile.x >= 1) {

								spreadTiles.Add(new Vector2(tile.x - 1, tile.y));

							}

							if (tile.y >= 1) {

								spreadTiles.Add(new Vector2(tile.x, tile.y - 1));

							}

							if (tile.x < Map.mapWidth - 1) {

								spreadTiles.Add(new Vector2(tile.x + 1, tile.y));

							}

							if (tile.y < Map.mapHeight - 1) {

								spreadTiles.Add(new Vector2(tile.x, tile.y + 1));

							}

							Vector2 spreadTile = spreadTiles [Random.Range (0, spreadTiles.Count)];

							Tile otherTile = map.tiles [(int) spreadTile.x, (int) spreadTile.y];

							if (otherTile.food.ContainsKey (food) && otherTile.food [food] == 100) {

								continue;

							}

							float upperLimit = 0.4f;

							if (otherTile.isWater) {

								upperLimit = 100;

							}

							if (food.Equals (Color.yellow)) {

								if (otherTile.y > Map.mapHeight / 4) {

									upperLimit += (otherTile.y - Map.mapHeight / 4) * .02f;

								}

							}

							if (food.Equals (Color.green)) {

								if (otherTile.y > Map.mapHeight / 2) {

									upperLimit += (otherTile.y - Map.mapHeight / 2) * .02f;

								} else if (otherTile.y < Map.mapHeight / 4) {

									upperLimit += (Map.mapHeight / 4 - otherTile.y) * .02f;

								}

							}

							if (food.Equals (Color.cyan)) {

								if (otherTile.y > 3 * Map.mapHeight / 4) {

									upperLimit += (otherTile.y - (3 * Map.mapHeight / 4)) * .02f;

								} else if (otherTile.y < Map.mapHeight / 2) {

									upperLimit += (Map.mapHeight / 2 - otherTile.y) * .02f;

								}

							}

							if (food.Equals (Color.magenta)) {

								if (otherTile.y < 3 * Map.mapHeight / 4) {

									upperLimit += ((3 * Map.mapHeight / 4) - otherTile.y) * .02f;

								}

							}

							if (Random.Range (0, 1f) > upperLimit) {
								//if (0.5f > upperLimit) {

								nextSpred [food].Add (spreadTile);

							}

						}

					}

				}

			}

		}

	}

	public void doTick2() {

		foreach (Color food in nextSpred.Keys) {

			foreach (Vector2 spreadTile in nextSpred[food]) {

				Tile otherTile = map.tiles [(int) spreadTile.x, (int) spreadTile.y];

				int change = 0;

				if (otherTile.food.ContainsKey(food)) {

					change = otherTile.food [food];

				}

				int overgrowth = Random.Range (0, 100 - change);

				int current = 0;

				foreach (Color otherFood in otherTile.food.Keys) {

					if (otherFood != food) {

						if (otherTile.food [otherFood] + current > overgrowth) {

							otherTile.food [otherFood]--;

							if (otherTile.food [otherFood] == 0) {

								otherTile.food.Remove (otherFood);

							}

							if (!otherTile.food.ContainsKey (food)) {

								otherTile.food.Add (food, 0);

							}

							otherTile.food [food]++;
							break;

						}

						current += otherTile.food [otherFood];

					}

				}

			}

		}

		nextSpred.Clear ();

	}

	public void doTick3 () {

		foreach (Creature creature in creatures) {

			creature.doTick ();

		}

		if (creatures.Count != 0) {

			float colorR = 0;
			float colorG = 0;
			float colorB = 0;

			float eyesight = 0;
			float maxBiomass = 0;
			float foodConsumption = 0;

			biomass = 0;
			energy = 0;

			foreach (Creature creature in creatures) {

				colorR += creature.GetComponent<SpriteRenderer> ().color.r;
				colorG += creature.GetComponent<SpriteRenderer> ().color.g;
				colorB += creature.GetComponent<SpriteRenderer> ().color.b;

				eyesight += creature.eyesight;
				biomass += creature.biomass;
				energy += creature.energy;
				maxBiomass += creature.maxBiomass;

				foodConsumption += creature.foodConsumption;

			}

			averageColor.GetComponent<Image> ().color = new Color (colorR / creatures.Count, colorG / creatures.Count, colorB / creatures.Count);

			eyesight /= creatures.Count;
			averageEyesightSlider.transform.GetChild(3).GetComponent<Text>().text = "" + Mathf.RoundToInt (eyesight);
			averageEyesightSlider.transform.GetChild (4).transform.localPosition = new Vector2 (eyesight - 50, 0);

			maxBiomass /= creatures.Count;
			averageMaxBiomassSlider.transform.GetChild(3).GetComponent<Text>().text = "" + Mathf.RoundToInt (maxBiomass);
			averageMaxBiomassSlider.transform.GetChild (4).transform.localPosition = new Vector2 ((maxBiomass / 10) - 50, 0);

			biomassLabel.text = "Biomass: " + Mathf.RoundToInt(biomass);
			energyLabel.text = "Energy: " + Mathf.RoundToInt(energy);

			foodConsumption /= creatures.Count;
			averageFoodConsumptionSlider.transform.GetChild(3).GetComponent<Text>().text = "" + Mathf.RoundToInt (foodConsumption);
			averageFoodConsumptionSlider.transform.GetChild (4).transform.localPosition = new Vector2 (foodConsumption - 50, 0);

		} else {

			averageColor.GetComponent<Image> ().color = Color.white;

			averageEyesightSlider.transform.GetChild(3).GetComponent<Text>().text = "" + 0;
			averageEyesightSlider.transform.GetChild (4).transform.localPosition = new Vector2 (-50, 0);

			averageMaxBiomassSlider.transform.GetChild(3).GetComponent<Text>().text = "" + 0;
			averageMaxBiomassSlider.transform.GetChild (4).transform.localPosition = new Vector2 (-50, 0);

			biomassLabel.text = "Biomass: " + 0;
			energyLabel.text = "Energy: " + 0;

			biomass = 0;
			energy = 0;

			averageFoodConsumptionSlider.transform.GetChild(3).GetComponent<Text>().text = "" + 0;
			averageFoodConsumptionSlider.transform.GetChild (4).transform.localPosition = new Vector2 (-50, 0);

		}

	}

	private int phase = 1;
	public long ticksFromStart = 0;

	public bool hasEnded = false;

	public void Update () {

		foreach (Tile tile in map.tiles) {

			tile.GetComponent<SpriteRenderer> ().color = tile.getDisplayColor ();

		}

		foreach (Creature creature in creaturesToRemove) {

			int tileX = (int) (creature.transform.position.x * 4 + Map.mapWidth / 2);
			int tileY = (int) (creature.transform.position.y * 4 + Map.mapWidth / 2);

			Tile tile = map.tiles [tileX, tileY];

			if (!tile.isWater) {

				if (tile.food.ContainsKey (Color.black)) {

					if (tile.food [Color.black] > creature.maxBiomass / 2) {

						if (!tile.food.ContainsKey (Color.red)) {

							tile.food.Add (Color.red, 0);

						}

						tile.food [Color.red] += creature.maxBiomass / 2;
						tile.food [Color.black] -= creature.maxBiomass / 2;

					} else {

						if (!tile.food.ContainsKey (Color.red)) {

							tile.food.Add (Color.red, 0);

						}

						tile.food [Color.red] += tile.food [Color.black];
						tile.food.Remove (Color.black);

					}

				}

			}

			GameObject.Destroy (creature.gameObject);
			creatures.Remove (creature);

		}
			
		creaturesToRemove.Clear ();

		foreach (Creature creature in creaturesToAdd) {

			creatures.Add (creature);

		}

		creaturesToAdd.Clear ();

		if (creatures.Count == 0 && ticksFromStart > 501) {

			if (!hasEnded) {

				if (GameJolt.API.Manager.Instance.CurrentUser == null) {

					GameJolt.UI.Manager.Instance.ShowSignIn ((bool success) => {

						if (success) {

							GameJolt.API.Scores.Add ((int)score, (int)score + "", 0, "", null);

						}

					});

				} else {

					GameJolt.API.Scores.Add ((int) score, (int) score + "", 0, "", null);

				}

			}

			hasEnded = true;

			ticksFromStart = 2 * worldEndTick;
			musicSource.volume -= 0.001f;

			gameOverObject.SetActive (true);

			if (gameOverObject.transform.localScale.x < 1) {

				gameOverObject.transform.localScale = new Vector3 (gameOverObject.transform.localScale.x + 0.001f, gameOverObject.transform.localScale.y + 0.001f, 1);

			}

			Text gameOverText = gameOverObject.transform.GetChild (0).GetComponent<Text> ();

			if (gameOverText.color.a < 1) {

				gameOverText.color = new Color (1, 1, 1, gameOverText.color.a + 0.001f);

			}

			Button restartButton = gameOverObject.transform.GetChild (1).GetComponent<Button> ();

			if (restartButton.colors.normalColor.a < 1) {

				float alpha = restartButton.colors.normalColor.a;

				ColorBlock colorBlock = new ColorBlock ();
				colorBlock.normalColor = new Color (restartButton.colors.normalColor.r, restartButton.colors.normalColor.g, restartButton.colors.normalColor.b, alpha + 0.001f);
				colorBlock.highlightedColor = new Color (restartButton.colors.highlightedColor.r, restartButton.colors.highlightedColor.g, restartButton.colors.highlightedColor.b, alpha + 0.001f);
				colorBlock.pressedColor = new Color (restartButton.colors.pressedColor.r, restartButton.colors.pressedColor.g, restartButton.colors.pressedColor.b, alpha + 0.001f);
				colorBlock.colorMultiplier = restartButton.colors.colorMultiplier;
				colorBlock.disabledColor = restartButton.colors.disabledColor;
				colorBlock.fadeDuration = restartButton.colors.fadeDuration;

				restartButton.colors = colorBlock;

			}

			Text restartText = gameOverObject.transform.GetChild (1).GetChild(0).GetComponent<Text> ();

			if (restartText.color.a < 1) {

				restartText.color = new Color (restartText.color.r, restartText.color.g, restartText.color.b, restartText.color.a + 0.001f);

			}

		}

		populationLabel.text = "Population: " + creatures.Count;

		float plantGrowthMultiplier = ((float) worldEndTick - ticksFromStart) / worldEndTick;
		plantGrowthMultiplier = Mathf.Clamp (plantGrowthMultiplier, 0, 1);
		plantGrowthMultiplier *= 100;
		plantGrowthMultiplier = Mathf.Round (plantGrowthMultiplier);
		plantGrowthMultiplier /= 100;

		plantGrowthLabel.text = "Plant Growth\nMultipiler: " + plantGrowthMultiplier + "x";

		landTilesLabel.text = "Land Tiles: " + landTiles;

		if (!paused) {

			if (landTiles != 0) {

				score += (biomass / landTiles) * (1.0f / 60);

			}

			scoreLabel.text = "Score: " + Mathf.RoundToInt (score);

			ticksFromStart++;

			if (ticksFromStart == 500) {

				map.generateWater ();

			} else if (ticksFromStart == 501) {

				for (int i = 0; i < 10; i++) {

					Creature creature = Creature.CreateNew (getRandomLandTile());
					Creature.GiveRandomAttributes (creature);
					creatures.Add (creature);

					for (int j = 0; j < 9; j ++) {

						creatures.Add(Creature.clone (creature));

					}

				}

			}

			if (ticksFromStart <= 500) {

				if (phase == 1) {

					doTick1 ();
					phase++;

				} else if (phase == 2) {

					doTick2 ();
					phase = 1;

				}

			} else {

				if (phase == 1) {

					doTick1 ();
					phase++;

				} else if (phase == 2) {

					doTick2 ();
					phase++;

				} else if (phase >= 3) {

					doTick3 ();
					phase = 1;

				} else if (phase == 10) {

					doTick3 ();
					phase = 1;

				}

			}

		}

		if (Input.GetMouseButtonDown (0)) {

			if (perfectColorPrimed) {

				drawing = false;

			} else {

				drawing = true;

			}

			Vector3 mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);

			int tileX = (int) (mousePosition.x * 4 + Map.mapWidth / 2);
			int tileY = (int) (mousePosition.y * 4 + Map.mapWidth / 2);

			if (tileX >= 0 && tileX < Map.mapWidth && tileY >= 0 && tileY < Map.mapHeight) {

				drawingLand = map.tiles [tileX, tileY].isWater;

			}

		}

		if (Input.GetMouseButton (0)) {

			Vector3 mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);

			int tileX = (int) (mousePosition.x * 4 + Map.mapWidth / 2);
			int tileY = (int) (mousePosition.y * 4 + Map.mapWidth / 2);

			if (tileX >= 0 && tileX < Map.mapWidth && tileY >= 0 && tileY < Map.mapHeight) {

				if (drawingLand) {

					if (map.tiles [tileX, tileY].isWater) {

						AudioClip clip = map.tiles [tileX, tileY].Click ();

						if (clip != null) {

							if (!GetComponent<AudioSource> ().isPlaying) {

								GetComponent<AudioSource> ().clip = clip;
								GetComponent<AudioSource> ().Play ();

							}

						}

					}

				} else {

					if (!map.tiles [tileX, tileY].isWater) {

						AudioClip clip = map.tiles [tileX, tileY].Click ();

						if (clip != null) {

							if (!GetComponent<AudioSource> ().isPlaying) {

								GetComponent<AudioSource> ().clip = clip;
								GetComponent<AudioSource> ().Play ();

							}

						}

					}

				}

			}

		}

		if (ticksRCCooldown > ticksFromStart) {

			removeCostButton.interactable = false;

		} else {

			removeCostButton.interactable = true;

		}

		if (ticksRCDuration > ticksFromStart) {

			energyCostMultiplier = 0.5f;

		} else {

			energyCostMultiplier = 1;

		}

		if (ticksPCCooldown > ticksFromStart) {

			perfectColorButton.interactable = false;

		} else {

			perfectColorButton.interactable = true;

		}

		if (ticksSDCooldown > ticksFromStart) {

			slowDoosmdayButton.interactable = false;

		} else {

			slowDoosmdayButton.interactable = true;

		}

	}

	private Vector2 getRandomLandTile() {

		Vector2 position = new Vector2 (Random.Range (Map.mapWidth / -8.0f, Map.mapWidth / 8.0f), Random.Range (Map.mapHeight / -8.0f, Map.mapHeight / 8.0f));
		int tileX = (int) (position.x * 4 + Map.mapWidth / 2);
		int tileY = (int) (position.y * 4 + Map.mapWidth / 2);
		Tile tile = map.tiles [tileX, tileY];

		while (tile.isWater) {

			position = new Vector2 (Random.Range (Map.mapWidth / -8.0f, Map.mapWidth / 8.0f), Random.Range (Map.mapHeight / -8.0f, Map.mapHeight / 8.0f));
			tileX = (int) (position.x * 4 + Map.mapWidth / 2);
			tileY = (int) (position.y * 4 + Map.mapWidth / 2);
			tile = map.tiles [tileX, tileY];

		}

		return position;

	}

	public long ticksRCCooldown;
	public long ticksRCDuration;

	public void RemoveCostButtonClick () {

		if (ticksRCCooldown < ticksFromStart) {

			ticksRCCooldown = ticksFromStart + 60 * 60;
			ticksRCDuration = ticksFromStart + 60 * 10;

		}

	}

	public long ticksPCCooldown;

	public void PerfectColorButtonClick () {

		if (energy >= 100) {

			if (ticksPCCooldown < ticksFromStart) {

				ticksPCCooldown = ticksFromStart + 60 * 30;
				perfectColorPrimed = true;

				float energyPer = 100 / creatures.Count;

				foreach (Creature creature in creatures) {

					creature.energy -= energyPer;

				}

				energy = 0;

				foreach (Creature creature in creatures) {

					energy += creature.energy;

				}

				energyLabel.text = "Energy: " + Mathf.RoundToInt(energy);

			}

		}

	}

	public long ticksSDCooldown;

	public void SlowDoomsdayButtonClick () {

		if (energy >= 5000) {

			if (ticksSDCooldown < ticksFromStart) {

				ticksSDCooldown = ticksFromStart + 60 * 5;
				worldEndTick += 5 * 60;

				float energyPer = 5000 / creatures.Count;

				foreach (Creature creature in creatures) {

					creature.energy -= energyPer;

				}

				energy = 0;

				foreach (Creature creature in creatures) {

					energy += creature.energy;

				}

				energyLabel.text = "Energy: " + Mathf.RoundToInt(energy);

			}

		}

	}

	public void Restart () {

		UnityEngine.SceneManagement.SceneManager.LoadScene (1);

	}

	public void TogglePaused() {

		paused = !paused;

	}

}
