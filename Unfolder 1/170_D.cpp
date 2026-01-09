#include<bits/stdc++.h>

using namespace std;
const int N = 2e6+123; // Using const for the size of array
int n, m, r[N], f[N], x[N], y[N], k = 0, ans = 0;

int main() {
    cin >> n >> m;

    // Input array r
    for (int i = 1; i <= n; i++) cin >> r[i];

    for (int i = 1; i <= n; i++) {
        if (r[i] > 0) ++x[r[i]];
        if (r[i] < 0) ++y[-r[i]];

        // Check if the reset condition or end of input is reached
        if ((r[i] == 0 && k < m * 2) || i == n) {
            for (int j = 1; j <= k; j++) {
                x[j] += x[j - 1];
                y[j] += y[j - 1];
            }
            for (int j = 0; j <= k; j++) {
                f[j] += (x[j] + y[k - j]);
            }
            for (int j = k + 1; j > 0; j--) {
                f[j] = max(f[j], f[j - 1]);
            }
            ++k;
            for (int j = 1; j <= k; j++) {
                x[j] = 0;
                y[j] = 0;
            }
        }
    }

    for (int i = 0; i <= k; i++) ans = max(ans, f[i]);
    cout << ans;

    return 0;
}
