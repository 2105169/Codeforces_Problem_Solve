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
    ll n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;
    ll v1[m+10], v2[m+10];

    for(ll i=0, j=0; j<m;i++){
        if(s[i]==t[j])v1[j++] = i;
    }
    for(ll i=n-1, j=m-1; j>=0; i--){
        if(s[i]==t[j])v2[j--] = i;
    }
    ll ans=0;
    for(ll i=0; i<m-1; i++){
        ans = max(ans, v2[i+1]-v1[i]);
    }
    cout << ans << endl;
}


int main()
{
    int t;
    t=1;
    while(t--)solve();
}

