// Linear Search using Recursion


#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool vol=linearSearch(arr + 1, size - 1, k);
        return vol;
    }
}

int main()
{
    int arr[] = {5, 7, 1, 31, 21};
    int size = 5;
    int k = 2;

    bool vol = linearSearch(arr, size, k);
    if(vol){
        cout << "present" <<endl;
    }
    else{
        cout << "absent" << endl; 
    }
    return 0;
}