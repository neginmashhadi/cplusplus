/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	Mohammed Taei
 * STUDENT ID		:	1084104 	   &	1019392
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Intializing
 * -----------------------------------------------------------------------------
 * This function will re-intialize the values of the animal
 * 		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		fluffy		 : the sheep of the farm
 *		maa			 : the sheep of the farm
 *		babe 		 : the pig of the farm
 * POST-CONDITIONS
 *		==> returns nothing
 ******************************************************************************/
void Intializing(Animal &fluffy, Animal &maa, Animal &babe)
{
	fluffy.SetType(SHEEP);
	maa.SetType(SHEEP);
	babe.SetType(PIG);

	fluffy.SetAge(1);
	maa.SetAge(3);
	babe.SetAge(2);

	fluffy.SetValue(15000.00);
	maa.SetValue(16520.35);
	babe.SetValue(10240.67);
}
