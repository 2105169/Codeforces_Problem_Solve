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
    map<ll, ll> mp;
    ll mx=0;
    for(ll i=0; i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]>mx)mx=mp[a[i]];
    }
    cout << n-mx << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
