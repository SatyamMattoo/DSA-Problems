// N Queens Problem
#include <bits/stdc++.h>
using namespace std;

void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n, vector<int>& lRow, vector<int>& upperDiagonal, vector<int>& lowerDiagonal)
{
    if (col >= n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (lRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[(n - 1) + (col - row)] == 0)
        {
            board[row][col] = 'Q';
            lRow[row] =  1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[(n - 1) + (col - row)] = 1;
            solve(col + 1, board, ans, n, lRow, upperDiagonal, lowerDiagonal);
            board[row][col] = '_';
            lRow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[(n - 1) + (col - row)] = 0;
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
    vector<int> lRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
    solve(0, board, ans, n, lRow, upperDiagonal, lowerDiagonal);
    return ans;
}

void print(vector<vector<string>> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i][j];
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
