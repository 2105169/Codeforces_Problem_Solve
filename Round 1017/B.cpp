#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, l, r;
    cin>>n>>m>>l>>r;
    ll x = 0;
    ll y = min(r, m);
    x = y - m;
    cout << x << " " << y << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}