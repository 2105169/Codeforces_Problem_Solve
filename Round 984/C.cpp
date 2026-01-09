#include<bits/stdc++.h>


#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll n = s.size();
    ll a[n+1];
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            a[i+1] = 0;
        }
        else{
            a[i+1] = 1;
        }
    }

    ll ans=0;
    for(ll i=1; i<=n-3; i++){
        if(a[i]==1 && a[i+1]==1 && a[i+2]==0 && a[i+3]==0){
            ans++;
        }
    }

    ll q;
    cin>>q;
    for(ll i=0; i<q; i++){
        ll t, u;
        cin>>t>>u;
        
            ll f = 0, r=0;
            ll in = 1;
            ll e = max(in, t-3);
            ll g = min(n-3, t);
            for(ll j = e; j<=g; j++){
                if(a[j]==1 && a[j+1]==1 && a[j+2]==0 && a[j+3]==0){
                    f++;
                }
            }
            a[t] = u;
            for(ll j=e; j<=g; j++){
                if(a[j]==1 && a[j+1]==1 && a[j+2]==0 && a[j+3]==0){
                    r++;
                }
            }
            ans += (r-f);
            if(ans>0)cout << "YES\n";
            else cout << "NO\n";
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}