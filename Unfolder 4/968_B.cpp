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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a, a+n, greater<ll>());

    ll t=--n;
    t = t/2;

    cout << a[t] << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
