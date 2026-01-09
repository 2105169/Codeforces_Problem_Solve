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
    ll a[n+1];
    for(ll i=1; i<=n; i++)cin>>a[i];
    ll s[n+1];
    for(ll i=1; i<=n; i++){
        char t;
        cin>>t;
        if(t=='0')s[i] = 1;
        else s[i] = 0;
    }
    map<ll, ll> mp;
    ll c[n];
    for(ll i=1; i<=n; i++){
        ll j=i;
        ll ans=0;
        if(mp[j]==0){
            ll p=1;
            ans += s[j];
            mp[j]++;
            vector<ll> t;
            t.push_back(j);
            while(p){
                ll x=a[j];
                if(mp[x]==0){
                    ans += s[x];
                    mp[x]++;
                    j=x;
                    t.push_back(j);
                }
                else {
                    for(ll k=0; k<t.size(); k++){
                        ll m=t[k];
                        c[m] = ans;
                    }
                    t.clear();
                    p = 0;
                }
            }
        }
    }
    for(ll i=1; i<=n; i++)cout << c[i] << " ";
    cout << endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
