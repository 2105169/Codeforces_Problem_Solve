#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1000000007;
ll fact[200005];
ll pow(ll a, ll b)
{
    if (b == 0) return 1;
    ll r = 1;
    while (b) {
        if (b & 1) {
            r = (r * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}

// Function to calculate nCr % mod using Fermat's Little Theorem
ll nCr(ll n, ll r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;

    ll res = (fact[n] * pow(fact[r], mod - 2) % mod) * pow(fact[n - r], mod - 2) % mod;

    return res;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    ll a0 = 0, a1 = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == 1)
            a1++;
        else
            a0++;
    }

    // If k is greater than total elements, there is no valid combination
    if (k > n) {
        cout << 0 << endl;
        return;
    }

    ll mid = k / 2 + 1;

    for (ll i = mid; i <= min(k, a1); i++) {
        ll j = k - i;
        if (j > a0) continue;  // Ensure j is within valid range
        ll x = nCr(a1, i) % mod;
        ll y = nCr(a0, j) % mod;
        ans += (x * y) % mod;
        ans %= mod;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    while (t--) solve();
    return 0;
}
