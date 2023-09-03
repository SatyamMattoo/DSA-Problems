#include <iostream>
using namespace std;

void insertSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // copying temp value
        arr[j + 1] = temp;
    }
}

int main()
{

    int arr[] = {54, 43, 56, 7, 8, 876, 54, 45, 23, 12};
    insertSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
