#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    vector<ll> vt;
    ll prev = a[0];
    vt.push_back(a[0]);
    for(ll i=1; i<n; i++){
        if(a[i]-prev <=1){
            continue;
        }
        else{
            vt.push_back(a[i]);
            prev = a[i];
        }
    }
    cout << vt.size() << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}