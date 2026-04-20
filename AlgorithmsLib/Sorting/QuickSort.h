#pragma once

#include <iostream>
using namespace std;


namespace MyAlgorithmsLib
{
	void MySwap(int& a, int& b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}


	namespace Internal
	{
		int Partitioning2(int arr[], int first, int last, bool IsAscending = true)
		{
			// my way

			int pivod = (first + last) / 2;

			while (first < last)
			{
				if (pivod != last && IsAscending ? arr[last] < arr[pivod] : arr[last] > arr[pivod])
				{
					swap(arr[last], arr[pivod]);
					pivod = last;

				}
				else if (pivod != first && IsAscending ? arr[first] > arr[pivod] : arr[first] < arr[pivod])
				{
					swap(arr[first], arr[pivod]);
					pivod = first;

				}
				else
				{
					if (pivod == first)
					{
						last--;
					}
					else
					{
						first++;
					}
				}

				if (first >= last)
				{
					return pivod;
				}
			}
		}

		// this type of partition work with in case Ascending we make pivot = middle item and all left items less than pivot and all right items bigger than pivot
		// here we use Hoare's Partition Scheme because we need make time complixty in worst case and all cases (n log n)
		int Partitioning(int arr[], int FirstIndex, int LastIndex, bool IsAscending = true)
		{
			int pivot = arr[(FirstIndex + LastIndex) / 2];

			// here we do this because we use do while not while because do not hapened infinite loop because duplicate items  
			FirstIndex--;
			LastIndex++;

			while (FirstIndex < LastIndex)
			{
				// here we use do while not while because do not hapened infinite loop because duplicate items  
				do
				{
					FirstIndex++;
				} while (IsAscending ? arr[FirstIndex] < pivot : arr[FirstIndex] > pivot);

				do
				{
					LastIndex--;
				} while (IsAscending ? arr[LastIndex] > pivot : arr[LastIndex] < pivot);

				// here we use >= not == because do not hapened infinite loop in some cases
				if (FirstIndex >= LastIndex)
				{
					break;
				}
				else
				{
					MySwap(arr[FirstIndex], arr[LastIndex]);
				}
			}

			// here we must return LastIndex not FirstIndex because function ( QuickSort ) depends on that
			return LastIndex;
		}
	}


	void QuickSort2(int arr[], int first, int last, bool IsAscending = true)
	{
		if (first < last)
		{
			int pivod = Internal::Partitioning2(arr, first, last, IsAscending);

			QuickSort2(arr, first, pivod - 1, IsAscending);
			QuickSort2(arr, pivod + 1, last, IsAscending);
		}
	}

	void QuickSort(int arr[], int FirstIndex, int LastIndex, bool IsAscending = true)
	{
		if (FirstIndex < LastIndex)
		{
			int IndexPivot = Internal::Partitioning(arr, FirstIndex, LastIndex, IsAscending);
			QuickSort(arr, FirstIndex, IndexPivot, IsAscending);
			QuickSort(arr, IndexPivot + 1, LastIndex, IsAscending);
		}
	}


}