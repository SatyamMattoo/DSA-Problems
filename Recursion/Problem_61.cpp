// combinations with sum equal to target (repetion allowed)
#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, int index, int sum, vector<vector<int>> &ans, vector<int> output)
{
    if (index == arr.size())
    {
        if (sum == 0)
            ans.push_back(output);
        return;
    }

    if (arr[index] <= sum)
    {
        output.push_back(arr[index]);
        subsetSum(arr, index, sum - arr[index], ans, output);
        output.pop_back();
    }

    subsetSum(arr, index + 1, sum, ans, output);
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

// void subseq(vector<int> arr, vector<vector<int>> &ans, vector<int> &output, int index)
// {
//     if (index == arr.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     output.push_back(arr[index]);
//     subseq(arr, ans, output, index + 1);
//     output.pop_back();

//     subseq(arr, ans, output, index + 1);
// }

// vector<vector<int>> numberOfArithmeticSlices(vector<int> &nums)
// {

//     vector<vector<int>> ans;
//     vector<int> output;
//     int index = 0;
//     subseq(nums, ans, output, index);

//     return ans;
// }
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
    vector<int> arr = {1, 2, 3, 4};

    int sum = 4;

    cout << "The subsets are " << endl;

    vector<vector<int>> ans = subset(arr,sum);

    print(ans);

    return 0;
}