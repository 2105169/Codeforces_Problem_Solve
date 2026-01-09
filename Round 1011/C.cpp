#include<bits/stdc++.h>
using namespace std;
#define gcd __gcd
#define ll long long

void solve()
{
    ll x, y;
    cin>>x>>y;
    if(x==y){
        cout << -1 << endl;
    }
    else{
        ll a[40]={0}, b[40]={0}, n=40;
        for(ll i=1; i<n; i++){
            a[i] = x % 2;
            b[i] = y % 2;
            x = x/2;
            y = y/2;
        }
        ll ans[n]={0};
        for(ll i=1; i<n-1; i++){
            if(a[i]+b[i]==2){
                if(a[i-1]+b[i-1]==1){
                    ans[i-1] = 1;
                    ll c=1;
                    for(ll j=i-1; j<n; j++){
                        if(c+a[j]==2){
                            
                            a[j] = 0;
                            c=1;
                        }
                        else{
                            
                            a[j] = a[j] + c;
                            c=0;
                        }
                    } 
                    c=1;
                    for(ll j=i-1; j<n; j++){
                        if(c+b[j]==2){
                            
                            b[j] = 0;
                            c=1;
                        }
                        else{
                            
                            b[j] = b[j] + c;
                            c=0;
                        }
                    }
                }
                else if(a[i-1]+b[i-1]==0){
                    ans[i] = 1;
                    ll c = 1;
                    for(ll j=i; j<n; j++){
                        if(c+a[j]==2){
                            a[j] = 0;
                            c=1;
                        }
                        else{
                            a[j] = a[j] + c;
                            c=0;
                        }
                    }
                    c = 1;
                    for(ll j=i; j<n; j++){
                        if(c+b[j]==2){
                            b[j] = 0;
                            c=1;
                        }
                        else{
                            b[j] = b[j]+c;
                            c=0;
                        }
                    }
                }
            }
            else if(a[i]+b[i]==1LL && (a[i+1]+b[i+1] != 1LL)){
                ans[i] = 1;
                ll c=1;
                for(ll j=i; j<n; j++){
                    if(c+a[j]==2){
                        a[j]=0;
                        c=1;
                    }
                    else{
                        a[j] = a[j] + c;
                        c=0;
                    }
                }
                c=1;
                for(ll j=i; j<n; j++){
                    if(c+b[j]==2){
                        b[j] =0;
                        c=1;
                    }
                    else{
                        b[j] = b[j] + c;
                        c=0;
                    }
                }
            }
        }

        ll f =0, t=1;
        for(ll i=1; i<n; i++){
             f += (t*ans[i]);
             t *= 2;
        }
        cout << f << endl;
    }
}

int main()
{
    int t;cin>>t;while(t--)solve();
}