#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<0)a[i] = -a[i];
    }
    ll t=a[0];
    ll x = 0;
    for(ll i=0; i<n; i++){
        if(a[i]>t)x++;
    }

    if(n%2==0){
        ll f = n/2-1;
        if(x>=f)cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        ll f= n/2;
        if(x>=f)cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}