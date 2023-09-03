#ifndef CARD_H_
#define CARD_H_

#include<iostream>
#include"header.h"
using namespace std;

class Cards
{
public:
	Cards(SUITS currentSuit,
		 RANKS currentRank);
	Cards();
	~Cards();

	void SetCardSuit(SUITS ThisSuit);
	void SetCardRank(RANKS ThisRank);

	SUITS GetCardSuit();
	RANKS GetCardRank();
	void Print();

private:
	SUITS cardSuit;
	RANKS cardRanks;
};



#endif /* CARD_H_ */
