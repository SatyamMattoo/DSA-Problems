// pivot of an array

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {7, 1, 2, 3, 4};
    int a = pivot(arr, 5);
    cout << "Index: " << a << endl;
    return 0;
}