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
	bool prime;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			i = num;
			prime = true;

		} else
		{
			prime = false;
		}
	}
	return prime;
}

int main()

{
	int maxPrime = 10000;//Max desired prime number

	int num = 2;
	vector<int> primeVect;

	while (primeVect.size() < maxPrime + 1)

	{
		if (!isPrime(num))
		{
			cout << num << " :::: " << endl;
			primeVect.push_back(num);
		}
		num++;

	}

	cout << primeVect[maxPrime] << endl;

	return 0;
}

