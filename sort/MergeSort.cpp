#include <iostream>
using namespace std;

void Merge(int A[], int left, int middle, int right)
{
    int M[1000], N[1000];
    int n1 = middle - left + 1; // so luong phan tu A[left...middle]
    int n2 = right - (middle+1) + 1; // so luong phan tu A[middle+1..right]
    for (int i = 0 ; i < n1 ; i++){
        M[i] = A[left + i];
    }
    for (int j = 0 ; j < n2 ; j++){
        N[j] = A[middle+1 +j];
    }
    int i = 0; int j = 0; int k = left;
    while (i<n1 && j<n2 )
    {
        if (M[i] < N[j]) 
        {
            A[k] = M[i];
            i++;
        }
        else 
        {
            A[k] = N[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        A[k] = M[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        A[k] = N[j];
        k++;
        j++;
    }
}
void MergeSort(int A[], int left , int right)
{
    if (left>=right )
        return;
    else 
    {
        int middle = (right+left)/2;
        MergeSort(A,left,middle);
        MergeSort(A,middle+1,right);
        Merge(A,left,middle,right);
    }
}
int main()
{
    int size;
    cin >> size;
    int A[1000];
    for (int i = 0; i < size ; i++)
    {
        cin >> A[i];
    }
    MergeSort(A,0,size-1);
    for (int i = 0; i< size ; i++)
    {
        cout << A[i] << " ";
    }
}