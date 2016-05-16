#include <iostream>
#include <string>
#include "MovieChart.h"

using namespace std;
int main(){
  string command;
  MovieChart movieChart;
  bool loggedIn = false;
  
  while(true){
    cout << "\nPlease enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):" << endl;
    cin >> command;
    
    if (command == "Create")
      movieChart.create();
    else if (command == "Update"){
	movieChart.update();
    }
    else if (command == "View"){
	movieChart.view();
    }
    else if (command == "Login"){
      if (!movieChart.login())
	cout << "Invalid username/password combination" << endl;
      else 
	loggedIn = true;
    }
    else if (command == "Logout"){
      movieChart.logout();
      loggedIn = false;
    }
    else if (command == "Close"){
      movieChart.close();
    }

    else if (command == "List"){
      movieChart.list();
    }
    else if (command == "Quit")
      break;
    else
      cout << "INVALID COMMAND" << endl;
  }
  return 0;


}
