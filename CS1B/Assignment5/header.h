/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 5 	: 	Recurrsion Performance
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/01/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <limits>
#include <ios>
#include <chrono>
#include <ctime>
#include <cstdlib>
using namespace std;
using namespace std::chrono;


const string MENU = "1 - Calculate and Display Factorial of a Number\n"
					"2 - Calculate and Display Fibonacci series of a number\n"
					"3 - Compare Performance for Factorial Implementations\n"
					"4 - Compare Performance for Fibonacci series Implementations\n"
					"0 - EXIT\n"
					"Enter an option (0 to exit) : ";



/******************************************************************************
 * PrintHeader
 *	Outputs the header of the fucntion
 *		==> returnsn nothing
 ******************************************************************************/
void PrintHeader (ostream  	&output, // IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * GetAndCheckInput
 * This function gets input and checks if the input is valid. If the input is
 * 	invalid, a error message will output
 * 		==> returns the input
 ******************************************************************************/
int GetAndCheckInput();

/******************************************************************************
 * RecursiveFactorial
 * This function will calculate the factorial of a number using recursion
 * method
 * 		==> returns the factorial number
 ******************************************************************************/
long long RecursiveFactorial(int num);

/******************************************************************************
 * IterativeFactorial
 * This function recieves a number and will calculate the factorial of the
 * number using an iterative method
 * 		==> returns the factorial number
 ******************************************************************************/
long long IterativeFactorial(int num);

/******************************************************************************
 * RecursiveFibonacci
 * This function recieves a number and will calculate the fabonacci series of
 * the number using recursion method
 * 		==> returns the
 ******************************************************************************/
long long RecursiveFibonacci(int num);

/*******************************************************************************
 * IterativeFibonacci
 * This function recieves a number and will calculate the fabonacci series of a
 * number using iterative method
 * 		==> returns the
 ******************************************************************************/
long long IterativeFibonacci(int num);

/*******************************************************************************
 * This function will ask the user to input an integer and will validate the
 * user input then will output the factorial of the number
 *		==> returns nothing
 ******************************************************************************/
void FindingFactorial();

/*******************************************************************************
 *	This function will ask the user to input an integer and will validate the
 * user input then will output the fibonacci series of the number
 *		==> returns nothing
 ******************************************************************************/
void FindingFibonacciSeries();

/*******************************************************************************
 *	This function will ask the user to input an integer and will validate the
 * 	user input then will find the fibonacci series of the number or the factorial
 * 	of the number and will compare the time it took to run the recursive function
 * 	and the iterative
 *		==> returns nothing
 ******************************************************************************/
void TimeComparison(int option);


#endif /* HEADER_H_ */
