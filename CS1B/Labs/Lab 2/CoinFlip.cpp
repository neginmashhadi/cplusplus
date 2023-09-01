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
 * 		This function will flip a coin and randomly choose between head or
 * 	tails. Every time the user enters enter on the keyboard the function will
 * 	flip the coin
 * 		==> return a bool(if heads true, if tails false)
 * -----------------------------------------------------------------------------
 *  PRE-CONDITIONS
 *				<NOTHING>
 *  POST-CONDITIONS
 *  		==> return a bool(if heads true, if tails false)
 ******************************************************************************/
bool CoinFlip()
{

	int randomVal;			// CALC - The random coin flip
	bool flipValue;			// CALC - bool value of coin flip


	cout << "Press <enter> to flip";
	cin.ignore(1000, '\n');


	srand(time(NULL));
	randomVal = rand()%2;

	if(randomVal == 1)
	{
		flipValue = true;
	}
	else
	{
		flipValue = false;
	}

	return flipValue;
}
