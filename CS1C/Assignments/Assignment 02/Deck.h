#ifndef DECK_H_
#define DECK_H_

#include<iostream>
#include"header.h"
#include"card.h"
using namespace std;

class DeckOfCards
{
public:
	DeckOfCards();
	~DeckOfCards();

	void IntializeDeck();
	Cards** PerfectShuffle(Cards* cardAr[]);
	void PrintDeck(Cards* cardAr[]);

	Cards* cardAr[DECK_SIZE];
	Cards* shuffledAr[DECK_SIZE];

	void moveShuffle();
	bool checkInitEqual();
};

#endif /* DECK_H_ */
