#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, j, k;
    cin>>n>>j>>k;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    if(k>1){
        cout<< "YES\n";
    }
    else{
        ll t = a[j-1];
        ll f=0;
        for(ll i=0; i<n; i++){
            if(a[i]>t)f++;
        }
        if(f>0)cout << "NO\n";
        else cout << "YES\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}