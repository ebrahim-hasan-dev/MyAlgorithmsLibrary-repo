#pragma once


namespace MyAlgorithmsLib
{

	// this correct insersion sort algorithm because not use swap fuction,
	// because this reason make insersion better from Bubble algorithm because Bubble use swap faction which take three access to mamory   
	void InsertionSortBetter(int arr[], int len, bool IsAscending = true)
	{
		int Element;
		int tmp;

		for (int i = 1; i < len; i++)
		{
			Element = arr[i];
			tmp = i - 1;

			while (tmp >= 0 && (IsAscending ? arr[tmp] > Element : arr[tmp] < Element))
			{

				arr[tmp + 1] = arr[tmp];
				tmp--;
			}

			arr[tmp + 1] = Element;
		}

	}

	void InsertionSort(int arr[], int len, bool IsAscending = true)
	{
		for (int i = 1; i < len; i++)
		{
			int tmp = i;

			while (tmp != 0 && (IsAscending ? arr[tmp] < arr[tmp - 1] : arr[tmp] > arr[tmp - 1]))
			{
				MySwap(arr[tmp], arr[tmp - 1]);
				tmp--;
			}
		}
	}


}