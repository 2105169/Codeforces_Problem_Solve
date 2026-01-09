#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll f=1;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    for(ll i=1; i<n; i++){
        ll t = abs(a[i]-a[i-1]);
        if(t==5){
            f++;
        }
        else if(t==7){
            f++;
        }
        else{
            f=0;
            break;
        }
    }
    if(f>0)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}