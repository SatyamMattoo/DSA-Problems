// Pivot in a array using recursion

#include <iostream>
using namespace std;

int pivotR(int arr[], int start, int end)
{
    // Base Case
    if(start>=end){
        return start;
    }
    
    int mid= start+(end-start)/2;

    if(arr[start]<=arr[mid]){
        return pivotR(arr,mid+1,end);
    }
    else{
        return pivotR(arr,start,mid-1);
    }
}

int main()
{
    int arr[] = {6, 7, 1, 2, 3, 4, 5};
    int size = 7;
    int start = 0;
    int end = size - 1;

    int pivot = pivotR(arr, start, end);

    cout << "The pivot of this array is " << arr[pivot] << endl;
    return 0;
}