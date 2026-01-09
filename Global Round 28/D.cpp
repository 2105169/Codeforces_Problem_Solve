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
    ll n, m;
    cin>>n>>m;
    ll a[n+1], b[m+1];

    a[0] = -100;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
    }
    b[0] = -100;
    for(ll i=1; i<=m; i++){
        cin>>b[i];
    }

    ll my = a[1];

    sort(a+1, a+n+1);
    sort(b+1, b+m+1);

    ll p = 0;
    vector<ll> vt;
    for(ll i=1; i<=m; i++){
        if(b[i]<=my)p++;
        else{
            vt.push_back(b[i]);
        }
    }

    map<ll, ll> mp;
    ll x = 0;
    ll f = n;

    for(ll i=m; i>0; i--){
        
        while(f>=0 && i>0){
            if(a[f]>=b[i]){
                if(f<=0){
                    mp[b[i]] = x;
                    break;
                }
                x++;
                f--;
            }
            else{
                mp[b[i]] = x;
                break;
            }
        }
    }

    mp[b[1]] = x;


    ll ans = p;
    for(ll i=p+1; i<=m; i++){
        ans += (1 + mp[b[i]]);
    }
    cout << ans << " ";

    ll g = vt.size();
    reverse(vt.begin(), vt.end());

    for(ll k = 2; k<m; k++){
        ans = 0;
        ans = p/k;
        ll v = p %k;

        v = k-v;
        

        for(ll j=v-1; j<vt.size(); j+= k){
            ans += (1 + mp[vt[j]]);
        }
        cout << ans << " ";
    }
    if(m>1){
    if(p<m)
    cout << mp[b[p+1]]+1;
    else cout << 1;
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}