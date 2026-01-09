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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        if(mp[a[i]]){
            mp[a[i]]--;
        }
        else{
            ans++;
            ll t = pow(2LL,31)-1;
            t = t ^ a[i];
            mp[t]++;
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