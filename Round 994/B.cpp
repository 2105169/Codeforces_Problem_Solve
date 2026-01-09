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
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll p=0,d=0,ss=0;

    for(ll i=0; i<s.size(); i++){
        if(s[i]=='p')p++;
        if(s[i]=='s')ss++;
        if(s[i]=='.')d++;
    }
    

    if(p==n){
        cout << "YES\n";
    }
    else if(d==n){
        cout << "YES\n";
    }
    else if(ss==n){
        cout << "YES\n";
    }
    else if(ss+d == n){
        cout << "YES\n";
    }
    else if(p+d==n){
        cout << "YES\n";
    }
    else{
        ll t=0, tt=0;
        for(ll i=0; i<n-1; i++){
            if(s[i]=='s' || s[i]=='.')t++;
        }
        
        for(ll i=1; i<n; i++){
            if(s[i]=='p' || s[i]=='.'){
                tt++;
            }
        }

        if(t==n-1 || tt==n-1)cout << "YES\n";
        else cout << "NO\n";
            
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}