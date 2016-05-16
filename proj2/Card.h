#ifndef CARD_H
#define CARD_H
#include <map>
#include <string>
// Card class definition
class Card{
    private:
        // Fields
        int value; // values 1-14 inclusive
        int suite; // Diamonds = 1, Clubs = 2 , Hearts = 3, Spades = 4
        static std::map<int,std::string> conversion;

    public:
        Card(): value(0), suite(0) {} // default contructor
        Card(int value, int suite): value(value), suite(suite) {}// Value contructor
        int getValue();
        std::string getSuite();

        bool operator<(const Card &); // used to compare card values
        bool operator>(const Card &);
        bool operator==(const Card &);




};



#endif
