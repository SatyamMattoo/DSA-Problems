// 2D Arrays

#include <iostream>
using namespace std;

void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void colSum(int arr[][3], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;

        for (int  i= 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void rowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    print(arr, 3, 3);

    colSum(arr, 3, 3);
    rowSum(arr, 3, 3); 

    return 0;
}