#include <iostream>
#include <string>
#include "User.h"
#include "LinkedList.h"

using namespace std;

// Impementation of user

User::User(){
  age = 0;
}
User::User(string fname, string lname, int age, string username, string password){
 
  this -> firstName = fname;
  this -> lastName = lname;
  this -> age = age;
  this -> username = username;
  this -> password = password;

  
}

User::User(const User &user){
  this->firstName = user.firstName;
  this->lastName = user.lastName;
  this->age = user.age;
  this->username = user.username;
  this->password = user.password;
 

  LinkedList<string> temp(user.favoritesList);
  for(temp.reset(); temp.isNext(); temp++){
    this->favoritesList.insert(*temp.get());
  }


}

// sets
void User::setPassword(string password){
  this -> password = password;
}

//gets
string User::getUsername(){
  return username;
}
LinkedList<string> User::movieList() const{
  return favoritesList;
}

//User user methods
bool User::authenticate(string password){
  return this-> password == password;
}

bool User::operator ==(User& user){
 
  if(firstName == user.firstName && lastName == user.lastName && age == user.age && username == user.username && password == user.password && favoritesList == user.favoritesList)
    return true;
  return false;
}

void User::addMovie(string title){
  favoritesList.insert(title);
}

void User::removeMovie(string title){
  favoritesList.remove(title);
  
}


