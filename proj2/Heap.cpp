#include <iostream>
#include <fstream>
#include "Heap.h"
// constructor
// supposed to read stuff in from file
// the first line is the name, second line is the budget.
Heap::Heap(std::string filename){
    // test swap algorithm
    std::fstream myfile;
    myfile.open(filename);
    std::string data;

    while(true){
        std::string name;
        int budget;
        if(!getline(myfile, data)) // grab line
            break;

        name = data;
        getline(myfile, data);
        budget = stoi(data);

        Player p(name, budget);
        addPlayer(p);

    }
    myfile.close();

}

//copy constructor
// Note to self: Write a Test to test the copy constructor
Heap::Heap(const Heap &copy){
    players = copy.players;

}

// class methods

// this adds a player to the heap
void Heap::addPlayer(Player newPlayer){
    /* if (size() == 0)
       std::cout << "First player added!\n";
       */
    players.push_back(newPlayer);
    heapify();


    return;
}

// pops off the top of the heap and then returns that player
// note: Don't call getPlayer on an empty heap!!!
Player Heap::getPlayer(){
    Player temp = players[0];
    std::swap(players[0],  players[size()-1]);
    players.pop_back();
    siftDown(0);
    return temp;
}

std::vector<Player> Heap::getArray(){
    return players;

}

bool Heap::empty(){
    return players.size() == 0;
}


unsigned int Heap::size(){
    return players.size();
}



bool Heap::isLeaf(int i){
    // this is the same as checking if the node has no children
    // in other words, it's children would appear out of bounds

    return 2*i + 1 > size() - 1;


}

int Heap::getLeft(int i){
    return 2*i + 1;

}

void Heap::heapify(){
    if (size() < 2) // a heap of size 1 is already a heap, so we skip heapify
        return;

    for (int i = (size() - 2) /2; i >= 0; i--){
        siftDown(i);
    }
    return;
}

void Heap::siftDown(int i){
    if (i >= size() || i < 0) return;
    while(!isLeaf(i)){ //while this node isn’t a leaf
        int max = getLeft(i); // left index;

        // left + 1 is right child index
        // but we need to check if it has a right child
        // right child could be out of bounds
        if (max+1 < size() && players[max] < players[max+1])
            max = max+1;
        if (players[max] < players[i]) return;

        std::swap(players[max], players[i]);
        i = max;

    }
}

void Heap::printPlayers(){
    for (auto i : players){
        std::cerr << "\n";
        std::cerr << i.getName() << std::endl;
        std::cerr << i.getBudget() << std::endl;

    }
}
