#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll mx=-100;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        mx = max(mx, a[i]);
    }

    vector<ll> ans;
    for(ll i=0; i<m; i++){
        char c;
        ll l, r;
        cin>>c>>l>>r;
        if(mx>=l && mx<=r){
            if(c == '-'){
                mx--;
            }
            else mx++;
        }
        ans.push_back(mx);
    }
    for(ll i=0; i<m; i++)cout << ans[i] << " ";
    cout << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
