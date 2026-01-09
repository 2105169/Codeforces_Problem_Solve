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
    ll n, s, m;
    cin>>n>>s>>m;
    ll ans=0;

    ll x, y=0;
    for(ll i=0; i<n; i++){
        cin>>x;
        if(x-y>=s)ans++;
        cin>>y;
    }

    if(m-y>=s)ans++;

    if(ans>0)cout << "YES\n";
    else cout << "NO\n";


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


