// Rotating an array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6};

    int temp[10];

    int k=4;
    
    for (int i = 0; i < 7; i++)
    {
        temp[(i + k) % 7] = arr[i];
    }

    for (int x = 0; x < 7; x++)
    {
        cout << temp[x] << " ";
    }
    cout << endl;
    return 0;
}