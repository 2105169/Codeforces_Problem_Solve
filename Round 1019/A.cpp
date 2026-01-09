#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll ans=0;
    for(ll i=1; i<=n; i++){
        if(mp[i]>0)ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}