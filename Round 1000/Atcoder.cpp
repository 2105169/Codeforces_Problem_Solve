#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m;
    cin>>n>>m;
    string a, b;
    cin>>a;
    cin>>b;
    ll s[n], t[m];
    for(ll i=0; i<n;i++){
        s[i] = a[i]-48;
    }
    for(ll i=0; i<m; i++){
        t[i] = b[i] - 48;
    }

    map<ll,ll>mp;
    for(ll i=0; i<m; i++){
        mp[t[i]]++;
    }

    for(ll i=0; i<n; i++){
        for(ll j=9; j>0; j--){
            if(mp[j]>0 && j>s[i]){
                s[i] = j;
                mp[j]--;
                break;
            }
        }
    }

 

    ll x = t[m-1], f = 0;
    ll v = 0;
    for(ll i=0; i<n; i++){
        if(s[i]==x)v++;
    }
    
    if(mp[x]>0 && v==0){
        for(ll i=0; i<n; i++){
            if(s[i]<x){
                f++;
                s[i] = x;
                break;
            }
        }
        
        if(f==0)s[n-1] = x;
    }
    for(ll i=0; i<n; i++)cout << s[i];
    cout << endl;
}