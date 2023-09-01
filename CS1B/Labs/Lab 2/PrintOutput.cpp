/******************************************************************************
 * AURHOR			:	Negin Mashhadi & Travis Nguyen
 * STUDENT ID		:	1084104 & 1035825
 * LAB#2			:	Coin flip
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/31/2018
 * ****************************************************************************/
#include "lab2HeaderFile.h"

/******************************************************************************
 * PrintOutput
 * ----------------------------------------------------------------------------
 * 	This will output the number of tosses of heads and average number of
 * 	heads.
 *		==> returns nothing
 * -----------------------------------------------------------------------------
 *  PRE-CONDITIONS
 *			fAvg 		: The average number of heads
 *			fTotalFlips	: The total number of flips
 *  POST-CONDITIONS
 *  		==> returns nothing
 ******************************************************************************/
void PrintOutput(float fAvg,		// IN - The average number of heads
				 int fTotalFlips)	// IN - The total number of flips
{
	cout << "\nIt took you " << fTotalFlips << " tosses to get 3 heads in a "
												"row.";
	cout << "\nOn average you flipped heads " << fAvg << "% of the time";
}
