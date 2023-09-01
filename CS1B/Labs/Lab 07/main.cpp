/******************************************************************************
 * LAB # 7			:	testing
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/12/2018
 * ****************************************************************************/
#include "lab7header.h"
/******************************************************************************
 * Testing
 * ----------------------------------------------------------------------------
 * 	This program will ask the user for a number of chocolate bars and number
 * 	of sheeps and will calculate the number of bars each sheep will recieve
 * 	and the amount of bars left over
 * 	---------------------------------------------------------------------------
 * 	INPUT
 * 			chocAmount 	: Number of chocolate bars
 * 			sheepAmount	: Number of sheeps
 * 	OUTPUT
 * 			chocGiven 	: Amount of bars each sheep will recieve
 * 			leftOver	: Amount of bars left over
 ******************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 * ----------------------------------------------------------------------------
 * The following are used for processing
 * ----------------------------------------------------------------------------
 * AMOUNT_ALLOWED 	: Max amount of chocolate bars each sheep gets
 * TOTAL_COUNT		: The total amount of times user can input
 ******************************************************************************/
	const int AMOUNT_ALLOWED = 4;
	const int TOTAL_COUNT    = 3;


	int chocAmount;			// IN 		- Number of chocolate bars entered by user
	int sheepAmount;		// IN 		- Number of sheeps entered by user
	int divResult;			// CALC		- The result of the division of chocolate
							//		  	  bars and sheeps
	int leftOver;			// CLAC&OUT	- The number of chocolate bars left over
	int chocGiven;			// CALC&OUT - The number of chocolate bars each
							//			  sheep will recieve
	int count;				// CALC&OUT	- The number of times user inputs
	bool valid;				// CALC		- Validates input
	bool validSheep;		// CALC		- Validates the number of sheep input


	/**INTIALIZING**/
	valid 		= true;
	validSheep  = true;

	PrintHeader(cout, "testing", 'L',7);

	cout << "Welcome to the chocalate bar program! :)\n"
			"Rember each sheep will get the maximum amount of 4 choclate bars\n";

	for(count = 0; count < TOTAL_COUNT; count++)
	{
		cout << "\nTest Case #" << count+1 << endl;
//INPUT
		do
		{
			cout << "\nHow many chocalate bars do you have? ";
			cin  >> chocAmount;

			if(!cin >> chocAmount)
			{
				cout << "\nPlease input an integer!";
				cin.clear();

				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				valid = false;
			} // END If
			else if(chocAmount <= 0)
			{
				cout << "\nPlease enter a positive intger!\n";
				valid = false;
			}
		}while(!valid && chocAmount <= 0);



		do
			{
				cout << "\nHow many sheeps do you have? ";
				cin  >> sheepAmount;

				if(!cin >> sheepAmount)
				{
					cout << "\nPlease input an integer!";
					cin.clear();

					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					validSheep = false;
				} // END If
			}while(!validSheep);


//PROCESSING
		divResult = chocAmount/sheepAmount;
		if(divResult > AMOUNT_ALLOWED)
		{
			chocGiven = 4;
			leftOver  = chocAmount - (AMOUNT_ALLOWED*sheepAmount);
		}
		else
		{
			chocGiven = divResult;
			leftOver  = chocAmount % sheepAmount;
		}
//OUTPUT
	 cout << "\nEach sheep will recieve " << chocGiven << " chocolate bars\n";
	 cout << "There are " << leftOver << " chocolate bars\n";

	}

	cout << "Thank you for using my program! :)";

	return 0;
}
