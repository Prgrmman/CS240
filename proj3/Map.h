#ifndef MAP_H
#define MAP_H

#include <string>
#include <vector>
#include <list>
#include <queue>
#include "City.h"

struct Node;

class Map{
    private:
        //something here
        std::vector<City> cities;
        std::deque<Node>::iterator mapNode(std::deque<Node> & nodes, City* city);
        std::deque<Node>::iterator shortestNode(std::deque<Node> & nodes);


    public:
        Map(std::string); // thie is a file name
        City* findByName(std::string);
        std::vector<City *> shortestPath(City * start, City * dest);
        unsigned int pathDistance(City * start, City * dest);
        unsigned int adjacentDistance(City* start, City* end);
};


struct Node{
    City* city;
    unsigned int distance;
    City* previous;
    Node(City* c): city(c), distance(-1), previous(0){} 

};



#endif
