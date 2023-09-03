#include <bits/stdc++.h>
using namespace std;
bool palindrome(string str, int s, int e)
{

    while (s < e)
    {
        if (str[s++] != str[e--])
            return false;
    }
    return true;
}

void solve(string s, int index, vector<vector<string>> &ans, vector<string> &output)
{
    // base case
    if (index == s.size())
    {
        ans.push_back(output);
        return;
    }

    for (int i = index; i < s.size(); i++)
    {
        if (palindrome(s, index, i))
        {
            output.push_back(s.substr(index, i - index + 1));
            solve(s, i + 1, ans, output);
            output.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s)
{
    int index = 0;
    vector<vector<string>> ans;
    vector<string> output;

    solve(s, index, ans, output);

    return ans;
}

void print(vector<vector<string>> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    string s;
    cin >> s;

    // cout << s.substr(2,1) << endl;

    vector<vector<string>> ans = partition(s);

    cout << "The ans are " << endl;

    print(ans);
    return 0;
}