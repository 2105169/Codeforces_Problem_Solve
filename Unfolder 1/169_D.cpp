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
    ll n, q;
    cin>>n>>q;
    vector<ll> s;
    for(ll i=0; i<n; i++){
        string t;
        cin>>t;
        ll x=0;
        if(t[0]=='B') x+=1;
        else if(t[0]=='G') x+=5;
        else if(t[0]=='R') x+=7;
        else x+=8;

        if(t[1]=='B')x+=1;
        else if(t[1]=='G') x+=5;
        else if(t[1]=='R') x+=7;
        else x+=8;

        s.push_back(x);
    }



    ll bg=-100, br=-100, by=-100, gr=-100, gy=-100, ry=-100;
    map<ll, ll> bgr, brr, byr, grr, gyr, ryr;
    for(ll i=0; i<n; i++){

    }


    ll bl=n+1, gl=n+1, rl=n+1, yl=n+1;
    map<ll,ll> bll, gll, rll, yll;
    for(ll i=n-1; i>=0; i--){
        string x=s[i];
        if(x[0]=='B'){
            bll[bl]=i;
            bl=i;
        }
        else if(x[0]=='G'){
            gll[gl]=i;
            gl=i;
        }
        else if(x[0]=='R'){
            rll[rl]=i;
            rl=i;
        }
        else{
            yll[yl] =i;
            yl=i;
        }

        if(x[1]=='B'){
            bll[bl]=i;
            bl=i;
        }
        else if(x[1]=='G'){
            gll[gl]=i;
            gl=i;
        }
        else if(x[1]=='R'){
            rll[rl]=i;
            rl=i;
        }
        else{
            yll[yl]=i;
            yl=i;
        }
    }



    for(ll i=0; i<q; i++){
        ll e, f;
        cin>>e>>f;
        e--;
        f--;
        string h=s[e], d=s[f];
        ll ans;
        if(h[0]==d[0] || h[0]==d[1] || h[1]==d[0] || h[1]==d[1]){
            ans= abs(e-f);
        }else{
            if(e==0){

            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}

