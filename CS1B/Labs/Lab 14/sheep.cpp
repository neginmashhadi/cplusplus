/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "sheep.h"
	/***************************************************************************
	 * PROCESSING
	 * -------------------------------------------------------------------------
	 * NAME_COL		: the column size for sheep name
	 * AGE_COL		: the column size for sheep age
	 **************************************************************************/
	const int NAME_COL = 15;
	const int AGE_COL  = 4;

/*******************************************************************************
 * OutputSheep
 * will output the members of the sheep
 *******************************************************************************/
void SheepData::OutputSheep()
{

			cout << setw(NAME_COL) << name
				 << setw(AGE_COL)  << age << endl;
}

/*******************************************************************************
 * PrintHeader
 * will output the header of the sheep output
 *******************************************************************************/
void SheepData::PrintHeader()
{
	cout << left << setw(NAME_COL) << "\nNAME"
				 << setw(AGE_COL) <<  "AGE\n"
				 << setw(NAME_COL) << "--------------"
				 << setw(AGE_COL) << "---\n";
}
