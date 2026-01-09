#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    ll n, m, q;
    cin>>n>>m>>q;
    ll a[m];
    for(ll i=0; i<m; i++)cin>>a[i];
    ll x;
    cin>>x;
    ll ans=0;
    sort(a, a+m);
    if(x<=a[0])ans=a[0]-1;
    else if(x>=a[0] && x<=a[1]) {
        ll t = a[1]-a[0];
       ans = t/2;

    }
    else ans = n-a[1];
    cout << ans <<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
