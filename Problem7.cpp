/*
 * Problem7.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <vector>

using namespace std;

int isPrime(int num)

{

	for (int i = 2; i < num; i++) {
		if ((num % i) == 0) {
			i = num;
			return 0;

		} else {
			return 1;
		}
	}

}

int main()

{
	int maxVect = 10001;
	vector<int> primeVect;

	for (int num = 2; num < maxVect; num++)

	{
		if (isPrime(num) == 1) {
			primeVect.push_back(num);
		}

	}
	cout << primeVect[10000] << endl;

	return 0;
}

