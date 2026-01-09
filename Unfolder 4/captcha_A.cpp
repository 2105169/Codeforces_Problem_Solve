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
    map<ll, ll>mp;
    for(ll i=0; i<n; i++){
        ll t;
        cin>>t;
        mp[t]++;
    }
    cout <<mp.size() << endl;
}


int main()
{
    int t;
    t = 1;
    while(t--)solve();
}
