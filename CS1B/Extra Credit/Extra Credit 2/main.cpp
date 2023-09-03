/******************************************************************************
 * AUTHOR		: Negin Mashhadi
 * STUDENT ID	: 1084104
 * LAB #3		: Selection & repetition
 * CLASS		: CS1B
 * SECTION		: MW 6:30-9:50
 * DUE DATE		: 02/07/2018
 ******************************************************************************/
#include "headerFile.h"
/******************************************************************************
 *  Selection & repetition
 * ----------------------------------------------------------------------------
 *		This program will input a series of package weights from the user
 *	and will output the total number of packages in each weight catagory
 *	and the total cost of all packages to be shipped. once the user enters zero
 *	the program will stop running
 * ----------------------------------------------------------------------------
 * INPUT :
 *			packageWeight
 * OUTPUT:
 * 			 total items being shipped and price of shipping
 *****************************************************************************/
int main()
{
	//VARIABLE DECLERATION
	const int	GREATEST_WEIGHT = 	40;
	const float LESS_THAN_2		=	5.00;
	const float BTWN_3_12		=	8.50;
	const float BTWN_13_20		=	12.50;
	const float LESS_THAN_40	=	18.00;
	const int	EXIT			= 	0;


	int packageWeight;
	int under2lbsCount;
	int under12lbsCount;
	int under20lbsCount;
	int under40lbsCount;
	double totalShipping;
	//INTIALIZING
	under2lbsCount  = 0;
	under12lbsCount = 0;
	under20lbsCount = 0;
	under40lbsCount = 0;
	totalShipping 	= 0;


	PrintHeader(cout, "Selection & repetition", 'L', 3);

	//PROCESSING
	cout << "Please enter the weight of the package (enter zero to exit): ";
	cin  >> packageWeight;
	if(packageWeight > GREATEST_WEIGHT)
	{
		cout << "invalid input! please enter a weight between 1-40\n\n";
		cout << "Please enter the weight of the package (enter zero to exit): ";
		cin  >> packageWeight;
	}

	while (packageWeight != EXIT)
	{
		if(packageWeight <= 2)
		{
			totalShipping += LESS_THAN_2;
			under2lbsCount++;
		}
		else if(packageWeight <=12)
		{
			totalShipping += BTWN_3_12;
			under12lbsCount++;
		}
		else if(packageWeight <= 20)
		{
			totalShipping += BTWN_13_20;
			under20lbsCount++;
		}
		else if(packageWeight <= 40)
		{
			totalShipping += LESS_THAN_40;
			under40lbsCount++;
		}

		cout << "Please enter the weight of the package (enter zero to exit): ";
		cin  >> packageWeight;
		if(packageWeight > GREATEST_WEIGHT)
		{
			cout << "invalid input! please enter a weight between 1-40\n";
			cout << "Please enter the weight of the package (enter zero to exit): ";
			cin  >> packageWeight;
		}

	}//END WHILE
	cout << setprecision(2) << fixed;
	cout << endl << endl << endl;
	cout << under2lbsCount  << " packages under 2 lbs.\n";
	cout << under12lbsCount << " packages between 3 - 12 lbs.\n";
	cout << under20lbsCount << " packages between 13 - 20 lbs.\n";
	cout << under40lbsCount << " packages between 21 - 40 lbs.\n";
	cout << "The total shipping price is $" << totalShipping;


	return 0;
}
