#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
using namespace std;
int main()
{
	const int SIZE = 100;
	int intList[SIZE];// = {26,56,34,25,73,46,89,10,5,1600,2,17};
	int reverseIntList[SIZE];
	int randomIntList[SIZE];

	intializeListFromOne(intList, SIZE);
	intializeListFrom100(reverseIntList, SIZE);
	intializeRandomList(randomIntList, SIZE);


	cout << "list from 1 to 100: ";
	print(intList,SIZE);


	cout << endl << "SORTING asending list" << endl;
	bubbleSort(intList, SIZE);
	cout << "Bubble sort: ";
	print(intList,SIZE);
	selectionSort(intList, SIZE);
	cout << "selection sort: ";
	print(intList,SIZE);
	insertionSort(intList, SIZE);
	cout << "insertion sort: ";
	print(intList,SIZE);
	quickSort(intList, SIZE);
	cout << "Quick sort: ";
	print(intList,SIZE);
	mergeSort(intList,0, SIZE-1 );
	cout << "Merge sort: ";
	print(intList, SIZE);

	cout << "\n\nSorting descending list: \n";
	cout << "list from 100 to 1: ";
	print(reverseIntList,SIZE);
	bubbleSort(reverseIntList, SIZE);
	cout << "Bubble sort: ";
	print(reverseIntList,SIZE);
	selectionSort(reverseIntList, SIZE);
	cout << "selection sort: ";
	print(reverseIntList,SIZE);
	insertionSort(reverseIntList, SIZE);
	cout << "insertion sort: ";
	print(reverseIntList,SIZE);
	quickSort(reverseIntList, SIZE);
	cout << "Quick sort: ";
	print(reverseIntList,SIZE);
	mergeSort(reverseIntList,0, SIZE-1 );
	cout << "Merge sort: ";
	print(reverseIntList, SIZE);

	cout << "list of random numbers: ";
	print(randomIntList, SIZE);
	cout << endl << "SORTING random list" << endl;
	bubbleSort(randomIntList, SIZE);
	cout << "Bubble sort: ";
	print(randomIntList,SIZE);
	selectionSort(randomIntList, SIZE);
	cout << "selection sort: ";
	print(randomIntList,SIZE);
	insertionSort(randomIntList, SIZE);
	cout << "insertion sort: ";
	print(intList,SIZE);
	quickSort(randomIntList, SIZE);
	cout << "Quick sort: ";
	print(randomIntList,SIZE);
	mergeSort(randomIntList,0, SIZE-1 );
	cout << "Merge sort: ";
	print(randomIntList, SIZE);

	return 0;
}
