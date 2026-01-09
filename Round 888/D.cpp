#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll l=0;
    set<ll> st;
    ll s=(n*(n+1))/2;
    for(ll i=0; i<n-1; i++){
        ll f;
        cin>>f;
        ll t = f-l;
        if(t<=n)
            st.insert(t);
        l = f;
    }

    if(st.size()==(n-2+(s!=l)))cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int t;cin>>t;while(t--)solve();
}