#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n+1]={0};
    vector<ll> adj[n+1];
    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(ll i=1; i<=n; i++){
        a[i] = adj[i].size();
    }
    ll ans = 0;
    ll ind=1, mx = 0;
    for(ll i=1; i<=n; i++){
        if(a[i] > mx){
            mx = a[i];
            ind = i;
        }
    }

    ans = mx;
    ll cnt = 0;
    for(ll i=1; i<=n; i++){
        if(a[i] == mx){
            cnt++;
        }
    }

    if(cnt>2){
        ans = mx*2-1;
    }
    else{
        for(ll t:adj[ind]){
            a[t]--;
        }
        a[ind] = 0;
        ll mx2 = 0;
        for(ll i=1; i<=n; i++){
            if(a[i] > mx2){
                mx2 = a[i];
            }
        }
        ans += (mx2-1);
    }   
    cout << ans << endl;
    cout

}   

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
