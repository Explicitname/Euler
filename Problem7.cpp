/*
 * Problem7.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <vector>

using namespace std;



bool isPrime(int num)

{

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			i = num;
			return true;

		}
		else
		{
			return false;
		}
	}


}

int main()

{
	int maxPrime = 10; //Max desired prime number

	int num = 2;
	vector <int> primeVect;

	while (primeVect.size() < maxPrime + 1)

	{
		if (!isPrime(num))
		{
			primeVect.push_back(num);
		}
		cout << "..." << primeVect.size() << endl;
		num++;


	}

	cout << primeVect[maxPrime] << endl;









	return 0;
}



