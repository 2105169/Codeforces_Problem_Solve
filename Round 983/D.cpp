#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    mp[1] = 0;

    deque<ll> q, q2;
    q.push_back(1);

    for (ll i = 2; i < n; i++) {
        ll x;
        cout << "? 0 " << i << endl;
        cin >> x;
        if (x == 1) {
            mp[i] = 0;
            q.push_back(i);
        } else {
            q2.push_back(i);
        }
    }

    while (!q2.empty()) {
        ll f = q2.front();
        q2.pop_front();
        ll r;
        for (ll i = 0; i < q.size(); i++) {
            cout << "? " << q[i] << " " << f << endl;
            cin >> r;
            if (r == 1) {
                mp[f] = q[i];
                q.push_back(f);
                break;
            }
        }
    }

    cout << "! ";
    for (ll i = 1; i <= n; i++) {
        cout << mp[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
