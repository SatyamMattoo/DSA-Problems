#include <bits/stdc++.h>
using namespace std;

int Median(vector<int> &arr1, vector<int> &arr2)
{
    if (arr1.size() > arr2.size())
        return Median(arr2, arr1);

    int n1 = arr1.size();
    int n2 = arr2.size();

    int low = 0;
    int high = n1;

    while (low <= high)
    {
        int cut1 = (low + high) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        // cout << cut1 << "  " << cut2 <<endl;
        // cout << endl;

        int left1 = (cut1 == 0) ? INT32_MIN : arr1[cut1 - 1];
        int left2 = (cut2 == 0) ? INT32_MIN : arr2[cut2 - 1];

        int right1 = (cut1 == n1) ? INT32_MAX : arr1[cut1];
        int right2 = (cut2 == n2) ? INT32_MAX : arr2[cut2];

        // cout << left1 << "  " << left2 << endl;
        // cout << right1 << " " << right2 << endl;

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                int ans = (max(left1, left2) + min(right1, right2)) / 2;
                return ans;
            }
            else
            {
                return max(left1, left2);
            }
        }
        else if (left1 > right2)
        {
            high = cut1 - 1;
        }  
         
        else //if(left2>right1)
        {
            low = cut1 + 1;
        }
    }
    // return 0;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 9, 11};
    vector<int> arr2 = {7, 12, 14, 15};

    int median = Median(arr1, arr2);

    cout << "The median of two arrays is " << median << endl;

    return 0;
}