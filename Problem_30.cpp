// Bruteforce approach for rotating a matrix

#include <iostream>
#include <vector>
using namespace std;

void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] <<"  ";
        }
        cout << endl;
    }
}

void rotateBy90(vector<vector<int>> arr, int row, int col)
{
    int ans[4][4];

    int colIndex = col - 1;

    for (int mRow = 0; mRow < row; mRow++)
    {
        int rowIndex = 0;
        for (int nCol = 0; nCol < col; nCol++)
        {

            ans[rowIndex++][colIndex] = arr[mRow][nCol];
        }
        colIndex--;
    }
    print(ans, 4, 4);
}
int main()
{
    vector<vector<int>> arr{
        {1, 2, 3,99},
        {4, 5, 6,88},
        {7, 8, 9,77},
        {10,11,12,66},

    };

    rotateBy90(arr, 4, 4);
    return 0;
}