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
    ll a[n], b[n];
    for(ll i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    ll x, y, t, r;
    cin>>x>>y>>t>>r;

    ll d=((x-t)*(x-t)+(y-r)*(y-r));
    ll f=0;
    for(ll i=0; i<n; i++){
        ll m=((t-a[i])*(t-a[i])+(r-b[i])*(r-b[i]));
        if(m<=d)f++;

    }
    if(f==0)cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
