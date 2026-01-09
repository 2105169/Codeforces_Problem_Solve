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

    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    map<ll,ll> mp;
    for(ll i=0; i<n; i++)
    {
        ll t = a[i];
        mp[t]++;
    }
    for(ll i=0; i<n; i++)
    {
        ll t = b[i];
        mp[t]++;
    }


    ll f = 1;
    for(const auto &p:mp)
    {
        ll t = (p.second);
        if(t%2==1)
        {
            f=0;
            break;
        }
    }

    ll ans =1;
    if(f==1)
    {
        ll aa = 0;
        for(ll i=0; i<n; i++){
            ll t= 0;
            for(ll j=0; j<i; j++){
                if(a[j]>a[i]){
                    t++;
                }
            }
            aa +=t;
        }

        ll bb=0;
        for(ll i=0; i<n; i++){
            ll t=0;
            for(ll j=0; j<i; j++){
                if(b[j]>b[i])t++;
            }
            bb += t;
        }

        //cout << aa << " " << bb << endl;
        aa %=2;
        bb %=2;
        if(aa==bb)ans=1;
        else ans = 0;
    }
    else
    {
        ans = 0;
    }

    if(ans==1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

