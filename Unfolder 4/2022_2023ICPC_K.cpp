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
    ll n;
    cin>>n;
    ll a[n+1][n+1], sum=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }


    ll ans=0;
    ll mn = LLONG_MAX;
    for(ll i=1; i<=n; i++){
        mn = min(mn, a[i][n-i+1]);
    }
    cout << sum - mn << endl;
}


int main()
{
    int t;
    t = 1LL;
    while(t--)solve();
}

