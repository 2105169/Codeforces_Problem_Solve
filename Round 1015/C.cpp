#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1], b[n+1];
    for(ll i=0; i<n; i++)cin>>a[i+1];
    for(ll i=1; i<=n; i++)cin>>b[i];

    ll x=0;
    for(ll i=1; i<=n; i++){
        if(a[i]==b[i])x++;
    }

    if(x>1){
        cout <<-1 << endl;
    }
    else if(x==1 && n%2==0)cout << -1 << endl;
    else if(x==0 && n%2==1) cout << -1 << endl;
    else{
        vector<pair<ll,ll>> vt;
        if(x==1){
            for(ll i=1; i<=n; i++){
                if(a[i]==b[i]){
                    if((n+1)/2 != i){
                        swap(a[i], a[(n+1)/2]);
                        swap(b[i], b[(n+1)/2]);
                        vt.push_back(make_pair(i, (n+2)/2));
                    }
                }
            }
        }

            map<ll,ll> mp, ind, p;
            for(ll i=1; i<=n; i++){
                mp[a[i]] = b[i];
            }

            ll f = 0;
            for(ll i=1; i<=n; i++){
                if(mp[b[i]] != a[i])f++;
            }

            if(f>0)cout << -1 << endl;
            else{
                for(ll i=1; i<=n; i++){
                    p[b[i]] = i;
                }

                for(ll i=1; i<=n; i++){
                    if(a[i] != b[n-i+1]){
                        ll t = n-i+1;
                        ll x = p[a[i]];
                        p[a[i]] = t;
                        ll e = b[t];
                        p[e] = x;
                        vt.push_back(make_pair(t,x));
                        swap(a[t], a[x]);
                        swap(b[t], b[x]);
                    }
                }
                cout << vt.size() << endl;
                for(ll i=0; i<vt.size(); i++)cout << min(vt[i].first, vt[i].second) << " " << max(vt[i].first, vt[i].second) << endl;
            }   
        }
    
    
}

int main()
{
    int t;cin>>t;while(t--)solve();
}