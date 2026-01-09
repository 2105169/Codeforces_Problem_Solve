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
    string s;
    cin>>s;
    ll a=0, b=0;
    ll ans=0;
    if(s[0]=='1' || s[n-1]=='1')ans++;
    for(ll i=0; i<n-1; i++){
        if(s[i]=='1' && s[i+1]=='1')ans++;
    }
    if(ans>0)cout << "YES\n";
    else cout << "NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

