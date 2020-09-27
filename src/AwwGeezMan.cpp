/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <string>
#include <iostream>

int main(int ac, char** av) {

	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	else {

		if ((ac == 4)) {
			//Pass through Morty function. Determine which dimension first

			int start = std::atoi(av[1]);
			int stop = std::atoi(av[2]);

			if (av[3] == "C137") {

				C137::Morty(start, stop);

			}

			else if (av[3] == "Z286") {

				Z286::Morty(start, stop);

			}
			
			else {
				return -1;
			}


		}

		else if ((ac == 5)) {
			//Pass through MortyStep function. determine which dimension first
		
			int start = std::atoi(av[1]);
			int stop = std::atoi(av[2]);
			int step = std::atoi(av[3]);

			if (av[3] == "C137") {

				C137::MortyStep(start, stop, step);

			}

			else if (av[3] == "Z286") {

				Z286::MortyStep(start, stop, step);

			}
			
			else {
				return -1;
			}

		}

		else {
			return -1;
		}

	}


	// Depending on the dimension of the arguments, call the appropriate Morty
	// function


	return 0;
}
