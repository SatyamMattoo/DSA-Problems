// Printing second largest element in a array

#include <iostream>
using namespace std;

int secondLargest(int arr[], int size,int n)
{
    
    if (size ==  n)
        return arr[n];

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    
    return secondLargest(arr, size - 1,n);
}

int main()
{
    int arr[] = {12, 23, 13, 35, 16, 27};
    int size = 6;

    int ans = secondLargest(arr, size,size-2);

    cout << "The second largest elemnt is " << ans << endl;

    return 0;
}