/*
 * Problem4.cpp
 *
 *  Created on: Nov 18, 2014
 *      Author: explicitname
 */


#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;


int main()

{
	int prod = 100001;
	string stringConv;
	ostringstream convert;


	for (int i = 999; i >=100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			//prod = (j*i);
			//cout << prod << endl;
			//cout << i << " x " << j << "\n" << endl;


			convert << prod;
			stringConv = convert.str();
			if (stringConv == string(stringConv.rbegin(), stringConv.rend()))
				{
				    cout << stringConv << " is a palindrome. " << endl;

				    return 0;
				}

		}
	}















	return 0;


}

