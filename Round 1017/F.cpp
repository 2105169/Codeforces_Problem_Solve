#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    ll t = m % k;
    t = max(t, 1LL);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll f = (i*t + j) % k + 1;
            cout << f << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}