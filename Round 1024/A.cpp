#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, p, q;
    cin>>n>>m>>p>>q;
    if(n%p==0){
        ll t = n/p;
        if(t*q==m)cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "YES\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}