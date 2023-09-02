/******************************************************************************
 * EXTRA CREDIT			: 	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Recursion GCD
 * ----------------------------------------------------------------------------
 *	This program will take in two values from a	user and output	the greatest
 *	common	divisor	using a	recursive implementation of	the	Euclidean algorithm
 * ----------------------------------------------------------------------------
 * INPUT
 * 			num1 : The first value user inputs
 * 			num2 : The second value user inputs
 * 	OUPUT
 * 		it will output the greatest common divisor into a file
 ******************************************************************************/
int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 *	LOOP_CONTROL : The LCV of the for loop
	 * -------------------------------------------------------------------------
	 **************************************************************************/
	const int LOOP_COUNT = 4;

	ofstream oFile;			//CALC 		 - the output file
	string oFileName;		//CALC 		 - the output file name
	int num1;				//IN & OUT	 - number entered by the user
	int num2;				//IN & OUT 	 - number entered by the user
	int greatesDivsor;		//CALC & OUT - the common gretates divisor of 2 ints
	int count;				//CACL 		 - the loop control variable

	oFileName = "oFile.txt";

	PrintHeader(cout, "Recursion GCD", 'L', 12);

	oFile.open(oFileName);

	PrintHeader(oFile, "Recursion GCD", 'L', 12);

	for(count = 0; count < LOOP_COUNT; count++)
	{
		cout << "please enter the first integer: ";
		cin  >> num1;
		cout << "please enter the first integer: ";
		cin  >> num2;
		cout << endl;
		greatesDivsor = Gcd (num1, num2);
		if(greatesDivsor == 0)
		{
			greatesDivsor = num1;
		}
		oFile << "The GCD for " << num1 << " & " << num2 << " = "
				  << greatesDivsor << endl << endl;
	}
	cout << "\nThank you for using my GCD calculator!\n";
	oFile.close();
	return 0;
}
