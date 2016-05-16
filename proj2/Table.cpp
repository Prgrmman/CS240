#include <iostream>
#include "Table.h"

using namespace std;

void Table::addPlayer(Player p){
    // I guess that this adds players to the table
    players.push_back(p);
    current_seats++;


}

// returns if there are empty seats()
bool Table::emptySeat(){
    return current_seats < max_seats;
}

// note: the way I implemented this was to give the losers money to the winner

vector<Player> Table::playRound(){
    // we need to deal randomly from the deck
    vector<Player> losers;
    int pot = 0; // the winnings pot.
    Deck deck;
    deck.shuffle();

    // have each player draw a card
    for(auto &p: players){
        Card card = deck.draw();

        p.hand = card;
        if (p.bet(ante))
            pot += ante;

    }
    // now we need to determine the winner
    winner = players.at(0);
    vector<Player>::iterator player = players.begin();
    for(player++; player < players.end(); player++){
        if (winner.hand > (*player).hand){
            losers.push_back(*player);
        }
        else{
            losers.push_back(winner);
            winner = *player;
        }
    }
    players.clear();
    winner.collectWinnings(pot);
    players.push_back(winner);
    current_seats = 1;
    return losers;

}
void Table::printWinner(){
    cout << "The winner is " << winner.getName() << endl;
    return;
}

int Table::getWinnerBudget(){
    return winner.getBudget();



}




