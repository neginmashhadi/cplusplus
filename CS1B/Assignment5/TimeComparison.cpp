/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 5 	: 	Recurrsion Performance
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/01/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * TimeComparison
 * -----------------------------------------------------------------------------
 * 	This function will ask the user to input an integer and will validate the
 * 	user input then will find the fibonacci series of the number or the factorial
 * 	of the number and will compare the time it took to run the recursive function
 * 	and the iterative
 *		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 *		NONE
 * POST-CONDITION
 *		==> returns nothing
 ******************************************************************************/
void TimeComparison(int option)
{

	const int MAX_RUN = 10000;	// NUMBER OF TIMES THE FUNCTION WILL BE CALLED

	bool invalid;				// CALC - validates user input
	int num;					// IN 	- the number user inputs
	int count;					// CALC - loop control variable


	//TIME COMAPARISON FOR FACTORIAL
	if(option == 3)
	{
		do
		{
			cout << "\nEnter a number that you would like to find a factorial of: ";
			cin  >> num;
			invalid = false;

			if(!cin >> num)
			{
				cout << "\n*** input entered is invalid ***"
						"\n*** Please enter a positive number ***\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				invalid = true;
			}
			else if(num < 0 )
			{
				cout << "\n*** Please enter a positive number ***\n";
				invalid = true;
			}
		}while(invalid);		//END DO WHILE

				/****FINDING TIME FOR FACTORIAL FIBONACCI ****/
		high_resolution_clock::time_point t1 = high_resolution_clock::now();
		for(count = 0; count < MAX_RUN; count++)
		{
			RecursiveFactorial(num);
		}
		high_resolution_clock::time_point t2 = high_resolution_clock::now();

		auto firstDuration = duration_cast<microseconds>( t2 - t1 ).count();
		cout << "\nIt took the program " << firstDuration << " microseconds to "
				"execute the recursive factorial\n\n";

				/****FINDING TIME FOR ITERATIVE FIBONACCI ****/
		high_resolution_clock::time_point t3 = high_resolution_clock::now();
		for(count = 0; count < MAX_RUN; count++)
		{
			IterativeFactorial(num);
		}
		high_resolution_clock::time_point t4 = high_resolution_clock::now();

		auto secondDuration = duration_cast<microseconds>( t4 - t3 ).count();
		cout << "It took the program " << secondDuration << " microseconds to "
				"execute the iterative factorial\n\n";
	}//END IF STATEMENT

	//TIME COMPARISON FOR FIBONACCI

	else if (option == 4)
	{
		do
		{
			cout << "\nEnter a number that you would like to find a fibonacci of: ";
			cin  >> num;
			invalid = false;

			if(!cin >> num)
			{
				cout << "\n*** input entered is invalid ***"
						"\n*** Please enter a positive number ***\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				invalid = true;
			}
			else if(num < 0 )
			{
				cout << "\n*** Please enter a positive number ***\n";
				invalid = true;
			}
		}while(invalid);		//END DO WHILE

					/****FINDING TIME FOR RECURSIVE FIBONACCI ****/
		high_resolution_clock::time_point t5 = high_resolution_clock::now();
		for(count = 0; count < MAX_RUN; count++)
		{
			RecursiveFibonacci(num);
		}
		high_resolution_clock::time_point t6 = high_resolution_clock::now();

		auto thirdDuration = duration_cast<microseconds>( t6 - t5 ).count();
		cout << "\nIt took the program " << thirdDuration << " microseconds to "
				"execute the recursive fibonacci\n\n";

				/****FINDING TIME FOR ITERATIVE FIBONACCI ****/
		high_resolution_clock::time_point t7 = high_resolution_clock::now();
		for(count = 0; count < MAX_RUN; count++)
		{
			IterativeFibonacci(num);
		}
		high_resolution_clock::time_point t8 = high_resolution_clock::now();

		auto fourthDuration = duration_cast<microseconds>( t8 - t7 ).count();
		cout << "It took the program " << fourthDuration << " microseconds to "
				"execute the iterative fibonacci\n\n";


	} //END OF ELSE IF
}
