#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    if(n==1 || m==1 || (n==2 && m==2))cout << "NO\n";
    else cout << "YES\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}