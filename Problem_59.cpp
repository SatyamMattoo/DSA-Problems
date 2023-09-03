#include <bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> &ans, int index)
{
    if (index >= s.size())
    {
        ans.push_back(s);
        return ;
    }

    for (int i = index; i < s.length(); i++)
    {
        swap(s[index], s[i]);
        solve(s, ans, index + 1);
        // backtracking
        swap(s[index], s[i]);
    }
}

vector<string> permutation(string &s)
{
    int index = 0;
    vector<string> ans;

    if (s.length() == 0)
        return ans;

    solve(s, ans, index);

    return ans;
}

int main()
{
    string s = "abs";

    vector<string> ans = permutation(s);

    cout << "The possible combinations are " << endl;

    for (auto i : ans)
    {
        cout << i << " " << endl;
    }

    return 0;
}