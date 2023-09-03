#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 5, 6, 7, 8};
    int arr2[] = {4, 5, 6, 7};

    int i = 0;
    int j = 0;
    while ((i < 6) && (j < 4))
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            arr2[j] = -1;
            i++;
            j++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
    }

    return 0;
}