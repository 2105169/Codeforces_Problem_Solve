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
    ll n, m;
    cin>>n>>m;
    ll px, py, ppx, ppy;
    ll ans=n*4*m;
    cin>>px>>py;
    px += m;
    py += m;
    for(ll i=0; i<n-1; i++){
        cin>>ppx>>ppy;
        ll t = abs(m-ppx) + abs(m-ppy);
        ans -= (t*2);
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}