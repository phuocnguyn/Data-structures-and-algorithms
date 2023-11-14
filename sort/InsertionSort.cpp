#include <iostream>
using namespace std;
void InsertionSort(int A[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = A[i]; // lưu giá trị của A[i] hiện tại
        int j = i - 1; 
        while (A[j] > key && j >= 0) // tìm vị trí j cần chèn ( nhỏ hơn key)
        {
            A[j+1] = A[j]; // dịch chuyển giá trị về sau
            j--;
        }
        A[j+1] = key;  // chèn giá trị 
    }
}
int main()
{
    int size;
    cin >> size;
    int A[100000];
    for (int i = 0 ; i < size ; i++)
    {
        cin >> A[i];
    }
    InsertionSort(A,size);
    for (int i = 0 ; i < size ; i++)
    {
        cout << A[i] << " ";
    }
}