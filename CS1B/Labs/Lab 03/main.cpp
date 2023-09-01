/******************************************************************************
 * AUTHOR			:	Negin Mashhadi	&	Maschal Mirzada
 * STUDENT ID		:	1084104			&	1044750
 * LSSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	2/07/2018
 * ****************************************************************************/
#include "lab3.h"
/******************************************************************************
 * Functions - GCD
 * ----------------------------------------------------------------------------
 * 		This program will read in two values from a	user and output	the
 * 	 greatest common divisor (using Eculidean algorithm) to a file. The program
 * 	 will also deomnstrate using	ostream	and	ostringstream by creating 2
 * 	 functions to output your print	heading:
 * 	 	one	that uses ostream and the other	uses ostringstream.
 * ----------------------------------------------------------------------------
 *  INPUT
 *			num1	:	first number the user wants to find the greatest common
 *						divisor
 *			num2	:	second number the user wants to find the greatest common
 *						divisor
 *  OUTPUT
 *			Will output the numbers entered and will output the Greatest common
 *				divisor
 ******************************************************************************/
int main()
{
/*******************************************************************************
* CONSTANTS
* -----------------------------------------------------------------------------
* USE FOR PROCESSING
* -----------------------------------------------------------------------------
*		RUN_TIME	: The number of times the program will be run
*******************************************************************************/


	const int RUN_TIME = 4;

	ofstream 	oFile;
	string 		oFileName;	// CALC - The name of the output file

	int num1;				// IN/OUT	- The first number being entred by user
	int num2;				// IN/OUT 	- The first number being entred by user
	int divisor;				// CALC/OUT - The Greatest divisor of the two
							//			   numbers entered by the user
	int count;				// CALC	- The lCV of the for loop

	/**intializing**/
	oFileName = "oFile.txt";


	//processing
	PrintHeader(cout, "Functions - GCD", 'L', 3);
	cout << PrintHeader2 ("Functions - GCD", 'L', 3);

	oFile.open(oFileName);
	PrintHeader(oFile, "Functions - GCD", 'L', 3);
	oFile << PrintHeader2 ("Functions - GCD", 'L', 3);

	for(count = 0; count < RUN_TIME; count++)
	{
		inputFunction(num1,num2);
		divisor = GCD(num1, num2);
		OutputFunction(oFile, num1, num2, divisor);
	}

	cout << "Thank you for using my GCD calculator!";

	oFile.close();
	return 0;
}
