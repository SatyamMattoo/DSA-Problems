#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reverse(string &s)
{

    int st = 0;
    int e = s.length() - 1;

    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
        cout << s << endl;
    return s;
}
int main()
{
    string str;
    string ans;
    getline(cin, str);
    int e = 0;
    while (e < str.length())
    {
        string temp;
        if (str[e] != ' ')
        {
            temp = temp + str[e];
            e++;
        }
        else
        {
            ans = reverse(temp) + " ";
            e++;
        }
        
    }
        cout << "the ans is" << endl;
    cout << ans << endl;
    return 0;
}