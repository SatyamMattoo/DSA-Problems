// Sieve of Eratosthenes

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i*i ; j < n; j=j+i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int count = countPrimes(n);
    cout << "The number of prime numbers are " << count << endl;
    return 0;
}