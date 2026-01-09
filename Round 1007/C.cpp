
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


vector<ll> vt[200010];
vector<ll> ans;

void dfs(ll ch, ll pa){
    ans.push_back(ch);
    for(ll i: vt[ch]){
        if(i != pa){
            dfs(i, ch);

        }
    }

}

void solve()
{
    ll n, st, en;
    cin>>n>>st>>en;

    ans.clear();
    for(ll i=1; i<n; i++){
        ll u, v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }


    dfs(en, 0LL);
    for(ll i=ans.size()-1; i>=0; i--)cout << ans[i] << " ";
    cout << endl;
    for(ll i=1; i<=n; i++) vt[i].clear();
    ans.clear();
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
