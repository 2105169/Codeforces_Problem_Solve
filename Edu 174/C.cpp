#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

#define mod 998244353LL


void solve()
{
    ll n;
    cin>>n;
    
    
    
    ll d[4]={0};
    d[0] = 1;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x==2){
            d[x] = (d[x]*2) % mod;
        }
        d[x] = (d[x]+d[x-1])%mod;
    }

    cout << d[3] << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}