﻿#include <iostream>
using namespace std;


void main()
{
	const int n = 10;
	int a[n];
	

	//random
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 20;
	}
	//output
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;


	//algorithm downtoup
	int min = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > min)
		{

		}
	}

}
