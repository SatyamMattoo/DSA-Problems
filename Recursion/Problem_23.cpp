#include <iostream>
using namespace std;

bool Palindrome(string str, int i, int j)
{
    if (i > j)
    {
       return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return Palindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "acbbcda";
    bool bol = Palindrome(str, 0, str.length() - 1);
    if (bol)
    {
        cout << "is a palindrome" << endl;
    }
    else
    {
        cout << "is not a palindrome " << endl;
    }
    return 0;
}