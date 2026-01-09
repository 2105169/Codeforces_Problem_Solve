#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;
ll a[200005], b[200005];

void solve()
{
    ll l, r;
    cin>>l>>r;
    ll ans=0;

    ans+=a[l];
    ll e=b[r]-b[l-1];
    ans+=e;
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
        b[0]=0;
    ll x=1, g=3;
    for(ll i=1; i<200005; i++){
        if(i%g==0){
            x++;
            g*=3;
        }
        a[i] = x;
        b[i]=b[i-1]+a[i];
    }
    while(t--)solve();
}
