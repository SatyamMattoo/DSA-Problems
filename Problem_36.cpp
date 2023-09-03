// fast or exponential power

#include <iostream>
using namespace std;

int modPower(int x, int n)
{

    int long long m = 1000000000 ;

    int res = 1;

    while (n != 0)
    {
        if (n & 1) // odd case
        {
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    int power = modPower(a, b);

    cout << "The ans is " << power << endl;
    return 0;
}