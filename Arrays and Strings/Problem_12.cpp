// Reversing array

#include <iostream>
using namespace std;

void Reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {54, 43, 56, 7, 8, 876, 54, 45, 23, 12};
    Reverse(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}