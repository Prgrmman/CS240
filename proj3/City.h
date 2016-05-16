#ifndef CITY_H
#define CITY_H
#include <list>
#include <string>
#include <vector>

class City{
    private:
        //stuff
        std::list<City*> adjacentCites;
        std::string name;
        int x;
        int y;

    public:
        City(std::string cityName, int xCoor, int yCoor);
        std::string getName();
        int getXCoor();
        int getYCoor();
        std::list<City*> getAdjacent();
        bool operator<(City &c);
        void addAdjCity(City *city);
};



#endif
