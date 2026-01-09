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
    ll p, q;
    cin>>p>>q;
    ll ans=-1;
    for(ll i=1; i<200005; i++){
        if(p%i==0){
            ll t = p/i;
            if(t%q != 0){
                ans = t;
                break;
            }
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

