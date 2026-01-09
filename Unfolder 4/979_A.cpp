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
    sort(a, a+n);
    ll mx = a[n-1];
    ll mn = a[0];
    ll b[n], c[n];
    b[0] = mx;
    for(ll i=1; i<n; i++)b[i] =  mn;
    for(ll i=0; i<n; i++)c[i] = mx;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll x = c[i]-b[i];
        ans += x;
    }

    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

