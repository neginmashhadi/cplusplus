

#ifndef LAB5HEADER_H_
#define LAB5HEADER_H_

#include <iostream>
#include <iomanip>

using namespace std;

void OutputFunction(const int INT_ARRAY[],
					const int AR_SIZE);

int SearchFunction (const int INT_ARRAY[],
					 const int AR_SIZE,
					 int search);

void SortingFunction (const int AR_SIZE,
					  int intArray[]);

int SearchBinary (const int INT_ARRAY[],
				  const int AR_SIZE,
				  int search);

#endif /* LAB5HEADER_H_ */
