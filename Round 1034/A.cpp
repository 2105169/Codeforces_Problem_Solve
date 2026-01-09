#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    if(n%4==0)cout << "Bob\n";
    else cout << "Alice\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}