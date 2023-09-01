/******************************************************************************
 * LAB#2			:	Coin flip
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/31/2018
 * ****************************************************************************/
#include "lab2HeaderFile.h"

/******************************************************************************
 * CoinAvg
 * ----------------------------------------------------------------------------
 * 		This function will calculate the average amount of heads the user
 * 	 has recieved in results of fliping the coin.
 * -----------------------------------------------------------------------------
 *  PRE-CONDITIONS
 *			fTotalFlips : The total number of flips
 *			fTotalHeads : The total number of heads
 *  POST-CONDITIONS
 *  		==> returns the average number of heads
 ******************************************************************************/
float CoinAvg(int fTotalFlips,		// IN - The total number of flips
			int   fTotalHeads)		// IN - The total number of heads
{
	float avg;			// CALC - The average amount of heads flipped
	cout << setprecision(0) << fixed;
	avg = (double(fTotalHeads)/fTotalFlips) * 100;

	return avg;
}
