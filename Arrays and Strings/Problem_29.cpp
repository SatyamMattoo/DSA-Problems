// Sprial print in 2D array

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> ans, int size){
    for(int i=0;i<size;i++){
        cout << ans[i] << " " ;
    }
    cout << endl;
}

void spiralPrint(vector<vector<int>> arr, int row, int col)
{
    int count = 0;
    int total = row * col;

    vector<int> ans;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // printing Starting Row 
        for (int index = startingCol; index <=endingCol && count < total; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // Printing ending col
        for (int index = startingRow ;index <= endingRow && count < total; index++)
        {
            ans.push_back(arr[index][endingCol]);
            count++;
        }   
        endingCol--;

        // Printing ending row
        for (int index = endingCol; index >= startingCol  && count < total; index--)
        {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        // Printing starting Col 
        for (int index = endingRow; index >= startingRow  && count < total; index--)
        {
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
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

    spiralPrint(arr, 3, 3);

    return 0;
}