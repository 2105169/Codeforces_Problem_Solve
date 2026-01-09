#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        ll t = a[i];
        for(ll j=2; j*j<=t; j++){
            while(t%j==0){
                mp[j]++;
                t /= j;
            }
        }
        if(t>1)mp[t]++;
    }

    ll d = 1;
    for(auto f:mp){
        if(f.second % n)d=0;
    }
    if(d==0)cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}