#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

bool comp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first + a.second < b.first + b.second;
}

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vt;
    map<pair<ll,ll>, ll> mp;
    for(ll i=0; i<n; i++){
        ll a, b;
        cin>>a>>b;
        vt.push_back(make_pair(a, b));
    }

    sort(vt.begin(), vt.end(), comp);
    for(ll i=0; i<n; i++){
        cout << vt[i].first << " " << vt[i].second << " ";
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}