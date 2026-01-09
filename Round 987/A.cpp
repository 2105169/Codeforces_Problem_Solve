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
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        mp[a]++;
    }

    ll ans = 0;
    for(ll i=0; i<n+1; i++){
        ans = max(ans, mp[i]);
    }
    cout << n-ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}