// Transverse and reverse row Approach for rotating an array by 90 degrees

#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr, int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] <<"  ";
        }
        cout << endl;
    }
}

void rotateBy90(vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reversing the rows
    for (int i = 0; i < row; i++)
    {
        int colIndex=col-1;
        for (int j = 0; j < col&&colIndex>j; j++)
        {
             swap(arr[i][j],arr[i][colIndex--]);
        }

    }
}
        int main()
        {
            vector<vector<int>> arr
            {  
                {1, 2, 3, 99},
                {4, 5, 6, 88},
                {7, 8, 9, 77},
                {10, 11, 12, 66},
            };

            rotateBy90(arr, 4, 4);
            print(arr,4,4);
            return 0;
        }