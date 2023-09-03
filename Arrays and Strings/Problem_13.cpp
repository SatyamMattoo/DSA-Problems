#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n, int arr[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr[k++] = arr2[j++];
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};

    int arr[10] = {0};
    merge(arr1, arr2, 5, 4, arr);

    print(arr, 9);

    return 0;
}