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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];

    for(ll i=0; i<n-1; i++){
        ll t = min(a[i], a[i+1]);
        a[i] = a[i] - t;
        a[i+1] = a[i+1] - t;
    }

    ll f = 0;
    for(ll i=0; i<n-1; i++){
        if(a[i]>a[i+1])f++;
    }

    if(f==0)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}