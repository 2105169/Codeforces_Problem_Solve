#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> parent(n+1);
        for (int i = 2; i <= n; ++i) {
            cin >> parent[i];
        }

        vector<int> p(n+1), pos(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        while (q--) {
            int x, y;
            cin >> x >> y;

            swap(p[x], p[y]);
            pos[p[x]] = x;
            pos[p[y]] = y;

            bool valid = true;
            for (int i = 2; i <= n; ++i) {
                if (pos[parent[i]] > pos[i]) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
