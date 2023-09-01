/*******************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ******************************************************************************/
#include "header.h"
/*******************************************************************************
 *	Tic Tac Toe
 *	----------------------------------------------------------------------------
 *		This profram will allow the user to play the game of tic tac toe
 *	with either another player or VS a computer. It will provide the user with
 *	instructions of how to play the game.
 *	The user will enter their name and the token they would like to play with.
 *	----------------------------------------------------------------------------
 *	INPUT:
 *				Name	: The name of the user
 *				Token	: The token which the user choses to play with (X or O)
 *
 *	OUTPUT:
 *				It outputs a string stating which player has won or if the game
 *				is a tie.
 ******************************************************************************/
int main()
{
/*******************************************************************************
 * CONSTANTS
 *------------------------------------------------------------------------------
 *	USED FOR PROCESSING
 *------------------------------------------------------------------------------
 *		ROW_NUM	: The size of the row in the 2d array
 *		COL_NUM	: The size of the column in the 2d array
 ******************************************************************************/
	const int ROW_NUM = 3;
	const int COL_NUM = 3;


	char boardAr[ROW_NUM][COL_NUM];	// CALC		 - The 2d array for the
									// 			   tic tac toe
	char token;				        // IN & CALC - The token which the user choses
	char winner;					// CALC 	 - if there is a winner or not
	bool hasWinner;					// CALC 	 - If the game has a winner
									//			   or a tie
	bool gameOver ;					// CALC 	 - if the game is over or
									//				  there is space left
	string playerX;					// IN & OUT	 - The name of the player
	string playerO;					// IN & OUT	 - The name of the player
	char playerChoice;				// IN & CALC - User inputs of the menu
									// 			   and game they want to play
	bool startPlay;					// CLAC		 - decideds to play game or no

	/**INTIALIZATION**/
	winner = ' ';


	/**************************************************************************
	 * OUTPUT - outputs the instruction for the player
	 **************************************************************************/
	PrintHeader(cout, "Tic Tac Toe", 'A', 2);
	OutputInstruct();

	do
	{
		startPlay= false;
		playerChoice = MenuOuput();
	/**************************************************************************
	 * PROCESSING - Gets the name of the user
	 **************************************************************************/
		if(playerChoice == 'B')
		{
			GetPlayers(playerX, playerO);
		}
	/**************************************************************************
	 * PROCESSING - One playe mode
	 **************************************************************************/
		else if(playerChoice == 'D')
		{

			cout << "\n\nYou chose to play against the computer, you are now "
					"player X and the computer is player O!\n"
					"Good Luck!\n\n\n";

			if(playerX != "")
			{
				startPlay = true;
				playerO = "computer";
			}
		}
	/**************************************************************************
	 * PROCESSING - Two player mood
	 **************************************************************************/
		else if(playerChoice == 'C')
		{
			if(playerX != "" && playerO != "")
			{
				startPlay = true;
			}
		}

		if(startPlay)
		{

			InitBoard(boardAr);
			DisplayBoard(boardAr);

			token = 'X';

			/**INTIALIZATION**/
			hasWinner = false;
			gameOver  = false;

			while(!hasWinner && !gameOver)
			{

				GetAndCheckInp(boardAr, token, playerX, playerO);
				DisplayBoard(boardAr);

				winner = CheckWin(boardAr);

				if (winner == ' ')
				{
					token = SwitchToken(token);
				}
				else
				{
					if( winner == 'T')
					{
						gameOver = true;
						hasWinner  = false;

					}
					else
					{
						hasWinner  = true;
					}

					OutputWinner(winner, playerX, playerO);
				}

			}//END WHILE


		}//END IF

	}while(playerChoice != 'A');




	return 0;
}
