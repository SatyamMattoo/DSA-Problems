// no duplicate subsets with sum equal to target

#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, int index, int sum, vector<vector<int>> &ans, vector<int> output)
{
    if (sum == 0)
    {
        ans.push_back(output);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (index < i && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > sum)
            break;

        output.push_back(arr[i]);
        subsetSum(arr, i + 1, sum - arr[i], ans, output);
        output.pop_back();
    }
}

vector<vector<int>> subset(vector<int> &arr, int sum)
{
    int index = 0;
    vector<vector<int>> ans;
    vector<int> output;
    int s = 0;
    subsetSum(arr, index, sum, ans, output);

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
    vector<int> arr = {1, 1, 1, 2, 2};

    int sum = 4;

    cout << "The subsets are " << endl;

    vector<vector<int>> ans = subset(arr, sum);

    print(ans);

    return 0;
    
}