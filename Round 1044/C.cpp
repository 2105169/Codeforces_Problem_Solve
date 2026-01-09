
#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>> vt(n+1);

    ll x, mx=0, v = 0;
    for(ll i=1; i<=n; i++){
        cout << "? " << i << " " << n << " ";
        for(ll j=1; j<=n; j++)cout << j << " ";
        cout<< endl;

        cin>>x;
        if(x>mx){
            mx = x;
            v = i;
        }
        vt[x].push_back(i);
    }

    vector<ll> ans;
    ans.push_back(v);

    for(ll i=mx-1; i>=1; i--){
        for(ll t: vt[i]){
            cout << "? " << v << " 2 " << v << " " << t << endl;
            ll m;
            cin>>m;
            if(m==2){
                ans.push_back(t);
                v = t;
                break;
            }
        }
    }

    cout << "! " << ans.size() << " ";
    for(ll i=0; i<ans.size(); i++)cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}

