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
    ll a[n+1], b[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    for(ll i=1; i<=n; i++)cin>>b[i];
    ll x = 0, y = 0;
    x = a[n];
    for(ll i=n-1; i>=1; i--){
        if(a[i]>b[i+1]){
            x += a[i];
            y += b[i+1];
        }
    }
    cout << x-y << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}