#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll l, r, g;
    cin>>l>>r>>g;
    ll a, b;

    a = l/g;
    if(l%g==0){
        a *= g;
    }
    else{
        a = (a+1)*g;
    }

    b = r/g;
    b *= g;

    if(b>=a){
    for(ll i=0; i<=(b-a)/g; i++){
        for(ll j=0; j<=i; j++){
            ll x = a + j*g, y = b - (i-j)*g;
            if(gcd(x, y)==g){
                cout << x << " "<< y << endl;
                return;
            }
        }
    }
    }
    cout << -1 << " " << -1 << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}