#include <bits/stdc++.h>
using namespace std;

bool isSeq(vector<int> arr)
{
    if (arr.size() < 3)
        return false;

    vector<unsigned long> ans(arr.begin(), arr.end());
    unsigned long val = ans[1] - ans[0];
    for (int i = 2; i < arr.size(); i++)
    {
        if (ans[i] - ans[i - 1] != val)
            return false;
    }
    return true;
}

void subseq(vector<int> arr, vector<vector<int>> &ans, vector<int> output, int index)
{
    if (index == arr.size())
    {
        if (isSeq(output))
            ans.push_back(output);
        return;
    }

    output.push_back(arr[index]);
    subseq(arr, ans, output, index + 1);
    output.pop_back();

    subseq(arr, ans, output, index + 1);
}

vector<vector<int>> subset(vector<int> &nums)
{

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    subseq(nums, ans, output, index);

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
    vector<int> arr = {2, 4, 6, 8, 10};

    cout << "The subsets are " << endl;

    vector<vector<int>> ans = subset(arr);

    cout << ans.size() << endl;

    print(ans);
    return 0;
}