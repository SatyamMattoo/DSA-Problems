// Agressive cows Problem

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < n; i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = stalls[i];
        }
    }
    return false;
}
int agrresiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int e = stalls[n - 1];
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid, n))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> stalls;
    stalls.push_back(4);
    stalls.push_back(2);
    stalls.push_back(1);
    stalls.push_back(3);
    stalls.push_back(6);

    cout << "the ans is " << agrresiveCows(stalls, 3) << endl;

    return 0;
}