#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base cases 
    if(b==0)
    return 1;
    if(b==1)
    return a;

    int ans=power(a,b/2);

    if (b & 1)
    {
        // odd case
        return a*ans*ans;

    }

    else
    {
    //    even case  
    return ans*ans;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    int pow = power(a, b);

    cout << "the ans is: " << pow << endl;
    return 0;
}