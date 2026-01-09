#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    ll l, r;
    if (n % 2 == 1) {
        l = n / 2 + 1;
        r = n / 2;
    } else {
        l = n / 2;
        r = n / 2;
    }

    ll ans = LLONG_MAX;

    for (ll i = 0; i <= min(r, 200005LL); i++) {
        ll a = k;
        ll t1 = l + i;
        ll t2 = r - i;

        ll s1 = t1 * (2 * a + t1 - 1);
        ll s2 = t2 * (2 * (a + t1) + t2 - 1);

        // Compare the absolute difference directly
        ll x = abs(s1 - s2);

        // Since s1 and s2 can become quite large, let's compare them safely
        ans = min(ans, x / 2); // Adjust for the initial multiplication by 2
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
