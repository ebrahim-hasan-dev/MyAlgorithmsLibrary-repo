#pragma once

namespace MyAlgorithmsLib
{
	namespace Internal
	{
		int BinarySearchUseingRecursion(int arr[], int f, int l, int num)
		{
			if (f <= l)
			{
				int m = (f + l) / 2;

				if (num < arr[m])
				{
					return BinarySearchUseingRecursion(arr, f, m - 1, num);
				}

				else if (num > arr[m])
				{
					return BinarySearchUseingRecursion(arr, m + 1, l, num);
				}

				else
				{
					return m;
				}
			}
			else
			{
				return -1;
			}
		}
	}


	int BinarySearchUseingRecursion(int arr[], int len, int num)
	{
		int f = 0;
		int l = len - 1;

		return Internal::BinarySearchUseingRecursion(arr, f, l, num);
	}

	int BinarySearchUseingLoop(int arr[], int len, int num)
	{
		int first = 0;
		int last = len - 1;

		while (first <= last)
		{
			int m = (first + last) / 2;

			if (num == arr[m])
			{
				return m;
			}

			else if (num > arr[m])
			{
				first = m + 1;
			}

			else
			{
				last = m - 1;
			}
		}

		return -1;
	}

}