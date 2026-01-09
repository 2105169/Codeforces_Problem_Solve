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
    for(ll i=0; i<n; i++)cin>>b[i+1];

    ll ans=0;
    vector<ll> vt;
    map<ll, ll> mp;

    for(ll i=1; i<=n; i++){
        ll t = b[i];
        if(t == a[t]){
            ans++;
            a[t] = 0;
            vt.push_back(ans);
        }
        else{
            while(true){
                ll x = a[t];

                if(x==0){
                    vt.push_back(ans);
                    break;
                }
                else{
                    a[t] = 0;
                    t = x;
                    ans++;
                }
            }
         }
    }

    for(ll i=0; i<vt.size(); i++){
        cout << vt[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}