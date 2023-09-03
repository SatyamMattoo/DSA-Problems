// Sorting 0's and 1's

#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {

        if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[10] = {1, 0, 1, 1, 0, 1, 0, 1, 0, 0};
    sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}