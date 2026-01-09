#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
using namespace std;

void solve()
{
    double cn = 0.000000000111111111111111111111111;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    if(n==1 || n==2)cout << -1 << endl;
    else
    {
        sort(a, a+n);
        ll mid;
        mid = a[n/2];
        double r = (double)mid + cn;
        ll sum=0;
        for(ll i=0; i<n; i++)sum+=a[i];
        double x = r * 2.0 *(double)n - (double)sum;
        ll m = ceil(x);
        if(m<=0)m=0;
        cout << m << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
