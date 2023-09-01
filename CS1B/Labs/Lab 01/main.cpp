/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #1		  : Theme Park Day Planner
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 01/24/18
 *****************************************************************************/
#include "Lab1.h"

/******************************************************************************
 *  Theme Park Day Planner Program
 * ----------------------------------------------------------------------------
 * 		This program will prompt the following information for each kid:
 * 			 name,
 * 			 age,
 * 			 if they are vegetarian
 * 			 if they eat cheese
 *
 * 		The program will provide output for the following:
 * 			- Which Attractions to take the child to:
 * 				AGE				ADMISSION FEE	ATTRACTIONS
 * 				Less than 5		$0				Ferris Wheel/Sheep Petting Zoo
 * 				5 - 12 (inc)	$15				Tea Cups/Laser Tag
 * 				Over 12			$20				Roller Coaster/Zip Line
 *
 * 			- Food to provide the kids based on their eating preferences:
 * 				FOOD ITEMS		COST			PREFERENCE
 * 				Cheeseburgers	$3.50			not Vegetarian (eats cheese)
 * 				Hamburgers		$3.25			not Vegetarian (no cheese)
 * 				Cheese Pizza	$2.50			Vegetarian (eats cheese)
 * 				Happy Garden	$1.75			Vegetarian (does not eat cheese)
 * ----------------------------------------------------------------------------
 * INPUT :
 * 			 name		:	Name of the kid attending the event
 * 			 age		:	Age  of the kid attending the event
 * 			 vOption	:	Option for vegetarian
 * 			 cOption	:	Option for cheese
 *
 * OUTPUT:
 * 			 totalCost	:	Total cost for the day
 * 			 avgCost	:	Average cost per kid
 * 			 attraction	:	Attraction to take the kid to
 * 			 meal		:	Meal choice for the kid
 *
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * USE FOR PROCESSING
	 * ------------------------------------------------------------------------
	 * NUM_OF_KIDS	      : Number of kids attending the event
	 * PROMPT_COL		  : Setw for the prompt column
	 * FEE_UNDER		  : Admission fee for kids under-age range
	 * FEE_BETWEEN		  : Admission fee for kids mid-age   range
	 * FEE_ABOVE		  : Admission fee for kids above-age range
	 * AGE_UNDER		  : Under-age range point
	 * AGE_ABOVE		  : Above-age range point
	 * CHEESEBURGERS_COST : Cost of Cheeseburgers
	 * HAMBURGERS_COST	  : Cost of Hamburgers
	 * CHEESE_PIZZA_COST  : Cost of Cheese Pizza
	 * HAPPY_GARDEN		  : Cost of Happy Garden
	 * ATTR_UNDER		  : Attraction for kids under-age range
	 * ATTR_BETWEEN		  : Attraction for kids mid-age   range
	 * ATTR_ABOVE		  : Attraction for kids above-age range
	 * N_VEG_Y_CHEESE	  : Not Vegetarian (eats cheese)
	 * N_VEG_N_CHEESE	  : Not Vegetarian (does not eat cheese)
	 * Y_VEG_Y_CHEESE	  : Vegetarian (eats cheese)
	 * Y_VEG_N_CHEESE	  : Vegetarian (does not eat cheese)
	 *************************************************************************/
	// FOR PROCESSING
	const int    NUM_OF_KIDS		= 10;
	const int    PROMPT_COL			= 31;
	const int	 COST_COL			= 6;
	const int    FEE_UNDER			= 0;
	const int    FEE_BETWEEN		= 15;
	const int    FEE_ABOVE			= 20;
	const int    AGE_UNDER			= 5;
	const int    AGE_ABOVE			= 12;
	const float  CHEESEBURGERS_COST	= 3.50;
	const float  HAMBURGERS_COST	= 3.25;
	const float  CHEESE_PIZZA_COST	= 2.50;
	const float  HAPPY_GARDEN_COST	= 1.75;
	const string ATTR_UNDER			= "on the Ferris Wheel and visiting the"
									  " Sheep Petting Zoo.\n";
	const string ATTR_BETWEEN		= "on the Tea Cups and"
									  " will be playing Laser Tag.\n";
	const string ATTR_ABOVE			= "on the Roller Coaster"
									  " and the Zip Line.\n";
	const string N_VEG_Y_CHEESE		= "Cheeseburger";
	const string N_VEG_N_CHEESE		= "Hamburger";
	const string Y_VEG_Y_CHEESE		= "Cheese Pizza";
	const string Y_VEG_N_CHEESE		= "Happy Garden meal";

	/*************
	 * VARIABLES *
	 *************/
	int    count;			// CALC 	  - Counter for FOR loop
	string name;			// IN & OUT	  - Name of the kid attending the event
	int	   age;		  		// IN		  - Age  of the kid attending the event
	char   vOption;			// IN		  - Option for vegetarian
	char   cOption;			// IN		  - Option for cheese
	int    kUnderCount;		// CALC		  - Number of kids under-age range
	int	   kBetweenCount;	// CALC 	  - Number of kids mid-age   range
	int    kAboveCount;		// CALC		  - Number of kids above-age range
	int	   cBurgerCount;	// CALC		  - Number of Cheeseburgers
	int	   hBurgerCount;	// CALC		  - Number of Hamburgers
	int    cPizzaCount;		// CALC		  - Number of Cheese Pizza
	int    hGardenCount;	// CALC		  - Number of Happy Garden
	double adFeeSum;		// CALC		  - Sum of admission fee
	double foodSum;			// CALC		  - Sum of food cost
	double totalCost;		// CALC & OUT - Total cost for the day
	double avgCost;			// CALC & OUT - Average cost per kid
	string attraction;		// CALC & OUT - Attraction to take the kid to
	string meal;			// CALC & OUT - Meal choice for the kid

	/**************************************************************************
	 * OUTPUT - Class Heading to the Console
	 *************************************************************************/
	PrintHeader("Theme Park Day Planner", 1, 'L');

	/**************************************************************************
	 * PROCESSING - Get input from the user
	 * 				Process inputs to decide attractions and meal preferences
	 *************************************************************************/
	cout << "Welcome to the Theme Park Planner! Please input "
			"each kid's information.\n\n";

	// Initializations for kids count
	kUnderCount   = 0;
	kBetweenCount = 0;
	kAboveCount   = 0;

	// Initializations for meal choices count
	cBurgerCount  = 0;
	hBurgerCount  = 0;
	cPizzaCount   = 0;
	hGardenCount  = 0;

	for (count = 0; count < NUM_OF_KIDS; count++)
	{
		cout << left;

		cout << "Kid #" << count + 1 << ": \n";

		/**********************************************************************
		 * PROCESSING - Prompt and get input from the user
		 *********************************************************************/
		cout << setw(PROMPT_COL) << "What is your kid's name?";
		cin  >> name;
		cin.ignore (1000, '\n');

		cout << setw(PROMPT_COL) << "How old is the kid?";
		cin  >> age;
		cin.ignore (1000, '\n');

		cout << setw(PROMPT_COL) << "Vegetarian (Y/N)?";
		cin.get(vOption);
		vOption = toupper(vOption);
		cin.ignore(1000,'\n');

		cout << setw(PROMPT_COL) << "Does he/she like cheese (Y/N)?";
		cin.get(cOption);
		cOption = toupper(cOption);
		cin.ignore(1000,'\n');
		cout << endl;

		cout << right;

		/**********************************************************************
		 * PROCESSING - IF statements for attractions and kids count
		 *********************************************************************/
		if(age < AGE_UNDER)
		{
			attraction 	= ATTR_UNDER;
			kUnderCount++;

		} // end if(age < AGE_UNDER)
		else if(age < AGE_ABOVE)
		{
			attraction	= ATTR_BETWEEN;
			kBetweenCount++;
		} // end else if(age < AGE_ABOVE)
		else
		{
			attraction	= ATTR_ABOVE;
			kAboveCount++;
		} // end else

		/**********************************************************************
		 * PROCESSING - IF statements for meal choices and meal choices count
		 *********************************************************************/
		if(vOption == 'Y' && cOption == 'Y')
		{
			meal = Y_VEG_Y_CHEESE;
			cPizzaCount++;
		} // end if(vOption == 'Y' && cOption == 'Y')
		else if(vOption == 'Y' && cOption == 'N')
		{
			meal = Y_VEG_N_CHEESE;
			hGardenCount++;
		} // end else if(vOption == 'Y' && cOption == 'N')
		else if(vOption == 'N' && cOption == 'Y')
		{
			meal = N_VEG_Y_CHEESE;
			cBurgerCount++;
		} // end else if(vOption == 'N' && cOption == 'Y')
		else if(vOption == 'N' && cOption == 'N')
		{
			meal = N_VEG_N_CHEESE;
			hBurgerCount++;
		} // end else if(vOption == 'N' && cOption == 'N')

		/**********************************************************************
		 * OUTPUT - Output the kid's name, their attractions and meal choices
		 *********************************************************************/
		cout << name << " will be going " << attraction;
		cout << "Pack a " << meal << " for " << name << "!\n\n";

	} // end for(count = 0; count < NUM_OF_KIDS; count++)

	cout << endl << endl << endl;

	/**************************************************************************
	 * PROCESSING - Calculate cost of admission fees
	 * 						  cost of food items
	 * 						  total cost for the day
	 * 						  average cost per kid
	 *************************************************************************/
	adFeeSum  =		(kUnderCount   * FEE_UNDER)
			     +	(kBetweenCount * FEE_BETWEEN)
				 +  (kAboveCount   * FEE_ABOVE);

	foodSum   =  	(cBurgerCount  * CHEESEBURGERS_COST)
				 +	(hBurgerCount  * HAMBURGERS_COST)
				 +	(cPizzaCount   * CHEESE_PIZZA_COST)
				 +	(hGardenCount  * HAPPY_GARDEN_COST);

	totalCost = foodSum + adFeeSum;

	avgCost   = totalCost / double(NUM_OF_KIDS);

	/**************************************************************************
	 * OUTPUT - Output the total cost for the day and the average cost per kid
	 *			as the following format:
	 *
	 *	The total cost for the day is: $152.25
	 *	The average cost per kid is:   $ 15.23
	 *
	 *************************************************************************/
	cout << left
		 << setw(PROMPT_COL) << "The total cost for the day is: " << '$'
		 << right
		 << setprecision(2) << fixed << setw(COST_COL) << totalCost
		 << endl;

	cout << left
		 << setw(PROMPT_COL) << "The average cost per kid is: "   << '$'
		 << right
		 << setprecision(2) << fixed << setw(COST_COL) << avgCost
		 << endl;

	return 0;
}
