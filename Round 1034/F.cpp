#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long


void solve()
{
    ll n;
    cin>>n;
    ll ans[n+1];
    for(ll i=1; i<=n; i++)ans[i] = i;
    for(ll i=2; i<=n; i++){
        for(ll j=2; j*j<=i; j++){
            if(i%j==0){
                swap(ans[i], ans[i/j]);
                break;
            }
        }
    }

    for(ll i=1; i<=n; i++)cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}