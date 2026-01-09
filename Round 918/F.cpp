#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long



void solve()
{
    int n;
    cin>>n;
    int a, b;
    map<int, int> mp;
    vector<int> vt;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        vt.push_back(b);
        mp[a] = b;
    }

    sort(vt.begin(), vt.end());
    ll ans=0;
    for(auto& it:mp){
        auto pos = lower_bound(vt.begin(), vt.end(), it.second);
        ll t = pos - vt.begin();
        ans += t;
        vt.erase(pos);
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}