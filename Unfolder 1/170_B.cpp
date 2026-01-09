#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
using namespace std;

ll r = 2;
void solve()
{
    ll t;
    ll N = 1000000000+7;
    cin>>t;
    ll a[t], b[t];
    for(ll i=0; i<t; i++)cin>>a[i];
    for(ll i=0; i<t; i++)cin>>b[i];
    ll ans[200000];
    ans[0] = 1;
    for(ll i=1; i<200000; i++){
        ans[i] = ans[i-1]*2;
        ans[i] %= N;
    }

    for(ll i=0; i<t; i++){
        cout << ans[b[i]] << " ";
    }
    cout << endl;
}


int main()
{
    int t;
    t = 1;
    while(t--)solve();
}

