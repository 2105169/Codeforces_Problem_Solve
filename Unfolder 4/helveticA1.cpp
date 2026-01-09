#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int open = 0, close = 0;
    int a[s.size()];

    // Calculate the balance at each position
    for (int i = 0; i < s.size(); i++) {
        a[i] = open - close;
        if (s[i] == '(')
            open++;
        else
            close++;
    }

    // Map to store characters by their balance
    map<int, vector<char>> b;
    for (int i = 0; i <s.size(); i++) {
        int x = a[i];
        b[x].push_back(s[i]);
    }

    // Sort the balances (array `a`)
    sort(a, a + s.size());

    // Print the sorted characters
    for (int i = 0; i < s.size(); i++) {
        int balance = a[i];
        if (!b[balance].empty()) {
            cout << b[balance].back();
            b[balance].pop_back();
        }
    }
    cout << endl;

    return 0;
}
