#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a=0, b=0;
    for(ll i=0; i<n; i++){
        ll x, y;
        cin>>x>>y;
        a ^= x;
        b ^= (x+y);
    }
    cout << a << " " << b-a << endl;
}


int main()
{
    int t;cin>>t;while(t--)solve();
}