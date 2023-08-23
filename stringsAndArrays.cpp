// Benjamin Scoggins
// stringsAndArrays.cpp
// 23 August 2023

#include <iostream>

int main()
{
	// My very cool array.
	int numbers[] = {12, 17, 5, 2, 9043, 50};

	std::cout << "Here is my cool array. " << numbers << std::endl;
	for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	// My even cooler array
	int coolerNumbers[5][2] = {
	{82, 50}, {3, 9001}, {43, 733}, {1, 3}, {12345, -5}
	};

	std::cout << "\nHere is my even cooler array. " << coolerNumbers << std::endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << coolerNumbers[i][j] << " ";
		}
		std::cout << std::endl;
	}	
	std::cout << std::endl;

	// The coolest array ever
	int coolestNumbers[10][10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				coolestNumbers[i][j][k] = ((i * 10  + j) * 10) + k;
			}
		}
	}

	std::cout << "\nHere is the coolest three dimensional array ever. " << coolestNumbers << std::endl;
	for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        for (int k = 0; k < 10; k++) {
				std::cout << coolestNumbers[i][j][k] << " ";
                        }
			std::cout << std::endl;
                }
		std::cout << std::endl << std::endl;
        }



	return 0;
}
