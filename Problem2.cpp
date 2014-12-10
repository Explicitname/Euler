/*
 * Problem2.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */
#include <iostream>

using namespace std;

int main()

{
	int term_1 = 1;
	int term_2 = 2;
	int term_3 = 0;
	int MaxTerm = 4000000;
	int sum = 0;

	cout << "This Program lists the Fibonacci sequence. " << endl;

	while (term_1 <= MaxTerm) {
		cout << term_1 << endl;
		if ((term_1 % 2) == 0) {
			sum += term_1;
		}

		term_3 = term_1 + term_2;
		term_1 = term_2;
		term_2 = term_3;

	}
	cout << "The total of the even value numbers is: " << sum << endl;

}

