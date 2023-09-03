/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/
#include "header.h"

 int main()
 {
	 const string MENU = "MENU: \n"
						 "1 - Output the entire file.\n"
						 "2 - Who would you like to search for?\n"
						 "3 - remove from the list.\n"
						 "4 - average gpa of the list\n"
						 "0 - EXIT\n"
						 "Please enter your command: ";

	 studentNode *head;
	 studentNode *tail;
	 studentNode *ptr;
	 string inFileName;
	 string searchItem;
	 float avgGpa;
	 int command;

	 head = NULL;
	 tail = NULL;

	 PrintHeader(cout, "Linked list extra credit", 'L', 8);

	 cout << "Enter the name of the input file: ";
	 getline(cin, inFileName);

	do
	{
		cout << MENU;
		cin  >> command;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if(!cin >> command)
		{
			cout << "***Please enter a number between 1-4***\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << MENU;
			cin  >> command;
		}

		 LinkedList(inFileName, head, tail);


		 switch(command)
		 {
		 	 case 0: cout << "\nThank you for using this program!";
		 	 	 break;
		 	 case 1: output(head);
		 	 	 break;
		 	 case 2: cout << "\nWho would you like to search for? ";
		 	 	     getline(cin, searchItem);
		 	 	     ptr = SearchPerson(head, searchItem);
		 	 	     if(ptr!=NULL)
		 	 	     {
		 	 	     cout << ptr->name  << endl << ptr->age << endl
		 	 	    	  << ptr->major << endl << ptr->gpa << endl << endl;
		 	 	     }
		 	 	 break;
		 	 case 3: Pop(head);
		 	 	 break;
		 	 case 4: avgGpa = AvgGpa(head);
		 	 	 	 cout << "The average Gpa is " << avgGpa << endl << endl;
		 		 break;
		 	 default: cout << "***Please enter a number between 1-4***\n"
		 			 	 	  "***********enter zero to exit***********\n\n";
		 }


	}while (command != 0);


	 return 0;
 }
