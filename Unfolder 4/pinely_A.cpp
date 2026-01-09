#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define ll long long
#define forin for(ll i=0; i<n; i++)
#define out cout << ans << endl;
using namespace std;

void solve()
{
    ll n, ans=0;
    cin>>n;
    ll a[n];
    forin{
        cin>>a[i];
    }

    for(ll i=0; i<n; i+=2){
        if(a[i]>ans) ans=a[i];
    }
    out;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


