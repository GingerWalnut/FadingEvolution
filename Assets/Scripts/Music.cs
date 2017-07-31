using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Music : MonoBehaviour {

	public static bool hasPlayed = false;

	void Awake () {

		if (hasPlayed) {

			GameObject.Destroy (gameObject);

		}

		hasPlayed = true;

		DontDestroyOnLoad (gameObject);

	}

	void Update () {

		if (!GetComponent<AudioSource> ().isPlaying) {

			if (UnityEngine.SceneManagement.SceneManager.GetActiveScene ().buildIndex == 0 || UnityEngine.SceneManagement.SceneManager.GetActiveScene ().buildIndex == 2) {

				GetComponent<AudioSource> ().Play ();

			}

		} else {

			if (UnityEngine.SceneManagement.SceneManager.GetActiveScene ().buildIndex == 1) {

				GetComponent<AudioSource> ().Stop ();

			}

		}

	}

}
