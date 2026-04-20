#include <iostream>
using namespace std;

#include "../AlgorithmsLib/Sorting/MergeSort.h";
#include "../AlgorithmsLib/Sorting/QuickSort.h";
#include "../AlgorithmsLib/Sorting/SelectionSort.h";
#include "../AlgorithmsLib/Sorting/InsertionSort.h";
#include "../AlgorithmsLib/Sorting/BubbleSort.h";
#include "../AlgorithmsLib/Sorting/HeapSort.h";
#include "../AlgorithmsLib/Searching/BinarySearch.h";
#include "../AlgorithmsLib/Compression/HuffmanAlgorithm.h";
#include "../AlgorithmsLib/Numerical/FibonacciAlgorithm.h";
#include "../AlgorithmsLib/PracticalOnStackAlgorithms/BalancedParentheses.h";
#include "../AlgorithmsLib/PracticalOnStackAlgorithms/ConvertInfixToPrefixAndExpressionEvaluation.h";
#include "../AlgorithmsLib/PracticalOnStackAlgorithms/ConvertInfixToPostfixAndExpressionEvaluation.h";

using namespace MyAlgorithmsLib;



int main()
{
	// here you can test any functions from my Algorithms Library 
	
	// =======================================================================

	// test Practical On Stack Algorithms
	
	//cout << AreBalanced("()[{}") << "\n";
	//cout << AreBalanced("(){()}") << "\n";

	//// --------------------------------------------- 

	//string Expression = "(5+8)*9+((8/4)*55-99)*7";

	//cout << "Expression befor convert to prefix: " << Expression << "\n";
	//cout << "Expression after convert to prefix: " << ConvertInfixToPrefix(Expression) << "\n";

	//cout << "Expression Result Prefix : " << PerformExpressionEvaluationPrefix(Expression) << "\n\n";

	//cout << =======================================================================\n\n";

	//cout << "Expression befor convert to postfix: " << Expression << "\n";
	//cout << "Expression after convert to postfix: " << ConvertInfixToPostfix(Expression) << "\n";
	//cout << "Expression after convert to postfix better: " << ConvertInfixToPostfixBetter(Expression) << "\n";

	//cout << "Expression Result Postfix : " << PerformExpressionEvaluationPostfix(Expression) << "\n\n";

	// =======================================================================
	
	// test Fibonacci algorithm

	//PrintFibonacciSeriesUsingloop(10);
	//PrintFibonacciSeriesUsingRecursion(10);
	
	//int arr[20];
	//FibonacciSeriesArray(arr, 20);
	
	//for (int i = 0; i < 20; i++)
	//{
		//cout << arr[i] << " ";
	//}

	// =======================================================================

	//int arr[] = { 10,7,11,5,8 };

	//int len = sizeof(arr) / 4;
	//int LastIndex = len - 1;
	
	// =======================================================================

	// test merge sort

    //MergeSortBetter(arr, 0, LastIndex);
    ////MergeSort(arr, 0, LastIndex);
    ////MergeSort2(arr, 0, LastIndex);

	// =======================================================================

	// test quick sort

	//QuickSort(arr, 0, LastIndex);
	////QuickSort2(arr, 0, LastIndex);

	// =======================================================================

	// test selection sort
	
	//SelectionSortBetter(arr, len);
	////SelectionSort(arr, len);
	////SelectionSort2(arr, len);
	////SelectionSort3(arr, len);

	// =======================================================================

	// test insertion sort

	//InsertionSortBetter(arr, len);
	////InsertionSort(arr, len);

	// =======================================================================

	// test bubble sort

	//BubbleSortBetter(arr, len);
	////InsertionSort(arr, len);

	// =======================================================================
	
	// test heap sort

	//HeapSort(arr, len);
	
	// =======================================================================
	
	// =======================================================================

	// print array after sorting

	//for (int i = 0; i < len; i++)
	//{
	//	cout << arr[i] << "\n";
	//}

	// =======================================================================

	// test Binary Search

	//int arr2[] = { 1,2,3,4,5 };

	//int len2 = sizeof(arr2) / 4;

	//cout << BinarySearchUseingLoop(arr2, len2, 4) << "\n";
	//cout << BinarySearchUseingRecursion(arr2, len2, 4) << "\n";
	
	// =======================================================================

	// test huffman algorithm

	//string str = "BCCADBBDABBCCADDCCEE";

	//string HuffmanCode = CreateHuffmanCode(str);

	//cout << "\n\n   " << HuffmanCode << "\n\n";

	//string strAfterDeCompression = DeCompression(HuffmanCode);

	//cout << "   " << strAfterDeCompression << "\n\n";

	// =======================================================================



	// =======================================================================

}
