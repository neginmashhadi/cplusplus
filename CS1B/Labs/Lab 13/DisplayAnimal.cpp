/******************************************************************************
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 *	DisplayAnimal
 * -----------------------------------------------------------------------------
 *	This function will display the information of each animal on a table
 *		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		fluffy : Sheep of the farm
 *		maa	   : Sheep of the farm
 *		babe   : pig of the farm
 *
 * POST-CONDITIONS
 *		==> returns nothing
 ******************************************************************************/

  void DisplayAnimal(Animal &fluffy, Animal &maa, Animal &babe)
  {
	const int ANIMAL_COL = 11;
	const int NAME_COL	 = 15;
	const int AGE_COL	 = 4;

	cout << left << setw(ANIMAL_COL)   << "\nanimal"
				 << setw(NAME_COL)     << "name"
				 << setw(AGE_COL + 3)  << "age" << "value\n"
				 << setw(ANIMAL_COL)   << "----------"
				 << setw(NAME_COL) 	   << "--------------"
				 << setw(AGE_COL)      << "---" << "-----------\n";
	fluffy.Display();
	maa.Display();
	babe.Display();
  }
