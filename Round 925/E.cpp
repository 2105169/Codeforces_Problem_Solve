#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    ll b[n][10], c[n], d[n], s = 0;
    for(ll i=0; i<n; i++){
        ll x = a[i];
        for(ll j=9; j>=0; j--){
            
            b[i][j] = x % 10;
            x /= 10;
        }
        ll f = 0;
        for(ll j=0;j<10; j++){
            if(b[i][j]==0)f++;
            else break;
        }
        c[i] = 10-f;
        s += c[i];
        f=0;
        for(ll j=9; j>=0; j--){
            if(b[i][j]==0)f++;
            else break;
        }
        d[i] = f;

    }

    sort(d, d+n, greater<ll>());

    ll k = 0;
    for(ll i=0; i<n; i+=2){
        k += d[i];
    }

   

    if(s-k>m)cout << "Sasha\n";
    else cout << "Anna\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}