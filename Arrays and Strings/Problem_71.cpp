#include <bits/stdc++.h>
using namespace std;
/*brute force
vector<int> solve(vector<int>  arr,vector<int>& ans)
{


    int i=0;

    while (i < arr.size())
    {


    int j = 0;
        int output = 1;
        while (j < arr.size())
        {
            if (i == j){
                j++;
                continue;
            }

            output *= arr[j++];
        }
        i++;
        ans.push_back(output);
    }
    return ans;
}
*/

// optimising the approach using lesser time complexity (O(n^2)-->O(n))
// for that we can take the product of the array by traversing it once and then dividing it
// with each positioned elemnt to get the desired output
// but we have another approach to do it with lesser space comlexity

vector<int> solve(vector<int> arr, vector<int> &ans)
{
    int n = arr.size();

    if (n < 1)
        return ans;

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
        ans.push_back(product);
    }

    ans[n - 1] = ans[n - 2];
    product = 1;

    for (int i = n - 1; i > 0; i--)
    {
        ans[i] = ans[i - 1] * product;
        product *= arr[i];
    }
    ans[0] = product;
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};

    vector<int> ans;
    ans = solve(arr, ans);

    cout << "The output array is " << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}