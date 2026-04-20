#pragma once

#include <iostream>
using namespace std;


namespace MyAlgorithmsLib
{
	namespace Internal
	{
		void PrintFibonacciSeriesUsingRecursion(int num, int prev2, int prev1)
		{
			if (num == 2)
			{
				return;
			}

			if (prev1 == 1)
			{
				cout << "1  1  ";
			}

			// 1 1 2 3 5 8 13 21

			int febnumber = prev2 + prev1;
			cout << febnumber << "  ";
			prev2 = prev1;
			prev1 = febnumber;

			PrintFibonacciSeriesUsingRecursion(num - 1, prev2, prev1);

		}
	}

	void FibonacciSeriesArray(int arr[], int len)
	{
		// 1 1 2 3 5 8 13 21 

		arr[0] = 1;

		arr[1] = 1;

		for (int i = 2; i < len; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}

	}

	void PrintFibonacciSeriesUsingloop(int num)
	{
		int febnumber = 0;

		int prev1 = 1;

		int prev2 = 1;

		cout << "1  1  ";

		for (int i = 2; i < num; i++)
		{
			// 1 1 2 3 5 8 13 21 

			febnumber = prev1 + prev2;
			cout << febnumber << "  ";
			prev2 = prev1;
			prev1 = febnumber;

		}

	}

	void PrintFibonacciSeriesUsingRecursion(int num)
	{
		Internal::PrintFibonacciSeriesUsingRecursion(num, 1, 1);
	}


}