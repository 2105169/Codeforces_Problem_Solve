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
    map<ll,ll> mp;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];
    ll ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(b[j]>0){
            ll t = a[i] + b[j];
                if(mp[t]==0){
                    ans++;
                    mp[t]++;
                    b[j] = 0;
                }
            }

        }
    }

    if(ans>2)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}