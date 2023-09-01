/****************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <limits>
#include <ios>
using namespace std;

const int NUM_COLS = 3;

/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream &output,	// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output


/******************************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 * à Displays the instructions to the user
 *****************************************************************************/
void OutputInstruct();

/******************************************************************************
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *****************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]); // OUT - tic tac toe board


/******************************************************************************
 * DisplayBoard
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).*
 * RETURNS: nothing
 * outputs the current state of the board*/
/*****************************************************************************/
void DisplayBoard(const char boardAr[][NUM_COLS]); // IN - tic tac toe board


/******************************************************************************
 * GetPlayers
 * 	This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 *****************************************************************************/
void GetPlayers(string &playerX,  // OUT - player X’s name
				string &playerO); // OUT - player O’x name

/******************************************************************************
 * GetAndCheckInp
 * This function determins which spot the user wants to play in. They must type
 * in the row and the column. The function obtains the input and verifies that
 * the row and column are in the range and spot is not taken. assume all the
 * elements in the array were intialized to blank spaces.
 *
 *
 ******************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_COLS], // IN - tic tac toe board
					char token,
					string playerX,
					string playerO);

/******************************************************************************
* SwitchToken
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an O. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/
char SwitchToken(char token); // IN - current player’s token ('X' or 'O')

/******************************************************************************
 * CheckWin
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes 000a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *****************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS]); // IN - tic tac toe board

/******************************************************************************
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *
 * RETURNS: nothing Displays the winner’s name
 *****************************************************************************/
void OutputWinner(char whoWon, 	   // IN - represents the winner or a value
							   	   // indicating a tied game.
				  string playerX,  // OUT - player X’s name
				  string playerO); // OUT - player O’x name

/******************************************************************************
 *	ComputerPlay
 *		This function has the computer to chose the best spot to play on the
 * grid based on the conditions of the grid. It will prevent the user from
 * making a winning move and it will try to chose the winning move for itself
 *
 *		Returns nothing but it will return the column and the row values of the
 * 	chosen move through passing by refrence
 ******************************************************************************/
void ComputerPlay(char boardAr[][NUM_COLS], // IN  - Tic tac toe board
				  int &row,					// OUT - Row value of game play
				  int &col);				// OUT - Col value of game play

/*******************************************************************************
 *	MenuOuput
 *		This function ouputs a menu for the user and allows them to choose
 *	an option.
 *
 *		Returns the character that the user has chosen
 ******************************************************************************/
char MenuOuput();


#endif /* HEADER_H_ */
