// keypad problem

#include <bits/stdc++.h>
using namespace std;

void solve(string digit, int index, vector<string>& ans, string output, string mapping[])
{
    // base case
    if (index >= digit.length()){
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, index + 1, ans, output, mapping);
        output.pop_back();
    }
}

vector<string> keypad(string &digits)
{
    int index = 0;
    vector<string> ans;
    string output = "";

    if (digits.length() == 0)
        return ans;

    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, index, ans, output, mapping);

    return ans;
}

int main()
{
    string digits = "345";

    cout << "The possible combinations are " << endl;

    vector<string> ans = keypad(digits);

    for (auto i : ans)
    {
        cout << i << " " << endl;
    }

    return 0;
}