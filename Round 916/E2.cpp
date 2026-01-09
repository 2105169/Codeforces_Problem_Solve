#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=0; i<n; i++)cin>>b[i];

    vector<pair<ll, pair<ll,ll>>> vt;
    for(ll i=0; i<n; i++){
        ll x = a[i] + b[i] -1;
        vt.push_back(make_pair(x, make_pair(a[i]-1, b[i]-1)));
    }

    sort(vt.rbegin(), vt.rend());
    ll s = 0, t = 0;
    for(ll i=0; i<n; i++){
        if(i%2){
            t += vt[i].second.second;
        }
        else{
            s += vt[i].second.first;
        }
    }
    cout << s-t << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}