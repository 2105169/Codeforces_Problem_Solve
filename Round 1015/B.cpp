#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n], mn = LLONG_MAX, j = -1;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(mn>a[i]){
            j = i;
            mn = a[i];
        }
    }

    a[j] = 0;
    
    vector<ll> vt;
    for(ll i=0; i<n; i++){
        if(a[i]>0){
            if(a[i]%mn==0)vt.push_back(a[i]);
        }
    }

    if(vt.size()==0)cout << "NO\n";
    else if(vt.size()==1){
        if(vt[0]==mn)cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        ll m = gcd(vt[0], vt[1]);
        for(ll i=2; i<vt.size(); i++){
            m = gcd(m, vt[i]);
            if(m==mn){
                cout << "YES\n";
                return;
            }
        }
        if(m==mn)cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

}

int main()
{
    int t;cin>>t;while(t--)solve();
}