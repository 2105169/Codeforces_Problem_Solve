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
    ll l, r;
    cin>>l>>r;
    ll t= (r-l)*2;
    ll n=(-1 + sqrt(1+4*(t)))/2;

    ll s=((n+1)*(n+2))/2;
    if(s+l<=r)cout << n+2 << endl;
    else cout << n + 1 << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
