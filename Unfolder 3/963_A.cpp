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
    string s;
    cin>>s;
    ll a=0, b=0, c=0, d=0;
    for(ll i=0; i<4*n; i++){
        if(s[i]=='A')a++;
        else if(s[i]=='B')b++;
        else if(s[i]=='C')c++;
        else if(s[i]=='D')d++;
    }
    ll ans=0;
    ll t=min(a, n);
    ans+=t;
    t=min(b, n);
    ans+=t;
    t=min(c, n);
    ans+=t;
    t=min(d, n);
    ans+=t;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
