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
    ll n;
    cin>>n;
    ll p[n];
    for(ll i=0; i<n; i++)cin>>p[i];
    ll q[n];
    for(ll i=0; i<n-1; i++)q[i]=p[i+1];
    q[n-1]=p[0];
    for(ll i=0; i<n; i++)cout << q[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
