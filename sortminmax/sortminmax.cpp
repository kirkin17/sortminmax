#include <iostream>
using namespace std;


void main()
{
	const int n = 10;
	int a[n];
	

	//random
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 20;
	}
	//output
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;


	//algorithm downtoup
	for (int i = 0; i < n; i++)
	{
		int min = a[0];
		for (int j = 1; j < n; j++)
		{
			if (a[i] < min) min = a[i];
		}

	}



}
