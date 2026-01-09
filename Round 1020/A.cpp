#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0, c=0;
    for(ll i=0; i<s.size(); i++)if(s[i]=='1')c++;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='1')ans += (c-1);
        else ans += (c+1);
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}