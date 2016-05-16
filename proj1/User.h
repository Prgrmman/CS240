#ifndef USER_H
#define USER_H
#include "LinkedList.h"
class User 
{
 public:
  std::string firstName;
  std::string lastName;
  int age;
  User();
  User(const User&);
  User(std::string, std::string, int, std::string, std::string);
  bool authenticate(std::string);
  std::string getUsername();
  void setPassword(std::string);
  void setUser(std::string);
  LinkedList<std::string> movieList() const;
  bool operator==(User&);
  void addMovie(std::string);
  void removeMovie(std::string);
  friend class MovieChart;
 private:
  LinkedList<std::string> favoritesList;
  std::string username;
  std::string password; 
  
};
// function defs
#endif
  
