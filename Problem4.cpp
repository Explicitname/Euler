/*
 * Problem4.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int isPal(int prod)
{
	string stringConv;
	ostringstream convert;
	convert << prod;
	stringConv = convert.str();
	if (stringConv == string(stringConv.rbegin(), stringConv.rend())) {


		return 1;

	} else {
		return 0;
	}

}

int main()

{
	int prod = 10;
	int highPal;

	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--)

		{
			prod = (j * i);
			cout << prod << endl;
			cout << i << " x " << j << "\n" << endl;
			if (isPal(prod) == 1)
			{
				if (prod > highPal)
				{
					highPal = prod;
				}

			}

		}
	}

	cout << highPal << " is the highest Palindrome!" << endl;
	return 0;

}

