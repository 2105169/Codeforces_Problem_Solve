#include<bits/stdc++.h>
#define gcd __gcd
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);  // Array of size n+1 for 1-based indexing
    for (ll i = 1; i <= n; i++) cin >> a[i];

    ll mx1 = LLONG_MIN, mx2 = LLONG_MIN, in;

    // Find maximum value and its position from the end of the array
    for (ll i = n; i >= 1; i--) {
        if (a[i] >= mx1) {
            mx1 = a[i];
            in = i;
        }
    }

    // Find the second maximum after the position of mx1
    for (ll i = in + 1; i <= n; i++) {
        mx2 = max(mx2, a[i]);
    }

    vector<pair<ll, ll>> mp; // Vector of pairs to store values and their indices

    // Mark elements as 0 that do not maintain the order with respect to mx2
    for (ll i = in - 1; i > 0; i--) {
        if (a[i] < mx2) {
            a[i] = 0;
        }
    }

    // Store positive values along with their indices
    for (ll i = in; i >= 1; i--) {
        if (a[i] > 0) mp.push_back({a[i], i});
    }

    vector<ll> vt; // Store non-zero values for further processing
    for (ll i = 1; i <= in; i++) {
        if (a[i] > 0) vt.push_back(a[i]);
    }

    ll x = vt.size();
    vector<ll> count(x, 0); // Vector to store counts


    for (ll i = vt.size() - 1; i >= 0; i--) {
        ll t = 0;
        for (ll j = i + 1; j < vt.size(); j++) {
            if (vt[j] > vt[i]) {
                t++;
            }
        }
        count[i] = t;
    }

    ll ans = n;
    for (ll i = vt.size() - 1; i >= 0; i--) {
        ans = min(ans, count[i] + mp[i].second - 1);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
