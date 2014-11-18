/*
 * Problem3.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */
#include <iostream>

using namespace std;

int main() {
	long factorOf = (600851475143);
	int num = 2;

	while ((num * num) <= factorOf)

		if (factorOf % num == 0) {
			cout << num << endl;
			factorOf /= num;
		} else
			num++;

	cout << "The factor of 600851475143 is: " << factorOf << endl;
}

