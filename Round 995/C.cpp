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

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    ll a[m], b[k];
    for(ll i=0; i<m; i++)cin>>a[i];
    for(ll i=0; i<k; i++)cin>>b[i];

    if(n==k){
        for(ll i=0; i<m; i++){
            cout << 1;
        }
        cout << endl;
    }
    else if(n-1==k){
        map<ll, ll> mp;
        for(ll i=0; i<k; i++)mp[b[i]]++;

        for(ll i=0; i<m; i++){
            if(mp[a[i]]==0)cout<<1;
            else cout << 0;
        }
        cout << endl;
    }
    else {
        for(ll i=0; i<m; i++)cout << 0;
        cout << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}