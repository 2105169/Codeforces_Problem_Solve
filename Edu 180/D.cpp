#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long
const ll N = 2e5+1;
vector<vector<ll>> vt(N);
map<ll,ll> mp;


void dfs(ll parent){
    //cout << "Dulal" << endl;
    for(ll t: vt[parent]){
        if(mp[t]>0){
           
        }
        else{
            if(mp[parent] == 1){
                cout << parent << " " << t << endl;
                mp[t] = 2;
                dfs(t);
            }
            else if(mp[parent] == 2){
                cout << t << " " << parent << endl;
                mp[t] = 1;
                dfs(t);
            }
            else{
                //dfs(t);
            }
        }
    }
}

void solve()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        vt[i].clear();
        mp[i] = 0;
    }
    
    
    for(ll i=1; i<n; i++){
        ll u, v;
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
        mp[u] = 0;
        mp[v] = 0;
    }

    ll ans=0;

    for(ll i=1; i<=n; i++){
        if(vt[i].size() == 2){
            ans = i;
            break;
        }
    }

    if(ans==0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << vt[ans][0] << " " << ans << endl;
        cout << ans << " " << vt[ans][1] << endl;
        mp[vt[ans][0]] = 1;
        mp[ans] = 3;
        mp[vt[ans][1]] = 2;

        dfs(vt[ans][1]);
        dfs(vt[ans][0]);
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}