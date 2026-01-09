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
    ll x,y, k;
    cin>>x>>y>>k;
    ll a[k], b[k], sumx=0, l=1000;
    for(ll i=1; i<k; i++){
        a[i-1]=i*l;
        b[i-1] =  i*l;
        sumx +=i*l;
        l++;
    }
    a[k-1]=x*k-sumx;
    b[k-1]=y*k-sumx;
    for(ll i=0; i<k; i++){
        cout << a[i] << " " << b[i] << endl;
    }
    cout << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}


