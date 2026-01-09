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
    for(ll i=0; i<n; i++) cin>>a[i];

    ll s=0;
    for(ll i=0; i<n; i++) s+=a[i];
    ll sum=0;

    sum += s;

    map<ll, ll> mp;
    ll x=0;

    for(ll i=0; i<n; i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==2 )
        {
            x=max(x, a[i]);
        }

        a[i] = x;
    }

    mp.clear();
    x=0;
    for(ll i=0; i<n; i++){
        mp[a[i]]++;
    }

    ll prev=0;
    for(ll i=0; i<n; i++){
        if(mp[a[i]]==1){
            sum += a[i];
            ll t=n-1-i;
            sum += (t*prev);
        }
        else{
            ll t=n-i;
            sum += (t*a[i]);
            prev = a[i];
        }
    }


    cout << sum << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

