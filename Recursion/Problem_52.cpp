// Selection sort using Recursion

#include <iostream>
using namespace std;

void selectionSort(int *arr, int size)
{
    if (size == 0 || size == 1)
        return;

    int minIdex = INT32_MIN;
    for (int i = 1; i < size; i++)
    {
        if(arr[i-1]>arr[i])
        swap(arr[i-1],arr[i]);
    }

    return selectionSort(arr+1,size-1);
}

int main()
{
    int arr[] = {12, 23, 13, 35, 16, 27};
    int size = 6;

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}