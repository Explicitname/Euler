/*
 * Problem7.cpp
 *
 *  Created on: Dec 1, 2014
 *      Author: explicitname
 */

#include <iostream>
#include <vector>

using namespace std;

<<<<<<< HEAD
bool isPrime(int num)

{
	bool prime;
=======


bool isPrime(int num)

{
>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			i = num;
<<<<<<< HEAD
			prime = true;

		} else
		{
			prime = false;
		}
	}
	return prime;
=======
			return true;

		}
		else
		{
			return false;
		}
	}


>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7
}

int main()

{
<<<<<<< HEAD
	int maxPrime = 10000;//Max desired prime number

	int num = 2;
	vector<int> primeVect;
=======
	int maxPrime = 10; //Max desired prime number

	int num = 2;
	vector <int> primeVect;
>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7

	while (primeVect.size() < maxPrime + 1)

	{
		if (!isPrime(num))
		{
<<<<<<< HEAD
			cout << num << " :::: " << endl;
			primeVect.push_back(num);
		}
		num++;

=======
			primeVect.push_back(num);
		}
		cout << "..." << primeVect.size() << endl;
		num++;


>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7
	}

	cout << primeVect[maxPrime] << endl;

<<<<<<< HEAD
	return 0;
}

=======








	return 0;
}



>>>>>>> 389110ad561ba0c76777edee3fd5326b76ffc3c7
