#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
ll fib[11] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll> ans;
    ll t = fib[n];
    for(ll i=0; i<m; i++){
        ll x, y, z;
        cin>>x>>y>>z;
        if(x>=t && y>=t && z>=t){
            ll mx = max(x, max(y, z));
            
            if(fib[n]+fib[n-1] <= mx){
                ans.push_back(1);
            }
            else ans.push_back(0);
        }
        else{
            ans.push_back(0);
        }
    }
    for(ll i=0; i<m; i++)cout << ans[i];
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}