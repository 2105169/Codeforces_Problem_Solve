#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

ll isqrt(ll x){
    ll t = sqrt(x) + 5;
    while(t*t>x)t--;
    return t;
}

void solve()
{
    ll n, m;
    cin>>n>>m;
    map<ll,ll> mp;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    for(ll i=0; i<n; i++){
        ll x = a[i], r = b[i];
        for(ll j=x-r; j<=x+r; j++){
            mp[j] = max(mp[j], 2*isqrt(r*r-(x-j)*(x-j))+1);
        }
    }
    ll ans=0;

    for(auto f:mp){
        ans += f.second;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}