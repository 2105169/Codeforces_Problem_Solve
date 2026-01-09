#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    ll a[m];
    for(ll i=0; i<m; i++)cin>>a[i];
    ll b[q];
    for(ll i=0; i<q; i++)cin>>b[i];

    sort(a, a+m);
    map<ll, ll> mp;
    for(ll i=0; i<m-1; i++){
        ll t = a[i+1]-a[i];
        mp[a[i]] = t/2;
    }
    mp[0] = a[0]-1;
    mp[a[m-1]] = n-a[m-1];

    vector<ll> c;
    c.push_back(0);
    for(ll i=0; i<m; i++){
        c.push_back(a[i]);
    }
    c.push_back(n);
    for(ll i=0; i<q; i++){
        ll x = b[i];
        ll l = 0, r = c.size()-1;
        while(1){
            ll mid = (l+r)/2;
            if(c[mid]<=x && x<=c[mid+1]){
                cout << mp[c[mid]] << endl;
                break;
            }
            else if(c[mid]<x){
                l = mid;
            }
            else r = mid;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}
