#ifndef MOVIE_CHART
#define MOVIE_CHART
#include "User.h"
#include "LinkedList.h"
class MovieChart{
  // fields
 private:
  LinkedList<User> users;
  int num_users;
  User * current_user;
  // methods
 public:
  MovieChart();
  ~MovieChart();
  bool login();
  void logout();
  void create();
  void update();
  void view();
  void list();
  void close();
  
};
#endif
