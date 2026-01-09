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
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        ll t;
        cin>>t;
        mp[t]++;
    }
    ll ans = 0;
    for(ll i=0; i<=n; i++){
        ll x = mp[i]/2;
        ans+=x;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}