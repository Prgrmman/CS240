#include <string>
#include <iostream>
#include <cassert>
#include <list>
#include "Map.h"
#include "Map.h"
#include "City.h"
#include "City.h"
using namespace std;

//*************Utility functions for debugging***************//

void printAdj(string city, list<City *> adjacency){
    cerr << "Adjacencies for:\t" << city << endl;
    for(auto ptr:adjacency) 
        cerr << ptr->getName() << " --- [x]: " << ptr->getXCoor() << " [y]: " << ptr->getYCoor() << endl;
}

void printPath(vector<City *> path){
    cerr << "Your path size is : " << path.size() << endl;
    if (!path.empty()) {
        auto it = path.begin();
        cout << "Your Starting City is:\t" << (*it)->getName() << endl;

        for (; it != path.end(); it++){
            City * c = (*it); 
            if (it+1 == path.end()) {
                cout << "Your Destination City is:\t" << c->getName() << endl;
                //cout << "\tDistance from the last node: " << step->distanceFromOptimalPrevious() << endl;
                cout << "\tThe (x,y) coordinates are: (" << c->getXCoor() << ", " << c->getYCoor() << ")" << endl;
            }else{
                cout << "The next city is: " << c->getName() << endl;
                cout << "\tThe (x,y) coordinates are: (" << c->getXCoor() << ", " << c->getYCoor() << ")" << endl;
            }
        }
    }	
}
//********************************************************************//

void checkAdjacencies(Map &map, string city, vector<string> &adjacents){
    list<City*> adj, test;
    test = map.findByName(city)->getAdjacent();
    assert(test.size() == adjacents.size());
    test.sort();
    for(auto a: adjacents){
        adj.push_back(map.findByName(a));
    }
    adj.sort();
    auto a = adj.begin();
    auto t = test.begin();
    for(; a != adj.end() && t != test.end(); a++, t++){
        assert((*a)->getName() == (*t)->getName());
    }
}

void checkPath(Map &map, vector<string> &cities, string start, string dest){
    City * startc = map.findByName(start);
    City * destc = map.findByName(dest);

    vector<City *> route = map.shortestPath(startc, destc);
    assert(route.size() == cities.size());
    int i = 0;
    for(auto r: route){
        assert(r->getName() == cities.at(i));
        i++;
    }
}

int main(int argc, char *argv[]){

    cerr << "\n\tTEST #1: Read file a list of Cities and their locations" << endl;	
    Map map("townlist.txt");

    assert(map.findByName("binghamton") != NULL);
    assert(map.findByName("fairbanks") != NULL);
    assert(map.findByName("cypress") != NULL);
    assert(map.findByName("victorville") != NULL);
    assert(map.findByName("laguna") != NULL);
    assert(map.findByName("anaheim") != NULL);
    assert(map.findByName("bend") != NULL);
    assert(map.findByName("rialto") != NULL);
    assert(map.findByName("kathmandu") == NULL);
    assert(map.findByName("bend")->getXCoor() == 6 && map.findByName("bend")->getYCoor() == 7);
    assert(map.findByName("rialto")->getXCoor() == 4 && map.findByName("rialto")->getYCoor() == 7);

    cerr << "\n\t========================PASS========================\n" << endl;


    cerr << "\n\tTEST #2: Test Adjacencies" << endl;	

    string city = "bend";
    vector<string> adjacents = {"victorville", "rialto"};
    checkAdjacencies(map, city, adjacents);

    city = "rialto";
    adjacents = {"bend", "anaheim"};
    checkAdjacencies(map, city, adjacents);

    city = "fairbanks";
    adjacents = {"binghamton", "anaheim"};
    checkAdjacencies(map, city, adjacents);

    city = "cypress";
    adjacents = {"binghamton", "anaheim", "victorville"};
    checkAdjacencies(map, city, adjacents);

    city = "anaheim";
    adjacents = {"rialto", "cypress", "fairbanks"};
    checkAdjacencies(map, city, adjacents);

    city = "victorville";
    adjacents = {"bend", "laguna", "cypress"};
    checkAdjacencies(map, city, adjacents);

    city = "laguna";
    adjacents = {"victorville"};
    checkAdjacencies(map, city, adjacents);

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #3: Simple Shortest Path" << endl;
    vector<string> path = {"bend","rialto"};
    checkPath(map, path, "bend", "rialto");

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #4: Less Simple Shortest Path" << endl;

    path = {"rialto","anaheim", "fairbanks"};
    checkPath(map, path, "rialto", "fairbanks");

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #5: Shortest Path between a single point" << endl;
    path = {"fairbanks"};
    checkPath(map, path, "fairbanks", "fairbanks");

    cerr << "\n\t========================PASS========================\n" << endl;


    cerr << "\n\tTEST #6: Shortest Path on Map 2" << endl;
    Map map2("townlist2.txt");
    path = {"doomstadt", "attilan", "smallville", "gotham"};
    checkPath(map2, path, "doomstadt", "gotham");

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #7: Shortest Path on Map 2" << endl;
    path = {"gotham", "smallville", "metropolis", "kun-lun", "genosha", "asgard", "madripoor"};
    checkPath(map2, path, "gotham", "madripoor");

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #8: No Path" << endl;
    path.clear();
    checkPath(map2, path, "attilan", "nyc");

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #9: Distance from a single city (should be 0)" << endl;
    City * start = map2.findByName("nyc");
    City * stop = map2.findByName("nyc");
    assert(map.pathDistance(start, stop) == 0);

    cerr << "\n\t========================PASS========================\n" << endl;
    cerr << "\n\tTEST #10: Distance between two cities" << endl;
    start = map2.findByName("attilan");
    stop = map2.findByName("madripoor");
    assert(map2.pathDistance(start, stop) == 8);

    cerr << "\n\t========================PASS========================\n" << endl;

    cerr << "\n\tTEST #11: Distance with two equal paths" << endl;
    start = map2.findByName("metropolis");
    stop = map2.findByName("doomstadt");
    assert(map2.pathDistance(start, stop) == 8);
    cerr << "\n\t========================PASS========================\n" << endl;


    //these are my three tests
    cerr << "\n\t*****************************************************\n" << endl;
    cerr << "\n\tMy custom tests\n" << endl;
    Map map3("townlist3.txt");

    // a path that does not exist represents a path of infinite distance
    cerr << "\n\tTEST #12: Verify that no path has distance infinity"<< endl;
    start = map3.findByName("city_1");
    stop = map3.findByName("city_2");
    assert(map3.pathDistance(start,stop) == -1);
    cerr << "\n\t========================PASS========================\n" << endl;


    // verify one of the more complex paths in the graph
    cerr << "\n\tTEST #13: Verify correct path between city_2 and city_7 "<< endl;
    start = map3.findByName("city_2");
    stop = map3.findByName("city_7");

    path = {"city_2", "city_5", "city_8", "city_10", "city_9", "city_7"};
    checkPath(map3,path,"city_2","city_7");
    cerr << "\n\t========================PASS========================\n" << endl;

    // Verify that paths can be formed within disconnected components of the graph
    cerr << "\n\tTEST #14: Verify path in disconnected component of graph from city_13 to city_14 " << endl;

    start = map3.findByName("city_13");
    stop = map3.findByName("city_14");
    path = {"city_13", "city_12", "city_17","city_14"};
    checkPath(map3,path,"city_13","city_14");
    cerr << "\n\t========================PASS========================\n" << endl;
    return 0;

}



