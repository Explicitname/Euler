/*
 * Problem5.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */
#include <iostream>

using namespace std;

int main()

{

	bool cont = true;
	int i = 1;

	while (cont == true)

	{


		if (!(i % 20) && !(i % 19) && !(i % 18) && !(i % 17) && !(i % 16) && !(i % 15) && !(i % 14))
		{
			cout << i << endl;
			cont = false;
			return 0;
		}

		i++;



	}



	return 0;

}

