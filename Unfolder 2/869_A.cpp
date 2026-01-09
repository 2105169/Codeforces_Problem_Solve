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
    ll n, q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll left[n];
    ll k=0;
    for(ll i=0; i<n-2; i++)
    {
        if(a[i]>=a[i+1] && a[i+1]>=a[i+2])
        {
            k++;
        }
        left[i] = k;
    }
    for(ll i=n-2; i<n; i++)left[i] = k;


    vector<ll> s;
    for(ll i=0; i<q; i++)
    {
        ll l, r;
        cin>>l>>r;
        l--, r--;
        ll t;
        if(r-l<2) s.push_back(r-l+1);
        else
        {
            ll x;
            if(l==0)x = 0;
            else x = left[l-1];
            t = left[r-2]-x;
            s.push_back(r-l+1-t);
        }
    }
    for(ll i=0; i<s.size(); i++)cout << s[i] << endl;
}


int main()
{
    int t=1;
    //cin>>t;
    while(t--)solve();
}

