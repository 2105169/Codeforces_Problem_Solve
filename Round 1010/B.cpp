#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long



void solve()
{
    ll x, n, m;
    cin>>x>>n>>m;
    ll a = x, b = x;
    ll nn = n, mm = m;

    n = min(n, 32LL), m = min(m, 32LL);
    
    for(ll i=0; i<m; i++) a = (a+1)/2;
    a >>= n;

    b>>=n;
    for(ll i=0; i<m; i++) b = (b+1)/2;

    cout << a << " " << b << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}