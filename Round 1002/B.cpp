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
    ll n, k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    if(n==2){
        if(a[2]==1)cout<<2 << endl;
        else cout << 1 << endl;
    }
    else if(n>k){
        ll f = 0;
        for(ll i=2; i<=n-(k-2); i++){
            if(a[i] != 1){
               f++;
            }
        }
        if(f>0)cout << 1 << endl;
        else cout << 2 << endl;
    }
    else{
        ll x=0;
        vector<ll> vt;
        for(ll i=2; i<=n; i+=2)vt.push_back(a[i]);
        for(ll i=0; i<vt.size(); i++){
            if(i+1 != vt[i]){
                cout << i+1 << endl;
                x=1;
                break;
            }
        }
        if(x==0)cout << vt.size()+1 << endl;
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}