#ifndef SORT_H
#define SORT_H

class Sort{
private:

    void heapSort(int[], int&);
    void merge(int[],int,int,int);
    void mergeSort(int[], int, int);
    void quickSort(int[], int, int); 
    int partition(int[],int,int);
    int findPivot(int,int);
    
public:

    int* sortA(int[],int);
    int* sortB(int[],int);
    int* sortOptimized(int[],int);
    
};

#endif
