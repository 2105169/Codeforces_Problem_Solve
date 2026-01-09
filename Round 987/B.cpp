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

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll ans=0;
    for(ll i=1; i<=n; i++){
        ll x = a[i];
        ll f = abs(x-i);
        if(f>1)ans++;
    }
    if(ans>0)cout << "NO\n";
    else cout << "YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}