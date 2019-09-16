//

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
	int sum = 0, product = 1;
	int n, i;
	bool isPrime;

	for (n = 2; n <= 1000; n++)
	{
		isPrime = true;
		for (i = 2; i <= n / 2; i++)  // or n-1
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			sum = sum + n;
			product = product * n;
		}


	}
	cout << "The sum of every prime number between 1-1000 is: " << sum << endl;
	cout << "The product of every prime number between 1-1000 is: " << product << endl;
	
	

}

