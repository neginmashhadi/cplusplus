/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	 Mohammed Taei
 * STUDENT ID		:	1084104 	   & 	 1019392
 * LAB # 6			:	Structs
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/05/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Functions and Arrays
 * ----------------------------------------------------------------------------
 * 	This program will ask the user to input the name of a input file name and
 *  an output file. It will read the in a struct array of name, id and balance
 *  from the specified input file and will initialize a three parallel array.
 *  A menu will be provided for the user which allows the user to choose for
 *  specific executions to happen.
 *  ---------------------------------------------------------------------------
 *  INPUT
 *			inFileName 	: The name of the input file
 *			outFileName	: The name of the output file
 *			options 	: The number of the menu option the user will enter
 *  OUTPUT
 *			Outputs the larges balance
 *			The sum of all balances
 *			The names searched for
 *			The sum of balances of the people searched
 ******************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 * AR_SIZE 			 : The size of the array
 * COL_SIZE_PROMPT	 : The column size for the prompt
 *******************************************************************************/
	const int PROMPT_COL_SIZE	= 40;
	const int AR_SIZE			= 10;


	const string SUM_PROMPT = "\nSum of balance for all persons: \n";
	const string AVG_PROMPT = "Average of balance for all persons: \n";

	//VARIABLE DECLERATION


	information peopleInfoAr[AR_SIZE];	// IN - The array struct


	ifstream inFile;
	ofstream oFile;

	string inFileName;				// IN 	- Input file name entered by user
	string outFileName;				// IN 	- Output file name entered by user
	string searchName;				// IN	- The name being searched
	int balanceValueLargest;		// CALC - The index of the largest balance
	int searchPerson ;				// CALC - Holds the index for name searched
	double sum;						// CALC	- Holds the sum of balances
	double sum2;					// CALC - Holds the sum balances of all the
									//		  the people searched for

	/*INTIALIZINH*/
	balanceValueLargest		=	-1;
	sum2 					=	 0;

	/**************************************************************************
	* INPUT - The name of the input file and output file
	**************************************************************************/
	PrintHeader( cout, "structs", 'A' , 6);
	cout << left << setw(PROMPT_COL_SIZE)
		 << "What input file would you like to use? ";
			getline(cin, inFileName);

	cout << "What output file would you like to use? ";
			getline(cin, outFileName);

	/**************************************************************************
	* PROCESSING - performing a certain task based on user input
	**************************************************************************/
	oFile.open(outFileName);

	//OUTPUT - outputs the
	PrintHeader( oFile, "structs", 'L' , 6);
	InputFunctin(inFileName, peopleInfoAr, AR_SIZE);
	balanceValueLargest = SearchBalance(peopleInfoAr, AR_SIZE);
	oFile << "\nHigher Balance:\n";
	PrintOptions(oFile, peopleInfoAr, balanceValueLargest);
	sum =  SumFunction(peopleInfoAr, AR_SIZE);
	PrintSum(oFile, sum, SUM_PROMPT);

	cout << "\nWho do you want to search for (enter done to exit): ";
	getline(cin, searchName);

	while (searchName != "done")
	{
		searchPerson = SearchName(searchName,peopleInfoAr, AR_SIZE);
		if(searchPerson != -1)
		{
			PrintOptions(oFile, peopleInfoAr, searchPerson);
			sum2 += peopleInfoAr[searchPerson].balance;
		}
	cout << "\nWho do you want to search for (enter done to exit): ";
	getline(cin, searchName);
	}

	oFile << endl << endl;
	oFile << right << setw(PROMPT_COL_SIZE - 1)
		  << "Total Balance Due: " << sum2;
	cout  << "\nThank you for using my program!";

	oFile.close();

	return 0;
}
