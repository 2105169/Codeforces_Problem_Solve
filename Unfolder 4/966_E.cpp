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
    ll n, m, k;
    cin>>n>>m>>k;
    ll w;
    cin>>w;
    ll a[w];
    for(ll i=0; i<w; i++)cin>>a[i];
    vector<ll>b;

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            ll r=min(k, min(i, n-i+1));
            r=min(r, n-k+1);
            ll c=min(k, min(j, m-j+1));
            c=min(c, m-k+1);
            b.push_back(r*c);
        }
    }
    sort(b.begin(), b.end(), greater<ll>());

    sort(a, a+w, greater<ll>());

    ll ans=0;
    for(ll i=0; i<w; i++){
        ll t=a[i];
        ll x=b[i];
        ans += (t*x);
    }
    cout << ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
