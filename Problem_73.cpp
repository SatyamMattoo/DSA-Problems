#include <bits/stdc++.h>
using namespace std;

int minimumAverageDifference(vector<int> &nums)
{
    int n = nums.size();

    if (n <= 1)
        return 0;

    int leftSum[n];
    int rightSum[n];

    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + nums[i]);
        avg = sum / (i + 1);
        leftSum[i] = avg;
    }

    sum = nums[n - 1];
    rightSum[n - 1] = 0;
    int x = 1;
    avg = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        avg = sum / x++;
        rightSum[i] = avg;
        sum = (sum + nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << leftSum[i] << "  " << rightSum[i] << endl;
    }

    int minAvg = INT_MAX;
    int minSum = 0;
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        minSum = (leftSum[i] > rightSum[i]) ? (leftSum[i]) - (rightSum[i]) : (rightSum[i]) - (leftSum[i]);
        cout << minSum << endl;
        if (minSum < minAvg)
        {
            minAvg = minSum;
            minIndex = i;
        }
    }
    return minIndex;
}

int main()
{
    vector<int> arr = {4, 2, 0};

    int ans = minimumAverageDifference(arr);

    cout << ans << endl;

    return 0;
}