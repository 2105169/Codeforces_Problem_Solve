#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n;i++)cin>>a[i];
    ll ans=LLONG_MAX;
    for(ll i=1; i<n; i++){
        ll t=max(a[i-1], a[i]);
        t--;
        if(t<ans) ans=t;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
