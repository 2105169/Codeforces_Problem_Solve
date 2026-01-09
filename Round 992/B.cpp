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

map<ll,ll>mp;

void solve()
{
    ll n;
    cin>>n;
    cout << mp[n] << endl;
}


int main()
{
    int t;
    cin>>t;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 2;
    mp[4] = 2;
    ll ans=3, r = 10;
    for(ll i=5; i<=100000; i++){
        if(i>r){
            ans++;
            r++;
            r *=2;
            mp[i] = ans;
        }
        else{
            mp[i] = ans;

        }
    }
    while(t--)solve();
}