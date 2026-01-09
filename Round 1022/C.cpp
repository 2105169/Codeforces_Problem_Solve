#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll a[n+1];
    ll ans=1, op=0;
    cin>>a[1];
    for(ll i=2; i<=n; i++){
        cin>>a[i];
        if(a[i]>a[i-1] && op == 1) {
            ans++;
            op=0;
        }
        else if(a[i]<a[i-1])op=1;
        else if(a[i]>a[i-1])op=0;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}