#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<vector<int>>& ans, vector<int> output, int index)
{
    // base case
    if (arr.size() <= index)
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr, ans, output, index + 1);

    // include
    int element = arr[index];
    output.push_back(element);
    solve(arr, ans, output, index + 1);
}

vector<vector<int>> subset(vector<int>& arr)
{
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    solve(arr, ans, output, index);

    return ans;
}

void print(vector<vector<int>> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    
    vector<vector<int>> ans;

    ans = subset(arr);

    cout << "The subsets are " << endl;
    print(ans);
    return 0;
}