// N Queens Problem
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int col, int row, vector<string> board, int n)
{
    int duplRow = row;
    int duplCol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }

    row = duplRow;
    col = duplCol;

    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    row = duplRow;
    col = duplCol;

    while (col >= 0 && row < n)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
        row++;
    }
    return true;
}

void solve(int col, vector<string>& board, vector<vector<string>> &ans, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(col, row, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, ans, n);
            board[row][col] = '_';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '_');

    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    solve(0, board, ans, n);
    return ans;
}
 
void print(vector<vector<string>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] ;
        cout << endl;
        }
    cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;


    vector<vector<string>> str = solveNQueens(n);

    print(str);

    return 0;
}
