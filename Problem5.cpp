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
<<<<<<< HEAD
	int isDivisible = 0;
=======
	int isDivisble = 0;
>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7

	cout
			<< "This program will find the smallest number that is evenly divisble by all the numbers from 1 through 20."
			<< endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;

<<<<<<< HEAD
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
=======
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

>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7
