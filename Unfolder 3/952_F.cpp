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
    ll h, n;
    cin>>h>>n;
    ll a[n], c[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>c[i];
    ll ans=0;
    ll l=0, r=1e12;
    while(l<=r){
        ll mid = (l+r)/2;
        ll damage = 0;
        for(ll i=0; i<n; i++){
            ll t = (mid+c[i]-1)/c[i];
            damage += (t*a[i]);
            if(damage>=h)break;
        }
        if(damage>=h){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
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

