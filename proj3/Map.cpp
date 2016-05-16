#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "Map.h"
#include <algorithm>

using namespace std;
Map::Map(string fileName){
    fstream myfile;
    myfile.open(fileName);

    //read data from file
    string data;
    string name;
    int x, y;    

    // read in from file
    while(getline(myfile,data)){
        std::stringstream ss;
        ss << data;
        ss >> name >> x >> y;
        City city(name, x,y);
        cities.push_back(city);
    }
    myfile.close();

    //set adjacent cities
    for(auto city = cities.begin(); city != cities.end(); city++){
        for (auto i = cities.begin(); i != cities.end(); i++){
            if (city != i && (city->getXCoor() == i->getXCoor() || city->getYCoor() == i->getYCoor()))
                city->addAdjCity(&(*i));
        }

    }
} 
// returns a pointer to the city of the given name 
City* Map::findByName(string name){
    for(auto &city: cities)
        if (city.getName() == name)
            return &city;
    return NULL;

}
// returns the distance between two adjacent cities
unsigned Map::adjacentDistance(City *start, City* end){
    int x1 = start->getXCoor();
    int x2 = end->getXCoor();
    int y1 = start->getYCoor();
    int y2 = end->getYCoor();

    if (x1 == x2)
        return abs(y2-y1);
    else if (y1 == y2)
        return abs(x2-x1);
    else
        return -1;
}

// implements shortest path algorithm 
unsigned int Map::pathDistance(City* start, City* dest){
    vector<City*> path = shortestPath(start, dest);
    unsigned int distance = 0;
    if (path.size() == 0){
        return -1;
    }
    for (int i = 0; i < path.size()-1; i++){
        distance += adjacentDistance(path.at(i), path.at(i+1));
    }
    return distance;
}

// Shortest path algorithm that returns the shortest path between start and dest
// returns an empty vector if there is no path
vector<City*> Map::shortestPath(City* start, City * dest){
    deque<Node> nodes;
    deque <Node> explored;
    vector <City*> path;

    // add the start node 
    Node source(start);
    source.distance = 0;
    nodes.push_back(source);

    //add the rest of the nodes
    for(City &city : cities){
        if (&city != start)
            nodes.push_back(Node(&city));
    }
    // set neighbor distances
    shortestNode(nodes);
    while(!nodes.empty()){
        Node  current = *shortestNode(nodes);
        if (current.distance == -1)
            break;
        //mark the node as visited
        nodes.erase(mapNode(nodes, current.city));
        explored.push_back(current);

        // look at the neighbors
        for(City* city : current.city->getAdjacent()){
            deque<Node>::iterator it = mapNode(nodes, city);
            if (it == nodes.end())
                continue;

            Node &node = *it; 
            unsigned int altDistance = current.distance + adjacentDistance(current.city, node.city);
            if ((node.distance == unsigned(-1)) || (altDistance < node.distance)){
                node.distance = altDistance;
                node.previous = current.city;
            }
        }
    }
    // build the path starting with the destination
    Node current = *mapNode(explored, dest);
    while(current.city != NULL){ 
        path.push_back(current.city);
        auto it = mapNode(explored, current.previous);
        if (it == explored.end())
            break;
        current = *it;
    }
    // handle the case of an empty path
    if ((path.size() == 1) && (start != dest))
        path.clear();
    std::reverse(path.begin(), path.end()); // flip the order of the path
    return path;
}

// returns an iterator the points to the node with the desired city pointer
deque<Node>::iterator Map::mapNode(deque<Node> & nodes, City* city){
    deque<Node>::iterator it;
    for(it = nodes.begin(); it < nodes.end(); it++){
        if ((*it).city == city)
            break;
    }
    return it;
}

// returns an iterator that points to the node with the smallest distance
deque<Node>::iterator Map::shortestNode(deque<Node> & nodes){
    auto it_min = nodes.begin();
    auto it = nodes.begin();
    for (; it != nodes.end(); it++){
        if ((*it).distance < (*it_min).distance)
            it_min = it;
    }
    return it_min;
}

