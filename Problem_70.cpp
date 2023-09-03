// kth permutation for numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

string kPermutation(int n, int k)
{
    string ans = "";
    vector<int> numbers;
    int fac = 1;

    for (int i = 1; i < n; i++)
    {
        numbers.push_back(i);
        fac *= i;
    }
    numbers.push_back(n);

    k = k - 1;
    while (1)
    {

        ans += to_string(numbers[k / fac]);
        numbers.erase(numbers.begin() + k / fac);

        if (numbers.size() == 0)
            break;

        k %= fac;
        fac = fac / numbers.size();
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    string ans = kPermutation(n, k);

    cout << "The kth permutation is " << ans << endl;

    // vector <int> ans={1,2,3,4,5,6,7,8};
    // ans.erase(ans.begin()+6);

    // for(auto i: ans)
    // {
    //     cout << i << " ";
    //     cout << endl;
    // }

    return 0;
}