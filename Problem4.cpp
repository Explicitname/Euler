/*
 * Problem4.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()

{
	int prod = 1234;
	string stringConv;
	ostringstream convert;


	for (int i = 999; i >=100; i--)
	{
		for (int j = 999; j >= 100; i--)
		{
			prod = (j*i);
			cout << prod << endl;

			convert << prod;
			stringConv = convert.str();
			if (stringConv == string(stringConv.rbegin(), stringConv.rend()))
				{
				    cout << stringConv << " is a palindrome";
				}

		}
	}

















}

