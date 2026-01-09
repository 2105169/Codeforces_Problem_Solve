#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    a[0] = LLONG_MIN;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        if(i>2)
            a[i] = max(max(a[i-2],a[i]), a[i]+a[i-2]);
    }
    cout << max(a[n], a[n-1]) << endl;
    
}


int main()
{
    int t;cin>>t;while(t--)solve();
}