/****************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ****************************************************************************/
#include "header.h"
/******************************************************************************
 * DisplayBoard
 * ----------------------------------------------------------------------------
 * 		This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).*
 * 		RETURNS: nothing outputs the current state of the board
 * ----------------------------------------------------------------------------
 * Pre-conditions
 * 					boardAr	:
 * Post-conditions
 *					<NONE>
 ******************************************************************************/
void DisplayBoard(const char boardAr[][3])
{
	int row;		// CALC - The loop control variable
	int col;		// CALC	- The loop control variable

	system("CLS");

	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	for (row = 0; row < 3; row++)
	{
		cout << setw(7) << "[" << row+1 << "][1] | " << "[" << row+1;
		cout << "][2] | " << "[" << row+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;
		for (col = 0; col < 3; col++)
		{
			switch(col)
			{
				case 0: cout << row + 1 << setw(9) << boardAr[row][col];
				 cout << setw(4) << "|";
				 break;
				case 1: cout << setw(4) << boardAr[row][col];
				 cout << setw(5) << "|";
				 break;
				case 2: cout << setw(4) << boardAr[row][col] << endl;
				 break;
				default: cout <<"ERROR!\n\n";
			}//End switch

		}//END second for loop

		cout << setw(14)<< "|" << setw(10) << "|\n";
		if (row != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}//END if
	}//End first for loop
	cout << endl << endl;

}
