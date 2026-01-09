#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll n, s;
    cin>>n>>s;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        ll x=0;
        if(c==d){
            if((a==-1 && b == -1) || (a==1 && b==1))x=1;
        }
        if(c+d==s){
            if((a==1 && b==-1) || (a==-1 && b==1)) x=1;
        }
        ans += x;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}