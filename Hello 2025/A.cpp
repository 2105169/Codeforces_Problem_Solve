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
    ll x = max(n, m);
    cout << 1+x << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}