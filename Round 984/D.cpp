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
    ll n, m;
    cin>>n>>m;
    ll a[n+1][m+1];
    for(ll i=1; i<=n; i++){
        string s;
        cin>>s;
        for(ll j=0; j<m; j++){
            ll g = s[j] - 48;
            a[i][j+1] = g;
        }
    }

    ll t = min(n, m);
    t = t/2;
    ll ans=0;
    for(ll i=1; i<=t; i++){
        vector<ll> vt;
        for(ll j=i+1; j<=m-i+1; j++){
            vt.push_back(a[i][j]);
        }
        for(ll j=i+1; j<= n-i+1; j++){
            vt.push_back(a[j][m-i+1]);
        }
        for(ll j=m-i; j>=i; j--){
            vt.push_back(a[n-i+1][j]);
        }
        for(ll j=n-i; j>=i; j--){
            vt.push_back(a[j][i]);
        }
        ll b = vt.size();
        for(ll j=0; j<vt.size(); j++){
            ll x = j % b;
            ll y = (j+1) % b;
            ll w = (j+2) % b;
            ll z = (j+3) % b;
            if(vt[x]==1 && vt[y]==5 && vt[w] == 4 && vt[z] == 3){
                ans++;
            }
        }
        vt.clear();
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}