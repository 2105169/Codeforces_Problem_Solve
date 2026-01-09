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
    ll n, c, d;
    cin>>n>>c>>d;
    ll a[n*n], mn = LLONG_MAX;
    for(ll i=0; i<n*n; i++){
        cin>>a[i];
        if(a[i]<mn)mn=a[i];
    }
    map<ll, ll>mp;
    for(ll i=0; i<n*n; i++)
    {
        ll t=a[i];
        mp[t]++;
    }

    ll in=mn, f=0;
    for(ll j=0; j<n; j++)
    {
        for(ll i=0; i<n; i++)
        {
            ll t=(i)*d + in;
            if(mp[t]==0){
                f++;
            }
            else{
                mp[t]--;
            }
        }
        in += c;
    }

    if(f==0)cout << "YES\n";
    else cout << "NO\n";


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

