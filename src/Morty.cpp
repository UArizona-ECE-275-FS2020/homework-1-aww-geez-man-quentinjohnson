/* 
 __  __            _                                
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __  
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \ 
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/ 
                       |___/           |_|   |_|  
*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>;


namespace C137 {

	void Morty(int start, int stop) {
													//print Aww, Geez, or Aww Geez Man based on loop invariant
		std::cout << "Morty C137 says: " << std::endl;
		
		for (int i = start; i <= stop; i++) {

			if ((i % 15) == 0) {

			std::cout << i << ": Aww Geez Man" << std::endl;
			}

			else if ((i % 3) == 0) {

				std::cout << i << ": Aww" << std::endl;
			}

			else if ((i % 5) == 0) {

				std::cout << i << ": Geez" << std::endl;
			}

			else {
				std::cout << i << ":" << std::endl;
			}

		}

	}

	void MortyStep(int start, int stop, int step) {

		std::cout << "Morty C137 says: " << std::endl;

		for (int i = start; i <= stop; i+= step) {

			if ((i % 15) == 0) {

				std::cout << i << ": Aww Geez Man" << std::endl;
			}

			else if ((i % 3) == 0) {

				std::cout << i << ": Aww" << std::endl;
			}

			else if ((i % 5) == 0) {

				std::cout << i << ": Geez" << std::endl;
			}

			else {
				std::cout << i << ":" << std::endl;
			}
			

		}

	}

}


namespace Z286 {

	void Morty(int start, int stop) {
													//print wwA, zeeG, or wwA zeeG naM based on loop invariant

		std::cout << "Morty Z286 says: " << std::endl;

		for (int i = start; i <= stop; i++) {

			if ((i % 15) == 0) {

				std::cout << i << ": wwA zeeG naM" << std::endl;
			}

			else if ((i % 3) == 0) {

				std::cout << i << ": wwA" << std::endl;
			}

			else if ((i % 5) == 0) {

				std::cout << i << ": zeeG" << std::endl;
			}

			else {
				std::cout << i << ":" << std::endl;
			}

		}

	}

	void MortyStep(int start, int stop, int step) {

		std::cout << "Morty Z286 says: " << std::endl;

		for (int i = start; i <= stop; i += step) {

			if ((i % 15) == 0) {

				std::cout << i << ": wwA zeeG naM" << std::endl;
			}

			else if ((i % 3) == 0) {

				std::cout << i << ": wwA" << std::endl;
			}

			else if ((i % 5) == 0) {

				std::cout << i << ": zeeG" << std::endl;
			}

			else {
				std::cout << i << ":" << std::endl;
			}


		}

	}

}
