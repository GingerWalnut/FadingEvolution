﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitButton : MonoBehaviour {

	public void Click () {

		UnityEngine.SceneManagement.SceneManager.LoadScene (0);

	}

}
