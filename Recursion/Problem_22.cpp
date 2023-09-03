#include <iostream>
using namespace std;

bool binarySearch(int arr[], int key, int s, int e)
{
    // base case
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    // recursive calls
    if (arr[mid] < key)
    {
        return binarySearch(arr, key, mid + 1, e);
    }
    else
    {
        return binarySearch(arr, key, s, mid - 1);
    }
}

int main()
{
    int arr[] = {5, 7, 9, 11, 21};
    int size = 5;
    int key = 111;

    bool bol = binarySearch(arr, key, 0, 4);
    if (bol)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    return 0;
}