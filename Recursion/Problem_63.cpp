// sum of all subsets

#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, int index, int sum, vector<int>& ans)
{
    if (index >= arr.size())
    {
        ans.push_back(sum);
        return ;
    }

    //not pick
    subsetSum(arr,index+1,sum,ans);

    //pick
    subsetSum(arr,index+1,sum+arr[index],ans);

}

vector<int> subset(vector<int> &arr)
{
    int index = 0;
    int sum=0;
    vector<int> ans;

    subsetSum(arr, index, sum, ans);

    return ans;
}

int main()
{
    vector<int> arr = {1,2,3};



    cout << "The sum of subsets are " << endl;

    vector<int> ans = subset(arr);

    for (auto i : ans)
    {
        cout << i << " ";
        cout << endl;
    }
    return 0;
}