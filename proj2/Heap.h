#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include "Player.h"


class Heap{

    private:
        std::vector<Player> players; // vector based heap

        void swap(int &, int &);
        void siftDown(int);
        bool isLeaf(int);
        int getLeft(int);
    public:
        // public methods
        Heap(std::string);
        Heap(const Heap &);
        void heapify();

        void addPlayer(Player);
        Player getPlayer();
        std::vector<Player> getArray();
        bool empty();
        unsigned int size();
        void printPlayers();

};


#endif
