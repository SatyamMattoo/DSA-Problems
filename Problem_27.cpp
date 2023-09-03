// Binary Search in 2D Arrays

#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> &arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int element = arr[mid / col][mid % col];

        if(target==element)
        {
            return true;
        }
        else if(target>element){
            start=mid+1;
        }
        else{
            end =mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},



    };

    int target;
    cin >> target;

    if (binarySearch(arr, target))
    {
        cout << "Element is Present" << endl;
    }
    else
    {
        cout << "Element not present" << endl;
    }

    return 0;
}