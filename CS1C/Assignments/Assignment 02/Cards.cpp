/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW02
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	08/30/2018
 * ****************************************************************************/
#include"Card.h"
Cards::Cards(SUITS suit,
			 RANKS rank)
{
	SetCardSuit(suit);
	SetCardRank(rank);
}

Cards::~Cards()
{

}

void Cards::SetCardSuit(SUITS ThisSuit)
{
	cardSuit = ThisSuit;
}

SUITS Cards::GetCardSuit()
{
	return cardSuit;
}

void Cards::SetCardRank(RANKS ThisRank)
{
	cardRanks = ThisRank;
}

RANKS Cards::GetCardRank()
{
	return cardRanks;
}


void Cards::Print()
{
	switch(cardSuit)
	{
		case DIAMONDS: cout << "\nDIAMONDS";
			break;
		case HEARTS:  cout << "\nHEARTS";
			break;
		case SPADES: cout << "\nSPADES";
			break;
		case CLUBS: cout << "\nCLUBS";
		break;
	}

	switch(cardRanks)
	{
		case ACE:  cout << " ACE\n";
			break;
		case TWO:  cout << " TWO\n";
			break;
		case THREE:  cout << " THREE\n";
			break;
		case FOUR:  cout << " FOUR\n";
			break;
		case FIVE:  cout << " FIVE\n";
			break;
		case SIX:  cout << " SIX\n";
			break;
		case SEVEN:  cout << " SEVEN\n";
			break;
		case EIGHT:  cout << " EIGHT\n";
			break;
		case NINE:  cout << " NINE\n";
			break;
		case TEN:  cout << " TEN\n";
			break;
		case JACK:  cout << " JACK\n";
			break;
		case QUEEN:  cout << " QUEEN\n";
			break;
		case KING:  cout << " KING\n";
			break;
	}

}
