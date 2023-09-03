// Counting the number of ways to reach nth stair

#include <iostream>
using namespace std;

int countStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return countStairs(n - 1) + countStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;

    int ans = countStairs(n);

    cout << "The numner of ways are " << ans << endl;
    return 0;
}