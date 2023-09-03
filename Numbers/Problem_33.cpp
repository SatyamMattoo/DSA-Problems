// Sieve problems
// kth prime number 
#include <bits/stdc++.h>
using namespace std;

int n = 86028121;
bool sieve[86028121 + 1];
vector<int> ds;

void createsieve()
{
    // initialising sieve as 1
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = 1;
    }
    // Creating a sieve 
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
            
        }
    }

    // creating an array of prime numbers 
    for (int i = 2; i <= n; i++)
    {
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }

    /*
    int limit=5*1000000;
    int cnt=0;
    int size=1;

    for (int i=2;;i++){
        if (sieve[i]==true){
            cnt++;
        }
        if(cnt==limit){
            size=i;
            break;
        }
    }
    cout << size << endl;*/
}

int main()
{
    createsieve();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << ds[k-1] << endl;
    }

    return 0;
}