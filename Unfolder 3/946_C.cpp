#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    map<tuple<ll,ll,ll>, ll> mp;
    ll ans=0;
    for(ll i=0; i<n-2; i++){
        ans += (mp[{a[i], a[i+1], -1}] + mp[{a[i], -1 , a[i+2]}] + mp[{-1, a[i+1], a[i+2]}] - 3*(mp[{a[i], a[i+1], a[i+2]}]));
        mp[{a[i], a[i+1], -1}]++;
        mp[{a[i], -1, a[i+2]}]++;
        mp[{-1, a[i+1], a[i+2]}]++;
        mp[{a[i], a[i+1], a[i+2]}]++;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
