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
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    vector<pair<ll, ll>> vt;
    for(ll i=1; i<=n; i++){
        ll x = i-1;
        ll t = x + a[i];
        vt.push_back(make_pair(t, x));
    }

    sort(vt.begin(), vt.end());
    map<ll, ll> mp;
    for(ll i=vt.size()-1; i>=0; i--){
        ll x = max(vt[i].first+vt[i].second, mp[vt[i].first + vt[i].second]);
        mp[vt[i].first] = max(x, mp[vt[i].first]);
    }

    cout << max(n, mp[n]) << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
