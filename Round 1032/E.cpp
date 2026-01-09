#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    string l, r;
    cin>>l>>r;
    ll a[l.size()], b[l.size()];
    for(ll i=0; i<l.size(); i++){
        a[i] = l[i]-48;
        b[i] = r[i]-48;
    }
    ll ans=0;
    for(ll i=0; i<l.size(); i++){
        ll x=0, y=0;
        for(ll j=i, k=0; j>=0; j--, k++){
            x += pow(10L, j)*a[k];
            y += pow(10L, j)*b[k];
        }
        if(x==y)ans+=2;
        else if(y-x==1)ans++;
        else break;
    }
    cout << ans << endl;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}