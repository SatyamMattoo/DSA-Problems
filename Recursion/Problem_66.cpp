// permutation less optimised method, uses extra space complexity

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<vector<int>> &ans, bool *map, vector<int> output)
{
    if (arr.size() == output.size())
    {
        ans.push_back(output);
        return ;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (map[i] == 0)
        {
            output.push_back(arr[i]);
            map[i] = 1;

            solve(arr, ans, map, output);
            output.pop_back();
            map[i] = 0;
        }
    }
}

vector<vector<int>> permutation(vector<int> arr)
{
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    bool map[arr.size()] = {0};


    if (arr.size() == 0)
        return ans;

    solve(arr, ans, map, output);

    return ans;
}

void print(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> ans = permutation(arr);

    cout << "The possible combinations are " << endl;
    print(ans);

    return 0;
}