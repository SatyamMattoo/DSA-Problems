// Selection Sort

#include <iostream>
using namespace std;

void SlctSrt(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main()
{

    int arr[] = {54, 43, 56, 7, 8, 876, 54, 45, 23, 12};
    SlctSrt(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
