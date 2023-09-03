// finding an element in a sorted rotated array using recursion
#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    // Base case
    if (start > end)
    {
        return false;
    }

    // Processing
    int mid = start + (end - start) / 2;

    // Recursive call
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int pivotR(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return start;
    }

    int mid = start + (end - start) / 2;

    if (arr[start] <= arr[mid])
    {
        return pivotR(arr, mid + 1, end);
    }
    else
    {
        return pivotR(arr, start, mid-1 );
    }
}

int main()
{
    int arr[] = {6, 7, 1, 2, 3, 4, 5};
    int size = 7;

    int target;
    cin >> target;

    int start = 0;
    int end = size - 1;
    int pivot = pivotR(arr, start, end);

    // cout<< "pivot: "<< arr[pivot] << endl;
    if (target >= arr[pivot]&&target<=arr[size-1])
    {
        if (binarySearch(arr, pivot, end, target))
            cout << "Element present1" << endl;

        else
            cout << "Element absent1" << endl;
    }
    else
    {
        if (binarySearch(arr, start, pivot-1, target))
            cout << "Element present2" << endl;

        else
            cout << "Element absent2" << endl;
    }

    return 0;
}