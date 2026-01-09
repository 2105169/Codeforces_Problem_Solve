#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n, m, r, c;
    cin>>n>>m>>r>>c;
    ll ans=0;
    ans += (m-c);
    ans += (m-1)*(n-r);
    ans += (m)*(n-r);
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
