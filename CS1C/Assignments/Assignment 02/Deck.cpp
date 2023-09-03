#include"Deck.h"

DeckOfCards::DeckOfCards()
{
	IntializeDeck();
}

DeckOfCards::~DeckOfCards()
{

}

void DeckOfCards::IntializeDeck()
{
	const int MAX_SUIT_COUNT = 4;
	const int MAX_RANK_COUNT = 13;
	int suitCount;
	int rankCount;
	int index = 0;


	for(suitCount = 1; suitCount <= MAX_SUIT_COUNT; suitCount++ )
	{
		for(rankCount = 1; rankCount <= MAX_RANK_COUNT; rankCount++)
		{
			cardAr[index] = new Cards((SUITS)suitCount, (RANKS)rankCount);
			index++;
		}
	}
}


Cards** DeckOfCards::PerfectShuffle(Cards* cardAr[])
{
	int halfDeckSize ;
	halfDeckSize = DECK_SIZE/2;
	int index = 0;
	int shuffledIndex = 0;
	for(index = 0; index < halfDeckSize; index++)
	{
		shuffledAr[shuffledIndex] = new Cards(cardAr[index]->GetCardSuit(),
											  cardAr[index]->GetCardRank());
		shuffledAr[shuffledIndex + 1] =new Cards(cardAr[index + halfDeckSize]->GetCardSuit(),
												 cardAr[index + halfDeckSize]->GetCardRank());
		shuffledIndex+=2;
	}
	return shuffledAr;
}

void DeckOfCards::PrintDeck(Cards* cardAr[])
{
	int index = 0;
	for (index = 0;index < DECK_SIZE;index++)
	{
		cardAr[index]->Print();
	}
}


void DeckOfCards::moveShuffle() {
	int index = 0;
	for(index = 0; index < DECK_SIZE; index++)
	{
		cardAr[index]= shuffledAr[index];
	}

}

bool DeckOfCards::checkInitEqual()
{
	const int MAX_SUIT_COUNT = 4;
	const int MAX_RANK_COUNT = 13;
	int suitCount;
	int rankCount;
	int index = 0;

	bool equal  = true;
	for(suitCount = 1; suitCount <= MAX_SUIT_COUNT; suitCount++ )
	{
		for(rankCount = 1; rankCount <= MAX_RANK_COUNT; rankCount++)
		{
			if (shuffledAr[index]->GetCardRank() != rankCount || shuffledAr[index]->GetCardSuit() != suitCount) {
				equal = false;
			}
			index ++;
		}
	}
	if ( equal)
		moveShuffle();

	return equal;
}
