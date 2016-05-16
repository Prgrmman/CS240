#include <iostream>
#include "Sort.h"
#include "Heap.h"

using namespace std;
// the destructor

void printA(int[],int);
// inserted a comment here
// no big deal




int* Sort::sortA(int array[], int size){
    mergeSort(array,0, size - 1);
    return array;
}

int* Sort::sortB(int array[], int size){
    //return mergeSort(array, size);

    quickSort(array,0,size-1);
    
    return array;
}

int* Sort::sortOptimized(int array[], int size){
    heapSort(array,size);
    return array;
}





// various implementation of sort methods
void Sort::heapSort(int array[], int &size){
    heap::heapify(array,size);
    while(size > 1)
	heap::removeRoot(array,size);
    return;

}
int Sort::findPivot(int low, int high){
    return low + rand() % (high - low);
}

int Sort::partition(int array[], int low, int high){
    int pivot = findPivot(low,high);
    heap::swap(array[pivot], array[high]);

    
    int marker = low;
    for(int i=low; i< high; i++){
	if (array[i] < array[high]){
	    heap::swap(array[i], array[marker++]);
	}
    }
    heap::swap(array[marker], array[high]);
    return marker;

}


void Sort::quickSort(int array[], int low, int high){

    if (low < high){
	int pivot = partition(array,low,high);
	quickSort(array,low,pivot -1);
	quickSort(array,pivot+1, high);
    }
}
void Sort::mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}


void Sort::merge(int array[], int left, int middle, int right)
{
    int l_size = middle - left + 1;
    int r_size =  right - middle;
 
    int left_arr[l_size], right_arr[r_size];
 
    for (int i = 0; i < l_size; i++)
        left_arr[i] = array[left + i];
    for (int j = 0; j < r_size; j++)
        right_arr[j] = array[middle + 1+ j];
 
   
    int i = 0;
    int j = 0; 
    int k = left;
    for(;i < l_size && j < r_size; k++)
    {
        if (left_arr[i] < right_arr[j])
            array[k] = left_arr[i++];  
        else
            array[k] = right_arr[j++];
    }

    // do cleanup on the rest of the list
    while (i < l_size)
        array[k++] = left_arr[i++];
 
    while (j < r_size)
        array[k++] = right_arr[j++];
}


void printA(int array[], int size){
    for (int i = 0; i < size; i ++)
	cout << array[i] << " ";
    cout << endl;
}
