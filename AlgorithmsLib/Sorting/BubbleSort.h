#pragma once


namespace MyAlgorithmsLib
{
	// afetr i learn more
	void BubbleSortBetter(int arr[], int len, bool IsAscending = true)
	{
		bool isSorted = true;

		for (int i = 0; i < len - 1; i++)
		{
			for (int j = 0; j < len - (1 + i); j++)
			{
				if (IsAscending ? arr[j] > arr[j + 1] :  arr[j] < arr[j + 1])
				{
					MySwap(arr[j], arr[j + 1]);
					isSorted = false;
				}
			}

			if (isSorted == true)
			{
				break;
			}
			else
			{
				isSorted = true;
			}
		}
	}
	
	void BubbleSort(int arr[], int len, bool AscendingOrder = true)
	{
		bool flag = true;

		if (AscendingOrder)
		{
			for (short i = 0; i < len - 1; i++)
			{
				for (short j = 0; j < len - (i + 1); j++)
				{
					if (arr[j] > arr[j + 1])
					{
						MySwap(arr[j], arr[j + 1]);
						flag = false;
					}
				}

				if (flag)
				{
					break;
				}
				else
				{
					flag = true;
				}
			}
		}
		else
		{
			for (short i = 0; i < len - 1; i++)
			{
				for (short j = 0; j < len - (i + 1); j++)
				{
					if (arr[j] < arr[j + 1])
					{
						MySwap(arr[j], arr[j + 1]);
						flag = false;
					}
				}

				if (flag)
				{
					break;
				}
				else
				{
					flag = true;
				}
			}
		}
	}


}