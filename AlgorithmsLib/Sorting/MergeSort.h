#pragma once


namespace MyAlgorithmsLib
{
	namespace Internal
	{
		void Merge2(int arr[], int first, int last, int m)
		{
			int i1 = first;
			int i2 = m + 1;

			int len1 = m + 1;
			int len2 = last + 1;

			// here size of tmparr will be bigger than number of Elements, we must do this (int len = last + 1 - first;), but i did'ot now that yet
			int len = last + 1;

			int* tmparr = new int[len];

			int i = first;

			while (i1 < len1 && i2 < len2)
			{
				if (arr[i1] <= arr[i2])
				{
					tmparr[i] = arr[i1];
					i1++;
				}
				else
				{
					tmparr[i] = arr[i2];
					i2++;
				}

				i++;
			}

			while (i1 < len1)
			{
				tmparr[i] = arr[i1];
				i1++;
				i++;
			}

			while (i2 < len2)
			{
				tmparr[i] = arr[i2];
				i2++;
				i++;
			}

			for (int j = first; j < len; j++)
			{
				arr[j] = tmparr[j];
			}

			delete[] tmparr;
			tmparr = nullptr;
		}

		void Merge(int arr[], int l, int r)
		{
			int m = (l + r) / 2;
			int lindex = l;
			int rindex = m + 1;
			int lsize = m - l + 1;
			int rsize = r - m;
			int* larr = new int[lsize];
			int* rarr = new int[rsize];

			for (int i = 0; i < lsize; i++)
			{
				larr[i] = arr[i + lindex];
			}

			for (int i = 0; i < rsize; i++)
			{
				rarr[i] = arr[i + rindex];
			}

			int i = 0;
			int j = 0;
			int k = l;

			while (i < lsize && j < rsize)
			{
				if (larr[i] < rarr[j])
				{
					arr[k] = larr[i];
					i++;
					k++;
				}
				else
				{
					arr[k] = rarr[j];
					j++;
					k++;
				}
			}

			while (i < lsize)
			{
				arr[k] = larr[i];
				i++;
				k++;
			}

			while (j < rsize)
			{
				arr[k] = rarr[j];
				j++;
				k++;
			}

			// here we must free and deallocated two array but i did'ot now that yet
		}

		// after i learn more
		void MergeBetter(int arr[], int FirstIndex, int LastIndex, int m, bool IsAscending = true)
		{
			// here size of ptr must be = number of Elements only not bigger
			// if we do this -> ( int lenPtr = LastIndex + 1;) size of ptr will be bigger than number of Elements
			int lenPtr = (LastIndex + 1) - FirstIndex;

			// int lenPtr = LastIndex + 1;

			int* ptr = new int[lenPtr];

			// int indexPtr = FirstIndex;
			int indexPtr = 0;

			int indexArr1 = FirstIndex;
			int indexArr2 = m + 1;

			int lenArr1 = m + 1;
			int lenArr2 = LastIndex + 1;

			while (indexArr1 < lenArr1 && indexArr2 < lenArr2)
			{
				if (IsAscending ? arr[indexArr1] <= arr[indexArr2] : arr[indexArr1] >= arr[indexArr2])
				{
					ptr[indexPtr] = arr[indexArr1];
					indexArr1++;
				}
				else
				{
					ptr[indexPtr] = arr[indexArr2];
					indexArr2++;
				}

				indexPtr++;
			}

			// arr1
			while (indexArr1 < lenArr1)
			{
				ptr[indexPtr] = arr[indexArr1];
				indexArr1++;
				indexPtr++;
			}

			// arr2
			while (indexArr2 < lenArr2)
			{
				ptr[indexPtr] = arr[indexArr2];
				indexArr2++;
				indexPtr++;
			}
			
			// ======================================
			
			// basic way, but must do this (indexPtr = FirstIndex;) at the beginning of the function

			//for (int i = FirstIndex; i < lenPtr; i++)
			//{
			//	arr[i] = ptr[indexPtr];
			//}

			// ====================================

			// another way, but must do this (indexPtr = 0;) here and at the beginning of the function

			indexPtr = 0;

			while (indexPtr < lenPtr)
			{
				arr[FirstIndex] = ptr[indexPtr];
				FirstIndex++;
				indexPtr++;
			}

			// =====================================


			delete[] ptr;
			ptr = nullptr;
		}
	}

	void MergeSort2(int arr[], int first, int last)
	{
		if (first < last)
		{
			int m = (first + last) / 2;

			MergeSort2(arr, first, m);
			MergeSort2(arr, m + 1, last);

			Internal::Merge2(arr, first, last, m);
		}
	}

	void MergeSort(int arr[], int l, int r)
	{
		int m = (l + r) / 2;

		if (l < r)
		{
			MergeSort(arr, l, m);
			MergeSort(arr, m + 1, r);
			Internal::Merge(arr, l, r);
		}
	}

	// after i learn more
	void MergeSortBetter(int arr[], int FirstIndex, int LastIndex, bool IsAscending = true)
	{
		if (FirstIndex < LastIndex)
		{
			int m = (FirstIndex + LastIndex) / 2;

			MergeSortBetter(arr, FirstIndex, m, IsAscending);

			MergeSortBetter(arr, m + 1, LastIndex, IsAscending);

			Internal::MergeBetter(arr, FirstIndex, LastIndex, m, IsAscending);
		}
	}


}