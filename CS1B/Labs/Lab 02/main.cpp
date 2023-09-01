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
 * Coin Flip
 * ----------------------------------------------------------------------------
 * 	This program will ask the user to input their name and gender. Then the
 * 	program will ask the user to press enter to flip a coin and the program
 * 	will continue until flipping a coin	repeatedly and continues until three
 * 	consecutive	heads are tossed. At that point the total number of coin flips
 * 	that were made and the average number of heads.
 *  ---------------------------------------------------------------------------
 *  INPUT
 *			Name	: The name of the user
 *			gender	: The gender of the user
 *  OUTPUT
 *  		The number of times the coin is flipped and the number of times
 *  		a head has been tossed. The program will also output the average
 *  		amount of times a head has been tossed.
 ******************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 *	NOTHING
 ******************************************************************************/

	int headCount;			// CALC - The number of heads tossed
	int totalHeadCount;		// CALC - The total number of heads tossed
	int totalFlips;			// CALC - The total number of coin flips
	float avg;				// CALC - The average number of heads tossed
	bool coinChoice;		// CALC - The random choice of coin

	/*INTIALIZING*/
	headCount = 0;
	totalHeadCount = 0;
	totalFlips = 0;

	PrintHeader(cout, "Function- Coin Flip", 'L', 2);

	/**************************************************************************
	 * INPUT - The user will input their name and gender
	 **************************************************************************/
	GetInput();
	/**************************************************************************
	 * PROCESSING - The process for flipping the coin
	 **************************************************************************/
	coinChoice = CoinFlip();

	while(headCount != 3)
	{
		totalFlips++;

		if(coinChoice)
		{
			cout << "HEAD\n";
			totalHeadCount++;
			headCount++;
		}
		else
		{
			cout << "TAIL\n";
			headCount=0;
		}
		coinChoice = CoinFlip();

	}

	avg = CoinAvg(totalFlips, totalHeadCount);
	/**************************************************************************
	 * OUTPUT - The total number of flips and average number of flips
	 **************************************************************************/
	PrintOutput(avg, totalFlips);

	return 0;
}
