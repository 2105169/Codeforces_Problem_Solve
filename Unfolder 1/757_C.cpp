#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd

using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1; i<=n; i++){
        a[i] = -1;
    }
    int fi[m+1], la[m+1], val[m+1];
    vector<pair<int, int>> vt;
    for(int i=1; i<=m; i++){
        int l, r, x;
        cin>>l>>r>>x;
        fi[i] = l;
        la[i] = r;
        val[i] = x;
        int y = r-l+1;
        vt.push_back(make_pair(y, i));
    }
    sort(vt.begin(), vt. end());

    for(int i=0; i<vt.size(); i++){
        int x = vt[i].first;
        int y = vt[i].second;
        int l = fi[y], r = la[y], v = val[y];
        for(int j=l; j<=r; j++){
            if(a[j]==-1){
                a[j] = v;
                break;
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(a[i] == -1)a[i] = 0;
    }

    ll ans=0;


}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

