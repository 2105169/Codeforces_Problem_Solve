#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans1, ans2;
    string s;
    for(int a = 1; a <=10000; a++) {
        s += to_string(n);
        for(int b = max(1, (int)s.size() - 6); b <= min(10000, a * 100); b++) {
            if(to_string(a * n - b) == s.substr(0, s.size() - b)) {
                ans1.push_back(a);
                ans2.push_back(b);
            }
        }
    }

    cout << ans1.size() << endl;
    for(int i=0; i<ans1.size(); i++){
        cout << ans1[i] << " " << ans2[i] << endl;
     }
}

int main()
{


    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
