#include <iostream>
using namespace std;

int altswap(int arr[], int size)
{
    int x = 0;
    while (x < (size - 1))
    {
        swap(arr[x], arr[x + 1]);
        x = x + 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    altswap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}