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
    ll ans=1;
    ll x = 0;
    while(n>3){
        ll f = pow(2LL, x);
        n/= 4LL;
        x++;
        ans+= f;
    }

    cout << ans << endl;
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}