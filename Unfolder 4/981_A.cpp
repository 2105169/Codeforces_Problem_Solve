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
    ll n;
    cin>>n;
    ll a = 2;
    ll x = 0;
    ll i=0;
    while(abs(x)<=n){
        i++;
        if(a==2){
            ll t = i*2-1;
            x -= t;
            a=1;
        }
        else{
            ll t = i*2 - 1;
            x += t;
            a=2;
        }
    }
    if(a==1)cout << "Sakurako" << endl;
    else cout << "Kosuke" << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

