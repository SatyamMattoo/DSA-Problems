#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return (solve(n - 1, k) + k) % n;
}

int findTheWinner(int n, int k)
{
    int ans = solve(n, k);
    return ans + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = findTheWinner(n, k);

    cout << ans << endl;

    return 0;
}