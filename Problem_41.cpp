#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    if (size<0)
    return false;

    if(arr[0]==key)
    return true;

    else
    return linearSearch(arr+1,size-1,key);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 6;

    int target;
    cin >> target;

    if (linearSearch(arr, size, target))
        cout << "The element is present" << endl;
    else
        cout << "The element is not present" << endl;

    return 0;
    
}