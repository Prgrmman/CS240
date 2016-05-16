#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"



class Player{
private:
  //private instance variables
  int budget;
  std::string name;

public:
  // public data instance variables
  Card hand;
  // public Methods
  Player();
  Player(std::string, int);
  Player(const Player &);
  std::string getName();
  int getBudget();
  bool bet(int);
  void collectWinnings(int);
  bool operator>(const Player &);
  bool operator<(const Player &);
};








#endif
