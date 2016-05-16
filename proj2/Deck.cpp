#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Deck.h"


int myrandom(int);


// default construtor
// make a deck of 52 cards
Deck::Deck()
{
    for (int suite = 1; suite <= 4; suite++){
        for (int val = 1; val <= 13; val++){
            Card card(val,suite);
            cards.push_back(card);
        }
    }
}

Card Deck::draw()
{
    Card card = cards.front();
    cards.pop_front();
    return card;

}

void Deck::shuffle()
{
    std::random_shuffle(cards.begin(),cards.end(), myrandom);
}

// used by shuffle
// taken from http://www.cplusplus.com/reference/algorithm/random_shuffle/
int myrandom(int i){
    std::srand ( unsigned ( std::time(0) ) );
    return std::rand()%i;
}

