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
    ll k;
    cin>>k;
    map<ll, ll> mp;
    ll t = k-2;
    for(ll i=1; i<=k; i++){
        ll x;
        cin>>x;
        if(t % x==0){
            mp[x]++;
        }
    }

    for(ll i=1; i<=k; i++){
        if(t%i==0){
            if(mp[i]>0){
                ll f = t/i;
                if(mp[f]>0){
                    cout << i << " " << f << endl;
                    break;
                }
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}