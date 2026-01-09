#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#define gcd __gcd
#define ll long long
#define take(i, j, n) for(ll i = j; i<n; i++)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    k--;
    ll t = 0;
    ll x = 0;
    ll f = n;
    vector<ll> vt;
    while(vt.size()<f){
        if(x==k){
            t++;
            vt.push_back(t);
            x=0;
        }
        else{
            x++;
            vt.push_back(n);
            n--;
        }
    }

    for(ll i=0; i<vt.size(); i++)cout << vt[i] << " ";
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}