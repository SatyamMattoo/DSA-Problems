#include <iostream>
using namespace std;

bool palindrome(string s,int i,int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }

    return palindrome(s,++i,--j);
}

int main()
{
    string s = "racecar";

    int i=0;
    int n=s.length();
    if (palindrome(s, i, n-i-1))
        cout << "It is a Palindrome" << endl;
    else
        cout << "It is a not Palindrome" << endl;
    return 0;
}