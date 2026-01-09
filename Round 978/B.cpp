#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n, x;
    cin>>n>>x;
    ll s=0, m =0;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        s += a;
        m = max(m, a);
    }
    cout << max(m, (s+x-1)/x) << endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)solve();
}