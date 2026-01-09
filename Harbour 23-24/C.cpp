#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    vector<ll> vt;
    vt.push_back(n);
    while(n != (n & -n)){
        ll x = n & -n;
        n -= x;
        vt.push_back(n);
    }

    while (n>1)
    {
        vt.push_back(n/=2);
    }
    
    
    cout << vt.size() << endl;
    for(ll i=0; i<vt.size(); i++)cout << vt[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}