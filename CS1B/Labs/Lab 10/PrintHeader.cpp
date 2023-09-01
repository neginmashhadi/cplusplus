/******************************************************************************
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
* FUNCTION PrintHeader
*------------------------------------------------------------------------------
* This function receives an output file stream variable, an assignment name,
* 		type and number then outputs the appropriate header to output file
* 		==> returns nothing - This will output the class heading to output file.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		oFile : Out file variable
* 		asName: Assignment Name
* 		asType: Assignment Type
* 		asNum : Assignment Number
*
* POST-CONDITIONS
* ==> Returns nothing - This will output the class heading to output file.
******************************************************************************/
void PrintHeaderToFile(ostream &output, // IN - out file variable - used for output
					   string   asName, // IN - assignment Name – used for output
					   char     asType, // IN - assignment type
		 	 	 	 	 	 	 	 	//    - (LAB or ASSIGN) – used for output
					   int      asNum)  // IN – assign. number – used for output

{
	output << left;
	output << "**************************************************\n";
	output << "* PROGRAMMED BY : Negin Mashhadi & James Pelligra" << endl;
	output << "* " << setw(14) << "STUDENT ID" << ": 1084104 & 389711" << endl;
	output << "* " << setw(14) << "CLASS" << ": CS1B - MW - 6:30p-8:50p\n";
	output << "* " ;

	 // PROCESSING – This will adjust setw()s and format appropriately
	 // based on if this is a lab ‘L’ or assignment
	 if (toupper(asType) == 'L')
	 {
		 output << "LAB #" << setw(9);
	 }
	 else
	 {
		 output << "ASSIGNMENT #" << setw(2);
	 } // END - if (toupper(asType) == 'L')

	 output << asNum << ": " << asName << endl;
	 output << "**************************************************\n\n";
	 output << right;
}
