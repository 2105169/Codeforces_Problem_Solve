
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
    string s, t;
    cin>>s>>t;
    ll f=0, r=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='1')f=1;
        if(s[i]=='0' && t[i]=='1' && f==0){
          r=1;
          break;
        }
    }
    if(r==1)cout << "NO\n";
    else cout << "YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
