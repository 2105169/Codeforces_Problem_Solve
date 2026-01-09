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
    ll x, y, k;
    cin>>x>>y>>k;
    ll ans;
    if(x>y){
        ll xx = x/k;
        if(x%k != 0){
            xx++;
        }
        ll yy = y/k;
        if(y%k != 0){
            yy++;
        }
        if(xx>yy){
            ans = 1;
            xx--;
            ll t = max(xx, yy);
            ans += (t*2);
        }
        else{
            ll t = max(xx, yy);
            ans = t*2;
        }
    }
    else{
        ll t = y/k;
        if(y % k != 0){
            t++;
        }
        ans = t*2;
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
