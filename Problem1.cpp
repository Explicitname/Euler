/*
 * Problem1.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <vector>

using namespace std;

int main()

{

	int sum = 0;
	vector<int> multiples;

	for (int i = 0; i < 1000; i++) {

		if (!(i % 3) || !(i % 5)) {
			multiples.push_back(i);
			sum = sum + i;

		}

	}

	cout << "The multiples of 3 & 5 below 1000 are: " << endl;
	for (int i = 0; i < multiples.size(); i++) {
		cout << "___" << endl;
		cout << multiples[i] << '|' << endl;
	}
	cout << "The sum of all the multiples of 3 & 5 below 1000 is: " << sum << endl;

	return 0;

}
