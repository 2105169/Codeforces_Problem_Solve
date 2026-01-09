
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll m1, m2 ;
    m1 = m2 = LLONG_MIN;
    for(ll i=0; i<n; i++){
        ll u, v;
        cin>>u>>v;
        m1 = max(m1, u);
        m2 = max(m2, v);
    }

    cout << 2*(m1+m2)<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
