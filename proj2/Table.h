#ifndef TABLE_H
#define TABLE_H
#include <vector>
#include "Player.h"
#include "Heap.h"
#include "Deck.h"

class Table{
    private:
        //private fields
        int max_seats;
        int current_seats;
        int ante;
        std::vector<Player> players;
        Player winner;

    public:
        Table(int num_seats, int ante): max_seats(num_seats), current_seats(0), ante(ante) {}
        bool emptySeat();
        std::vector<Player> playRound();
        void addPlayer(Player p);
        void printWinner();
        int getWinnerBudget();
};
#endif
