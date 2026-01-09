#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1][n+1];
    ll v[2*n+1], s=0;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            cin>>a[i][j];
            v[i+j] = a[i][j];
        }
    }

    
    for(ll i=1; i<=2*n; i++)s+=i;
    ll f = 0;
    for(ll i=2; i<=2*n; i++) f+= v[i];
    v[1] = s-f;
    for(ll i=1; i<=2*n; i++)cout << v[i] << " ";
    cout << endl;

}

int main()
{
    int t;cin>>t;while(t--)solve();
}