
#include "Player.h"

using namespace std;

// constructor
Player::Player(){
  name = "";
  budget = 0;


}

Player::Player(const Player &player){
  name = player.name;
  budget = player.budget;
  hand = player.hand;
}
Player::Player(string name, int budget){
  this->name = name;
  this->budget = budget;
}



// class methods
string Player::getName(){
  return name;
}

int Player::getBudget(){
  return budget;
}

bool Player::bet(int amount){

  if (amount > budget)
    return false;
  budget -= amount;
  return true;

}

void Player::collectWinnings(int amount){

  budget += amount;
  return;
}

bool Player::operator > (const Player & player){
  return budget > player.budget;

}

bool Player::operator < (const Player & player){
  return budget < player.budget;

}

