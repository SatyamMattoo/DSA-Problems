#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s < e)
    {
        if (str[s] != str[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
}
int main()
{
    string s;
    cin >> s;

    if (Palindrome(s))
    {
        cout << "is a Palindrome" << endl;
    }
    else
    {
        cout << "is not a palindrome" << endl;
    }
    return 0;
}