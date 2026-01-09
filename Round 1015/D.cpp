#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;

    ll f ;
    if(k*(m+1)>n)f = k;
    else f = n/(m+1);
    for(ll i=0; i<n; i++)cout << i % f << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}