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
    cout << 0 << ' ' << 0 << " " << min(x,y) << " " << min(x, y) << endl;
    cout << min(x, y) << ' ' << 0 << " " << 0 << ' ' << min(x, y) << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}