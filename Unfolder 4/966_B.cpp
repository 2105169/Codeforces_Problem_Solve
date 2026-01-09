#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n+2]={0};
    ll t;
    cin>>t;
    b[t]=1;
    ll ans=0;
    for(ll i=1; i<n; i++){
        ll x;
        cin>>x;
        if(b[x-1]==0 && b[x+1]==0){
            ans++;
        }
        else{
            b[x]=1;
        }
    }
    if(ans==0)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
