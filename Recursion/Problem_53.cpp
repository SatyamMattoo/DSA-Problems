#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    // Base case
    if (size <= 1)
        return;

    // sort first size-1 elements
    insertionSort(arr, size - 1);

    // insert the last element at the right position
    int last = arr[size - 1];
    int j = size - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j+1]=arr[j--];
    }
    arr[j+1]=last;
    

}

int main()
{
    int arr[] = {12, 23, 13, 35, 16, 27};
    int size = 6;

    insertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}