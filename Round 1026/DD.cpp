#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5+1;
const ll INF = LLONG_MAX;

vector<pair<ll, ll>> adj[N];  // Store (neighbor, weight)

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> val(n + 1, 0), maxEdge(n + 1, INF);  // To store node values and max edge weights
    for (ll i = 1; i <= n; i++) {
        cin >> val[i];
    }

    // Read edges
    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);  // Since the graph is undirected
    }

    // Priority Queue: Stores pairs of (max_edge_weight_so_far, node)
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({val[1], 1});  // Starting from node 1 with its value as the maximum edge weight

    maxEdge[1] = val[1];  // Initialize the max edge weight for the start node

    while (!pq.empty()) {
        ll u = pq.top().second;
        ll currMax = pq.top().first;
        pq.pop();

        // If we have already found a better path to u, continue
        if (currMax > maxEdge[u]) continue;

        // Process all neighbors
        for (auto &neighbor : adj[u]) {
            ll v = neighbor.first;
            ll w = neighbor.second;

            // The new "max weight" on this path
            ll newMax = max(currMax, w);

            if (newMax < maxEdge[v]) {
                maxEdge[v] = newMax;
                pq.push({newMax, v});
            }
        }
    }

    // If we haven't updated the max weight for node n, return -1
    if (maxEdge[n] == INF) {
        cout << -1 << endl;
    } else {
        cout << maxEdge[n] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

