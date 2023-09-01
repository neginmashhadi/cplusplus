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
 * computerPlay
 * ----------------------------------------------------------------------------
 *	 	This function has the computer to chose the best spot to play on the
 * grid based on the conditions of the grid. It will prevent the user from
 * making a winning move and it will try to chose the winning move for itself
 *
 * 	Returns nothing but it will return the column and the row values of the
 * 	chosen move through passing by refrence
 * 	----------------------------------------------------------------------------
 * 	PRE-CONDITION :
 * 					boardAr : The 2d array of the game
 * 				<THE FOLLOWING VARIABLES NEED A PASS BY REFRENCE>
 * 					row 	: The row of the 2d array
 * 					col		: The column of the 2d array
 *
 * POST-CONDITION :
 * 		Returns nothing but it will return the column and the row values of the
 * 	chosen move through passing by refrence
 ******************************************************************************/

void ComputerPlay(char boardAr[][NUM_COLS],	// IN - tic tac toe board
				  int &row,
				  int &col)
{
	int randomVal1;		// CALC & OUT - Randomly chosen row move of computer
	int randomVal2;		// CALC & OUT - Randomly chosen row move of computer
	int i;				// CALC		  - The loop control variable
	bool validMove;		// CLAC		  - Checks if the spot randomly chosen is
						//				empty
	bool prevent;		// CLAC		  - Checks for users winning move to prevent
	bool winGame;		// CALC		  - Checks for computers winning move



	winGame   = false;
	prevent   = false;
	validMove = false;


	//PROCESSING - Blocks the user from winning
	for(i=0; i < NUM_COLS; i++)
	{
		if(boardAr[i][0] == boardAr[i][1] && boardAr[i][0] == 'X'
										  && boardAr[i][2] == ' ')
		{
			prevent = true;
			row = i;
			col = 2;
		}
		else if(boardAr[i][0] == boardAr[i][2] && boardAr[i][0] == 'X'
											   && boardAr[i][1] == ' ')
		{
			prevent = true;
			row = i;
			col = 1;
		}
		else if(boardAr[i][1] == boardAr[i][2] && boardAr[i][1] == 'X'
				   	   	   	   	   	   	   	   && boardAr[i][0] == ' ')
		{
			prevent = true;
			row = i;
			col = 0;
		}
		else if(boardAr[0][i] == boardAr[1][i] && boardAr[0][i] == 'X'
											   && boardAr[2][i] == ' ')
		{
			prevent = true;
			row = 2;
			col = i;
		}
		else if(boardAr[1][i] == boardAr[2][i] && boardAr[1][i] == 'X'
											   && boardAr[0][i] == ' ')
		{
			prevent = true;
			row = 0;
			col = i;
		}
		else if(boardAr[0][i] == boardAr[2][i] && boardAr[0][i] == 'X'
											   && boardAr[1][i])
		{
			prevent = true;
			row = 1;
			col = i;
		}

		//PROCESSING CHECKS FOR WINNING MOVES
		else if(boardAr[i][0] == boardAr[i][1] && boardAr[i][0] == 'O'
				  	  	  	  	  	  	  	   && boardAr[i][2] == ' ')
		{
			winGame = true;
			row = i;
			col = 2;
		}
		else if(boardAr[i][0] == boardAr[i][2] && boardAr[i][0] == 'O'
											   && boardAr[i][1] == ' ')
		{
			winGame = true;
			row = i;
			col = 1;
		}
		else if(boardAr[i][1] == boardAr[i][2] && boardAr[i][1] == 'O'
											   && boardAr[i][0] == ' ')
		{
			winGame = true;
			row = i;
			col = 0;
		}
		else if(boardAr[0][i] == boardAr[1][i] && boardAr[0][i] == 'O'
											   && boardAr[2][i] == ' ')
		{
			winGame = true;
			row = 2;
			col = i;
		}
		else if(boardAr[1][i] == boardAr[2][i] && boardAr[1][i] == 'O'
											   && boardAr[0][i] == ' ')
		{
			winGame = true;
			row = 0;
			col = i;
		}
		else if(boardAr[0][i] == boardAr[2][i] && boardAr[0][i] == 'O'
											   && boardAr[1][i])
		{
			winGame = true;
			row = 1;
			col = i;
		}

	}//END FOR

	//PROCESSING CHECKS TO PREVENT DIAGNOL MOVES
	if(boardAr[0][0] == boardAr[2][2] && boardAr[0][0] == 'X'
									  && boardAr[1][1] == ' ')
	{
		prevent = true;
		row = 1;
		col = 1;
	}
	else if(boardAr[0][0] == boardAr[1][1] && boardAr[0][0] == 'X'
										   && boardAr[2][2] == ' ')
	{
		prevent = true;
		row = 2;
		col = 2;
	}
	else if(boardAr[1][1] == boardAr[2][2] && boardAr[1][1] == 'X'
										   && boardAr[0][0] == ' ')
	{
		prevent = true;
		row = 0;
		col = 0;

	}
	else if(boardAr[0][2] == boardAr[2][0] && boardAr[0][2] == 'X'
										   && boardAr[1][1] == ' ')
	{
		prevent = true;
		row = 1;
		col = 1;
	}
	else if(boardAr[0][2] == boardAr[1][1] && boardAr[0][2] == 'X'
										   && boardAr[2][0] == ' ')
	{
		prevent = true;
		row = 2;
		col = 0;
	}
	else if(boardAr[1][1] == boardAr[2][0] && boardAr[1][1] == 'X'
										   && boardAr[0][2] == ' ')
	{
		prevent = true;
		row = 0;
		col = 2;
	}

	//PROCESSING CHECKS FOR DIAGONAL WINNING MOVES

	if(boardAr[0][0] == boardAr[2][2] && boardAr[0][0] == 'O'
									  && boardAr[1][1] == ' ')
	{
		winGame = true;
		row = 1;
		col = 1;
	}
	else if(boardAr[0][0] == boardAr[1][1] && boardAr[0][0] == 'O'
										   && boardAr[2][2] == ' ')
	{
		winGame = true;
		row = 2;
		col = 2;
	}
	else if(boardAr[1][1] == boardAr[2][2] && boardAr[1][1] == 'O'
										   && boardAr[0][0] == ' ')
	{
		winGame = true;
		row = 0;
		col = 0;

	}
	else if(boardAr[0][2] == boardAr[2][0] && boardAr[0][2] == 'O'
										   && boardAr[1][1] == ' ')
	{
		winGame = true;
		row = 1;
		col = 1;
	}
	else if(boardAr[0][2] == boardAr[1][1] && boardAr[0][2] == 'O'
										   && boardAr[2][0] == ' ')
	{
		winGame = true;
		row = 2;
		col = 0;
	}
	else if(boardAr[1][1] == boardAr[2][0] && boardAr[1][1] == 'O'
										   && boardAr[0][2] == ' ')
	{
		winGame = true;
		row = 0;
		col = 2;
	}



	if(!prevent)
	{
		while(!validMove)
		{
			srand(time(NULL));
			randomVal1 = rand() % 3 ;
			randomVal2 = rand() % 3 ;
			if(boardAr[randomVal1][randomVal2] == ' ')
			{
				validMove = true;
			}
		}

		row  = randomVal1;
		col  = randomVal2;
	}
}
