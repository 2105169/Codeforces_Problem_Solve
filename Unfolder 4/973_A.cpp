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
    ll x, y;
    cin>>x>>y;
    ll t = min(x, y);
    ll ans = n/t;
    if(ans*t<n)ans++;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
