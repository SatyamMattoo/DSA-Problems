// Sum of arrays

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> ans)
{
    int s = 0;
    int e = ans.size() - 1;

    while (s < e)
    {
        swap(ans[s++], ans[e--]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return ans;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6};

    int i = 4;
    int j = 2;

    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = arr1[i] + arr2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    // First case
    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
    }

    // Second case
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        j--;
    }

    // Third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans);

    
    return 0;
}