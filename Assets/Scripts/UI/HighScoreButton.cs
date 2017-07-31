using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HighScoreButton : MonoBehaviour {

	public void Click () {

		GameJolt.UI.Manager.Instance.ShowLeaderboards ();

	}

}
