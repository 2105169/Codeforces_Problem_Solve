#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll N = 3e5 + 10;
const ll mod = 998244353;

vector<ll> vt[N];
ll depth[N];
ll nodeDepth[N];
ll ans;

void dfs(ll node, ll d, ll parent) {
    depth[d]++;
    nodeDepth[node] = d;

    for (ll child : vt[node]) {
        if (child == parent) continue;
        dfs(child, d + 1, node);
    }
}

void dfss(ll node, ll parent) {
    for (ll child : vt[node]) {
        if (child == parent) continue;

        ll subtreeSize = vt[child].size();  // number of adjacent nodes
        ll level = nodeDepth[child];
        ll levelNodeCount = depth[level + 1];

        //cout << "node: " << node << " child: " << child << " parent: " << parent << " subtreesize: " << subtreeSize << " level: " << level << " levelnode: " << levelNodeCount << endl;

        if (subtreeSize == levelNodeCount) {
            // Do nothing
        } else {
            ans = (ans + levelNodeCount - subtreeSize) % mod;
            dfss(child, node);
        }



        
    }
}

void solve() {
    ll n;
    cin >> n;

    // Clean up for each test case
    for (ll i = 0; i <= n; i++) {
        vt[i].clear();
        depth[i] = 0;
        nodeDepth[i] = 0;
    }

    // Input tree edges
    for (ll i = 2; i <= n; i++) {
        ll u;
        cin >> u;
        vt[u].push_back(i);
    }

    dfs(1, 1, 0);  // root at 1, depth 1
    ans = depth[1] + depth[2];  // initial answer as given
    dfss(1, 0);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
