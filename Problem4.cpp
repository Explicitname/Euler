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
	int prod = 1001;
	string stringConv;
	ostringstream convert;
	convert << prod;
	stringConv = convert.str();






	cout << stringConv << endl;

	if (stringConv == string(stringConv.rbegin(), stringConv.rend())) {
	    cout << stringConv << " is a palindrome";
	}








}

