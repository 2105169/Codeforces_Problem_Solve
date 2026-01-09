#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> vt;
    int mp[256] = {0};

    int a[n], ans = 0, f = 0;
    mp[0] = 1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        f ^= a[i];
        mp[f] = 1;
        for(int j=0; j<256; j++){
            if(mp[j]){
                ans = max(ans, f ^ j);
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}