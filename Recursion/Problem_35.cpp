#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b){
    
    if(a==0)
    return b;

    if(b==0)
    return a;

    // Base case
    if(a==b)
    return a;


    if(a>b)
    return hcf(a-b,b);

    else
    return hcf(a,b-a);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int gcd = hcf(a, b);

    cout << "the hcf is " << gcd << endl;

    return 0;
}