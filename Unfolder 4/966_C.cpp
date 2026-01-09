#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n); // Using vector instead of array
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll m;
    cin >> m;

    while (m--) {
        string s;
        cin >> s;
        if (s.size() != n) {
            cout << "NO\n";
            continue;
        }

        map<char, ll> b;
        map<ll, char> c;
        bool ans = true;

        for (ll j = 0; j < n; j++) {
            char t = s[j];
            ll tt = a[j];

            if (b.count(t) && b[t] != tt) {
                ans = false;
                break;
            }
            b[t] = tt;

            if (c.count(tt) && c[tt] != t) {
                ans = false;
                break;
            }
            c[tt] = t;
        }

        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
