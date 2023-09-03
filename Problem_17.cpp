// Strings

#include <iostream>
#include <vector>
using namespace std;

// Length of string
int length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

//   Reverse a string
string reverse(string &s)
{
    int st = 0;
    int e = length(s) - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
    
    
    return s;
}

// Palindrome or not
bool checkPalindrome(string s)
{
    if (s == reverse(s))
    {
        return true;
    }
    return false;
}

// To Lower case
char toLowerCase(char s)
{
    if (s >= 'a' && s <= 'z')
    {
        cout << s << endl;
    }
    else
    {
        char temp = s - 'A' + 'a';
        cout << temp <<endl;
    }
}



int main()
{
    string s1;

    cout << "Enter String" << endl;
    cin >> s1;

    cout << "Length of Char Array is   " << length(s1) << endl;

    reverse(s1);

     cout << "Reversed string is   " << s1 << endl;

    if (checkPalindrome(s1))
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }

    toLowerCase('U');
    return 0;
}
