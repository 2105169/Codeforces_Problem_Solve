#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll a, x, y;
    cin>>a>>x>>y;
    ll mn = min(x, y), mx = max(x, y);
    if(a>mn && a<mx)cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}