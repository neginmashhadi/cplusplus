/******************************************************************************
* AURHOR : Negin Mashhadi
* ASSIGNMENT#2 : Stacks and Queue
* CLASS : CS1D
* DUE DATE : 02/04/2019
* ****************************************************************************/
#include "header.h"
/*******************************************************************************
* This function will check if the next character will match the closing
* character of the expression
* passes a closing character to the function
* Returns the opening character to the function
******************************************************************************/
char getMatchOpenChar(char close)
{
    char open = ' ';

    switch (close) {
        case ')':
            open = '(';
            break;
        case '}':
            open = '{';
            break;
        case ']':
            open = '[';
            break;
        default:
            break;
    }
    return open;
}