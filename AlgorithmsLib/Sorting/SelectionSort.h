#pragma once



namespace MyAlgorithmsLib
{
	namespace Internal
	{
		int FindMax(int arr[], int len)
		{
			int max = arr[0];
			int MaxIndex = 0;

			for (short i = 1; i < len; i++)
			{
				if (arr[i] > max)
				{
					max = arr[i];

					MaxIndex = i;
				}
			}

			return MaxIndex;
		}

		int FindMin(int arr[], int len)
		{
			int min = arr[0];
			int MinIndex = 0;

			for (short i = 1; i < len; i++)
			{
				if (arr[i] < min)
				{
					min = arr[i];

					MinIndex = i;
				}
			}

			return MinIndex;
		}

		int FindMax(int arr[], int len, int first)
		{
			int max = arr[first];
			int MaxIndex = first;

			for (short i = first + 1; i < len; i++)
			{
				if (arr[i] > max)
				{
					max = arr[i];

					MaxIndex = i;
				}
			}

			return MaxIndex;
		}

		int FindMin(int arr[], int len, int first)
		{
			int min = arr[first];
			int MinIndex = first;

			for (short i = first + 1; i < len; i++)
			{
				if (arr[i] < min)
				{
					min = arr[i];

					MinIndex = i;
				}
			}

			return MinIndex;
		}
	}


	// after in learn more
	void SelectionSortBetter(int arr[], int len, bool IsAscending = true)
	{
		for (int i = 0; i < len - 1; i++)
		{
			int m = i;

			for (int j = i + 1; j < len; j++)
			{
				if (IsAscending ? arr[j] < arr[m] : arr[j] > arr[m])
				{
					m = j;
				}
			}

			MySwap(arr[i], arr[m]);
		}
	}

	void SelectionSort(int arr[], int len, bool AscendingOrder = true)
	{
		if (AscendingOrder)
		{
			for (short i = 0; i < len - 1; i++)
			{
				int index = Internal::FindMax(arr, len - i);

				MySwap(arr[index], arr[len - (1 + i)]);
			}
		}
		else
		{
			for (short i = 0; i < len - 1; i++)
			{
				int index = Internal::FindMin(arr, len - i);

				MySwap(arr[index], arr[len - (1 + i)]);
			}
		}

	}

	void SelectionSort2(int arr[], int len, bool AscendingOrder = true)
	{
		int *TempArr = new int[len];

		if (AscendingOrder)
		{
			for (short i = 0; i < len; i++)
			{
				int index = Internal::FindMin(arr, len);
				TempArr[i] = arr[index];
				arr[index] = 2147483647;
			}
		}
		else
		{
			for (short i = 0; i < len; i++)
			{
				int index = Internal::FindMax(arr, len);
				TempArr[i] = arr[index];
				arr[index] = -2147483647;
			}
		}

		for (short i = 0; i < len; i++)
		{
			arr[i] = TempArr[i];
		}

		delete[] TempArr;
		TempArr = nullptr;
	}

	void SelectionSort3(int arr[], int len, bool AscendingOrder = true)
	{
		if (AscendingOrder)
		{
			for (short i = 0; i < len - 1; i++)
			{
				int index = Internal::FindMin(arr, len, i);

				MySwap(arr[index], arr[i]);
			}
		}
		else
		{
			for (short i = 0; i < len - 1; i++)
			{
				int index = Internal::FindMax(arr, len, i);

				MySwap(arr[index], arr[i]);
			}
		}

	}

}