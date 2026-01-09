#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

const ll N = 2e5+1;

vector<vector<ll>> vt(N);
map<pair<ll,ll>, ll> wt, check;
ll sum[N];
ll val[N];
ll n, m, ans = LLONG_MAX, r= 0, r_val[N];

void dfs(ll root){
    for(ll t: vt[root]){
        if(root==1) r=0;
        ll f = wt[{root, t}];

        if(f>sum[root]){
        }
        else{
            sum[t] = val[t] + sum[root];
            r = r_val[root];
            r = max(r, f);
            r_val[t] = r;
            if(t==n){
                ans = min(ans, r);
            }
            else{
                dfs(t);
            }
        }
    }
}

void solve()
{
    ans = LLONG_MAX;
    cin>>n>>m;
    for(ll i=1; i<=n; i++){
        sum[i] = 0;
        val[i] = 0;
        vt[i].clear();
        r_val[i] = 0;
    }

    for(ll i=0; i<n; i++){
        cin>>val[i+1];
    }

    wt.clear();
    check.clear();

    for(ll i=1; i<=m; i++){
        ll u, v, w;
        cin>>u>>v>>w;
        vt[u].push_back(v);

        if(check[{u, v}]>0)
            wt[{u, v}] = min(wt[{u, v}], w);
        else{
            wt[{u, v}] = w;
            check[{u, v}]++;
        }

    }

    sum[1] = val[1];
    dfs(1);

    if(ans == LLONG_MAX){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
