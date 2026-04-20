#pragma once


namespace MyAlgorithmsLib
{
	namespace Internal
	{
		void Heapfy(int arr[], int IndexParent, int len, bool IsAscending)
		{
			int IndexLeftChild = IndexParent * 2 + 1;
			int IndexRightChild = IndexParent * 2 + 2;

			int m = IndexParent;

			if (IndexLeftChild < len && (IsAscending ? arr[IndexLeftChild] > arr[m] : arr[IndexLeftChild] < arr[m]))
			{
				m = IndexLeftChild;
			}

			if (IndexRightChild < len && (IsAscending ? arr[IndexRightChild] > arr[m] :  arr[IndexRightChild] < arr[m]))
			{
				m = IndexRightChild;
			}

			if (m != IndexParent)
			{
				MySwap(arr[m], arr[IndexParent]);

				Heapfy(arr, m, len, IsAscending);
			}

		}

		void BuildHeap(int arr[], int len, bool IsAscending)
		{
			for (int i = (len - 1) / 2; i >= 0; i--)
			{
				Heapfy(arr, i, len, IsAscending);
			}
		}
	}


	void HeapSort(int arr[], int len, bool IsAscending = true)
	{
		Internal::BuildHeap(arr, len, IsAscending);

		for (int i = len - 1; i > 0; i--)
		{
			MySwap(arr[i], arr[0]);

			if (i == 1)
			{
				break;
			}

			Internal::Heapfy(arr, 0, i, IsAscending);
		}
	}

	


}