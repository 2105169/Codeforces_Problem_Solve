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
    ll b, c, d;
    cin>>b>>c>>d;
    ll bb[61]={0}, cc[61]={0}, dd[61]={0}, a[61] = {0};
    ll t = 0;
    while(t<61){
        if(b&1){
            bb[t] = 1;
        }
        else bb[t] = 0;
        if(c&1) cc[t] = 1;
        else cc[t] = 0;
        if(d&1) dd[t] = 1;
        else dd[t] = 0;
        b>>=1;
        c>>=1;
        d>>=1;
        t++;
    }

    ll f = 0;
    for(ll i=0; i<61; i++){
        if(bb[i]==0 && cc[i]==0 && dd[i]==1){
            a[i] = 1;
        }
        else if(bb[i]==0 && cc[i]==0 && dd[i]==0){
            a[i] = 0;
        }
        else if(bb[i]==1 && cc[i] == 0&& dd[i]==1){
            a[i] = 0;
        }
        else if(bb[i]==1 && cc[i]== 0 && dd[i]==0){
            f++;
            break;
        }
        else if(bb[i] == 0 && cc[i]==1 && dd[i]==1){
            f++;
            break;
        }
        else if(bb[i]==0 && cc[i]==1 && dd[i]==0){
            a[i] = 0;
        }
        else if(bb[i]==1 && cc[i]==1 && dd[i]== 1){
            a[i] = 0;
        }
        else if(bb[i]==1 && cc[i]==1 && dd[i]==0){
            a[i] = 1;
        }
    }
    if(f>0)cout << -1 << endl;
    else{
        ll x = 0, m = 1;
        for(ll i=0; i<61; i++){
            x += (m*a[i]);
            m *= 2;
        }
        cout << x << endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

