#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, m;
    cin>>n>>m;
    ll mn = n, mx = (n*(n+1))/2;
    if(m<n || m>mx)cout << -1 << endl;
    else{
        vector<ll> l, r;
        ll t = mx-m;
        for(ll i=n; i>1; i--){
            ll f = i-1LL;
            if(f>t)r.push_back(i);
            else{
                t -= f;
                l.push_back(i);
            }
        }
        if(r.size()==0){
            cout << 1 << endl;
            for(ll i=2; i<=n; i++)cout << 1 << " " << i << endl;
        }
        else{
            cout << r[0] << endl;
            for(ll i=1; i<r.size(); i++){
                cout << r[0] << " " << r[i] << endl;
            }
            cout << 1 <<  " " << r[0] << endl;
            for(ll i=0; i<l.size(); i++){
                cout << 1 << " "<< l[i] << endl;
            }
        }
    }   
}

int main()
{
    int t;cin>>t;while(t--)solve();
}