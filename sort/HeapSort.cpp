#include <iostream>
using namespace std;
void heapify(int A[],int i,int size){   
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<size && A[l]>A[largest]){
        largest=l;
    }
    if(r<size && A[r]>A[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(A[i],A[largest]);
        heapify(A,largest,size);
    }
}
void buildMaxHeap (int A[], int size){
    for(int i=size/2-1;i>=0;i--){
        heapify(A,i,size);
    }
}

void heapSortIncrease(int A[], int size){
    buildMaxHeap(A,size);
    for(int i=size-1;i>=1;i--){
        swap(A[0],A[i]);
        size--;
        heapify(A,0,size);
    }
}

int main()
{
    int size;
    cin >> size;
    int* A = new int[size];
    for (int i = 0 ; i < size ; i++)
    {
        cin >> A[i];
    }
    heapSortIncrease(A, size);
    for (int i = 0 ; i < size ; i++)
    {
        cout << A[i] << " ";
    }
    delete[] A;
}