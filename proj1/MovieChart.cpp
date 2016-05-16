#include <iostream>
#include <string>
#include "MovieChart.h"
#include "User.h"
#include "LinkedList.h"
#include <fstream>
#include <string>
#include <sstream>



using namespace std;
// implement MovieChart

MovieChart::MovieChart(){
  num_users = 0;
  current_user = NULL;

  // read in from file
  fstream myfile;
  myfile.open("users.txt");  

  myfile.clear();

  string firstname, lastname, username, password;
  int age;
  stringstream ss;

  User* user = NULL;
  int index = 0;
  string data;
  while(true){
    getline(myfile,data);
    if (data == "" || myfile.eof()){ // reset stuff
      index = 0;
      while(data == "" && !myfile.eof())
	getline(myfile,data);
      delete user;
      user = NULL;
      if (myfile.eof()){
	users.reset();
	myfile.close();
	break;
      }
    }
    if (index == 0){
      username = data;
      index++;
    }
    else if (index == 1){
      firstname = data;
      index++;
    }
    else if (index == 2){
      lastname = data;
      index++;
    }
    else if(index == 3){
      ss.str("");
      ss << data;
      ss >> age;
      index++;
    }
    else if ( index == 4){
      password = data;
      index++;
    }
    else if(index == 5){
      if (!user){
	user = new User(firstname, lastname, age, username, password);
	users << *user;
	for (int i =0; i < num_users; i++){users++;}
	num_users++;
      }
      (*users.get()).addMovie(data);
    }
  }
}

MovieChart::~MovieChart(){
  fstream file;
  file.open("users.txt", ios::out);
  for(users.reset(); users.isNext(); users++){
    User* u = users.get();

    file << u->username << "\n" << u->firstName << "\n" << u->lastName << "\n" << u->age << "\n" 
	 << u->password << "\n";
    LinkedList<string> movies(u->favoritesList);
    for (movies.reset(); movies.isNext(); movies++)
      file << *movies.get() << "\n";
    file << "\n";
  }
  file.close();
}

bool MovieChart::login(){
  string username, password;
  cout << "Please enter your username:"<<endl;
  cin >> username;
  cout << "Please enter your password:"<<endl;
  cin >> password;
  
  for (users.reset(); users.isNext(); users++){
    if (users.get()->getUsername() == username && users.get()->authenticate(password)){
      current_user = users.get();
      return true;
    }
  }
  return false;
}

void MovieChart::logout(){
  current_user = NULL;
}

void MovieChart::create(){
// create function
  int age;
  string firstName, lastName, username, password;

  cout << "Please enter first name: " << endl;
  cin >> firstName;
  cout << "Please enter last name: "<<endl;
  cin >> lastName;
  cout << "Please enter age: " << endl;
  cin >> age;
  cout << "Please enter username: "<< endl;
  cin >> username;
  cout << "Please enter password: " << endl;
  cin >> password;
  
  User user(firstName, lastName, age, username, password);
  users.insert(user);
}

void MovieChart::update(){
  if (current_user){
    string command;
    cout << "Please enter which attribute to update (Add, Remove, Password): "<<endl;
    cin >> command;
    
    if (command == "Password"){
      cout <<"Please enter the new value: " << endl;
      string password;
      cin >> password;
      current_user->setPassword(password);
    }
    else if (command == "Add"){
      // code to enter favorites
      cout << "Please enter your Favorite Movies (Quit to exit)"<<endl;
      string title;
      cin.ignore();
      while (true){
	
	getline(cin,title);
	if (title != "Quit")
	  current_user->addMovie(title);
	else
	  break;
      }
    }
    else if (command == "Remove"){
      cout <<"Please input the title of the movies to be removed (Quit to exit)" << endl;
      string title;
      
      cin.ignore();
      while (true){
	
	getline(cin,title);
	if (title != "Quit")
	  current_user->removeMovie(title);
	else
	  break;
      }
    }
    else
      cout << "INVALID COMMAND" << endl;
    return;
  }
  else
    cout << "Please login before continuing." << endl;
}

void MovieChart::view(){
  
  if (current_user){
    cout << "First name: " << endl;
    cout << current_user->firstName << endl;
    cout <<"Last name: "<< endl;
    cout << current_user->lastName << endl;
    cout << "Username: " << endl;
    cout << current_user->getUsername() << endl;
    cout << "Favorite Movies\n" << endl;
   
    //print out the movie list
    LinkedList<string> movies(current_user->movieList());
    while(movies.isNext()){
      cout << *movies.get() << endl;
      movies++;
    }
    return;
  }else 
    cout << "Please login before continuing." << endl;
}


void MovieChart::list(){
  for(users.reset(); users.isNext(); users++){
   
    cout << users.get()->getUsername() << endl;
    LinkedList<string> movies(users.get()->movieList());
    
    for (movies.reset(); movies.isNext(); movies++){
      cout << *movies.get() << endl;
     
    }
  }
}

void MovieChart::close(){
  if (!current_user){
     cout << "Please login before continuing." << endl;
     return;
  }
  User temp = *current_user;
  users.remove(temp);
  current_user = NULL;
  return;

}
