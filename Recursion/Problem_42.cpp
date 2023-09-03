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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 6;

    int target;
    cin >> target;

    int start = 0;
    int end = size - 1;

    if (binarySearch(arr, start, end, target))
        cout << "The element is present" << endl;
    else
        cout << "The element is not present" << endl;

    return 0;
}