/******************************************************************************
* AURHOR : Negin Mashhadi
* ASSIGNMENT#2 : Stacks and Queue
* CLASS : CS1D
* DUE DATE : 02/04/2019
* ****************************************************************************/
#include "header.h"
/*******************************************************************************
* This function will check if the given expression has balanced paranthesis
* or not
* Passes an expression to the function
* Returns a boolean to check if the expression is balanced or not
******************************************************************************/
bool BalancedParentheses(string expression)
{
    LinkedStack<char> exp;
    int size = expression.length();

    for(int i = 0; i < size; i++)
    {
        if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            exp.Push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            if(exp.IsEmpty() || exp.Top() != getMatchOpenChar(expression[i]))
            {
                return false;
            }
            else
            {
                exp.Pop();
            }//END OF IF-ELSE
        }// END OF IF-ELSE-IF
    }//END FOR
    return (exp.IsEmpty());
}