#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ll N=2000;
    for(ll i=0; i<N; i++){
        n = n % m;
        if(n==0){
            break;
        }
        else{
            ans += n;
            n *= 2;
        }
    }
    if(n>0)cout << -1 << endl;
    else cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}