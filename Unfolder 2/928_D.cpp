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
    ll arr[n][31];
    ll b[n];
    for(ll i=0; i<n; i++){
        ll t= a[i];
        for(ll j=0; j<31; j++){
            if(t&1)arr[i][j] = 1;
            else arr[i][j] = 0;
            t >>=1;
        }
        for(ll j=0; j<31; j++){
            arr[i][j]=arr[i][j]^1;
        }
        ll x=0;
        for(ll j=0; j<31; j++){
            x += (j+1)*2;
        }
        b[i] = x;
    }
    map<ll, ll> mp;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll t=b[i];
        mp[t]++;
        if(mp[t]==2)mp[t] = 0;
        else ans++;
    }
    cout << ans <<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
