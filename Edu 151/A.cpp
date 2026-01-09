#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string s;
    cin>>s;
    ll m;
    cin>>m;
    string a, b;
    cin>>a>>b;

    ll n = s.size();
    ll x[n], y[m], z[m];
    for(ll i=0; i<n; i++)x[i] = s[i]-48;
    for(ll i=0; i<m; i++)y[i] = a[i] - 48;
    for(ll i=0; i<m; i++)z[i] = b[i] - 48;

    ll d = -1, ans=0;
    for(ll i=0; i<m; i++){
        ll l = max(d+1, 0LL), r = max(d+1, 0LL);
        for(ll j=y[i]; j<=z[i]; j++){
            ll fl = 0;
            for(ll k=l; k<n; k++){
                if(j == x[k]){
                    fl = 1;
                    r = max(r, k);
                    break;
                }
            }


            if(fl==0)ans++;
        }
        d = max(d, r);
    }

    if(ans>0)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}