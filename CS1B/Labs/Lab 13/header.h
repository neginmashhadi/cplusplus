/******************************************************************************
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

//processor directive go here
#include <iostream>
#include <iomanip>		/**setw**/
#include <string>		/**Strings**/
#include <fstream>		/**fout**/
#include <ostream>		/**cout or fout**/
#include <limits>
#include <ios>
#include "animal.h"
using namespace std;


//GLOBAL CONSTANTS
const string MENU = "1 - Intialize Animals\n"
					"0 - EXIT\n"
					"Enter a selection: ";

const string INTIAL_MENU = "\n1 - Intializing Animals\n"
						   "2 - Change Age\n"
						   "3 - Change Value\n"
						   "4 - Display\n"
						   "0 - Exit\n"
						   "ENTER a selcetion: ";

const string ANIMAL_MENU = "\n1 - Fluffy\n"
						   "2 - Maa\n"
						   "3 - Babe\n"
						   "Select the animal you'd like to change: ";

enum MenuOption
{
	EXIT,			//0
	INTIALIZE,		//1
	CHANGEAGE,		//2
	CHANEGVAL,		//3
	DISPLAY			//4
};



//PROTOTYPES

/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream  &output,// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output

/*******************************************************************************
 * GetAndCheckInput
 * 	This function will validate the users input and will check if the input is
 * 	correct
 * 		==> returns the input
 ******************************************************************************/
 int GetAndCheckInput();

/*******************************************************************************
* GetAndCheckIntialInput
* This function will validate the users input and will check if the input is
* correct
* 		==> returns the input
********************************************************************************/
int GetAndCheckIntialInput();

/*******************************************************************************
* DisplayAnimal
* This function will output the infomation of the animals
* 	==> returns nothing
*******************************************************************************/
void DisplayAnimal(Animal &fluffy,	// CALC - the sheep of the farm
				   Animal &maa,		// CALC - the sheep of the farm
				   Animal &babe);	// CALC - the pig of the farm

/*******************************************************************************
* Intializing
* This function will re-intialize the values of the animal
* 		==> returns nothing
*******************************************************************************/
void Intializing(Animal &fluffy,	// CALC - the sheep of the farm
				 Animal &maa,		// CALC - the sheep of the farm
				 Animal &babe);		// CALC - the pig of the farm

/*******************************************************************************
* IntializingAnimals
* This function will ask the user whether they want to re-intialize the
* 	the animals.
* 		==> returns nothing
*******************************************************************************/
void IntializingAnimals(Animal &fluffy,	// CALC - the sheep of the farm
						Animal &maa,	// CALC - the sheep of the farm
						Animal &babe);	// CALC - the pig of the farm

/*******************************************************************************
* GetAgeAnimalInput
* This function will validate the users input and will check if the input is
* 	correct
* 		==> returns the input
*******************************************************************************/
int GetAgeAnimalInput();

/*******************************************************************************
* GetValueAnimalInput
* This function will validate the users input and will check if the input is
* 	correct
* 		==> returns the input
*******************************************************************************/
int GetValueAnimalInput();

/*******************************************************************************
* ChangeAge
* This function will get a new age from the user and it will change the
*	age of the animals based on user's input
*			==> returns nothing
*******************************************************************************/
void ChangeAge(int animalOption, // IN - the animal's age being changed
			   Animal &fluffy,	 // CALC - the sheep of the farm
			   Animal &maa,		 // CALC - the sheep of the farm
			   Animal &babe);	 // CALC - the pig of the farm

/*******************************************************************************
* ChangeVal
* This function will get a new value from the user for and animal and it will
*	change that value
*			==> returns nothing
*******************************************************************************/
void ChangeVal(int animalOption, // IN   - the animal's value being changed
			   Animal &fluffy,	 // CALC - the sheep of the farm
			   Animal &maa,		 // CALC - the sheep of the farm
			   Animal &babe);	 // CALC - the pig of the farm

#endif /* HEADER_H_ */
