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
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0; i<s.size(); i++)if(s[i]=='1')ans++;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}