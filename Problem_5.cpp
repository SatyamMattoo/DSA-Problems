#include <iostream>
using namespace std;

int Sqrt(int n)
{
    int s = 0;
    int e = n / 2;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s < e)
    {
        if (mid * mid == n)
            return mid;

        if (mid * mid > n)
            e = mid - 1;

        if (mid * mid < n)
        {
            s = mid + 1;
            ans = mid;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double percision(int n, int per, int sqr)
{
    double fac = 1;
    double ans = sqr;
    for (int i = 0; i < per; i++)
    {
        fac = fac / 10;
        for (double j = ans; j * j < n; j = j + fac)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int sqr = Sqrt(n);
    cout << "The Square Root is: " << sqr << endl;

    double sq = percision(n, 5, sqr);
    cout << "The Precise Square Root is: " << sq << endl;

    return 0;
}