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
    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    ll t = a*b;

    ll ans=0;
    ll f , g;
    for(ll i=a+1; i<=c; i++){
        ll x = gcd(t, i);
        if(t % x==0){
            ll s = t/x;
            ll m = d/s;
            m = m*s;
            if(m>b){
                ans = 1;
                f = i, g = m;
            }

            if(ans==1)break;
        }
    }
    if(ans==0)cout << -1 << " " << -1 << endl;
    else cout << f << " " << g << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

