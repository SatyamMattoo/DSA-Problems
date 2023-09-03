#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;

    else{
    bool ans=isSorted(arr+1, n-1);
    return ans;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 55, 5, 6, 7};
    int size = 6;

    if (isSorted(arr,size))
        cout << "The array is sorted" << endl;
    else
        cout << "The array is not sorted" << endl;

    return 0;
}