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
    n-=2;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll s=0;
    for(ll i=0; i<n-2; i++){
        if(a[i]==1 && a[i+1] == 0 && a[i+2] == 1)s++;
    }
    if(s>0)cout << "NO\n";
    else cout << "YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}