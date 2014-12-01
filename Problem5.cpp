/*
 * Problem5.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */
#include <iostream>

using namespace std;

int main()

{

	bool cont = true;
	int i = 0;

	cout << "This program will find the smallest number that is evenly divisble by all the numbers from 1 through 20." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;
	cout << "..." << endl;

	while (cont == true)

	{

		i++;


		if (!(i % 20) && !(i % 19) && !(i % 18) && !(i % 17) && !(i % 16) && !(i % 15) && !(i % 14) && !(i % 13) && !(i % 12) && !(i % 11))
		{
			cout << "This smallest number that can divided evenly by all the numbers between 1-20 is: " << i << endl;
			cont = false;
			return 0;
		}





	}



	return 0;

}

