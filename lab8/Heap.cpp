#include <iostream>
#include "Heap.h"

namespace heap{
  bool isLeaf(int i, int& size){
  // this is the same as checking if the node has no children
  // in other words, it's children would appear out of bounds
  
  return 2*i + 1 > size - 1;
}
  
  int getLeft(int i){
  return 2*i + 1;
  
}
  
  void heapify(int array[], int& size){
  if (size < 2) // a heap of size 1 is already a heap, so we skip heapify
    return;
 
  for (int i = (size - 2) /2; i >= 0; i--){
    siftDown(array, size, i);
  } 
  return;
}

  void siftDown(int array[], int& size, int i){
    if (i >= size || i < 0) return;
    while(!isLeaf(i,size)){ //while this node isn’t a leaf
      int max = getLeft(i); // left index;
      
    // left + 1 is right child index
    // but we need to check if it has a right child
    // right child could be out of bounds	
      if (max+1 < size && array[max] < array[max+1])
	max = max+1;
      if (array[max] != array[i] && array[max] < array[i]) return;
      
      swap(array[max], array[i]);
      i = max;
      
    } 
  }
  
  void removeRoot(int array[], int& size){
      swap(array[0], array[size -1]);
    size--;
    siftDown(array,size, 0);
  }


    void swap(int& num1, int& num2){
	if (num1 != num2){
	    num1 ^= num2;
	    num2 ^= num1;
	    num1 ^= num2;
	}
	    return;
	
    }
}
