#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    ll x = (k+n-1)/n;
    ll y = m-x;
    y++;
    cout << (x+y-1)/y << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}