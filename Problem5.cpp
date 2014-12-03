/*
 * Problem5.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */
#include <iostream>
#include <vector>

using namespace std;

int main()

{

	int j = 0;
	int isDivisble = 0;

	cout
			<< "This program will find the smallest number that is evenly divisble by all the numbers from 1 through 20."
			<< endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;

	while (true) {

		j++;

		for (int i = 11; i < 21; i++) {

			if (j % i == 0) {
				isDivisble++;
			}


		}

		if (isDivisble == 20) {
			break;
		}
	}

	cout << "The answer is: " << j << endl;

	return 0;

}

