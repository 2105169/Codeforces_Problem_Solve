#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
    for(ll i=2; i<n; i++){
        if(s[i-2]!=s[i])ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}