// Wave Print of 2D Array

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> ans, int size){
    for(int i=0;i<size;i++){
        cout << ans[i] << " " ;
    }
    cout << endl;
}

void wavePrint(vector<vector<int>> arr, int nRow, int mCol)
{
    vector<int> ans;

    for (int col = 0; col < mCol; col++)
    {
        if (col & 1)
        {
            // odd
            for (int row = nRow - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nRow; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    print(ans,9);
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},

    };

    wavePrint(arr, 3, 3);

    return 0;
}