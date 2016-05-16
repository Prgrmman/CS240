#include "Card.h"

using namespace std;





map<int,string> create_map()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"Diamonds"));
    m.insert(pair<int,string>(2,"Clubs"));
    m.insert(pair<int,string>(3,"Hearts"));
    m.insert(pair<int,string>(4,"Spades"));
    return m;
}

map<int,string> Card::conversion = create_map();



int Card::getValue(){ return value;}
string Card::getSuite(){ return conversion[suite];}

/*********
  ~card comparison

  - Highest suite is Spades, followed by Hearts, Clubs, and Diamonds

Example: a two of spadex is higher than the ace (13) of diamonds

 ***************/
bool Card::operator<(const Card &card){
    if (suite != card.suite)
        return suite < card.suite;
    else
        return value < card.value;

}




bool Card::operator>(const Card &card){
    if (suite != card.suite)
        return suite > card.suite;
    else
        return value > card.value;


}
bool Card::operator==(const Card &card){
    return value == card.value && suite == card.suite;

}
