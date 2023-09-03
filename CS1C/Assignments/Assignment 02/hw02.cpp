#include"header.h"
#include"Deck.h"
int main()
{

	DeckOfCards *theDeck = new DeckOfCards();
	cout << "Initialilzing the Deck" << endl;
	theDeck->PrintDeck(theDeck->cardAr);

    theDeck->PerfectShuffle(theDeck->cardAr);

    cout << "After first Perfect Shuffle" << endl;
	theDeck->PrintDeck(theDeck->shuffledAr);
	bool equal = false;
	equal = theDeck->checkInitEqual();
	int counter = 0;
	while (!equal)
	{
		theDeck-> moveShuffle();
	    theDeck->PerfectShuffle(theDeck->cardAr);
		equal = theDeck->checkInitEqual();
		counter ++;
	}
	cout << "Number of attempt "<< counter << endl;
	theDeck->PrintDeck(theDeck->cardAr);
	return 0;
}



