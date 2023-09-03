#include <iostream>
using namespace std;

void duplicatearr(int arr[], int size)
{

    int i = 0;
    int j = size - 1;
    int k = 0;
    while (k <= j)
    {
        if (arr[k] == 0)
        {
            swap(arr[k], arr[i]);
            i++;
            k++;
        }
        else if (arr[k] == 1)
        {
            k++;
        }
        else if (arr[k] == 2)
        {
            swap(arr[k], arr[j]);
            j--;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    duplicatearr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}