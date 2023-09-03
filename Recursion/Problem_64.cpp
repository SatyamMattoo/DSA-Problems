// no duplicate subsets with sum equal to target

#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, int index, vector<vector<int>> &ans, vector<int> output)
{
    ans.push_back(output);

    for (int i = index; i < arr.size(); i++)
    {
        if (arr[i - 1] == arr[i] && index < i)
        {
            continue;
        }
        output.push_back(arr[i]);
        subsetSum(arr, i + 1, ans, output);
        output.pop_back();
    }
}

vector<vector<int>> subset(vector<int> &arr)
{
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    subsetSum(arr, index, ans, output);

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
    vector<int> arr = {1, 2, 2, 2, 3, 3};

    cout << "The subsets are " << endl;

    vector<vector<int>> ans = subset(arr);

    print(ans);

    return 0;
}