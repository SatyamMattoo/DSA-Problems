#include <iostream>
using namespace std;

void reverse(string&  s, int i, int j){
   
    // base case
    if(i>j){
        return;
    }

    // processing
    swap(s[i++],s[j--]);

    // recursive call 
    return reverse(s,i,j);

}

int main()
{
    string s = "absere";
    int length = s.length();

    int i=0;
    int j=length-1;

    reverse (s,i,j);

    cout << "the reversed string is " << s <<endl;
    return 0;
}