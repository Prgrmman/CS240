#include <iostream>
#include "LinkedList.h"
#include "User.h"

using namespace std;
int main(){

  
  LinkedList<string> *listA = new LinkedList<string>();

  (*listA) << "hi";
  (*listA) << "hi";
  (*listA) << "hi";
  (*listA) << "hi";

  LinkedList<string> listB(*listA);

 
  cout << (*listA == listB) << endl;
  delete listA;
  listB.print();

  

  return 0;
}
