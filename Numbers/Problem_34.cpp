// Factorisation problem

#include <bits/stdc++.h>
using namespace std;

int n = 1000000;
int prime[1000000 + 1];

void createsieve()
{
    for (int i = 0; i <= n; i++)
    {
        prime[i] = i;
    }
    
    for(int i=2;i*i<=n;i++){
        if(prime[i]==i){
            for(int j=i*i;j<=n;j=i+j){
                prime[j]=i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    createsieve();

    while(n!=1){
        cout << prime[n] <<" ";
        n=n/prime[n];
    }
    
    return 0;
}