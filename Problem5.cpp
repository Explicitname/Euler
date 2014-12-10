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
	int isDivisible = 0;

	cout
			<< "This program will find the smallest number that is evenly divisble by all the numbers from 1 through 20."
			<< endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;

	while (true)
	{

		j++;
		if (j % 20 == 0)
		{
			isDivisible = 0;
			for (int i = 11; i < 20; i++)
			{

				if (!(j % i))
				{
					isDivisible++;
				}

			}
			if (isDivisible == 9)
			{
				cout << j << endl;
				break;
			}
		}
	}
	return 0;

}
