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
    ll n, m;
    cin>>n>>m;

    ll f = 0, t;
    map<ll,ll> ans;
    for(ll i=0; i<n; i++){
        map<ll,ll>mp;
        ll x = LLONG_MAX;
        for(ll j=0; j<m; j++){
            cin>>t;
            x = min(t, x);
            mp[t]++;
        }
        ans[x+1] = i+1;
        for(ll j=x; j<n*m; j+= n){
            if(mp[j]==0)f++;
        }
        mp.clear();
    }
    if(f==0){
        for(ll i=0; i<n; i++)cout << ans[i+1] << " ";
        cout << endl;
    }
    else cout << -1 << endl;
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}