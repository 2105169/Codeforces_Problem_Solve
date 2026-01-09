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
    ll x=a[n-2];
    for(ll i=n-3; i>=0; i--) x -= a[i];
    cout << a[n-1]-x << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
