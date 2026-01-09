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
    ll n, m1, m2;
    cin>>n>>m1>>m2;
    map<pair<ll,ll>, ll> g, f;

    for(ll i=0; i<m1; i++){
        ll u, v;
        cin>>u>>v;
        f[make_pair(u, v)]++;
        f[make_pair(v, u)]++;
    }

    ll ans=0;
    for(ll i=0; i<m2; i++){
        ll u, v;
        cin>>u>>v;
        if(f[make_pair(u, v)]>0 || f[make_pair(v, u)]>0){
            ans++;
            if(f[make_pair(u, v)]>0)f[make_pair(u, v)]--;
            if(f[make_pair(v, u)]>0)f[make_pair(v, u)]--;
        }
    }

    cout << m1+m2-2*ans << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}