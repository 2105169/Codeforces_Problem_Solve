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
    ll b[n];
    ll a[55]={0};
    for(ll i=0; i<n; i++){
            ll t;
    cin>>t;
    b[i]=t;
        a[t]++;
    }

    ll f=0;
    for(ll i=0; i<55; i++){
        if(a[i]%2==1){
            f++;
        }
    }
    if(f==0 && n%2==0)cout << "NO\n";
    else cout << "YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
