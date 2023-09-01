/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#3		:	Movie List - Intro to linked ists
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	03/14/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * WordWrap
 * This function will recieve a string and if the string is greater than
 * 	the max size it will wrapp the string and displaye it in 2 or more lines
 * 		==> returns the new string that has been wrapped
 * -----------------------------------------------------------------------------
 *	PRE-CONDITION
 *					plot 	: The plot of the movie in the input file
 *	POST-CONDTION
 *					output	: The plot of the movie word wrap and read for
 *							  output
 ******************************************************************************/
string WordWrap(string plot)
{
/*******************************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------------------
 * PROCESSING
 * -----------------------------------------------------------------------------
 * 	MAX_LEN : The maximum size it can be displayed on the screen
 ******************************************************************************/
	const int MAX_LEN = 78;
	int index;		// CALC 	- The loop control variable
	int lineNum;	// CALC 	- The line number the sentence will be displayed
					//			  on
	int plotLen;	// CALC 	- The length of the plot sentence
	int outputLen;	// CALC 	- The length of the output sentence
	int wordLen;	// CALC 	- The length of each word
	string word;	// CALC	    - Each word in one sentece
	string output;	// CACL&OUT - The warpped plot of the movie
	/**INTIALIZING**/
    output = "";
    word = "";
	plotLen = plot.length();
	lineNum = 1;

	for(index = 0; index < plotLen; index++)
	{
		if(plot[index] != ' ')
		{
			word += plot[index];
		}
		else
		{
			outputLen = output.length();
			wordLen = word.length() ;
			if((outputLen+ wordLen + 1) > MAX_LEN * lineNum)
			{
				output += "\n";
				lineNum++;
			}
			output +=  word + ' ';
			word.clear();
		}
	}
	outputLen = output.length();
	wordLen = word.length() ;
	if((outputLen+ wordLen + 1) < MAX_LEN * lineNum)
	{
		output += ' ' + word;
	}
	else
	{
		output += "\r\n" + word;
	}


	return output;
}
