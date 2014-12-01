/*
 * Problem6.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */
#include <iostream>

using namespace std;

int main()

{
	int sumSquare;
	int squareSum;
	int squareSumHold;

	for (int i = 0; i < 101; i++ )

	{
		sumSquare = (i * i) + sumSquare;

	}

	cout << "The sum of all squares from 1-100 is: " << sumSquare << endl;

	for (int i = 0; i < 101; i++ )

	{
		squareSumHold = i + squareSumHold;
		if ( i == 100)

		{
			squareSum = squareSumHold * squareSumHold;
		}

	}

	cout << "The square of the sum of all numbers from 1-100 is: " << squareSum << endl;
	cout << "The difference between the sum of squares and the sum of squares is: " << squareSum - sumSquare << endl;






	return 0;
}



