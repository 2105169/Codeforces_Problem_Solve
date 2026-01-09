
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


void solve(){
        ll n;
        cin>>n;

        vector<vector<ll>> vt(n+1);
        for(ll i=1; i<n; i++){
            ll u, v;
            cin>>u>>v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }

        ll ans=0, mx = 0;


        for(ll i=1; i<=n; i++){
            if(vt[i].size()>1){
                ll s=0;
                for(ll t:vt[i]){
                    if(vt[t].size() == 1)s++;
                }
                mx = max(mx, s);
                ans += s;
            }
        }


        cout << ans-mx << endl;
}

int main()
{
    int t;cin>>t;
    while(t--){
        solve();

    }
}
