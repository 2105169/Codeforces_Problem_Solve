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
    ll n, b, c;
    cin>>n>>b>>c;
    ll a=c, d = b;
    ll x = n-1;
    ll ans;
    if(n==1){
        if(c==0)ans=0;
        else ans = 1;
    }
    else if(n==2){
        ll k = c, g = c+b;
        if(b==0){
            if(c==0){
                ans = 1;
            }
            else if(c==1){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        else{
            if(c==0){
                if(b==1){
                    ans = 0;
                }
                else ans = 1;
            }
            else if(c==1){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
    }
    else{

    if(b==0){
        
        if(c==x){
            ans = x;
        }
        else if(c==x-1){
            ans = x;
        }
        else if(c<x-1){
            ans = -1;
        }
        else{
            ans = n;
        }
    }
    else{
        ll count = (x-a)/d + 1;
        if(c==x){
            ans = x;
        }
        else if(c>x){
            ans = n;
        }
        else{
            ans = n-count;
        }
    }
    }
    cout << ans << endl;
    
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}