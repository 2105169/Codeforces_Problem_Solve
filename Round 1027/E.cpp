#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const ll N = 2e5+10;
ll mx[N], mn[N], val[N];  // Renamed 'v' to 'val' to avoid shadowing
vector<ll> tree[N];       // Renamed 'vt' to 'tree' for clarity

void dfs(ll node, ll parent) {
    mx[node] = max(val[node], val[node] - mn[parent]);
    mn[node] = val[node] - mx[parent];
    
    for (ll child : tree[node]) {
        if (child == parent) continue;  // Skip parent to prevent cycles
        dfs(child, node);
    }
}

int main() {
    ll t;
    cin >> t;
    mn[0] = mx[0] = val[0] = 0LL;
    
    while (t--) {
        ll n;
        cin >> n;
        
        for (ll i = 1; i <= n; i++) {
            cin >> val[i];
            tree[i].clear();
        }

        ll u, v;
        for (ll i = 1; i < n; i++) {
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        dfs(1, 0);
        
        for (ll i = 1; i <= n; i++) {
            cout << mx[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}