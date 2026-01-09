#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string s;
    cin>>s;
    map<ll,ll>mp;
    ll ans=0;
    for(ll i=0; i<s.size(); i++){
        ll t = s[i] - 'a';
        if(mp[t]==1){
            mp[t] = 0;
            for(ll i=0; i<26; i++){
                ans += mp[i];
                mp[i] = 0;
            }
        }
        else mp[t]++;
    }
    for(ll i=0; i<26; i++)ans+=mp[i];
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}