#ifndef HEAP_H
#define HEAP_H

namespace heap{



void siftDown(int[],int&,int);
bool isLeaf(int, int&);
int getLeft(int);
void heapify(int [], int&);

void swap(int&, int &);
void removeRoot(int[], int&); 

}
#endif
