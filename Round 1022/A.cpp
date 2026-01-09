#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll x = n, s=0;
    for(ll i=1; i<=n; i++){
        s += abs(i-x);
        x--;
    }
    cout << s/2 + 1 << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}