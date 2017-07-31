using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorldType : MonoBehaviour {

	public Toggle NormalToggle;
	public static Dictionary<int, int> NormalGen = new Dictionary<int, int>();

	public Toggle ContinentsToggle;
	public static Dictionary<int, int> ContinentsGen = new Dictionary<int, int>();

	public Toggle IslandsToggle;
	public static Dictionary<int, int> IslandsGen = new Dictionary<int, int>();

	public Toggle ArchipelagoToggle;
	public static Dictionary<int, int> ArchipelagoGen = new Dictionary<int, int>();

	public Toggle FlatToggle;

	public static string worldGen = "normal";

	public void Start () {

		switch (worldGen) {

		case "normal":
			NormalToggle.isOn = true;
			break;
		case "cont":
			ContinentsToggle.isOn = true;
			break;
		case "islands":
			IslandsToggle.isOn = true;
			break;
		case "arch":
			ArchipelagoToggle.isOn = true;
			break;
		case "flat":
			FlatToggle.isOn = true;
			break;

		}

		NormalGen.Clear ();
		NormalGen.Add (2, 30);
		NormalGen.Add (3, 10);
		NormalGen.Add (6, 3);
		NormalGen.Add (12, 1);

		ContinentsGen.Clear ();
		ContinentsGen.Add (2, 10);
		ContinentsGen.Add (3, 5);
		ContinentsGen.Add (6, 2);
		ContinentsGen.Add (15, 2);

		IslandsGen.Clear ();
		IslandsGen.Add (2, 40);
		IslandsGen.Add (3, 15);
		IslandsGen.Add (6, 6);

		ArchipelagoGen.Clear ();
		ArchipelagoGen.Add (2, 100);
		ArchipelagoGen.Add (3, 10);
		ArchipelagoGen.Add (6, 1);

	}

	public void ChangeToNormal () {

		if (!NormalToggle.isOn) {

			NormalToggle.interactable = true;
			return;

		}

		NormalToggle.interactable = false;

		ContinentsToggle.isOn = false;
		IslandsToggle.isOn = false;
		ArchipelagoToggle.isOn = false;
		FlatToggle.isOn = false;

		worldGen = "normal";

	}

	public void ChangeToContinents () {

		if (!ContinentsToggle.isOn) {

			ContinentsToggle.interactable = true;
			return;

		}

		ContinentsToggle.interactable = false;

		NormalToggle.isOn = false;
		IslandsToggle.isOn = false;
		ArchipelagoToggle.isOn = false;
		FlatToggle.isOn = false;

		worldGen = "cont";

	}

	public void ChangeToIslands() {

		if (!IslandsToggle.isOn) {

			IslandsToggle.interactable = true;
			return;

		}

		IslandsToggle.interactable = false;

		NormalToggle.isOn = false;
		ContinentsToggle.isOn = false;
		ArchipelagoToggle.isOn = false;
		FlatToggle.isOn = false;

		worldGen = "islands";

	}

	public void ChangeToArchipelago() {

		if (!ArchipelagoToggle.isOn) {

			ArchipelagoToggle.interactable = true;
			return;

		}

		ArchipelagoToggle.interactable = false;

		NormalToggle.isOn = false;
		ContinentsToggle.isOn = false;
		IslandsToggle.isOn = false;
		FlatToggle.isOn = false;

		worldGen = "arch";

	}

	public void ChangeToFlat() {

		if (!FlatToggle.isOn) {

			FlatToggle.interactable = true;
			return;

		}

		FlatToggle.interactable = false;

		NormalToggle.isOn = false;
		ContinentsToggle.isOn = false;
		IslandsToggle.isOn = false;
		ArchipelagoToggle.isOn = false;

		worldGen = "flat";

	}

}
