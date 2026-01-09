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
    ll a[n+1];
    for(ll i=0; i<=n; i++)a[i] = -1e9;
    ll mx = 0;
    for(ll i=1; i<=n; i++){
        ll t;
        cin>>t;
        ll s = a[t];
        a[t] = max(mx-i, a[t]);
        mx = max(mx, s+i+1);
    }
    cout << mx << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
