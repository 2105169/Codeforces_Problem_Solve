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
    ll a1, a2, a4, a5;
    cin>>a1>>a2>>a4>>a5;
    ll ans=0;
    ll a3 = a1 + a2;
    ll t = 1;
    if(a2+a3==a4)t++;
    if(a3+a4==a5)t++;
    ans = max(ans, t);
    t = 0;
    a3 = a4-a2;
    t=1;
    if(a3+a4==a5)t++;
    ans = max(ans, t);
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}