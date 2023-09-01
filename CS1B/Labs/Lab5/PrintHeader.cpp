/*******************************************************************************
 * AUTHOR		 : Taylor Paczkowski
 * STUDENT ID	 : 1093172
 * ASSIGNMENT #9 : Functions
 * CLASS		 : CS1A
 * SECTION		 : TTh: 8:00a - 11:20a
 * DUE DATE		 : 11/16/17
 ******************************************************************************/

#include "Lab5Header.h"

/***************************************************************************
 * FUNCTION PrintHeader
 * -------------------------------------------------------------------------
 *   This function receives an assignment name, type
 *       and number then outputs the appropriate header
 *   ==> returns nothing - This will output the class heading.
 * -------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following need a defined value passed in
 *          asName: Assignment Name
 *          asType: Assignment Type
 *          asNum : Assignment Number
 *
 * POST-CONDITIONS
 *      ==> Returns nothing - This function will output the class heading.
 ***************************************************************************/

void PrintHeader(string asName, // IN - assignment Name – used for output
		         char   asType, // IN - assignment type
		                        //    - (LAB or ASSIGN) – used for output
	             int    asNum,  // IN – assign. number  – used for output
				 ofstream &fout)
 {
   cout << left;
   cout << "********************************************************\n";
   cout << "*  PROGRAMMED BY : Taylor Paczkowski\n";
   cout << "*  " << setw(14) << "STUDENT ID"  << ": 1093172\n";
   cout << "*  " << setw(14) << "CLASS" << ": CS1B - MW - 6:30p\n";
   cout << "*  " ;

   // PROCESSING – This will adjust setws and format appropriately
   //              based on if this is a lab ‘L’ or assignment
   if (toupper(asType) == 'L')
   {
	   cout << "LAB #" << setw(9);
   }
   else
   {
	   cout << "ASSIGNMENT #" << setw(2);
   }

   cout << asNum << ": " << asName << endl;
   cout << "********************************************************\n\n";
   cout << right;

   fout << left;
   fout << "********************************************************\n";
   fout << "*  PROGRAMMED BY : Taylor Paczkowski\n";
   fout << "*  " << setw(14) << "STUDENT ID"  << ": 1093172\n";
   fout << "*  " << setw(14) << "CLASS" << ": CS1B - MW - 6:30p\n";
   fout << "*  " ;

   // PROCESSING – This will adjust setws and format appropriately
   //              based on if this is a lab ‘L’ or assignment
   if (toupper(asType) == 'L')
   {
   	fout << "LAB #" << setw(9);
   }
   else
   {
   	fout << "ASSIGNMENT #" << setw(2);
   }

   fout << asNum << ": " << asName << endl;
   fout << "********************************************************\n\n";
   fout << right;
 }

