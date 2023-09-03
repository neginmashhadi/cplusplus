#include<iostream>
using namespace std;

template<class elemType>
void print(elemType list[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

/*
 * BUBBLE SORT
 */
template <class elemType>
void bubbleSort(elemType list[], int size)
{
	for (int iteration = 1; iteration < size; iteration++)
	{
		for(int index = 0; index < size - iteration; index++)
		{
			if(list[index] > list[index + 1])
			{
				elemType temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}
}

/*
 * SELECTION SORT
 */
template <class elemType>
int minLocation(elemType list[], int first, int last)
{
	int minIndex;
	minIndex = first;
	for(int loc = first + 1; loc <= last; loc++)
	{
		if(list[loc] < list[minIndex])
			minIndex = loc;
	}
	return minIndex;
}

template <class elemType>
void swap(elemType list[], int first, int second)
{
	elemType temp;
	temp = list[first];
	list[first] = list[second];
	list[second] = temp;
}

template <class elemType>
void selectionSort(elemType list[], int size)
{
	int minIndex;
	for(int loc = 0; loc < size; loc++)
	{
		minIndex = minLocation(list, loc, size-1);
		swap(list, loc, minIndex);
	}
} //END OF SELECTION SORT

/*
 * Insertion sort
 */
template <class elemType>
void insertionSort(elemType list[], int size)
{
	for (int firstUnorder = 1; firstUnorder < size; firstUnorder++)
	{
		if(list[firstUnorder] < list[firstUnorder - 1])
		{
			elemType temp = list[firstUnorder];
			int location = firstUnorder;
			do
			{
				list[location] = list[location - 1];
				location--;
			}while(location > 0 && list[location -1 ] > temp);

			list[location] = temp;
		}
	}
}

/*
 * QUICK SORT
 */
template<class elemType>
int pertition(elemType list[], int first, int last)
{
	elemType pivot;
	int smallIndex;

	swap(list, first, (first + last)/2);

	pivot = list[first];
	smallIndex = first;

	for(int index = first + 1; index <= last; index++)
	{
		if(list[index] < pivot)
		{
			smallIndex++;
			swap(list, smallIndex, index);
		}
	}

	swap(list, first, smallIndex);

	return smallIndex;
}

template<class elemType>
void reQuickSort(elemType list[], int first, int last)
{
	int pivotLocation;
	if(first < last)
	{
		pivotLocation = pertition(list, first, last);
		reQuickSort(list, first, pivotLocation -1);
		reQuickSort(list, pivotLocation +1, last);
	}
}

template<class elemType>
void quickSort(elemType list[], int size)
{
	reQuickSort(list, 0, size -1);
}
/*
template<class elemType>
void mergeSort(elemType list[])
{
	int size = (sizeof(list)/sizeof(*list));
	mergeSortHelper(list , 0, size-1);
}

*/


/*
 * merge sort
 */
template<class elemType>
void mergeHalves(elemType list[], elemType temp[], int left, int middle, int right)
{

	int index1 = left;
	int index2 = middle+1;

	int index = left;
	while(index1 <= middle && index2 <= right)
	{
		if(list[index1] < list[index2])
		{
			temp[index++] = list[index1++];
		}
		else
		{
			temp[index++] = list[index2++];
		}
	}

	while( index1 <= middle)
	{
		temp[index++] = list[index1++];
	}

	while( index2 <= right)
	{
		temp[index++] = list[index2++];
	}

	for (int i = left ; i <= right; i++) {
		list[i] = temp[i];
	}
}

template<class elemType>
void mergeSortHelper(elemType list[], elemType temp[], int left, int right)

{

	if(left < right)
	{
		int middle = left + (right - left) /2;

		mergeSortHelper(list, temp,left, middle);
		mergeSortHelper(list,temp, middle+1 , right);

		mergeHalves(list,temp, left, middle, right);
	}
}

template<class elemType>
void mergeSort(elemType list[], int left, int right)

{
	elemType temp[right];
	mergeSortHelper(list,temp,left, right);
}


void intializeListFromOne(int list[], const int SIZE)
{
	for(int i = 0; i < SIZE; i++)
	{
		list[i] = i + 1;
	}

}

void intializeListFrom100(int list[], const int SIZE)
{
	int max = 100;
	for(int i = 0 ; i < SIZE; i++)
	{
		list[i] = max;
		max--;
	}
}

void intializeRandomList(int list[], const int SIZE)
{
	srand(time(NULL));
	for(int i = 0; i < SIZE; i++)
	{
		int random;
		random = rand() % 100;
		list[i] = random;
	}

}
