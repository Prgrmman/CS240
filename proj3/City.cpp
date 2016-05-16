#include <iostream>
#include "City.h"
using namespace std;

bool inRange(int,int,int);


// parameterized constructor
City::City(string name, int x, int y){
    this -> name = name;
    this -> x = x;
    this -> y = y;
}
// access function returns city name
string City::getName(){
    return name;
}

// access function returns x coordinate
int City::getXCoor(){
    return x;
}
// access function returns y coordinate
int City::getYCoor(){
    return y;
}
// overloaded < for semantic comparison of city names
bool City::operator<(City &city){
    return name < city.name;

}


// Only add an adjacent city if it is truly adjacent
// removes a city if it is no longer adjacent to the city instance
void City::addAdjCity(City* city){
    int x1 = city->getXCoor();
    int y1 = city->getYCoor();
    bool inserted = false, sameRow = false, sameCol = false;
    for(auto it = adjacentCites.begin(); it != adjacentCites.end(); it++){
        int x2 = (*it)->getXCoor();
        int y2 = (*it)->getYCoor();

        // if they are in the same row
        if (y1 == y2 ){
            sameRow = true;
            if (inRange(x,x1,x2) || inRange(x2,x1,x)){
                inserted = true;
                adjacentCites.push_back(city);
                adjacentCites.erase(it);
                break;
            }
        }
        // if the are in the same column
        if (x1 == x2){
            sameCol = true;
            if (inRange(y,y1,y2) || inRange(y2,y1,y)){
                inserted = true;
                adjacentCites.erase(it);
                adjacentCites.push_back(city);
                break;
            }
        }
    }
    // otherwise it's an adjacent city
    if (!inserted && (!sameRow || !sameCol))
        adjacentCites.push_back(city);
}

// returns a list of adjacent cities pointers
list<City*> City::getAdjacent(){
    return adjacentCites;
}

// returns true if a < b < c
bool inRange(int a, int b, int c){ 
    return a< b && b < c && a < c;
}
