// subsets with a sum equal to sum.

#include <iostream>
#include <vector>
using namespace std;

void subsetSum(vector<int> arr, int index, int sum, vector<vector<int>> &ans, vector<int> output)
{

    // base case
    if (index >= arr.size())
    {
        if (sum == 0)
        {
            ans.push_back(output);
        }
        return;
    }

    subsetSum(arr, index + 1, sum, ans, output);
    if(sum>0){
    output.push_back(arr[index]);
    subsetSum(arr, index + 1, sum - arr[index], ans, output);
    output.pop_back();
    sum += arr[index];
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
    vector<int> arr = {1, 2, 1};

    int sum = 2;

    cout << "The subsets are " << endl;

    vector<vector<int>> ans = subset(arr, sum);

    print(ans);

    return 0;
}