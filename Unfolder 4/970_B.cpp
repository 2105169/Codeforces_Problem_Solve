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
    string s;
    cin>>s;
    ll t= sqrt(n);
    if(t*t != n){
        cout << "NO\n";
    }
    else{
        ll a[t][t];
        ll x=0;
        for(ll i=0; i<t; i++){
            for(ll j=0; j<t; j++){
                if(s[x]=='0'){
                    a[i][j] = 0;
                }
                else a[i][j] = 1;
                x++;
            }
        }
        ll f=0;
        for(ll i=0; i<t; i++){
            for(ll j=0; j<t; j++){
                if((i-1>=0 && i+1<t && j-1>=0 && j+1<t)){
                    if(a[i][j]==1)f=1;
                    break;
                }
            }
            if(f==1)break;
        }
        if(f==0){
            for(ll i=0; i<t; i++){
                if(a[0][i]==0){
                    f=1;
                    break;
                }
                if(a[t-1][i]==0){
                    f=1;
                    break;
                }
                if(a[i][0]==0){
                    f=1;
                    break;
                }
                if(a[i][t-1]==0){
                    f=1;
                    break;
                }
            }

        }
        if(f==0)cout << "YES\n";
        else cout << "NO\n";
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
