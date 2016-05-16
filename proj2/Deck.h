#ifndef DECK_H
#define DECK_H
#include <deque>
#include "Card.h"
// Deck class

class Deck{
    // fields
    private:
        std::deque<Card> cards;
    public:
        Deck();
        void shuffle();
        Card draw();
};

#endif
