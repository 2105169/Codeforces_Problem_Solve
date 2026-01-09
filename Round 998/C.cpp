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
    ll n, k;
    cin>>n>>k;
    map<ll,ll> mp;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    ll ans=0;
    for(ll i=0; i<n; i++){
        if(mp[a[i]]>0){
            mp[a[i]]--;
            ll t = k-a[i];
            if(mp[t]>0){
                ans++;
                mp[t]--;
            }
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}