#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    // Base call 
    if (i > j)
        return;
    
    // Processing    
    swap(str[i], str[j]);

    // Recursive call 
    reverse(str, i + 1, j - 1);
}

int main()
{
    string str = "satyam";
    int size = 6;
    int i = 0;
    int j = str.length() - 1;

    reverse(str, i, j);

    cout << "The reversed string is " << str << endl;
    return 0;
}