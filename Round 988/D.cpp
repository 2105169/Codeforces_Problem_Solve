#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n, m, L;
    cin>>n>>m>>L;
    map<ll, ll> mp;
    ll a[n+1];
    for(ll i=1; i<=n; i++){
        ll u, v;
        cin>>u>>v;
        mp[u] = v-u+2;
        a[i] = u;
    }

    ll ans=0, x=1;
    ll b[m+1], c[m+1];
    for(ll i=1; i<=m; i++){
        ll u, v;
        cin>>u>>v;
        b[i] = u;
        c[i] = v;
    }

    priority_queue<ll> vt;
    ll k=1;

    for(ll i=1; i<=n; i++){
        ll f = a[i];
        ll t = mp[f];
        while(k<=m && b[k]<f){
            vt.push(c[k]);
            k++;
        }

        
        

        
        if(x<t){       
        
        ll g = 0;
        while(!vt.empty()){
            
                x += vt.top();
                vt.pop();
                ans++;
                if(x>=t){
                    g=1;
                    break;
                }
        }
                
        if(g==0){
            ans = -1;
            cout << ans << endl;
            return;
        }
    }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}